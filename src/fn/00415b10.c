/* Rebuilt from lomse.exe FUN_00415b10 @ 0x00415b10 (262 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_004288e0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004288e0)
#define FUN_004291a0 ((undefined4 (__stdcall *)(int, int, int, int, int))0x004291a0)
#define FUN_00429560 ((int (__thiscall *)(void *, int, int *))0x00429560)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_00415b10 1
void __thiscall rb_00415b10(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  this_00 = param_1;
  iVar4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    local_8 = 0;
    if (0 < (int)param_1[0x13]) {
      piVar3 = param_1 + 0x31;
      do {
        iVar1 = FUN_00525fc0(piVar3);
        if (-1 < iVar1) {
          local_8 = iVar4;
          break;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 0x13;
      } while (iVar4 < (int)param_1[0x13]);
    }
    local_c = 0;
    if (0 < *(int *)((int)this + 0x4c)) {
      param_1 = (undefined4 *)((int)this + 0xe0);
      do {
        piVar3 = (int *)*param_1;
        while (piVar3 != (int *)0x0) {
          iVar4 = FUN_00427b80(*piVar3);
          if ((*(byte *)(iVar4 + 0x18) & 0x10) == 0) {
            iVar4 = piVar3[3];
            if (*(int *)((int)this + 0x28) < 0) {
              piVar3[4] = piVar3[4] & 0xffffffe0;
            }
            FUN_004291a0((int)this,local_c,(int)this_00,local_8,piVar3[3]);
            if ((param_2 != 0) &&
               (puVar2 = (undefined4 *)FUN_00429560(this_00,iVar4,&local_4),
               puVar2 != (undefined4 *)0x0)) {
              FUN_004288e0(&DAT_005aa12c,puVar2);
            }
            piVar3 = (int *)*param_1;
          }
          else {
            piVar3 = (int *)piVar3[5];
          }
        }
        local_c = local_c + 1;
        param_1 = param_1 + 0x13;
      } while (local_c < *(int *)((int)this + 0x4c));
    }
  }
  return;
#undef local_c
#undef local_8
#undef local_4
}
