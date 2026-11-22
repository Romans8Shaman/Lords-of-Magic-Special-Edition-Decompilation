/* Rebuilt from lomse.exe FUN_00506fb0 @ 0x00506fb0 (233 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00506460 ((undefined4 (__thiscall *)(void *, void *, int))0x00506460)

#define LOM_SELF_00506fb0 1
void __thiscall rb_00506fb0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  int iVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_acStack_10[16];
#define acStack_10 (*(_t_acStack_10 *)(_fr + 0x0))
  
  iVar3 = DAT_005ae98c;
  iVar4 = 0;
  uVar1 = *(uint *)((int)this + 0x5cc);
  do {
    acStack_10[iVar4] = '\0';
    if ((uVar1 & 1 << ((byte)iVar4 & 0x1f)) == 0) {
      acStack_10[iVar4] = '\x01';
    }
    iVar4 = iVar4 + 1;
    iVar2 = DAT_005ae998;
  } while (iVar4 < 0x10);
  for (; iVar2 <= iVar3; iVar2 = iVar2 + 1) {
    this_00 = (void *)FUN_004f6000(&DAT_005ae974,iVar2);
    if (this_00 != (void *)0x0) {
      iVar4 = *(int *)((int)this_00 + 4);
      if (iVar4 != 0) {
        if (iVar4 == 2) {
          this_00 = *(void **)((int)this_00 + 0x48);
        }
        else if (iVar4 == 3) {
          this_00 = *(void **)((int)this_00 + 0x44);
        }
        else {
          this_00 = (void *)0x0;
        }
      }
      if ((((this_00 != (void *)0x0) &&
           (*(int *)((int)this_00 + 0x48) != *(int *)((int)this + 0x48))) && (this_00 != this)) &&
         ((acStack_10[*(int *)((int)this_00 + 0x48)] == '\0' &&
          (iVar4 = FUN_00506460(this_00,this,param_1), iVar4 != 0)))) {
        *(uint *)((int)this + 0x5cc) =
             *(uint *)((int)this + 0x5cc) &
             ~(1 << ((byte)*(undefined4 *)((int)this_00 + 0x48) & 0x1f));
        acStack_10[*(int *)((int)this_00 + 0x48)] = '\x01';
        iVar4 = FUN_00420580((int)this);
        if (iVar4 != 0) {
          *(undefined1 *)((int)this + 0x5d0) = 1;
        }
      }
    }
  }
  return;
#undef acStack_10
}
