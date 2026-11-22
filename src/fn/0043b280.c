/* Rebuilt from lomse.exe op_testalpha @ 0x0043b280 (637 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_0058516c (*(int * *)0x0058516c)
#define DAT_00585170 (*(undefined4 *)0x00585170)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_0043abd0 ((undefined4 (__thiscall *)(void *, int *, int *, int, int, uint, int))0x0043abd0)
#define FUN_004754c0 ((undefined * (__fastcall *)(int))0x004754c0)
#define FUN_004755a0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004755a0)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define s_No_alpha_00556150 (*(char (*)[])0x00556150)
#define s_No_doodad_0055615c (*(char (*)[])0x0055615c)

#define LOM_SELF_0043b280 1

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

void __cdecl rb_0043b280(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  undefined4 *this_00;
  DWORD DVar3;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_24;
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef int * _t_piStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_auStack_8[2];
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x4))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x8))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0xc))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x10))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x14))
#define piStack_10 (*(_t_piStack_10 *)(_fr + 0x18))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x1c))
#define auStack_8 (*(_t_auStack_8 *)(_fr + 0x20))
  
  this = vm;
  FUN_0040adb0(vm,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,(uint *)&vm,(uint *)&piStack_10,&fStack_c);
  if (iVar1 != 0) {
    FUN_0040adb0(this,auStack_8);
    iVar1 = FUN_004026a0(auStack_8,&uStack_1c,(uint *)&piStack_10,&fStack_c);
    if (iVar1 != 0) {
      FUN_0040adb0(this,auStack_8);
      iVar1 = FUN_004026a0(auStack_8,&uStack_18,(uint *)&piStack_10,&fStack_c);
      if (iVar1 != 0) {
        FUN_0040adb0(this,auStack_8);
        iVar1 = FUN_004026a0(auStack_8,&uStack_14,(uint *)&piStack_10,&fStack_c);
        if (iVar1 != 0) {
          FUN_0040adb0(this,auStack_8);
          iVar1 = FUN_004026a0(auStack_8,&uStack_20,(uint *)&piStack_10,&fStack_c);
          if (iVar1 != 0) {
            FUN_0040adb0(this,auStack_8);
            iVar1 = FUN_004026a0(auStack_8,&uStack_24,(uint *)&piStack_10,&fStack_c);
            if (iVar1 != 0) {
              piStack_10 = (int *)FUN_00492760(&DAT_005a7b50,uStack_24);
              iVar1 = 0;
              if (piStack_10 == (int *)0x0) {
                iVar1 = *(int *)((int)this + 0x90);
                *(undefined4 *)((int)this + 0x90) = 0;
                *(undefined4 *)((int)this + 0xa4) = 0;
                if (iVar1 != 0) {
                  FUN_004d41c0(this,s_No_doodad_0055615c);
                  return;
                }
              }
              else {
                piVar2 = (int *)FUN_00492760(&DAT_005a7b50,uStack_20);
                if (piVar2 == (int *)0x0) {
                  iVar1 = *(int *)((int)this + 0x90);
                  *(undefined4 *)((int)this + 0x90) = 0;
                  *(undefined4 *)((int)this + 0xa4) = 0;
                  if (iVar1 != 0) {
                    FUN_004d41c0(this,s_No_alpha_00556150);
                    return;
                  }
                }
                else {
                  this_00 = (undefined4 *)FUN_004754c0(0x584ae8);
                  if (this_00 != (undefined4 *)0x0) {
                    fStack_c = __BC(undefined4, GetTickCount());
                    if (0 < (int)vm) {
                      do {
                        FUN_0043abd0(this_00,piStack_10,piVar2,uStack_14,uStack_18,uStack_1c,0);
                        iVar1 = iVar1 + 1;
                      } while (iVar1 < (int)vm);
                    }
                    DVar3 = GetTickCount();
                    FUN_0041d1d0(this,1,DVar3 - __BC(int, fStack_c));
                    FUN_004755a0(&DAT_00584ae8,this_00);
                    ((undefined4 (__stdcall *)(__typeof__(DAT_0058516c), __typeof__(0), __typeof__(0), __typeof__(DAT_00585170), __typeof__(0), __typeof__(0)))(**(code **)(*DAT_0058516c + 0x1c)))(DAT_0058516c,0,0,DAT_00585170,0,0);
                    v15_flush_primary(0x584ae8);
                    return;
                  }
                  FUN_0041d1d0(this,1,0xffffffff);
                }
              }
              return;
            }
          }
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef piStack_10
#undef fStack_c
#undef auStack_8
}
