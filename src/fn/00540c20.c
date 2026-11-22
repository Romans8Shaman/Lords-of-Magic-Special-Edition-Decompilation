/* Rebuilt from lomse.exe FUN_00540c20 @ 0x00540c20 (524 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d6a20 (*(undefined4 * *)0x005d6a20)
#define DAT_005d6a24 (*(undefined4 *)0x005d6a24)
#define DAT_005d6b20 (*(UINT *)0x005d6b20)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define GetFileType (*(__typeof__(DWORD (__stdcall *)(HANDLE)) *)0x0054d1c4) /* KERNEL32.DLL!GetFileType via IAT */
#define GetStartupInfoA (*(__typeof__(void (__stdcall *)(LPSTARTUPINFOA)) *)0x0054d1bc) /* KERNEL32.DLL!GetStartupInfoA via IAT */
#define GetStdHandle (*(__typeof__(HANDLE (__stdcall *)(DWORD)) *)0x0054d14c) /* KERNEL32.DLL!GetStdHandle via IAT */
#define SetHandleCount (*(__typeof__(UINT (__stdcall *)(UINT)) *)0x0054d150) /* KERNEL32.DLL!SetHandleCount via IAT */
#define __amsg_exit ((void (__cdecl *)(int))0x0053c470)

#define LOM_SELF_00540c20 1
void __stdcall rb_00540c20(void)

{
  byte bVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE hFile;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  UINT *pUVar8;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef UINT _t_local_48;
  typedef _STARTUPINFOA _t_local_44;
#define local_48 (*(_t_local_48 *)(_fr + 0x0))
#define local_44 (*(_t_local_44 *)(_fr + 0x4))
  
  puVar2 = (undefined4 *)FUN_0053c1f0(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_005d6b20 = 0x20;
  DAT_005d6a20 = puVar2;
  if (puVar2 < puVar2 + 0x120) {
    do {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      puVar2 = puVar2 + 9;
    } while (puVar2 < DAT_005d6a20 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    local_48 = *(UINT *)local_44.lpReserved2;
    pUVar8 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar4 = (byte *)((int)pUVar8 + local_48);
    if (0x7ff < (int)local_48) {
      local_48 = 0x800;
    }
    if ((int)DAT_005d6b20 < (int)local_48) {
      piVar6 = &DAT_005d6a24;
      do {
        puVar2 = (undefined4 *)FUN_0053c1f0(0x480);
        if (puVar2 == (undefined4 *)0x0) {
          local_48 = DAT_005d6b20;
          break;
        }
        *piVar6 = (int)puVar2;
        DAT_005d6b20 = DAT_005d6b20 + 0x20;
        if (puVar2 < puVar2 + 0x120) {
          do {
            *(undefined1 *)(puVar2 + 1) = 0;
            *puVar2 = 0xffffffff;
            *(undefined1 *)((int)puVar2 + 5) = 10;
            puVar2[2] = 0;
            puVar2 = puVar2 + 9;
          } while (puVar2 < (undefined4 *)(*piVar6 + 0x480));
        }
        piVar6 = piVar6 + 1;
      } while ((int)DAT_005d6b20 < (int)local_48);
    }
    uVar7 = 0;
    if (0 < (int)local_48) {
      do {
        if (((*(HANDLE *)pbVar4 != (HANDLE)0xffffffff) && ((*pUVar8 & 1) != 0)) &&
           (((*pUVar8 & 8) != 0 || (DVar3 = GetFileType(*(HANDLE *)pbVar4), DVar3 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_005d6a20)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)pbVar4;
          *(byte *)(puVar2 + 1) = (byte)*pUVar8;
        }
        uVar7 = uVar7 + 1;
        pUVar8 = (UINT *)((int)pUVar8 + 1);
        pbVar4 = pbVar4 + 4;
      } while ((int)uVar7 < (int)local_48);
    }
  }
  iVar5 = 0;
  do {
    puVar2 = DAT_005d6a20 + iVar5 * 9;
    if (DAT_005d6a20[iVar5 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else {
        DVar3 = 0xfffffff5 - (iVar5 != 1);
      }
      hFile = GetStdHandle(DVar3);
      if ((hFile == (HANDLE)0xffffffff) || (DVar3 = GetFileType(hFile), DVar3 == 0)) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_00540e0e;
      }
      *puVar2 = hFile;
      if ((DVar3 & 0xff) == 2) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_00540e0e;
      }
      if ((DVar3 & 0xff) == 3) {
        bVar1 = *(byte *)(puVar2 + 1) | 8;
        goto LAB_00540e0e;
      }
    }
    else {
      bVar1 = *(byte *)(puVar2 + 1) | 0x80;
LAB_00540e0e:
      *(byte *)(puVar2 + 1) = bVar1;
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      SetHandleCount(DAT_005d6b20);
      return;
    }
  } while( true );
#undef local_48
#undef local_44
}
