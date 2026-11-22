/* Rebuilt from lomse.exe FUN_0047fd20 @ 0x0047fd20 (191 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005781d0 (*(undefined *)0x005781d0)
#define FUN_00411760 ((undefined4 (__fastcall *)(int))0x00411760)
#define FUN_004117f0 ((undefined4 (__thiscall *)(void *, uint))0x004117f0)
#define FUN_004372e0 ((undefined4 (__fastcall *)(undefined4 *))0x004372e0)
#define FUN_004718b0 ((undefined4 (__fastcall *)(int))0x004718b0)
#define FUN_0047c4b0 ((undefined4 (__fastcall *)(int *))0x0047c4b0)
#define FUN_004a4b00 ((undefined4 (__thiscall *)(void *, int))0x004a4b00)
#define FUN_004bbe50 ((undefined4 (__fastcall *)(int))0x004bbe50)

#define LOM_SELF_0047fd20 1
void __fastcall rb_0047fd20(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004372e0((undefined4 *)(param_1 + 0x22db0));
  FUN_0047c4b0((int *)(param_1 + 0x228bc));
  FUN_004a4b00((void *)(param_1 + 0x482c),1);
  FUN_004117f0((void *)(param_1 + 0x660),0);
  FUN_004117f0((void *)(param_1 + 0xc3c),0);
  FUN_004117f0((void *)(param_1 + 0x1dd0),0);
  FUN_004117f0((void *)(param_1 + 0x23ac),0);
  FUN_004117f0((void *)(param_1 + 0x2988),0);
  FUN_004117f0((void *)(param_1 + 0x2f64),0);
  FUN_00411760(param_1 + 0x1218);
  FUN_00411760(param_1 + 0x17f4);
  FUN_004117f0(&DAT_005781d0,0);
  iVar1 = param_1 + 0x5068;
  iVar2 = 0x10;
  do {
    FUN_004bbe50(iVar1);
    iVar1 = iVar1 + 0x1d84;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_004718b0(0x5a9e04);
  return;
}
