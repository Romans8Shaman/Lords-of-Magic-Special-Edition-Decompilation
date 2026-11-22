/* Rebuilt from lomse.exe FUN_004d5fa0 @ 0x004d5fa0 (453 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004d5fa0 1
undefined4 __thiscall rb_004d5fa0(void *this,undefined4 *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *arg1;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte *pbVar8;
  bool bVar9;
  uchar _fr[0xd8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_d0;
  typedef void * _t_local_cc;
  typedef byte _t_local_c8[200];
#define local_d0 (*(_t_local_d0 *)(_fr + 0x0))
#define local_cc (*(_t_local_cc *)(_fr + 0x4))
#define local_c8 (*(_t_local_c8 *)(_fr + 0x8))
  
  local_cc = this;
  uVar2 = FUN_005397f0((char *)&local_d0,4,1,param_2);
  if (uVar2 != 1) {
    return 0;
  }
  if (199 < local_d0) {
    return 0;
  }
  uVar2 = FUN_005397f0((char *)local_c8,local_d0,1,param_2);
  if (uVar2 != 1) {
    return 0;
  }
  puVar6 = (undefined4 *)((int)this + 0x74);
  *param_1 = 5;
  local_c8[local_d0] = 0;
  arg1 = (undefined4 *)*puVar6;
  while (arg1 != (undefined4 *)0x0) {
    pbVar8 = (byte *)arg1[1];
    pbVar3 = local_c8;
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_004d606a:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_004d606f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_004d606a;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_004d606f:
    if (iVar4 == 0) goto LAB_004d6146;
    puVar6 = arg1 + 2;
    if (-1 < iVar4) {
      puVar6 = arg1 + 3;
    }
    arg1 = (undefined4 *)*puVar6;
  }
  arg1 = (undefined4 *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (arg1 == (undefined4 *)0x0) {
    uVar7 = *(undefined4 *)((int)this + 0x7c);
  }
  else {
    uVar2 = 0xffffffff;
    pbVar3 = local_c8;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    iVar4 = Ordinal_401(~uVar2,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    arg1[1] = iVar4;
    if (iVar4 == 0) {
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      uVar7 = 0;
    }
    else {
      *(uint *)((int)local_cc + 0xa90) = *(int *)((int)local_cc + 0xa90) + ~uVar2 + 0x18;
      *(undefined4 **)(*(int *)((int)local_cc + 0x80) + *(int *)((int)local_cc + 0x78) * 4) = arg1;
      arg1[2] = 0;
      arg1[3] = 0;
      *arg1 = *(undefined4 *)((int)local_cc + 0x78);
      *(int *)((int)local_cc + 0x78) = *(int *)((int)local_cc + 0x78) + 1;
      arg1[4] = 0;
      arg1[5] = 0;
      uVar2 = 0xffffffff;
      pbVar3 = local_c8;
      do {
        pbVar8 = pbVar3;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pbVar8 = pbVar3 + 1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar8;
      } while (bVar1 != 0);
      uVar2 = ~uVar2;
      pbVar3 = pbVar8 + -uVar2;
      pbVar8 = (byte *)arg1[1];
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar3;
        pbVar3 = pbVar3 + 4;
        pbVar8 = pbVar8 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pbVar8 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        pbVar8 = pbVar8 + 1;
      }
      *puVar6 = arg1;
LAB_004d6146:
      uVar7 = *arg1;
    }
  }
  param_1[1] = uVar7;
  return 1;
#undef local_d0
#undef local_cc
#undef local_c8
}
