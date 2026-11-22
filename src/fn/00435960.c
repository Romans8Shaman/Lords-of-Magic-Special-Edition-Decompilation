/* Rebuilt from lomse.exe FUN_00435960 @ 0x00435960 (166 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555d6c (*(undefined4 *)0x00555d6c)
#define DAT_00555d70 (*(void * *)0x00555d70)
#define DAT_00555d74 (*(int *)0x00555d74)
#define DAT_005788c4 (*(int *)0x005788c4)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004298a0 ((undefined4 (__thiscall *)(void *, int, int *, int *))0x004298a0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_00435960 1
void __thiscall rb_00435960(void *this, void *volatile param_1, int volatile param_2, uint volatile param_3, int *volatile param_4)

{
  void *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  piVar1 = param_4;
  this_00 = param_1;
  if (param_2 == *(int *)((int)this + 8)) {
    iVar2 = 1;
  }
  else {
    if (param_2 != *(int *)((int)this + 0xc)) {
      return;
    }
    iVar2 = 0;
  }
  iVar3 = 0;
  psVar4 = (short *)((int)this + iVar2 * 0x2a + 0x28);
  do {
    if (((char)psVar4[2] == '\a') &&
       (iVar2 = FUN_004298a0(&DAT_005aa12c,(int)*psVar4,&param_2,(int *)&param_1), iVar2 != 0)) {
      DAT_00555d6c = *(undefined4 *)(iVar2 + 0xc);
      DAT_00555d74 = param_2;
      DAT_00555d70 = param_1;
      DAT_005788c4 = iVar2;
      FUN_004d05e0(this_00,param_3,piVar1);
      iVar2 = *(int *)((int)this_00 + 0x6c);
      *(undefined4 *)((int)this_00 + 0x6c) = *(undefined4 *)((int)this_00 + 0x70);
      if (iVar2 != 0) {
        return;
      }
    }
    iVar3 = iVar3 + 1;
    psVar4 = psVar4 + 3;
  } while (iVar3 < 7);
  return;
}
