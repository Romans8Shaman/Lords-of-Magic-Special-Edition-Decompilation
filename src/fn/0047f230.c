/* Rebuilt from lomse.exe FUN_0047f230 @ 0x0047f230 (483 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0047ee90 ((int (__thiscall *)(void *, char *, int))0x0047ee90)
#define FUN_0047ef30 ((int (__thiscall *)(void *, int, int))0x0047ef30)
#define FUN_0047f0a0 ((undefined4 (__thiscall *)(void *, void *, int, int, int, int, int, int))0x0047f0a0)

#define LOM_SELF_0047f230 1
void __thiscall
rb_0047f230(void *this,void *param_1,char *param_2,int *param_3,int param_4,int param_5,int param_6
            )

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_18;
  typedef int _t_local_14;
  typedef int _t_local_c;
  typedef int _t_local_8;
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
  
  uVar6 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar2 = param_3[2];
  iVar7 = uVar6 - 2;
  if (*(int *)((int)this + 4) <= iVar2) {
    local_14 = param_3[1];
    local_18 = *param_3;
    iVar9 = 0;
    if (0 < param_6) {
      do {
        iVar3 = FUN_0047ee90(this,param_2 + iVar9,iVar2);
        iVar9 = iVar9 + iVar3;
        if (((param_2[iVar9] == ' ') || (param_2[iVar9] == '\n')) || (iVar3 < 1)) {
          iVar9 = iVar9 + 1;
        }
        param_6 = param_6 + -1;
      } while (param_6 != 0);
      param_6 = 0;
    }
    local_c = local_14;
    local_8 = local_18;
    if (iVar9 <= iVar7) {
      do {
        pcVar8 = param_2 + iVar9;
        iVar3 = FUN_0047ee90(this,pcVar8,iVar2);
        iVar4 = FUN_0047ef30(this,(int)pcVar8,iVar3);
        if (param_4 == 0) {
          param_6 = iVar2 - iVar4;
        }
        else if (param_4 == 1) {
          param_6 = 0;
        }
        else if (param_4 == 2) {
          param_6 = (iVar2 - iVar4) / 2;
        }
        if ((int)(uVar6 - 1) < iVar3 + iVar9) {
          iVar3 = (iVar7 - iVar9) + 1;
        }
        iVar4 = iVar9;
        if (iVar9 < 0) {
          if (0 < iVar3 + iVar9) {
            iVar5 = FUN_0047ef30(this,(int)pcVar8,-iVar9);
            iVar4 = 0;
            local_18 = local_18 + iVar5;
            iVar3 = iVar3 + iVar9;
          }
          if (-1 < iVar4) goto LAB_0047f358;
        }
        else {
LAB_0047f358:
          local_8 = FUN_0047f0a0(this,param_1,(int)(param_2 + iVar4),param_6 + local_18,local_14,
                                 iVar3,0,param_5 - iVar4);
        }
        iVar9 = iVar4 + iVar3;
        local_c = local_14;
        if (((param_2[iVar9] == ' ') || (param_2[iVar9] == '\n')) || (iVar3 < 1)) {
          iVar9 = iVar9 + 1;
        }
        local_14 = local_14 + *(int *)((int)this + 8);
      } while ((local_14 + *(int *)((int)this + 8) <= param_3[1] + param_3[3]) &&
              (local_18 = *param_3, iVar9 <= iVar7));
    }
    if ((param_5 == uVar6 - 1) && (-1 < param_5)) {
      FUN_0047f0a0(this,param_1,0x55aee0,local_8,local_c,1,0,0);
    }
  }
  return;
#undef local_18
#undef local_14
#undef local_c
#undef local_8
}
