/* Rebuilt from lomse.exe FUN_005070d0 @ 0x005070d0 (117 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_004c2330 ((int (__fastcall *)(int))0x004c2330)
#define FUN_00506100 ((uint (__fastcall *)(int))0x00506100)
#define FUN_00506ec0 ((undefined4 (__fastcall *)(void *))0x00506ec0)
#define FUN_00506fb0 ((undefined4 (__thiscall *)(void *, int))0x00506fb0)

#define LOM_SELF_005070d0 1
void __fastcall rb_005070d0(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_00506ec0(param_1);
  iVar1 = FUN_004c2330((int)param_1);
  if (0 < iVar1) {
    uVar2 = FUN_00506100((int)param_1);
    if (uVar2 != 0) {
      iVar1 = FUN_00420580((int)param_1);
      if (iVar1 == 0) {
        FUN_00506fb0(param_1,0);
        return;
      }
      iVar1 = DAT_005aa7d4;
      if (*(int *)((int)param_1 + 0x48) == DAT_005aa7d4) {
        iVar1 = DAT_005aadb0;
      }
      uVar2 = 1 << ((byte)iVar1 & 0x1f);
      if ((uVar2 & *(uint *)((int)param_1 + 0x5cc)) != 0) {
        FUN_00506fb0(param_1,0);
        return;
      }
      *(uint *)((int)param_1 + 0x5cc) = *(uint *)((int)param_1 + 0x5cc) | uVar2;
      FUN_00506fb0(param_1,1);
    }
  }
  return;
}
