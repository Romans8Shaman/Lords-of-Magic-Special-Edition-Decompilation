/* Rebuilt from lomse.exe FUN_0052c990 @ 0x0052c990 (95 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a9ddc (*(undefined4 *)0x005a9ddc)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_0041fda0 ((undefined4 (__fastcall *)(int))0x0041fda0)
#define FUN_0041ffb0 ((int (__thiscall *)(void *, int, int))0x0041ffb0)
#define FUN_0047af50 ((undefined4 (__fastcall *)(void *))0x0047af50)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004ba870 ((undefined4 (__fastcall *)(void *))0x004ba870)
#define FUN_0052b6f0 ((undefined4 (__thiscall *)(void *, int, uint))0x0052b6f0)
#define FUN_0052d140 ((undefined4 (__fastcall *)(int))0x0052d140)

#define LOM_SELF_0052c990 1
void __fastcall rb_0052c990(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0052d140((int)param_1);
  iVar1 = FUN_0041ffb0(&DAT_005ae974,*param_1,iVar1);
  puVar2 = FUN_00485080(&DAT_005aa12c,iVar1,0x3f);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0052b6f0(param_1,iVar1,0);
    if (param_1[0xba] != 6) {
      FUN_0041fda0((int)puVar2);
    }
    FUN_004ba870(&DAT_005a9ddc);
  }
  FUN_0047af50(&DAT_005ae958);
  return;
}
