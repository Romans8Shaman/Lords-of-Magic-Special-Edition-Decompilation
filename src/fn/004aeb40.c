/* Rebuilt from lomse.exe FUN_004aeb40 @ 0x004aeb40 (199 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_00469ae0 ((undefined4 (__thiscall *)(void *, float *))0x00469ae0)
#define FUN_0049cb20 ((undefined4 (__thiscall *)(void *, int *, int *, int, uint))0x0049cb20)

#define LOM_SELF_004aeb40 1
void __thiscall rb_004aeb40(void *this,undefined4 *param_1,undefined4 *param_2,float *param_3)

{
  int iVar1;
  uchar _fr[0x68] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_60;
  typedef int _t_local_5c;
  typedef float _t_local_58[4];
  typedef float _t_local_48;
  typedef float _t_local_2c[4];
  typedef float _t_local_1c;
#define local_60 (*(_t_local_60 *)(_fr + 0x0))
#define local_5c (*(_t_local_5c *)(_fr + 0x4))
#define local_58 (*(_t_local_58 *)(_fr + 0x8))
#define local_48 (*(_t_local_48 *)(_fr + 0x18))
#define local_2c (*(_t_local_2c *)(_fr + 0x34))
#define local_1c (*(_t_local_1c *)(_fr + 0x44))
  
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0049cb20(*(void **)((int)this + 0x2c),&local_5c,&local_60,7,0xffffffff);
  }
  if (iVar1 == 0) {
    *param_1 = 0;
    *param_2 = 0;
    *param_3 = 1.0;
    return;
  }
  local_2c[0] = 0.0;
  local_2c[1] = 0.0;
  local_2c[2] = 0.0;
  FUN_00469ae0(&DAT_005876d0,local_2c);
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_58[2] = 1.0;
  FUN_00469ae0(&DAT_005876d0,local_58);
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = (float)local_60 / (local_48 - local_1c);
  return;
#undef local_60
#undef local_5c
#undef local_58
#undef local_48
#undef local_2c
#undef local_1c
}
