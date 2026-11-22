/* Rebuilt from lomse.exe FUN_004d4060 @ 0x004d4060 (339 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055c020 (*(undefined *)0x0055c020)
#define DAT_0055e438 (*(undefined *)0x0055e438)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FID_conflict__fwprintf ((int (__cdecl *)(FILE *, wchar_t *, ...))0x00539580)
#define FUN_004d1a80 ((undefined4 * (__thiscall *)(void *, uint, undefined4, int))0x004d1a80)
#define FUN_004d3f20 ((undefined4 (__thiscall *)(void *, LPCSTR))0x004d3f20)
#define FUN_005047e0 ((undefined4 (__thiscall *)(void *, LPCSTR, LPCSTR, UINT))0x005047e0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define PostQuitMessage (*(__typeof__(void (__stdcall *)(int)) *)0x0054d29c) /* USER32.DLL!PostQuitMessage via IAT */
#define _DAT_005d1f74 (*(undefined4 *)0x005d1f74)
#define s_Script_Error__0055e4b8 (*(char (*)[])0x0055e4b8)
#define s__s____s_0055e4ec (*(char (*)[])0x0055e4ec)
#define s__s_line__d__column__d_____s____s_0055e4c8 (*(char (*)[])0x0055e4c8)

#define LOM_SELF_004d4060 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004d4060(void *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  FILE *_File;
  int iVar3;
  char *pcVar4;
  uchar _fr[0x200] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef CHAR _t_local_1f4[500];
#define local_1f4 (*(_t_local_1f4 *)(_fr + 0x4))
  
  iVar3 = -1;
  pcVar4 = (char *)((int)param_1 + 0x880U);
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (((iVar3 == -2) && (*(int *)((int)param_1 + 0xa4c) == 0)) &&
     (*(int *)((int)param_1 + 0xa50) == 0)) {
    puVar2 = FUN_004d1a80(param_1,*(uint *)((int)param_1 + 0xa58),*(undefined4 *)((int)param_1 + 0xa5c),0
                         );
    FUN_0053a090(local_1f4,s__s____s_0055e4ec,(uint)puVar2,(int)param_1 + 0x984);
  }
  else {
    puVar2 = FUN_004d1a80(param_1,*(uint *)((int)param_1 + 0xa58),*(undefined4 *)((int)param_1 + 0xa5c),0
                         );
    FUN_0053a090(local_1f4,s__s_line__d__column__d_____s____s_0055e4c8,(int)param_1 + 0x880U,
                 *(undefined4 *)((int)param_1 + 0xa4c),*(undefined4 *)((int)param_1 + 0xa50),puVar2,
                 (int)param_1 + 0x984);
  }
  _File = (FILE *)FUN_00539610((LPCSTR)((int)param_1 + 0x55c),&DAT_0055c020);
  if (_File != (FILE *)0x0) {
    FID_conflict__fwprintf(_File,(wchar_t *)&DAT_0055e438,local_1f4);
    FUN_005394d0((int *)_File);
  }
  if (*(int *)((int)param_1 + 0x88) != 0) {
    iVar3 = FUN_005047e0(&DAT_00584ae8,local_1f4,s_Script_Error__0055e4b8,2);
    if (iVar3 == 3) {
      FUN_004d3f20(param_1,(LPCSTR)((int)param_1 + 0x55c));
      _DAT_005d1f74 = 0;
      *(undefined4 *)((int)param_1 + 0x88) = 0;
      *(undefined4 *)((int)param_1 + 0x70) = 1;
      *(undefined4 *)((int)param_1 + 0x6c) = 1;
      PostQuitMessage(0);
    }
    else if (iVar3 == 5) {
      *(undefined4 *)((int)param_1 + 0x88) = 0;
      return;
    }
  }
  return;
#undef local_1f4
}
