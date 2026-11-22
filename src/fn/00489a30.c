/* Rebuilt from lomse.exe FUN_00489a30 @ 0x00489a30 (225 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b57c (*(undefined *)0x0055b57c)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_0048c2b0 ((int (__fastcall *)(int))0x0048c2b0)
#define FUN_004b7890 ((int (__thiscall *)(void *, int))0x004b7890)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004b8020 ((undefined4 (__thiscall *)(void *, undefined4, int))0x004b8020)
#define FUN_004c4c10 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004c4c10)

#define LOM_SELF_00489a30 1
undefined4 __thiscall rb_00489a30(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(int *)((int)this + 0x4d39c) == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_004b7dd0(*(int *)((int)this + 0x4d39c));
  }
  if (param_2 == iVar1) {
    cVar3 = (char)DAT_0055b57c + '\x01';
    DAT_0055b57c = CONCAT31(((uint)((uchar *)&DAT_0055b57c + 1)[0] | (uint)((uchar *)&DAT_0055b57c + 1)[1] << 8 | (uint)((uchar *)&DAT_0055b57c + 1)[2] << 16),cVar3);
    *(char *)((int)param_1 + 5) = cVar3;
    *(char *)((int)this + 0x4d438) = (char)DAT_0055b57c;
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
    uVar2 = FUN_004c4c10((void *)((int)this + 0x487dc),param_1);
    return uVar2;
  }
  if (DAT_005d1e84 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004b7890(DAT_005d1e84,param_2);
  }
  if (((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) || (*(int *)(iVar1 + 0x21) != 0)) {
    return 0;
  }
  iVar1 = FUN_0048c2b0((int)param_1);
  if (iVar1 != 0) {
    switch(*(undefined1 *)(param_1 + 1)) {
    case 0x1f:
    case 0x32:
    case 0x3d:
    case 0x41:
      break;
    default:
      if ((*(uint *)(iVar1 + 4) & 1 << ((byte)param_2 & 0x1f)) == 0) {
        return 0;
      }
    }
  }
  uVar2 = FUN_004b8020((void *)((int)this + 0x48870),param_1,param_2);
  return uVar2;
}
