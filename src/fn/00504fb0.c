/* Rebuilt from lomse.exe FUN_00504fb0 @ 0x00504fb0 (275 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_005572ec (*(undefined *)0x005572ec)
#define DAT_0055ce54 (*(undefined *)0x0055ce54)
#define FID_conflict__fwprintf ((int (__cdecl *)(FILE *, wchar_t *, ...))0x00539580)
#define FUN_00505110 ((char * (__thiscall *)(void *, int, uint))0x00505110)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_0053a140 ((int (__cdecl *)(int *, int, DWORD))0x0053a140)
#define FUN_0053a790 ((undefined4 (__cdecl *)(LPCSTR))0x0053a790)
#define FUN_0053b350 ((char * (__cdecl *)(char *, int, int *))0x0053b350)
#define FUN_0053bad0 ((undefined4 * (__stdcall *)(void))0x0053bad0)

#define LOM_SELF_00504fb0 1
void __thiscall rb_00504fb0(void *this,int param_1,int param_2)

{
  char *pcVar1;
  FILE *_File;
  int *piVar2;
  char *pcVar3;
  FILE *_File_00;
  int iVar4;
  int iVar5;
  uchar _fr[0x3f0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_3e8[1000];
#define local_3e8 (*(_t_local_3e8 *)(_fr + 0x0))
  
  pcVar1 = FUN_00505110(this,param_1,0xffffffff);
  iVar4 = 0;
  _File = (FILE *)FUN_0053bad0();
  if (_File != (FILE *)0x0) {
    piVar2 = (int *)FUN_00539610(pcVar1,&DAT_005572ec);
    if (piVar2 != (int *)0x0) {
      do {
        pcVar3 = FUN_0053b350(local_3e8,1000,piVar2);
        if (pcVar3 != (char *)0x0) {
          FID_conflict__fwprintf(_File,(wchar_t *)&DAT_0055ce54,local_3e8);
          iVar4 = iVar4 + 1;
        }
      } while ((*(byte *)(piVar2 + 3) & 0x30) == 0);
      FUN_005394d0(piVar2);
    }
    if (param_2 < iVar4) {
      FUN_0053a790(pcVar1);
      _File_00 = (FILE *)FUN_00539610(pcVar1,&DAT_00556168);
      if (_File_00 != (FILE *)0x0) {
        iVar5 = 0;
        FUN_0053a140((int *)_File,0,0);
        do {
          if (iVar4 <= iVar5) break;
          pcVar1 = FUN_0053b350(local_3e8,1000,(int *)_File);
          if ((pcVar1 != (char *)0x0) && (iVar4 - param_2 <= iVar5)) {
            FID_conflict__fwprintf(_File_00,(wchar_t *)&DAT_0055ce54,local_3e8);
          }
          iVar5 = iVar5 + 1;
        } while ((_File->_flag & 0x30) == 0);
        FUN_005394d0((int *)_File_00);
      }
    }
    FUN_005394d0((int *)_File);
  }
  return;
#undef local_3e8
}
