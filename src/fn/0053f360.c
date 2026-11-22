/* Rebuilt from lomse.exe FUN_0053f360 @ 0x0053f360 (432 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005770d4 (*(uint *)0x005770d4)
#define DAT_005d5558 (*(int *)0x005d5558)
#define DAT_005d6a04 (*(HANDLE *)0x005d6a04)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define FUN_0053c1f0 ((undefined4 (__cdecl *)(uint))0x0053c1f0)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_005426f0 ((int (__cdecl *)(undefined *, undefined4 *, uint *))0x005426f0)
#define FUN_00542750 ((undefined4 (__cdecl *)(int, int, byte *))0x00542750)
#define FUN_005427b0 ((int * (__cdecl *)(uint))0x005427b0)
#define FUN_00542b70 ((undefined4 (__cdecl *)(int, int *, byte *, uint))0x00542b70)
#define FUN_00543140 ((undefined4 (__cdecl *)(undefined4))0x00543140)
#define HeapAlloc (*(__typeof__(LPVOID (__stdcall *)(HANDLE, DWORD, SIZE_T)) *)0x0054d1c0) /* KERNEL32.DLL!HeapAlloc via IAT */
#define HeapReAlloc (*(__typeof__(LPVOID (__stdcall *)(HANDLE, DWORD, LPVOID, SIZE_T)) *)0x0054d188) /* KERNEL32.DLL!HeapReAlloc via IAT */

#define LOM_SELF_0053f360 1
int * __cdecl rb_0053f360(int *param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_8;
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)FUN_0053c1f0(param_2);
    return piVar1;
  }
  if (param_2 == 0) {
    FUN_0053bce0((undefined *)param_1);
    return (int *)0x0;
  }
  uVar4 = param_2;
  if (param_2 < 0xffffffe1) {
    if (param_2 == 0) {
      param_2 = 0x10;
    }
    else {
      param_2 = param_2 + 0xf & 0xfffffff0;
    }
    uVar4 = param_2;
  }
  do {
    piVar1 = (int *)0x0;
    if (uVar4 < 0xffffffe1) {
      FUN_0053cbb0(9);
      pbVar2 = (byte *)FUN_005426f0((undefined *)param_1,&local_4,(uint *)&local_8);
      if (pbVar2 == (byte *)0x0) {
        FUN_0053cc30(9);
        piVar1 = HeapReAlloc(DAT_005d6a04,0,param_1,uVar4);
      }
      else {
        if (uVar4 < DAT_005770d4) {
          iVar3 = FUN_00542b70(local_4,local_8,pbVar2,uVar4 >> 4);
          if (iVar3 != 0) {
            piVar1 = param_1;
            goto LAB_0053f465;
          }
          piVar1 = FUN_005427b0(uVar4 >> 4);
          if (piVar1 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar6 = param_1;
            piVar7 = piVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar7 = (char)*piVar6;
              piVar6 = (int *)((int)piVar6 + 1);
              piVar7 = (int *)((int)piVar7 + 1);
            }
            FUN_00542750(local_4,(int)local_8,pbVar2);
            uVar4 = param_2;
            goto LAB_0053f465;
          }
LAB_0053f469:
          piVar1 = HeapAlloc(DAT_005d6a04,0,uVar4);
          if (piVar1 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar6 = param_1;
            piVar7 = piVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar7 = (char)*piVar6;
              piVar6 = (int *)((int)piVar6 + 1);
              piVar7 = (int *)((int)piVar7 + 1);
            }
            FUN_00542750(local_4,(int)local_8,pbVar2);
            uVar4 = param_2;
          }
        }
        else {
LAB_0053f465:
          if (piVar1 == (int *)0x0) goto LAB_0053f469;
        }
        FUN_0053cc30(9);
      }
    }
    if ((piVar1 != (int *)0x0) || (DAT_005d5558 == 0)) {
      return piVar1;
    }
    iVar3 = FUN_00543140(uVar4);
    if (iVar3 == 0) {
      return (int *)0x0;
    }
  } while( true );
#undef local_8
#undef local_4
}
