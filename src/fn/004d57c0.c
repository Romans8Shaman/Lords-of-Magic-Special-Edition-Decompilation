/* Rebuilt from lomse.exe FUN_004d57c0 @ 0x004d57c0 (663 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d31b0 ((uint * (__thiscall *)(void *, int *, uint, uint))0x004d31b0)
#define FUN_004d3930 ((undefined4 (__fastcall *)(int, undefined4, undefined4, undefined4))0x004d3930)
#define FUN_004d3b90 ((undefined4 (__fastcall *)(int, undefined4, undefined4, undefined4))0x004d3b90)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004d5aa0 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004d5aa0)
unsigned lom_inreg_004d57c0[2] __asm__("lom_inreg_004d57c0");
void __thiscall lom_body_004d57c0(void *this, uint volatile param_1, undefined *volatile param_2) __asm__("lom_body_004d57c0");

#define LOM_SELF_004d57c0 1
__attribute__((naked)) void __thiscall rb_004d57c0(void *this, uint volatile param_1, undefined *volatile param_2)
{
  __asm__("movl %eax, lom_inreg_004d57c0\n\tmovl %edx, lom_inreg_004d57c0+4\n\tjmp lom_body_004d57c0");
}

void __thiscall lom_body_004d57c0(void *this, uint volatile param_1, undefined *volatile param_2)
{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 in_EDX = (undefined4)*(unsigned *)((char *)lom_inreg_004d57c0 + 4);
  int iVar9;
  
  puVar3 = param_2;
  uVar2 = param_1;
  switch(param_1 & 0xff) {
  case 0:
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xc:
  case 0xe:
    if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    else {
      iVar9 = *(int *)((int)this + 0x50);
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      *(uint *)(iVar9 + iVar4 * 8) = param_1;
      *(undefined **)(iVar9 + 4 + iVar4 * 8) = param_2;
    }
    break;
  case 5:
    *(uint *)((int)this + 0x94) = param_1;
    *(undefined **)((int)this + 0x98) = param_2;
    if ((param_1 & 0x100) == 0) {
      iVar9 = *(int *)((int)this + 0x60);
      if (iVar9 < *(int *)((int)this + 100)) {
        do {
          puVar5 = FUN_004d31b0(this,*(int **)(*(int *)((int)this + 0x5c) + iVar9 * 4),uVar2,
                                (uint)puVar3);
          if (puVar5 != (uint *)0x0) {
            FUN_004d05e0(this,puVar5[2],(int *)puVar5[3]);
            goto switchD_004d57da_caseD_0;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)((int)this + 100));
      }
      *(uint *)((int)this + 0x9c) = uVar2;
      *(undefined **)((int)this + 0xa0) = puVar3;
      FUN_00404ab0(this,0x11);
    }
    else if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    else {
      iVar9 = *(int *)((int)this + 0x50);
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      *(uint *)(iVar9 + iVar4 * 8) = param_1;
      *(undefined **)(iVar9 + 4 + iVar4 * 8) = param_2;
    }
    break;
  case 9:
    iVar9 = *(int *)((int)this + 0x558);
    *(uint *)((int)this + 0x94) = param_1;
    *(undefined **)((int)this + 0x98) = param_2;
    if (iVar9 < 100) {
      *(uint *)((int)this + iVar9 * 8 + 0xa8) = param_1;
      *(undefined **)((int)this + iVar9 * 8 + 0xac) = param_2;
      *(undefined4 *)((int)this + *(int *)((int)this + 0x558) * 4 + 0x3c8) = 0;
      *(int *)((int)this + 0x558) = *(int *)((int)this + 0x558) + 1;
    }
    ((undefined4 (__cdecl *)(__typeof__(this)))(*(code *)param_2))(this);
    *(int *)((int)this + 0x558) = iVar9;
    break;
  case 0xb:
    *(uint *)((int)this + 0x94) = param_1;
    iVar9 = *(int *)((int)this + 0x54);
    *(undefined **)((int)this + 0x98) = param_2;
    iVar4 = *(int *)((int)this + 0x58);
    iVar6 = iVar9;
    if (iVar9 < iVar4) {
      pcVar8 = (char *)(*(int *)((int)this + 0x50) + iVar9 * 8);
      do {
        if (*pcVar8 == '\n') break;
        iVar6 = iVar6 + 1;
        pcVar8 = pcVar8 + 8;
      } while (iVar6 < iVar4);
    }
    if (iVar6 != iVar4) {
      iVar6 = iVar6 - iVar9;
      puVar7 = (undefined4 *)FUN_004d5aa0(this,&param_1,iVar6);
      piVar1 = (int *)puVar7[1];
      if ((char)*puVar7 == '\0') {
        FUN_00404ab0(this,2);
      }
      else {
        if (0 < iVar6) {
          iVar9 = iVar6 * 8;
          do {
            puVar7 = (undefined4 *)FUN_0040adb0(this,&param_1);
            iVar4 = *piVar1;
            *(undefined4 *)(iVar4 + -8 + iVar9) = *puVar7;
            *(undefined4 *)(iVar4 + -4 + iVar9) = puVar7[1];
            iVar9 = iVar9 + -8;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        FUN_0040adb0(this,&param_1);
        FUN_0041d1d0(this,0x106,piVar1);
      }
      break;
    }
    *(undefined4 *)((int)this + 0x90) = 0xb;
    goto LAB_004d5a20;
  case 0xd:
    *(uint *)((int)this + 0x94) = param_1;
    *(undefined **)((int)this + 0x98) = param_2;
    FUN_004d3930((int)this,in_EDX,param_1,param_2);
    break;
  case 0xf:
    *(uint *)((int)this + 0x94) = param_1;
    *(undefined **)((int)this + 0x98) = param_2;
    FUN_004d3b90((int)this,in_EDX,param_1,param_2);
    break;
  default:
    *(undefined4 *)((int)this + 0x90) = 0x13;
LAB_004d5a20:
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
switchD_004d57da_caseD_0:
  if ((*(int *)((int)this + 0x90) != 0) && (*(int *)((int)this + 0xa4) == 0)) {
    FUN_004d4550(this);
  }
  return;
}
