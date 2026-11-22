/* Rebuilt from lomse.exe FUN_0053bad0 @ 0x0053bad0 (280 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5228 (*(undefined1 *)0x005d5228)
#define DAT_005d5548 (*(uint *)0x005d5548)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define FUN_0053bbf0 ((undefined4 (__cdecl *)(int))0x0053bbf0)
#define FUN_0053bc70 ((undefined4 (__cdecl *)(byte *))0x0053bc70)
#define FUN_0053bd50 ((undefined4 (__cdecl *)(uint))0x0053bd50)
#define FUN_0053be50 ((uint (__cdecl *)(LPCSTR, uint, uint, undefined4))0x0053be50)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_0053ccc0 ((undefined4 (__cdecl *)(uint))0x0053ccc0)
#define FUN_0053dc80 ((undefined4 * (__stdcall *)(void))0x0053dc80)
#define FUN_0053efa0 ((DWORD * (__stdcall *)(void))0x0053efa0)
#define FUN_00541f60 ((char * (__cdecl *)(char *))0x00541f60)

#define LOM_SELF_0053bad0 1
undefined4 * __stdcall rb_0053bad0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  DWORD *pDVar3;
  int iVar4;
  char *pcVar5;
  
  FUN_0053efa0();
  FUN_0053cbb0(3);
  if (DAT_005d5228 == '\0') {
    FUN_0053bbf0(1);
  }
  else {
    iVar4 = FUN_0053bc70((byte *)&DAT_005d5228);
    if (iVar4 != 0) goto LAB_0053bba0;
  }
  puVar1 = FUN_0053dc80();
  if (puVar1 == (undefined4 *)0x0) goto LAB_0053bba0;
  uVar2 = FUN_0053be50(&DAT_005d5228,0x8542,0x40,0x180);
  if (uVar2 == 0xffffffff) {
    do {
      pDVar3 = FUN_0053b4c0();
      if (*pDVar3 != 0x11) break;
      iVar4 = FUN_0053bc70((byte *)&DAT_005d5228);
      if (iVar4 != 0) break;
      uVar2 = FUN_0053be50(&DAT_005d5228,0x8542,0x40,0x180);
    } while (uVar2 == 0xffffffff);
    if (uVar2 != 0xffffffff) goto LAB_0053bb7a;
  }
  else {
LAB_0053bb7a:
    pcVar5 = FUN_00541f60(&DAT_005d5228);
    puVar1[7] = pcVar5;
    if (pcVar5 != (char *)0x0) {
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[2] = 0;
      puVar1[3] = DAT_005d5548 | 0x80;
      puVar1[4] = uVar2;
      FUN_0053ccc0((uint)puVar1);
      FUN_0053cc30(3);
      return puVar1;
    }
    FUN_0053bd50(uVar2);
  }
  FUN_0053ccc0((uint)puVar1);
LAB_0053bba0:
  FUN_0053cc30(3);
  return (undefined4 *)0x0;
}
