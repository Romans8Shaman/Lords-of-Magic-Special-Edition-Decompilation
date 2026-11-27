/* Rebuilt from lomse.exe FUN_00504ce0 @ 0x00504ce0 (505 bytes, __thiscall).
 * FIX v1.01b: debug grid (DAT_00586798) cell colour is 100 for the centre cell else 0xff (vanilla push 0x64/0xff); was a 0 pad.
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_00586798 (*(int *)0x00586798)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00454200 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x00454200) /* ret 12: (x, y, colour) */
#define FUN_0046a050 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x0046a050)
#define FUN_004753d0 ((undefined4 (__fastcall *)(int))0x004753d0)
#define FUN_004950c0 ((undefined4 * (__thiscall *)(void *, int *))0x004950c0)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00497270 ((undefined4 (__thiscall *)(void *, int, int, uint, int, undefined2))0x00497270)
#define FUN_004a6a10 ((undefined4 (__thiscall *)(void *, int *))0x004a6a10)
#define FUN_005007e0 ((undefined4 (__thiscall *)(void *, int))0x005007e0)
#define FUN_00504b20 ((undefined4 (__fastcall *)(int))0x00504b20)
unsigned lom_inreg_00504ce0[2] __asm__("lom_inreg_00504ce0");
undefined4 __thiscall lom_body_00504ce0(void *this,int param_1,int param_2) __asm__("lom_body_00504ce0");

#define LOM_SELF_00504ce0 1

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

__attribute__((naked)) undefined4 __thiscall rb_00504ce0(void *this,int param_1,int param_2)
{
  __asm__("movl %eax, lom_inreg_00504ce0\n\tmovl %edx, lom_inreg_00504ce0+4\n\tjmp lom_body_00504ce0");
}

undefined4 __thiscall lom_body_00504ce0(void *this,int param_1,int param_2)
{
  int iVar1;
  undefined4 in_EDX = (undefined4)*(unsigned *)((char *)lom_inreg_00504ce0 + 4);
  int unused_stack_8;
  int iVar2;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_2c[8];
#define local_2c (*(_t_local_2c *)(_fr + 0x4))

  iVar2 = 0;
  if (*(int *)((int)this + 0x22ff4) == 0) {
    return 1;
  }
  if (*(int *)((int)this + 0x680) == 0) {
    return 1;
  }
  if (*(int *)((int)this + 0x68c) == 0) {
    return 1;
  }
  switch(*(undefined4 *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this)) {
  case 0:
    FUN_004950c0(local_2c,*(int **)((int)this + 0x688));
    FUN_00497270(local_2c,0,0,0x27f,0x1df,0);
    break;
  default:
    goto switchD_00504d40_caseD_1;
  case 2:
  case 3:
  case 5:
  case 6:
    if ((*(int *)((int)this + 0x2dfc) != 0) && (param_2 == 0)) {
      FUN_0046a050((int)this,in_EDX,0);
      return 0;
    }
    if (*(int *)((int)this + 0x29edc) != 0) {
      iVar1 = FUN_0046a050((int)this,in_EDX,param_2);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_004a6a10((void *)((int)this + 0x29e70),(int *)0x1);
      goto switchD_00504d40_caseD_1;
    }
    FUN_004950c0(local_2c,*(int **)((int)this + 0x688));
    FUN_00497270(local_2c,0,0,0x27f,0x1df,0);
    break;
  case 8:
    FUN_00504b20((int)this);
    goto switchD_00504d40_caseD_1;
  }
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590(local_2c);
switchD_00504d40_caseD_1:
  FUN_005007e0(this,1);
  if (param_1 != 0) {
    FUN_004753d0((int)this);
  }
  if ((DAT_00586798 != 0) && (*(int *)((int)this + 0x2bec) == -1)) {
    iVar1 = *(int *)((int)this + 0x29ecc);
    if (0 < *(int *)((int)this + 0x29ed0)) {
      do {
        unused_stack_8 = 0;
        if (0 < iVar1) {
          do {
            FUN_00454200(&DAT_005ae958,unused_stack_8,iVar2,
                         (unused_stack_8 == (*(int *)((int)this + 0x29ecc) >> 1) && iVar2 == (*(int *)((int)this + 0x29ed0) >> 1)) ? 100 : 0xff); /* v1.01b: vanilla colour, was 0 */
            iVar1 = *(int *)((int)this + 0x29ecc);
            unused_stack_8 = unused_stack_8 + 1;
          } while (unused_stack_8 < iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this + 0x29ed0));
    }
    ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)this + 0x684)), __typeof__(0), __typeof__(0), __typeof__(*(undefined4 *)((int)this + 0x688)), __typeof__(0), __typeof__(0)))(**(code **)(**(int **)((int)this + 0x684) + 0x1c)))
              (*(int **)((int)this + 0x684),0,0,*(undefined4 *)((int)this + 0x688),0,0);
    v15_flush_primary((int)this);
  }
  return 1;
#undef local_2c
}
