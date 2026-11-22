/* Rebuilt from lomse.exe FUN_00435e80 @ 0x00435e80 (242 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00432b30 ((undefined4 (__cdecl *)(uint, int *, uint *, uint *, uint *))0x00432b30)

#define LOM_SELF_00435e80 1
int __thiscall rb_00435e80(void *this, int volatile param_1, uint volatile param_2)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef uint _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (param_1 == *(int *)((int)this + 8)) {
    iVar4 = 1;
  }
  else {
    if (param_1 != *(int *)((int)this + 0xc)) {
      return 0;
    }
    iVar4 = 0;
  }
  iVar2 = FUN_00432b30(param_2,&param_1,&local_4,&param_2,&local_8);
  if ((iVar2 == 0) || (param_1 == 0)) {
    return 0;
  }
  if ((param_1 < 1) || (4 < param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = 0;
  psVar3 = (short *)((int)this + iVar4 * 0x2a + 0x28);
  do {
    if ((char)psVar3[2] == param_1) {
      if (bVar1) {
        return (int)*psVar3;
      }
      if (param_2 == (int)*psVar3) {
        if (param_1 != 5) {
          return 1;
        }
        if (local_8 == (int)*(char *)((int)psVar3 + 5)) {
          return 1;
        }
      }
    }
    if (((param_1 == 5) && ((char)psVar3[2] == '\n')) && (param_2 == (int)*psVar3)) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    psVar3 = psVar3 + 3;
    if (6 < iVar2) {
      return 0;
    }
  } while( true );
#undef local_8
#undef local_4
}
