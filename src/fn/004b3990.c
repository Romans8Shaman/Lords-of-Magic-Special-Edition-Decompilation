/* Rebuilt from lomse.exe FUN_004b3990 @ 0x004b3990 (174 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055aef0 (*(undefined *)0x0055aef0)
#define DAT_0055aef8 (*(undefined *)0x0055aef8)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define FUN_0053a140 ((int (__cdecl *)(int *, int, DWORD))0x0053a140)
#define _strncmp ((int (__cdecl *)(char *, char *, size_t))0x0053aa30)

#define LOM_SELF_004b3990 1
void __fastcall rb_004b3990(int param_1)

{
  int *piVar1;
  int iVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef char _t_local_4[4];
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    FUN_0053a140(*(int **)(param_1 + 4),0xc,1);
    piVar1 = *(int **)(param_1 + 4);
    if ((*(byte *)(piVar1 + 3) & 0x10) == 0) {
      while( true ) {
        FUN_005397f0(local_4,4,1,piVar1);
        FUN_005397f0((char *)&local_8,4,1,*(int **)(param_1 + 4));
        iVar2 = _strncmp(local_4,&DAT_0055aef8,3);
        if ((iVar2 != 0) && (iVar2 = _strncmp(local_4,&DAT_0055aef0,4), iVar2 == 0)) break;
        FUN_0053a140(*(int **)(param_1 + 4),local_8,1);
        piVar1 = *(int **)(param_1 + 4);
        if ((*(byte *)(piVar1 + 3) & 0x10) != 0) {
          return;
        }
      }
      *(int *)(param_1 + 0x10) = local_8;
      return;
    }
  }
  return;
#undef local_8
#undef local_4
}
