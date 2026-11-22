/* Rebuilt from lomse.exe FUN_00438230 @ 0x00438230 (284 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004381f0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004381f0)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_00522080 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4))0x00522080)
#define FUN_00529140 ((uint (__fastcall *)(int *))0x00529140)

#define LOM_SELF_00438230 1
undefined4 __thiscall
rb_00438230(void *this,int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_10;
  typedef int _t_local_c;
  typedef undefined4 _t_local_8;
  typedef undefined4 _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x4c) < 1) {
    return 1;
  }
  puVar5 = (undefined4 *)(param_1 + 0xcc);
  do {
    if ((param_4 & 1 << ((byte)iVar4 & 0x1f)) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      local_10 = uVar1;
      local_c = iVar4;
      if ((puVar5[7] & 8) == 0) {
        local_8 = *puVar5;
      }
      else {
        puVar5[7] = puVar5[7] & 0xfffffff7;
        iVar2 = FUN_00521e00(puVar5 + -2);
        if (iVar2 == 0) {
          *puVar5 = 1;
          local_8 = 1;
        }
        else if (((char)*(uint *)(iVar2 + 0x104) == '\x06') &&
                ((*(uint *)(iVar2 + 0x104) & 0x100) == 0)) {
          local_8 = FUN_00522080(puVar5 + -2,iVar2,uVar1,iVar4);
        }
        else {
          *puVar5 = 1;
          local_8 = 1;
        }
      }
      local_4 = param_2;
      uVar3 = FUN_00529140(puVar5 + -2);
      if (uVar3 == 0) {
        iVar2 = FUN_004381f0((void *)((int)this + 0x50),&local_10);
      }
      else {
        iVar2 = FUN_004381f0(this,&local_10);
      }
      if (iVar2 == 0) {
        return 0;
      }
    }
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 0x13;
    if (*(int *)(param_1 + 0x4c) <= iVar4) {
      return 1;
    }
  } while( true );
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
