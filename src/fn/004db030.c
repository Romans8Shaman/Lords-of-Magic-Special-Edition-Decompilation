/* Rebuilt from lomse.exe op_identifypage @ 0x004db030 (481 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00491ec0 ((int (__thiscall *)(void *, int))0x00491ec0)
#define FUN_00492de0 ((int (__thiscall *)(void *, int))0x00492de0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_identifypage___unknown_page_00572750 (*(char (*)[])0x00572750)
#define s_out_of_memory_00572728 (*(char (*)[])0x00572728)
#define s_page_already_identified_00572738 (*(char (*)[])0x00572738)

#define LOM_SELF_004db030 1
void __cdecl rb_004db030(void *vm)

{
  void *this;
  int iVar1;
  void *pvVar2;
  int *piVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  longlong lVar9;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_4;
#define pvStack_4 (*(_t_pvStack_4 *)(_fr + 0x4))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    cVar5 = (char)*(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    pvVar2 = *(void **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    cVar5 = '\0';
    *(undefined4 *)((int)vm + 0xa4) = 0;
    pvVar2 = pvStack_4;
  }
  iVar1 = *(int *)((int)vm + 0x90);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  if (iVar1 == 0) {
    if (cVar5 == '\b') {
      vm = pvVar2;
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 0xe;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      vm = (void *)0x0;
    }
  }
  else {
    vm = (void *)0x0;
  }
  if (vm != (void *)0x0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uVar6 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      pvStack_4 = *(void **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uVar6 = 0;
    }
    uVar6 = uVar6 & 0xff;
    if (uVar6 != 1) {
      if (uVar6 == 2) {
        pvStack_4 = (void *)((int)pvStack_4 >> 8);
      }
      else {
        if (uVar6 != 4) {
          FUN_00404ab0(this,0xe);
          return;
        }
        lVar9 = __ftol((float10)__BC(float, pvStack_4));
        pvStack_4 = (void *)lVar9;
      }
    }
    iVar1 = FUN_00491ec0(&DAT_005a7b50,(int)pvStack_4);
    if (iVar1 == 0) {
      piVar3 = (int *)FUN_00492de0(&DAT_005a7b50,(int)pvStack_4);
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
      }
      if (iVar1 == 0) {
        FUN_004d41c0(this,s_identifypage___unknown_page_00572750);
        return;
      }
    }
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_004d41c0(this,s_page_already_identified_00572738);
      return;
    }
    uVar6 = 0xffffffff;
    pcVar4 = vm;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar5 != '\0');
    pcVar4 = (char *)Ordinal_401(~uVar6,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(char **)(iVar1 + 0x1c) = pcVar4;
    if (pcVar4 == (char *)0x0) {
      FUN_004d41c0(this,s_out_of_memory_00572728);
      return;
    }
    uVar6 = 0xffffffff;
    do {
      pcVar8 = vm;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = (char *)((int)vm + 1);
      cVar5 = *(char *)vm;
      vm = pcVar8;
    } while (cVar5 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar8 + -uVar6;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar4 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  return;
#undef pvStack_4
}
