/* Rebuilt from lomse.exe FUN_004cd7f0 @ 0x004cd7f0 (453 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

/* register-held (not in _fr, see gen.py regvar_locals): local_4 */
#define FUN_004cee20 ((int (__stdcall *)(char *))0x004cee20)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0053ae60 ((uint * (__cdecl *)(uint *, char))0x0053ae60)
#define FUN_0053b350 ((char * (__cdecl *)(char *, int, int *))0x0053b350)

#define LOM_SELF_004cd7f0 1
void __fastcall rb_004cd7f0(void *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  undefined4 uVar6;
  uint *puVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  uint *local_4;

  /* else path of a VM pop leaves this register-held local uninitialized
   * (vanilla leftover). clang -O2 can substitute a callee return or drop
   * later uses. Zero it so the leftover path is defined. */
  local_4 = (uint *)0;
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_8 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    puVar7 = *(uint **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_8 = 0;
    puVar7 = local_4;
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    cVar5 = (char)*(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(uint **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    cVar5 = '\0';
  }
  if (cVar5 == '\x03') {
    if ((char)local_8 == '\b') {
      iVar1 = *(int *)((int)param_1 + (int)local_4 * 8);
      if (iVar1 == 0) {
        *(undefined4 *)((int)param_1 + 0x90) = 0x14;
      }
      else {
        if ((*(byte *)(iVar1 + 0xc) & 0x10) == 0) {
          iVar1 = FUN_004cee20((char *)puVar7);
          pcVar3 = FUN_0053b350((char *)puVar7,iVar1,*(int **)((int)param_1 + (int)local_4 * 8));
          if (pcVar3 == (char *)0x0) {
            iVar1 = *(int *)((int)param_1 + 0x54);
            uVar6 = 0;
          }
          else {
            puVar4 = FUN_0053ae60(puVar7,'\r');
            if (puVar4 != (uint *)0x0) {
              *(undefined1 *)puVar4 = 0;
            }
            puVar4 = FUN_0053ae60(puVar7,'\n');
            if (puVar4 != (uint *)0x0) {
              *(undefined1 *)puVar4 = 0;
            }
            if (*(int *)((int)param_1 + 0x54) == 0) {
              *(undefined4 *)((int)param_1 + 0x90) = 3;
              FUN_004d4550(param_1);
              *(undefined4 *)((int)param_1 + 0x90) = 0;
              *(undefined4 *)((int)param_1 + 0xa4) = 0;
            }
            else {
              iVar1 = *(int *)((int)param_1 + 0x50);
              iVar2 = *(int *)((int)param_1 + 0x54) + -1;
              *(int *)((int)param_1 + 0x54) = iVar2;
              *(undefined4 *)(iVar1 + iVar2 * 8) = local_8;
              *(uint **)(iVar1 + 4 + iVar2 * 8) = puVar7;
            }
            iVar1 = *(int *)((int)param_1 + 0x54);
            uVar6 = 0xffffffff;
          }
          if (iVar1 != 0) {
            iVar1 = iVar1 + -1;
            *(int *)((int)param_1 + 0x54) = iVar1;
            iVar2 = *(int *)((int)param_1 + 0x50);
            *(undefined4 *)(iVar2 + iVar1 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = uVar6;
            return;
          }
        }
        else if (*(int *)((int)param_1 + 0x54) != 0) {
          iVar1 = *(int *)((int)param_1 + 0x50);
          iVar2 = *(int *)((int)param_1 + 0x54) + -1;
          *(int *)((int)param_1 + 0x54) = iVar2;
          *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
          *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
          return;
        }
        *(undefined4 *)((int)param_1 + 0x90) = 3;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    }
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
#undef local_8
}
