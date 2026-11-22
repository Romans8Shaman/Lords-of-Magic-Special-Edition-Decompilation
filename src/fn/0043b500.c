/* Rebuilt from lomse.exe FUN_0043b500 @ 0x0043b500 (673 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00474e70 ((undefined4 (__thiscall *)(void *, uint *, uint *, uint *, uint))0x00474e70)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0043b500 1
undefined4 __thiscall rb_0043b500(void *this,LPCSTR param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined2 *puVar9;
  uchar _fr[0x488] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined2 * _t_local_480;
  typedef char _t_local_47c[4];
  typedef char _t_local_478[4];
  typedef char _t_local_474[4];
  typedef int * _t_local_470;
  typedef uint _t_local_46c;
  typedef int _t_iStack_468;
  typedef char * _t_pcStack_464;
  typedef char _t_local_460[2];
  typedef int _t_local_45e;
  typedef undefined2 _t_local_45a;
  typedef undefined2 _t_local_458;
  typedef int _t_local_456;
  typedef int _t_local_450[3];
  typedef undefined2 _t_local_444;
  typedef ushort _t_local_442;
  typedef undefined4 _t_local_440;
  typedef undefined4 _t_local_43c;
  typedef undefined4 _t_local_438;
  typedef undefined4 _t_local_434;
  typedef int _t_local_430;
  typedef undefined4 _t_local_42c;
  typedef int _t_local_428[10];
  typedef char _t_local_400[1024];
#define local_480 (*(_t_local_480 *)(_fr + 0x0))
#define local_47c (*(_t_local_47c *)(_fr + 0x4))
#define local_478 (*(_t_local_478 *)(_fr + 0x8))
#define local_474 (*(_t_local_474 *)(_fr + 0xc))
#define local_470 (*(_t_local_470 *)(_fr + 0x10))
#define local_46c (*(_t_local_46c *)(_fr + 0x14))
#define iStack_468 (*(_t_iStack_468 *)(_fr + 0x18))
#define pcStack_464 (*(_t_pcStack_464 *)(_fr + 0x1c))
#define local_460 (*(_t_local_460 *)(_fr + 0x20))
#define local_45e (*(_t_local_45e *)(_fr + 0x22))
#define local_45a (*(_t_local_45a *)(_fr + 0x26))
#define local_458 (*(_t_local_458 *)(_fr + 0x28))
#define local_456 (*(_t_local_456 *)(_fr + 0x2a))
#define local_450 (*(_t_local_450 *)(_fr + 0x30))
#define local_444 (*(_t_local_444 *)(_fr + 0x3c))
#define local_442 (*(_t_local_442 *)(_fr + 0x3e))
#define local_440 (*(_t_local_440 *)(_fr + 0x40))
#define local_43c (*(_t_local_43c *)(_fr + 0x44))
#define local_438 (*(_t_local_438 *)(_fr + 0x48))
#define local_434 (*(_t_local_434 *)(_fr + 0x4c))
#define local_430 (*(_t_local_430 *)(_fr + 0x50))
#define local_42c (*(_t_local_42c *)(_fr + 0x54))
#define local_428 (*(_t_local_428 *)(_fr + 0x58))
#define local_400 (*(_t_local_400 *)(_fr + 0x80))
  
  local_470 = (int *)FUN_00539610(param_1,&DAT_00556168);
  if (local_470 == (int *)0x0) {
    return 0;
  }
  local_460[0] = 'B';
  local_460[1] = 'M';
  if ((*(uint *)((int)this + 0x14) & 4) == 0) {
    local_450[2] = *(int *)((int)this + 8);
    uVar5 = *(int *)((int)this + 0xc) * local_450[2];
    local_480 = (undefined2 *)0x400;
  }
  else {
    local_480 = (undefined2 *)0x0;
    iVar4 = *(int *)((int)this + 4) * 0x18 + 0x1f;
    local_450[2] = *(int *)((int)this + 8);
    local_46c = ((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
    uVar5 = local_46c * local_450[2];
  }
  uVar2 = *(uint *)((int)this + 0x14) >> 2;
  local_430 = (uVar2 & 1) << 8;
  bVar1 = *(byte *)((int)this + 0x14);
  uVar3 = 0;
  local_442 = (ushort)((uVar2 & 1) << 4) | 8;
  local_440 = 0;
  local_43c = 0;
  local_438 = 0;
  local_434 = 0;
  local_42c = 0;
  local_450[0] = 0x28;
  local_450[1] = *(undefined4 *)((int)this + 4);
  local_444 = 1;
  piVar6 = local_450;
  piVar8 = local_428;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
  }
  if ((bVar1 & 2) != 0) {
    iVar4 = 0;
    pcVar7 = local_400 + 1;
    do {
      uVar3 = FUN_00474e70(&DAT_00584ae8,(uint *)local_47c,(uint *)local_474,(uint *)local_478,
                           CONCAT22((short)((uint)uVar3 >> 0x10),
                                    *(undefined2 *)(iVar4 + *(int *)((int)this + 0x10))));
      uVar3 = CONCAT31((uint)((uint)uVar3 >> 8),local_478[0]);
      pcVar7[1] = local_47c[0];
      *pcVar7 = local_474[0];
      pcVar7[-1] = local_478[0];
      iVar4 = iVar4 + 2;
      pcVar7 = pcVar7 + 4;
    } while (iVar4 < 0x200);
  }
  piVar6 = local_470;
  local_45e = (int)local_480 + 0xe + uVar5;
  local_456 = (int)local_480 + 0xe;
  local_45a = 0;
  local_458 = 0;
  FUN_00539660(local_460,0xe,1,local_470);
  FUN_00539660((char *)local_428,local_428[0] + (int)local_480,1,piVar6);
  if ((*(byte *)((int)this + 0x14) & 4) == 0) {
    FUN_00539660(*(char **)this,uVar5,1,piVar6);
  }
  else {
    local_480 = (undefined2 *)
                (*(int *)this +
                (*(int *)((int)this + 0xc) >> 1) * (*(int *)((int)this + 8) + -1) * 2);
    pcVar7 = (char *)Ordinal_401(local_46c,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    iStack_468 = 0;
    uVar3 = 0;
    pcStack_464 = pcVar7;
    if (0 < *(int *)((int)this + 8)) {
      do {
        iVar4 = 0;
        if (0 < *(int *)((int)this + 4)) {
          puVar9 = local_480;
          do {
            FUN_00474e70(&DAT_00584ae8,(uint *)local_47c,(uint *)local_474,(uint *)local_478,
                         CONCAT22((short)((uint)uVar3 >> 0x10),*puVar9));
            puVar9 = puVar9 + 1;
            *pcVar7 = local_474[0];
            pcVar7[1] = local_47c[0];
            uVar3 = CONCAT31((uint)((uint)0 >> 8),local_478[0]);
            pcVar7[2] = local_478[0];
            pcVar7 = pcVar7 + 3;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)((int)this + 4));
          pcVar7 = pcStack_464;
        }
        local_480 = local_480 + -(*(int *)((int)this + 0xc) >> 1);
        FUN_00539660(pcVar7,local_46c,1,local_470);
        iStack_468 = iStack_468 + 1;
        uVar3 = 0;
      } while (iStack_468 < *(int *)((int)this + 8));
      piVar6 = local_470;
    }
    if (pcVar7 != (char *)0x0) {
      Ordinal_403(pcVar7,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  FUN_005394d0(piVar6);
  return 1;
#undef local_480
#undef local_47c
#undef local_478
#undef local_474
#undef local_470
#undef local_46c
#undef iStack_468
#undef pcStack_464
#undef local_460
#undef local_45e
#undef local_45a
#undef local_458
#undef local_456
#undef local_450
#undef local_444
#undef local_442
#undef local_440
#undef local_43c
#undef local_438
#undef local_434
#undef local_430
#undef local_42c
#undef local_428
#undef local_400
}
