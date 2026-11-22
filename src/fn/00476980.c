/* Rebuilt from lomse.exe FUN_00476980 @ 0x00476980 (669 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_0058364c (*(int *)0x0058364c)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005d20bc (*(int *)0x005d20bc)
#define FUN_00475360 ((undefined4 (__fastcall *)(int))0x00475360)
#define FUN_00476f70 ((undefined4 (__fastcall *)(uint *))0x00476f70)
#define FUN_004779b0 ((undefined4 (__thiscall *)(void *, int, int, int, int, uint))0x004779b0)
#define FUN_004950c0 ((undefined4 * (__thiscall *)(void *, int *))0x004950c0)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00495db0 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00495db0)

#define LOM_SELF_00476980 1

/* v1.5: if a non-16-bpp real primary was stashed at object+0x900, Blt-convert
 * the 16-bit fake primary at +0x684 onto it (DirectDraw format conversion). */
static void v15_flush_primary(int obj)
{
  int *real;
  int *fake;
  int rect[4];
  int hr;
  real = *(int **)(obj + 0x900);
  fake = *(int **)(obj + 0x684);
  if ((real == (int *)0x0) || (fake == (int *)0x0)) {
    return;
  }
  rect[0] = 0;
  rect[1] = 0;
  rect[2] = 0x280;
  rect[3] = 0x1e0;
  hr = ((int (__stdcall *)(int *, int *, int *, int, unsigned int, int))(**(code **)(*real + 0x14)))
              (real,rect,fake,0,0x1000000,0);
  if (hr == -0x7789fe3e) {
    ((int (__stdcall *)(int *))(**(code **)(*real + 0x6c)))(real);
    ((int (__stdcall *)(int *))(**(code **)(*fake + 0x6c)))(fake);
    ((int (__stdcall *)(int *, int *, int *, int, unsigned int, int))(**(code **)(*real + 0x14)))
              (real,rect,fake,0,0x1000000,0);
  }
}

void __thiscall rb_00476980(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uchar _fr[0x88] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_7c;
  typedef int _t_local_78;
  typedef int _t_iStack_70;
  typedef int _t_iStack_6c;
  typedef int _t_iStack_68;
  typedef int _t_iStack_64;
  typedef int * _t_piStack_60;
  typedef int _t_iStack_5c;
  typedef int _t_iStack_58;
  typedef int _t_iStack_54;
  typedef int _t_iStack_50;
  typedef int _t_aiStack_4c[8];
  typedef int _t_aiStack_2c[8];
#define local_7c (*(_t_local_7c *)(_fr + 0x4))
#define local_78 (*(_t_local_78 *)(_fr + 0x8))
#define iStack_70 (*(_t_iStack_70 *)(_fr + 0x10))
#define iStack_6c (*(_t_iStack_6c *)(_fr + 0x14))
#define iStack_68 (*(_t_iStack_68 *)(_fr + 0x18))
#define iStack_64 (*(_t_iStack_64 *)(_fr + 0x1c))
#define piStack_60 (*(_t_piStack_60 *)(_fr + 0x20))
#define iStack_5c (*(_t_iStack_5c *)(_fr + 0x24))
#define iStack_58 (*(_t_iStack_58 *)(_fr + 0x28))
#define iStack_54 (*(_t_iStack_54 *)(_fr + 0x2c))
#define iStack_50 (*(_t_iStack_50 *)(_fr + 0x30))
#define aiStack_4c (*(_t_aiStack_4c *)(_fr + 0x34))
#define aiStack_2c (*(_t_aiStack_2c *)(_fr + 0x54))

  if (*(int *)((int)this + 0x22ff4) != 0) {
    uVar1 = *param_1;
    if (*(int *)((int)this + 0x4d5d0) != 0) {
      FUN_00476f70(param_1);
    }
    if (*(int *)((int)this + 0x4d5cc) != 0) {
      ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)this + 0x680)), __typeof__(1), __typeof__(0)))(**(code **)(**(int **)((int)this + 0x680) + 0x58)))(*(int **)((int)this + 0x680),1,0);
    }
    local_7c = 0;
    if (0 < (int)uVar1) {
      local_78 = 0;
      do {
        if ((local_78 < 0) || ((int)*param_1 <= local_7c)) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(param_1[4] + local_78);
        }
        iStack_70 = *piVar4;
        iStack_6c = piVar4[1];
        iStack_68 = piVar4[2];
        iStack_64 = piVar4[3];
        if ((*(byte *)((int)this + 0x4d5ac) & 8) != 0) {
          FUN_004779b0(this,*piVar4,piVar4[1],piVar4[2],piVar4[3],0xffff);
        }
        iVar3 = iStack_6c;
        iVar2 = iStack_70;
        iStack_68 = iStack_68 + 1;
        iStack_64 = iStack_64 + 1;
        if (DAT_005d20bc == 0) {
          FUN_004950c0(aiStack_2c,*(int **)((int)this + 0x684));
          FUN_004950c0(aiStack_4c,*(int **)((int)this + 0x688));
          iStack_54 = iStack_68 - iStack_70;
          DAT_0058364c = DAT_0058364c + 0x14;
          piStack_60 = aiStack_4c;
          iStack_50 = iStack_64 - iStack_6c;
          iStack_5c = iVar2;
          iStack_58 = iVar3;
          FUN_00495db0(aiStack_2c,(int *)&piStack_60,iVar2,iVar3);
          DAT_0058364c = DAT_0058364c + -0x14;
          DAT_00583648 = DAT_00583648 + -0x20;
          FUN_00495590(aiStack_4c);
          DAT_00583648 = DAT_00583648 + -0x20;
          FUN_00495590(aiStack_2c);
        }
        else {
          iVar5 = ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)this + 0x684)), __typeof__(iStack_70), __typeof__(iStack_6c), __typeof__(*(undefined4 *)((int)this + 0x688)), __typeof__(&iStack_70), __typeof__(0x10)))(**(code **)(**(int **)((int)this + 0x684) + 0x1c)))
                            (*(int **)((int)this + 0x684),iStack_70,iStack_6c,
                             *(undefined4 *)((int)this + 0x688),&iStack_70,0x10);
          if (iVar5 == -0x7789fe3e) {
            FUN_00475360((int)this);
            ((undefined4 (__stdcall *)(__typeof__(*(int **)((int)this + 0x684)), __typeof__(iVar2), __typeof__(iVar3), __typeof__(*(undefined4 *)((int)this + 0x688)), __typeof__(&iStack_70), __typeof__(0)))(**(code **)(**(int **)((int)this + 0x684) + 0x1c)))
                      (*(int **)((int)this + 0x684),iVar2,iVar3,*(undefined4 *)((int)this + 0x688),
                       &iStack_70,0);
          }
        }
        local_7c = local_7c + 1;
        local_78 = local_78 + 0x10;
      } while (local_7c < (int)uVar1);
    }
    if ((*(byte *)((int)this + 0x4d5ac) & 0x20) != 0) {
      FUN_004779b0(&DAT_00584ae8,0,0,0x27f,0x1df,0xaaaa);
    }
    v15_flush_primary((int)this);
  }
  return;
#undef local_7c
#undef local_78
#undef iStack_70
#undef iStack_6c
#undef iStack_68
#undef iStack_64
#undef piStack_60
#undef iStack_5c
#undef iStack_58
#undef iStack_54
#undef iStack_50
#undef aiStack_4c
#undef aiStack_2c
}
