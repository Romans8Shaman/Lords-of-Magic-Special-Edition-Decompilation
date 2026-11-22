/* Rebuilt from lomse.exe FUN_00548a30 @ 0x00548a30 (515 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d52d0 (*(int * *)0x005d52d0)
#define DAT_005d52d4 (*(int * *)0x005d52d4)
#define DAT_005d52d8 (*(undefined4 * *)0x005d52d8)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define FUN_0053f360 ((int * (__cdecl *)(int *, uint))0x0053f360)
#define FUN_005486b0 ((undefined4 (__stdcall *)(void))0x005486b0)
#define FUN_00548c40 ((int (__cdecl *)(byte *, LPWSTR))0x00548c40)
#define FUN_00548cc0 ((undefined4 * (__cdecl *)(int *))0x00548cc0)
#define FUN_00548d30 ((uint * (__cdecl *)(uint *, uint))0x00548d30)
#define SetEnvironmentVariableA (*(__typeof__(BOOL (__stdcall *)(LPCSTR, LPCSTR)) *)0x0054d1ec) /* KERNEL32.DLL!SetEnvironmentVariableA via IAT */

#define LOM_SELF_00548a30 1
undefined4 __cdecl rb_00548a30(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  LPWSTR pWVar3;
  int *piVar4;
  int *piVar5;
  LPCSTR lpName;
  uint uVar6;
  uint uVar7;
  CHAR *pCVar8;
  int *piVar9;
  LPCSTR pCVar10;
  bool bVar11;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar1 = FUN_00548d30(param_1,0x3d);
  if (puVar1 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar1) {
    return 0xffffffff;
  }
  bVar11 = *(char *)((int)puVar1 + 1) == '\0';
  if (DAT_005d52d0 == DAT_005d52d4) {
    DAT_005d52d0 = FUN_00548cc0(DAT_005d52d0);
  }
  if (DAT_005d52d0 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_005d52d8 == (undefined4 *)0x0)) {
      if (bVar11) {
        return 0;
      }
      DAT_005d52d0 = (int *)FUN_0053c1f0(4);
      if (DAT_005d52d0 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_005d52d0 = 0;
      if (DAT_005d52d8 == (undefined4 *)0x0) {
        DAT_005d52d8 = (undefined4 *)FUN_0053c1f0(4);
        if (DAT_005d52d8 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_005d52d8 = 0;
      }
    }
    else {
      iVar2 = FUN_005486b0();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar5 = DAT_005d52d0;
  pWVar3 = (LPWSTR)((int)puVar1 - (int)param_1);
  iVar2 = FUN_00548c40((byte *)param_1,pWVar3);
  if ((iVar2 < 0) || (*piVar5 == 0)) {
    if (bVar11) {
      return 0;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    piVar5 = FUN_0053f360(piVar5,iVar2 * 4 + 8);
    if (piVar5 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar5[iVar2] = (int)param_1;
    piVar5[iVar2 + 1] = 0;
    DAT_005d52d0 = piVar5;
  }
  else if (bVar11) {
    FUN_0053bce0((undefined *)piVar5[iVar2]);
    if (piVar5[iVar2] != 0) {
      piVar9 = piVar5 + iVar2;
      do {
        piVar4 = piVar9 + 1;
        *piVar9 = piVar9[1];
        iVar2 = iVar2 + 1;
        piVar9 = piVar4;
      } while (*piVar4 != 0);
    }
    piVar5 = FUN_0053f360(piVar5,iVar2 * 4);
    if (piVar5 != (int *)0x0) {
      DAT_005d52d0 = piVar5;
    }
  }
  else {
    piVar5[iVar2] = (int)param_1;
  }
  if (param_2 != 0) {
    uVar6 = 0xffffffff;
    puVar1 = param_1;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      uVar7 = *puVar1;
      puVar1 = (uint *)((int)puVar1 + 1);
    } while ((char)uVar7 != '\0');
    lpName = (LPCSTR)FUN_0053c1f0(~uVar6 + 1);
    if (lpName != (LPCSTR)0x0) {
      uVar6 = 0xffffffff;
      do {
        puVar1 = param_1;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        puVar1 = (uint *)((int)param_1 + 1);
        uVar7 = *param_1;
        param_1 = puVar1;
      } while ((char)uVar7 != '\0');
      uVar6 = ~uVar6;
      pCVar8 = (CHAR *)((int)puVar1 - uVar6);
      pCVar10 = lpName;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pCVar10 = *(undefined4 *)pCVar8;
        pCVar8 = pCVar8 + 4;
        pCVar10 = pCVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pCVar10 = *pCVar8;
        pCVar8 = pCVar8 + 1;
        pCVar10 = pCVar10 + 1;
      }
      lpName[(int)pWVar3] = '\0';
      SetEnvironmentVariableA(lpName,(LPCSTR)(~-(uint)bVar11 & (uint)(lpName + 1 + (int)pWVar3)));
      FUN_0053bce0(lpName);
      return 0;
    }
  }
  return 0;
}
