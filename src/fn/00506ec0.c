/* Rebuilt from lomse.exe FUN_00506ec0 @ 0x00506ec0 (228 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_004c2330 ((int (__fastcall *)(int))0x004c2330)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00506460 ((undefined4 (__thiscall *)(void *, void *, int))0x00506460)

#define LOM_SELF_00506ec0 1
void __fastcall rb_00506ec0(void *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = DAT_005ae98c;
  for (iVar5 = DAT_005ae998; iVar5 <= iVar1; iVar5 = iVar5 + 1) {
    pvVar2 = (void *)FUN_004f6000(&DAT_005ae974,iVar5);
    if (((((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 4) == 0)) &&
         (*(int *)((int)pvVar2 + 0x48) != *(int *)((int)param_1 + 0x48))) &&
        ((iVar3 = FUN_004c2330((int)pvVar2), 0 < iVar3 &&
         ((*(uint *)((int)pvVar2 + 0x5cc) & 1 << ((byte)*(undefined4 *)((int)param_1 + 0x48) & 0x1f)
          ) != 0)))) && (iVar3 = FUN_00506460(param_1,pvVar2,0), iVar3 != 0)) {
      *(uint *)((int)pvVar2 + 0x5cc) =
           *(uint *)((int)pvVar2 + 0x5cc) &
           ~(1 << ((byte)*(undefined4 *)((int)param_1 + 0x48) & 0x1f));
      iVar3 = FUN_00420580((int)param_1);
      if (iVar3 != 0) {
        *(undefined1 *)((int)pvVar2 + 0x5d0) = 1;
      }
      iVar3 = FUN_004c1c50((int)pvVar2);
      if ((iVar3 != 0) &&
         (uVar4 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)pvVar2 + 0x5b4),0), uVar4 != 0)) {
        *(undefined4 *)(uVar4 + 0x5cc) = *(undefined4 *)((int)pvVar2 + 0x5cc);
      }
    }
  }
  return;
}
