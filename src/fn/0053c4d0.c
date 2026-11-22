/* Rebuilt from lomse.exe FUN_0053c4d0 @ 0x0053c4d0 (171 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005770d4 (*(uint *)0x005770d4)
#define DAT_005d5558 (*(int *)0x005d5558)
#define DAT_005d6a04 (*(HANDLE *)0x005d6a04)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_005427b0 ((int * (__cdecl *)(uint))0x005427b0)
#define FUN_00543140 ((undefined4 (__cdecl *)(undefined4))0x00543140)
#define HeapAlloc (*(__typeof__(LPVOID (__stdcall *)(HANDLE, DWORD, SIZE_T)) *)0x0054d1c0) /* KERNEL32.DLL!HeapAlloc via IAT */

#define LOM_SELF_0053c4d0 1
int * __cdecl rb_0053c4d0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint dwBytes;
  int *piVar3;
  int *piVar4;
  
  dwBytes = param_2 * param_1;
  if (dwBytes < 0xffffffe1) {
    if (dwBytes == 0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = dwBytes + 0xf & 0xfffffff0;
    }
  }
  do {
    piVar3 = (int *)0x0;
    if (dwBytes < 0xffffffe1) {
      if (DAT_005770d4 < dwBytes) {
LAB_0053c544:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        FUN_0053cbb0(9);
        piVar3 = FUN_005427b0(dwBytes >> 4);
        FUN_0053cc30(9);
        if (piVar3 != (int *)0x0) {
          piVar4 = piVar3;
          for (uVar2 = dwBytes >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *piVar4 = 0;
            piVar4 = piVar4 + 1;
          }
          for (uVar2 = dwBytes & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)piVar4 = 0;
            piVar4 = (int *)((int)piVar4 + 1);
          }
          goto LAB_0053c544;
        }
      }
      piVar3 = HeapAlloc(DAT_005d6a04,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_005d5558 == 0)) {
      return piVar3;
    }
    iVar1 = FUN_00543140(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}
