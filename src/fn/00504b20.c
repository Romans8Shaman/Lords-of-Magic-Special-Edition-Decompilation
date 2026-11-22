/* Rebuilt from lomse.exe FUN_00504b20 @ 0x00504b20 (88 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00504b20 1
undefined4 __fastcall rb_00504b20(int param_1)

{
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  local_10 = *(int *)(param_1 + 0x25c6c);
  local_c = *(int *)(param_1 + 0x25c70);
  local_8 = *(int *)(param_1 + 0x25c50) + local_10;
  local_4 = *(int *)(param_1 + 0x25c54) + local_c;
  ((undefined4 (__stdcall *)(__typeof__(*(int **)(param_1 + 0x688)), __typeof__(0), __typeof__(0), __typeof__(*(undefined4 *)(param_1 + 0x68c)), __typeof__(&local_10), __typeof__(0)))(**(code **)(**(int **)(param_1 + 0x688) + 0x1c)))
            (*(int **)(param_1 + 0x688),0,0,*(undefined4 *)(param_1 + 0x68c),&local_10,0);
  return 1;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
