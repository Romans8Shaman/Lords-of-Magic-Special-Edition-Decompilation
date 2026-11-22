/* Rebuilt from lomse.exe FUN_00409f70 @ 0x00409f70 (362 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555248 (*(undefined *)0x00555248)
#define DAT_005552b0 (*(undefined *)0x005552b0)
#define DAT_00555318 (*(undefined *)0x00555318)
#define DAT_00555380 (*(undefined *)0x00555380)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_0045a360 ((undefined4 (__cdecl *)(int *, int *, char))0x0045a360)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)

#define LOM_SELF_00409f70 1
int __thiscall
rb_00409f70(void *this, int param_1, int param_2, int param_3, int *volatile param_4, int *volatile param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_5;
  piVar2 = param_4;
  *param_4 = -1;
  *param_5 = -1;
  if (param_3 < 0) {
    return -1;
  }
  if (0x18 < param_3) {
    return -1;
  }
  if ((((param_2 == 0) || (param_2 == 2)) || (param_2 == 4)) || (param_2 == 6)) {
    param_4 = *(int **)(&DAT_00555248 + param_3 * 4);
    param_5 = *(int **)(&DAT_005552b0 + param_3 * 4);
    FUN_0045a360((int *)&param_4,(int *)&param_5,(char)param_2);
    *piVar2 = param_1 % *(int *)((int)this + 0x6c);
    *piVar3 = param_1 / *(int *)((int)this + 0x6c);
    *piVar2 = *piVar2 - (int)param_4;
    iVar4 = *piVar3 + (int)param_5;
  }
  else {
    *param_4 = param_1 % *(int *)((int)this + 0x6c);
    *param_5 = param_1 / *(int *)((int)this + 0x6c);
    if (param_2 != 1) {
      if (param_2 == 3) {
        *param_4 = *param_4 + *(int *)(&DAT_00555318 + param_3 * 4);
        *param_5 = *param_5 + *(int *)(&DAT_00555380 + param_3 * 4);
      }
      else if (param_2 == 5) {
        *param_4 = *param_4 - *(int *)(&DAT_00555318 + param_3 * 4);
        *param_5 = *param_5 + *(int *)(&DAT_00555380 + param_3 * 4);
      }
      else if (param_2 == 7) {
        *param_4 = *param_4 - *(int *)(&DAT_00555318 + param_3 * 4);
        *param_5 = *param_5 - *(int *)(&DAT_00555380 + param_3 * 4);
      }
      goto LAB_0040a0a7;
    }
    *param_4 = *param_4 + *(int *)(&DAT_00555318 + param_3 * 4);
    iVar4 = *param_5 - *(int *)(&DAT_00555380 + param_3 * 4);
  }
  *piVar3 = iVar4;
LAB_0040a0a7:
  iVar4 = *piVar2;
  if (((iVar4 < 0) || (*(int *)((int)this + 0x6c) <= iVar4)) ||
     ((iVar1 = *piVar3, iVar1 < 0 || (*(int *)((int)this + 0x70) <= iVar1)))) {
    return -1;
  }
  iVar4 = FUN_004a51c0(&DAT_005ae958,iVar4,iVar1);
  return iVar4;
}
