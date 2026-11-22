/* Rebuilt from lomse.exe FUN_0048dc80 @ 0x0048dc80 (163 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583614 (*(void * *)0x00583614)
#define FUN_0048dbf0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x0048dbf0)
#define FUN_0048e300 ((uint (__thiscall *)(void *, LONG, LONG, int, int))0x0048e300)
#define FUN_0048e470 ((int (__thiscall *)(void *, int, uint, int))0x0048e470)
#define ReleaseCapture (*(__typeof__(BOOL (__stdcall *)(void)) *)0x0054d2e8) /* USER32.DLL!ReleaseCapture via IAT */

#define LOM_SELF_0048dc80 1
void __thiscall rb_0048dc80(void *this,undefined4 param_1,uint param_2,LONG param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_2;
  do {
    iVar3 = 0;
    if (DAT_00583614 != (void *)0x0) {
      uVar2 = FUN_0048e300(DAT_00583614,uVar1,param_3,*(int *)((int)this + 0x3c),
                           *(int *)((int)this + 0x40));
      if (uVar2 == 0) {
        FUN_0048e470(DAT_00583614,0x202,uVar1,param_3);
        ReleaseCapture();
        DAT_00583614 = (void *)0x0;
      }
    }
    param_2 = 0;
    if (0 < *(int *)((int)this + 0x50)) {
      do {
        uVar2 = FUN_0048e300((void *)(*(int *)((int)this + 0x4c) + iVar3),uVar1,param_3,
                             *(int *)((int)this + 0x3c),*(int *)((int)this + 0x40));
        if (uVar2 == 0) {
          FUN_0048dbf0((void *)(*(int *)((int)this + 0x4c) + iVar3),param_1,uVar1,param_3);
        }
        param_2 = param_2 + 1;
        iVar3 = iVar3 + 0x2c;
      } while ((int)param_2 < *(int *)((int)this + 0x50));
    }
    this = *(void **)this;
  } while (this != (void *)0x0);
  return;
}
