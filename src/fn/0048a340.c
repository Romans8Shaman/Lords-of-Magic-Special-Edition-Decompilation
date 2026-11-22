/* Rebuilt from lomse.exe FUN_0048a340 @ 0x0048a340 (178 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005572ec (*(undefined *)0x005572ec)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_0048a450 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0048a450)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define FUN_0053a760 ((undefined4 (__cdecl *)(LPCSTR))0x0053a760)
#define PTR_s_MESSAGE_DAT_0055b890 (*(undefined * *)0x0055b890)

#define LOM_SELF_0048a340 1
undefined4 __fastcall rb_0048a340(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_108[264];
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
  
  FUN_0048cc40((int)local_108);
  iVar2 = FUN_0048a400(param_1);
  if (iVar2 != 1) {
    return 0;
  }
  piVar3 = (int *)FUN_00539610(PTR_s_MESSAGE_DAT_0055b890,&DAT_005572ec);
  if (piVar3 != (int *)0x0) {
    FUN_005397f0(local_108,0x105,1,piVar3);
    bVar1 = *(byte *)(piVar3 + 3);
    while ((bVar1 & 0x10) == 0) {
      FUN_0048a450((void *)param_1,(undefined4 *)local_108);
      FUN_005397f0(local_108,0x105,1,piVar3);
      bVar1 = *(byte *)(piVar3 + 3);
    }
    FUN_005394d0(piVar3);
    FUN_0053a760(PTR_s_MESSAGE_DAT_0055b890);
  }
  return 1;
#undef local_108
}
