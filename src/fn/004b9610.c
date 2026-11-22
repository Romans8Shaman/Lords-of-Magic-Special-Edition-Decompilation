/* Rebuilt from lomse.exe FUN_004b9610 @ 0x004b9610 (597 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_0055c020 (*(undefined *)0x0055c020)
#define DAT_00583af8 (*(undefined *)0x00583af8)
#define DAT_00583eb8 (*(undefined *)0x00583eb8)
#define DAT_00583ec8 (*(int *)0x00583ec8)
#define DAT_00584460 (*(int *)0x00584460)
#define DAT_00584464 (*(int *)0x00584464)
#define DAT_00584468 (*(uint *)0x00584468)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004828d0 ((undefined4 (__thiscall *)(void *, undefined1, short))0x004828d0)
#define FUN_004b7760 ((undefined4 (__thiscall *)(void *, int, undefined1, int))0x004b7760)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004b9570 ((undefined4 (__stdcall *)(undefined1, short))0x004b9570)
#define FUN_005047d0 ((undefined4 (__stdcall *)(undefined4))0x005047d0)
#define FUN_00536b50 ((undefined4 (__cdecl *)(int))0x00536b50)
#define FUN_00536cb0 ((undefined4 (__cdecl *)(int, char *, int))0x00536cb0)
#define FUN_00536cd0 ((int (__cdecl *)(byte *, int))0x00536cd0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)
#define _DAT_00583eb8 (*(undefined4 *)0x00583eb8)
#define _DAT_00583ebc (*(undefined4 *)0x00583ebc)
#define _DAT_00583ec4 (*(undefined4 *)0x00583ec4)
#define _DAT_00583ed8 (*(undefined4 *)0x00583ed8)
#define _DAT_00583edc (*(undefined4 *)0x00583edc)
#define s_1_0_7_0055d368 (*(char (*)[])0x0055d368)
#define s_Error__Failed_to_create_xfer_fil_0055d594 (*(char (*)[])0x0055d594)

#define LOM_SELF_004b9610 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_004b9610(void *this,char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  LPCSTR pCVar3;
  int iVar4;
  int *piVar5;
  
  pcVar2 = param_1;
  pCVar3 = (LPCSTR)FUN_004b9570(*param_1,*(short *)(param_1 + 2));
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)((int)this + 0x10) = 1;
    piVar5 = (int *)FUN_00539610(pCVar3,&DAT_00556168);
    _DAT_00583eb8 = param_1 + 0x10;
    DAT_00584464 = 0xf0;
    _DAT_00583ebc = *(undefined4 *)(param_1 + 8);
    _DAT_00583ec4 = &DAT_00583af8;
    DAT_00583ec8 = 0xf0;
    _DAT_00583ed8 = 0;
    _DAT_00583edc = 0;
    DAT_00584460 = FUN_00536cb0(0x583eb8,s_1_0_7_0055d368,0x38);
    if (*param_1 == 'M') {
      if (*(int *)((int)this + 0x4b2c) == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
      }
      FUN_004b7760(this,0,0,iVar4);
    }
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_004828d0(&DAT_005aa12c,*param_1,*(short *)(param_1 + 2));
      DAT_00584460 = FUN_00536b50(0x583eb8);
      if (*param_1 != 'M') {
        return 1;
      }
      if (*(int *)((int)this + 0x4b2c) == 0) {
        FUN_004b7760(this,100,0,1);
        return 1;
      }
      iVar4 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
      FUN_004b7760(this,100,0,iVar4);
      return 1;
    }
    piVar5 = (int *)FUN_00539610(pCVar3,&DAT_0055c020);
  }
  param_1 = (char *)0xfffffffb;
  if (piVar5 == (int *)0x0) {
    if (*(int *)((int)this + 0x4b2c) != 0) {
      FUN_005047d0(s_Error__Failed_to_create_xfer_fil_0055d594);
    }
    FUN_00536b50(0x583eb8);
    return 0;
  }
  _DAT_00583eb8 = pcVar2 + 0x10;
  DAT_00584468 = DAT_00584464;
  _DAT_00583ebc = *(undefined4 *)(pcVar2 + 8);
  DAT_00584460 = 0;
  do {
    if (DAT_00584460 == 1) break;
    DAT_00584460 = FUN_00536cd0(&DAT_00583eb8,2);
    DAT_00584468 = DAT_00584468 - DAT_00583ec8;
    FUN_00539660(&DAT_00583af8,DAT_00584468,1,piVar5);
    _DAT_00583ec4 = &DAT_00583af8;
    DAT_00583ec8 = DAT_00584464;
    DAT_00584468 = DAT_00584464;
    if ((*pcVar2 == 'M') && (pcVar1 = *(char **)(pcVar2 + 0xc), 4 < (int)pcVar1 - (int)param_1)) {
      if (*(int *)((int)this + 0x4b2c) == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_004b7dd0(*(int *)((int)this + 0x4b2c));
      }
      FUN_004b7760(this,(int)pcVar1,0,iVar4);
      param_1 = pcVar1;
    }
  } while (DAT_00584460 != -5);
  FUN_005394d0(piVar5);
  return 1;
}
