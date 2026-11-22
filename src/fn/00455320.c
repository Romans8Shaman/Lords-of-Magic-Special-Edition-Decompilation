/* Rebuilt from lomse.exe FUN_00455320 @ 0x00455320 (176 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd304 (*(undefined *)0x005cd304)
#define FUN_004b0ee0 ((int (__thiscall *)(void *, int))0x004b0ee0)
#define FUN_0050cf40 ((int (__fastcall *)(void *))0x0050cf40)
#define FUN_0050cff0 ((undefined4 (__fastcall *)(int))0x0050cff0)

#define LOM_SELF_00455320 1
void __fastcall rb_00455320(int *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_004b0ee0(&DAT_005cd304,*param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_0050cff0((int)pvVar1);
    FUN_0050cf40(pvVar1);
  }
  pvVar1 = (void *)FUN_004b0ee0(&DAT_005cd304,param_1[1]);
  if (pvVar1 != (void *)0x0) {
    FUN_0050cff0((int)pvVar1);
    FUN_0050cf40(pvVar1);
  }
  pvVar1 = (void *)FUN_004b0ee0(&DAT_005cd304,param_1[2]);
  if (pvVar1 != (void *)0x0) {
    FUN_0050cff0((int)pvVar1);
    FUN_0050cf40(pvVar1);
  }
  pvVar1 = (void *)FUN_004b0ee0(&DAT_005cd304,param_1[3]);
  if (pvVar1 != (void *)0x0) {
    FUN_0050cff0((int)pvVar1);
    FUN_0050cf40(pvVar1);
  }
  pvVar1 = (void *)FUN_004b0ee0(&DAT_005cd304,param_1[4]);
  if (pvVar1 != (void *)0x0) {
    FUN_0050cff0((int)pvVar1);
    FUN_0050cf40(pvVar1);
  }
  return;
}
