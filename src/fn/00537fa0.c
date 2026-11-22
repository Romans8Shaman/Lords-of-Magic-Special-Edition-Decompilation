/* Rebuilt from lomse.exe FUN_00537fa0 @ 0x00537fa0 (93 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00538000 ((undefined4 (__cdecl *)(int *, uint, uint, int, int, uint *, uint *, int))0x00538000)
#define FUN_00538770 ((undefined4 (__cdecl *)(int, int))0x00538770)
#define s_incomplete_dynamic_bit_lengths_t_00574648 (*(char (*)[])0x00574648)
#define s_oversubscribed_dynamic_bit_lengt_0057466c (*(char (*)[])0x0057466c)

#define LOM_SELF_00537fa0 1
int __cdecl rb_00537fa0(int *param_1,uint *param_2,uint *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00538000(param_1,0x13,0x13,0,0,param_3,param_2,param_4);
  if (iVar1 == -3) {
    *(char **)(param_4 + 0x18) = s_oversubscribed_dynamic_bit_lengt_0057466c;
    return -3;
  }
  if ((iVar1 == -5) || (*param_2 == 0)) {
    FUN_00538770(*param_3,param_4);
    *(char **)(param_4 + 0x18) = s_incomplete_dynamic_bit_lengths_t_00574648;
    iVar1 = -3;
  }
  return iVar1;
}
