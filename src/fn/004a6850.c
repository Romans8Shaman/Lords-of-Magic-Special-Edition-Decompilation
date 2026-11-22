/* Rebuilt from lomse.exe FUN_004a6850 @ 0x004a6850 (436 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055ca60 (*(undefined *)0x0055ca60)
#define DAT_005878e8 (*(int *)0x005878e8)
#define DAT_005878fc (*(undefined *)0x005878fc)
#define DAT_00587920 (*(undefined *)0x00587920)
#define DAT_005a7a14 (*(undefined4 *)0x005a7a14)
#define DAT_005a7aa4 (*(int *)0x005a7aa4)
#define DAT_005a7ab4 (*(int *)0x005a7ab4)
#define DAT_005aec3c (*(int *)0x005aec3c)
#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_GetSpriteInZOrder__invalid_index_0055cb7c (*(char (*)[])0x0055cb7c)

#define LOM_SELF_004a6850 1
void __fastcall rb_004a6850(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_20;
  typedef int _t_local_18;
  typedef undefined4 _t_local_10;
  typedef undefined4 _t_local_c;
  typedef undefined4 _t_local_8;
  typedef undefined4 _t_local_4;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
#define local_4 (*(_t_local_4 *)(_fr + 0x1c))
  
  iVar2 = DAT_005aec3c >> 1;
  local_10 = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  local_c = 0;
  local_8 = 0x280;
  local_4 = 0x180;
  if (DAT_005878e8 == 0) {
    uVar6 = 4;
    uVar7 = 4;
  }
  else {
    uVar7 = 0;
    uVar6 = 8;
  }
  iVar8 = 0;
  if (0 < iVar1) {
    do {
      if ((iVar8 < 0) || (*(int *)(param_1 + 0x30) <= iVar8)) {
        OutputDebugStringA(s_GetSpriteInZOrder__invalid_index_0055cb7c);
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x28) + iVar8 * 4);
      }
      if (iVar3 != 0) {
        *(byte *)(iVar3 + 0x34) = *(byte *)(iVar3 + 0x34) & 0xfe;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
  if (uVar7 <= uVar6) {
    local_18 = (uVar6 - uVar7) + 1;
    local_20 = (int *)(&DAT_0055ca60 + uVar7 * 4 + iVar2 * 0x24);
    do {
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          if ((iVar2 < 0) || (*(int *)(param_1 + 0x30) <= iVar2)) {
            OutputDebugStringA(s_GetSpriteInZOrder__invalid_index_0055cb7c);
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = *(int **)(*(int *)(param_1 + 0x28) + iVar2 * 4);
          }
          if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 0xd) & 1) == 0)) {
            iVar8 = piVar5[3];
            iVar3 = piVar5[4];
            piVar5[3] = *(int *)(&DAT_005878fc + *local_20 * 4) + iVar8;
            piVar5[4] = *(int *)(&DAT_00587920 + *local_20 * 4) + iVar3;
            iVar4 = ((undefined4 (__thiscall *)(__typeof__(piVar5), __typeof__(&local_10)))(**(code **)(*piVar5 + 0xc)))(piVar5,&local_10);
            if (iVar4 != 0) {
              ((undefined4 (__thiscall *)(__typeof__(piVar5), __typeof__(&DAT_005a7a14)))(**(code **)(*piVar5 + 0x44)))(piVar5,&DAT_005a7a14);
              *(byte *)(piVar5 + 0xd) = *(byte *)(piVar5 + 0xd) | 1;
            }
            piVar5[3] = iVar8;
            piVar5[4] = iVar3;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
      local_20 = local_20 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar1 = DAT_005a7aa4;
  iVar2 = 0;
  if (0 < DAT_005a7aa4) {
    iVar8 = 0;
    do {
      if ((iVar8 < 0) || (DAT_005a7aa4 <= iVar2)) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)(DAT_005a7ab4 + iVar8);
      }
      FUN_00476010(&DAT_005a7a14,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
      iVar2 = iVar2 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar2 < iVar1);
  }
  return;
#undef local_20
#undef local_18
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
