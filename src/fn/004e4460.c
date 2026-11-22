/* Rebuilt from lomse.exe @ 0x004e4460 (~360 bytes, __cdecl void): fill the DAT_0058516c DirectDraw surface with 0xff
 * (Lock/memset/Unlock, checked by 004756f0), then BltFast 1-pixel columns x=0..98 step 2 (rect {x,0,x+1,99}) and rows
 * y=100..198 step 2 (rect {0,y,99,y+1}) from the DAT_00585170 surface, restoring via 00475360(0x584ae8) and retrying
 * once on DDERR_SURFACELOST. Hand-written from the disassembly. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058516c (*(void **)0x0058516c)
#define DAT_00585170 (*(void **)0x00585170)
#define FUN_004756f0 ((int (__cdecl *)(int, const char *))0x004756f0)
#define FUN_00475360 ((void (__thiscall *)(void *))0x00475360)

typedef int (__stdcall *t_lock)(void *, void *, void *, int, int);
typedef int (__stdcall *t_unlock)(void *, void *);
typedef int (__stdcall *t_bltfast)(void *, int, int, void *, int *, int);

static int blt(int x, int y, int *rect)
{
  void *s = DAT_0058516c;
  return ((t_bltfast)(*(void ***)s)[7])(s, x, y, DAT_00585170, rect, 0);
}

#define LOM_SELF_004e4460 1

/* v1.5: if a non-16-bpp real primary was stashed at object+0x900, Blt-convert
 * the 16-bit fake primary at +0x684 onto it (DirectDraw format conversion). */
static void v15_flush_primary(int obj)
{
  int *real;
  int *fake;
  int rect[4];
  int hr;
  real = *(int **)(obj + 0x900);
  fake = *(int **)(obj + 0x684);
  if ((real == (int *)0x0) || (fake == (int *)0x0)) {
    return;
  }
  rect[0] = 0;
  rect[1] = 0;
  rect[2] = 0x280;
  rect[3] = 0x1e0;
  hr = ((int (__stdcall *)(int *, int *, int *, int, unsigned int, int))(**(code **)(*real + 0x14)))
              (real,rect,fake,0,0x1000000,0);
  if (hr == -0x7789fe3e) {
    ((int (__stdcall *)(int *))(**(code **)(*real + 0x6c)))(real);
    ((int (__stdcall *)(int *))(**(code **)(*fake + 0x6c)))(fake);
    ((int (__stdcall *)(int *, int *, int *, int, unsigned int, int))(**(code **)(*real + 0x14)))
              (real,rect,fake,0,0x1000000,0);
  }
}

void __cdecl rb_004e4460(void)
{
  int rect[4];
  int desc[0x1b];
  void *surf = DAT_0058516c;
  int i, n;

  for (i = 0; i < 0x1b; i++) desc[i] = 0;
  desc[0] = 0x6c;
  if (FUN_004756f0(((t_lock)(*(void ***)surf)[25])(surf, 0, desc, 1, 0), (const char *)0x00572a4c) == 0) return;
  n = desc[3] * desc[2] * 2;
  for (i = 0; i < n; i++) ((unsigned char *)desc[9])[i] = 0xff;
  FUN_004756f0(((t_unlock)(*(void ***)surf)[32])(surf, (void *)desc[9]), (const char *)0x00572a30);
  rect[1] = 0;
  rect[3] = 0x63;
  for (i = 0; i < 100; i += 2) {
    rect[2] = i + 1;
    rect[0] = i;
    if (blt(i, 0, rect) == (int)0x887601c2) {
      FUN_00475360((void *)0x00584ae8);
      blt(i, 0, rect);
    }
  }
  rect[0] = 0;
  rect[2] = 0x63;
  for (i = 100; i < 200; i += 2) {
    rect[3] = i + 1;
    rect[1] = i;
    if (blt(0, i, rect) == (int)0x887601c2) {
      FUN_00475360((void *)0x00584ae8);
      blt(0, i, rect);
    }
  }
  v15_flush_primary(0x584ae8);
}
