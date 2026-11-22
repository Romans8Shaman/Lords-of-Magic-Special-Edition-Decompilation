/* Rebuilt from lomse.exe FUN_00435770 @ 0x00435770 (276 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00432b30 ((undefined4 (__cdecl *)(uint, int *, uint *, uint *, uint *))0x00432b30)
#define FUN_00432d40 ((undefined4 (__thiscall *)(void *, undefined1, short, short, undefined1))0x00432d40)

#define LOM_SELF_00435770 1
undefined4 __thiscall rb_00435770(void *this, int volatile param_1, uint volatile param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef short _t_local_4[2];
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (param_1 == *(int *)((int)this + 8)) {
    iVar5 = 1;
  }
  else {
    if (param_1 != *(int *)((int)this + 0xc)) {
      return 0;
    }
    iVar5 = 0;
  }
  iVar3 = FUN_00432b30(param_2,&param_1,&local_8,(uint *)local_4,&param_2);
  if ((iVar3 != 0) && (param_1 != 0)) {
    if ((param_1 < 1) || (4 < param_1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    iVar3 = 0;
    pcVar4 = (char *)((int)this + iVar5 * 0x2a + 0x2c);
    while ((!bVar2 || (*pcVar4 != param_1))) {
      if ((*pcVar4 == param_1) && ((param_1 != 5 || ((int)pcVar4[1] == param_2)))) {
        *pcVar4 = '\0';
        return 1;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 6;
      if (6 < iVar3) {
        return 0;
      }
    }
    sVar1 = *(short *)(pcVar4 + -4);
    if ((int)local_8 <= (int)sVar1) {
      if ((int)sVar1 == local_8) {
        *pcVar4 = '\0';
        return 1;
      }
      FUN_00432d40(pcVar4 + -4,(char)param_1,sVar1 - (short)local_8,local_4[0],(char)param_2);
      return 1;
    }
  }
  return 0;
#undef local_8
#undef local_4
}
