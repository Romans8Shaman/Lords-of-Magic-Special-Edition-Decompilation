/* Rebuilt from lomse.exe FUN_00542050 @ 0x00542050 (641 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00575094 (*(int *)0x00575094)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FUN_00541d40 ((uint (__cdecl *)(int, uint))0x00541d40)
#define FUN_00546eb0 ((uint (__cdecl *)(uint))0x00546eb0)
#define PTR_DAT_00574e88 (*(undefined * *)0x00574e88)

#define LOM_SELF_00542050 1
uint __cdecl rb_00542050(byte *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  DWORD *pDVar4;
  byte bVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_c;
  typedef byte * _t_local_8;
  typedef uint _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  local_4 = 0;
  bVar5 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_c = (uint)bVar5;
    local_8 = pbVar1 + 1;
    if (DAT_00575094 < 2) {
      uVar2 = (byte)PTR_DAT_00574e88[local_c * 2] & 8;
    }
    else {
      uVar2 = FUN_00541d40(local_c,8);
    }
    if (uVar2 == 0) break;
    bVar5 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar5 == 0x2d) {
    param_4 = param_4 | 2;
  }
  else if (bVar5 != 0x2b) goto LAB_005420db;
  bVar5 = *local_8;
  local_8 = pbVar1 + 2;
  local_c = (uint)bVar5;
LAB_005420db:
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar5 == 0x30) {
      if ((*local_8 == 0x78) || (param_3 = 8, *local_8 == 0x58)) {
        param_3 = 0x10;
      }
    }
    else {
      param_3 = 10;
    }
  }
  if (((param_3 == 0x10) && (bVar5 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58)))) {
    bVar5 = local_8[1];
    local_c = (uint)bVar5;
    local_8 = local_8 + 2;
  }
  uVar2 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    if (DAT_00575094 < 2) {
      uVar3 = (byte)PTR_DAT_00574e88[local_c * 2] & 4;
    }
    else {
      uVar3 = FUN_00541d40(local_c,4);
    }
    if (uVar3 == 0) {
      if (DAT_00575094 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_00574e88 + local_c * 2) & 0x103;
      }
      else {
        uVar3 = FUN_00541d40(local_c,0x103);
      }
      if (uVar3 == 0) {
LAB_00542214:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            local_8 = param_1;
          }
          local_4 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_4)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_4)))))))) {
          pDVar4 = FUN_0053b4c0();
          *pDVar4 = 0x22;
          if ((param_4 & 1) == 0) {
            local_4 = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_4 = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = local_8;
        }
        if ((param_4 & 2) != 0) {
          local_4 = -local_4;
        }
        return local_4;
      }
      uVar3 = FUN_00546eb0((int)(char)bVar5);
      uVar3 = uVar3 - 0x37;
    }
    else {
      uVar3 = (int)(char)bVar5 - 0x30;
    }
    if (param_3 <= uVar3) goto LAB_00542214;
    if ((local_4 < uVar2) ||
       ((local_4 == uVar2 && (uVar3 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_4 = local_4 * param_3 + uVar3;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar5 = *local_8;
    local_8 = local_8 + 1;
    local_c = (uint)bVar5;
  } while( true );
#undef local_c
#undef local_8
#undef local_4
}
