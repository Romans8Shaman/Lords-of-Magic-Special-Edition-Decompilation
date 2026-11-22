/* Rebuilt from lomse.exe FUN_0053e590 @ 0x0053e590 (699 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539c50 ((int (__cdecl *)(int, int, int, uint *, uint *))0x00539c50)
#define FUN_0053e850 ((undefined4 (__cdecl *)(PEXCEPTION_RECORD, PVOID, DWORD, undefined4, int, int, int, PVOID))0x0053e850)
#define FUN_0053e9f0 ((undefined4 (__cdecl *)(PEXCEPTION_RECORD, PVOID, DWORD, undefined4, int, byte *, byte *, int *, int, PVOID))0x0053e9f0)
#define FUN_0053ee20 ((undefined4 (__cdecl *)(int, ...))0x0053ee20)
#define FUN_0053efa0 ((DWORD * (__stdcall *)(void))0x0053efa0)
#define FUN_0053f0d0 ((undefined4 (__stdcall *)(void))0x0053f0d0)
#define FUN_0053f160 ((undefined4 (__stdcall *)(void))0x0053f160)
#define FUN_00544ae0 ((undefined4 (__cdecl *)(void *, UINT_PTR))0x00544ae0)

#define LOM_SELF_0053e590 1
void __cdecl
rb_0053e590(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            char param_6,int param_7,PVOID param_8)

{
  byte bVar1;
  DWORD *pDVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef byte * _t_local_24;
  typedef uint _t_local_20;
  typedef int * _t_local_1c;
  typedef int _t_local_18;
  typedef int _t_local_14;
  typedef int _t_local_10;
  typedef uint _t_local_c;
  typedef int * _t_local_8;
  typedef int _t_local_4;
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_1c (*(_t_local_1c *)(_fr + 0xc))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
#define local_14 (*(_t_local_14 *)(_fr + 0x14))
#define local_10 (*(_t_local_10 *)(_fr + 0x18))
#define local_c (*(_t_local_c *)(_fr + 0x1c))
#define local_8 (*(_t_local_8 *)(_fr + 0x20))
#define local_4 (*(_t_local_4 *)(_fr + 0x24))
  
  iVar6 = *(int *)((int)param_2 + 8);
  local_10 = iVar6;
  if ((iVar6 < -1) || (*(int *)(param_5 + 4) <= iVar6)) {
    FUN_0053f160();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar2 = FUN_0053efa0();
      if (pDVar2[0x1b] == 0) {
        return;
      }
      pDVar2 = FUN_0053efa0();
      param_1 = (PEXCEPTION_RECORD)pDVar2[0x1b];
      pDVar2 = FUN_0053efa0();
      param_3 = pDVar2[0x1c];
      iVar3 = FUN_00544ae0(param_1,1);
      if (iVar3 == 0) {
        FUN_0053f160();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_0053e806;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_0053f160();
      }
    }
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      local_1c = (int *)FUN_00539c50(param_5,param_7,iVar6,&local_20,&local_c);
      if (local_20 < local_c) {
        do {
          if ((*local_1c <= iVar6) && (iVar6 <= local_1c[1])) {
            local_14 = local_1c[3];
            local_24 = (byte *)local_1c[4];
            if (0 < local_14) {
              piVar5 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
              local_8 = piVar5 + 1;
              local_4 = *piVar5;
              do {
                local_18 = local_4;
                if (0 < local_4) {
                  iVar6 = *(int *)(local_24 + 4);
                  piVar5 = local_8;
                  do {
                    if ((iVar6 == 0) || (pbVar4 = (byte *)(iVar6 + 8), *(char *)(iVar6 + 8) == '\0')
                       ) {
LAB_0053e75f:
                      bVar8 = true;
                    }
                    else {
                      iVar3 = *(int *)((byte *)*piVar5 + 4);
                      if (iVar6 == iVar3) {
LAB_0053e73a:
                        if (((((*(byte *)*piVar5 & 2) == 0) || ((*local_24 & 8) != 0)) &&
                            (((*(uint *)param_1->ExceptionInformation[2] & 1) == 0 ||
                             ((*local_24 & 1) != 0)))) &&
                           (((*(uint *)param_1->ExceptionInformation[2] & 2) == 0 ||
                            ((*local_24 & 2) != 0)))) goto LAB_0053e75f;
                        bVar8 = false;
                      }
                      else {
                        pbVar7 = (byte *)(iVar3 + 8);
                        do {
                          bVar1 = *pbVar4;
                          bVar8 = bVar1 < *pbVar7;
                          if (bVar1 != *pbVar7) {
LAB_0053e71d:
                            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                            goto LAB_0053e722;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar4[1];
                          bVar8 = bVar1 < pbVar7[1];
                          if (bVar1 != pbVar7[1]) goto LAB_0053e71d;
                          pbVar4 = pbVar4 + 2;
                          pbVar7 = pbVar7 + 2;
                        } while (bVar1 != 0);
                        iVar3 = 0;
LAB_0053e722:
                        if (iVar3 == 0) goto LAB_0053e73a;
                        bVar8 = false;
                      }
                    }
                    if (bVar8) {
                      FUN_0053e9f0(param_1,param_2,param_3,param_4,param_5,local_24,(byte *)*piVar5,
                                   local_1c,param_7,param_8);
                      goto LAB_0053e7c7;
                    }
                    piVar5 = piVar5 + 1;
                    local_18 = local_18 + -1;
                  } while (0 < local_18);
                }
                local_14 = local_14 + -1;
                local_24 = local_24 + 0x10;
              } while (0 < local_14);
LAB_0053e7c7:
              iVar6 = local_10;
            }
          }
          local_20 = local_20 + 1;
          local_1c = local_1c + 5;
        } while (local_20 < local_c);
      }
      if (param_6 == '\0') {
        return;
      }
      FUN_0053ee20((int)param_1,1);
      return;
    }
  }
LAB_0053e806:
  if (param_6 == '\0') {
    FUN_0053e850(param_1,param_2,param_3,param_4,param_5,iVar6,param_7,param_8);
    return;
  }
  FUN_0053f0d0();
  return;
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
