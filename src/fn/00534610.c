/* Rebuilt from lomse.exe FUN_00534610 @ 0x00534610 (369 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00534610 1
char * __cdecl rb_00534610(int param_1,uint param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_11;
  typedef uint _t_local_10;
  typedef char * _t_local_c;
  typedef uint _t_local_8;
#define local_11 (*(_t_local_11 *)(_fr + 0x7))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
  
  iVar5 = param_1;
  local_10 = *(uint *)(param_1 + 0x74);
  uVar4 = *(uint *)(param_1 + 100);
  pcVar10 = *(char **)(param_1 + 0x70);
  pcVar3 = (char *)(uVar4 + *(int *)(param_1 + 0x30));
  puVar1 = (undefined4 *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x24) - 0x106U < uVar4) {
    local_8 = (uVar4 - *(int *)(param_1 + 0x24)) + 0x106;
  }
  else {
    local_8 = 0;
  }
  pcVar2 = pcVar3 + 0x102;
  param_1 = (int)(byte)(pcVar10 + -1)[(int)pcVar3];
  local_11 = pcVar10[(int)pcVar3];
  if (*(char **)(iVar5 + 0x84) <= pcVar10) {
    local_10 = local_10 >> 2;
  }
  pcVar6 = *(char **)(iVar5 + 0x6c);
  local_c = (char *)*puVar1;
  if (pcVar6 < (char *)*puVar1) {
    local_c = pcVar6;
  }
  do {
    pcVar9 = (char *)(param_2 + *(int *)(iVar5 + 0x30));
    if ((((pcVar10[(int)pcVar9] == local_11) && ((pcVar10 + -1)[(int)pcVar9] == (char)param_1)) &&
        (*pcVar9 == *pcVar3)) && (pcVar9[1] == pcVar3[1])) {
      pcVar9 = pcVar9 + 2;
      pcVar7 = pcVar3 + 2;
      while (((((pcVar8 = pcVar7 + 1, pcVar7[1] == pcVar9[1] &&
                (pcVar8 = pcVar7 + 2, pcVar7[2] == pcVar9[2])) &&
               ((pcVar8 = pcVar7 + 3, pcVar7[3] == pcVar9[3] &&
                ((pcVar8 = pcVar7 + 4, pcVar7[4] == pcVar9[4] &&
                 (pcVar8 = pcVar7 + 5, pcVar7[5] == pcVar9[5])))))) &&
              (pcVar8 = pcVar7 + 6, pcVar7[6] == pcVar9[6])) &&
             (pcVar8 = pcVar7 + 7, pcVar7[7] == pcVar9[7]))) {
        pcVar8 = pcVar7 + 8;
        pcVar9 = pcVar9 + 8;
        if ((pcVar7[8] != *pcVar9) || (pcVar7 = pcVar8, pcVar2 <= pcVar8)) break;
      }
      pcVar9 = pcVar8 + (0x102 - (int)pcVar2);
      if ((int)pcVar10 < (int)pcVar9) {
        *(uint *)(iVar5 + 0x68) = param_2;
        if ((int)local_c <= (int)pcVar9) {
LAB_0053476f:
          if (pcVar9 <= pcVar6) {
            pcVar6 = pcVar9;
          }
          return pcVar6;
        }
        local_11 = pcVar9[(int)pcVar3];
        param_1 = (int)(byte)pcVar3[(int)(pcVar8 + (0x101 - (int)pcVar2))];
        pcVar10 = pcVar9;
      }
    }
    pcVar9 = pcVar10;
    param_2 = (uint)*(ushort *)(*(int *)(iVar5 + 0x38) + (*(uint *)(iVar5 + 0x2c) & param_2) * 2);
    if ((param_2 <= local_8) || (local_10 = local_10 - 1, pcVar10 = pcVar9, local_10 == 0))
    goto LAB_0053476f;
  } while( true );
#undef local_11
#undef local_10
#undef local_c
#undef local_8
}
