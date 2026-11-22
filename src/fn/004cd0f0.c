/* Rebuilt from lomse.exe FUN_004cd0f0 @ 0x004cd0f0 (725 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055e260 (*(undefined2 *)0x0055e260)
#define DAT_0055e264 (*(undefined *)0x0055e264)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_004cee20 ((int (__stdcall *)(char *))0x004cee20)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0053af20 ((HANDLE (__cdecl *)(LPCSTR, uint *))0x0053af20)
#define FUN_0053b050 ((undefined4 (__cdecl *)(HANDLE, uint *))0x0053b050)
#define FUN_0053b4c0 ((DWORD * (__stdcall *)(void))0x0053b4c0)
#define _strncmp ((int (__cdecl *)(char *, char *, size_t))0x0053aa30)
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)
#define s_dir___filename_wouldn_t_fit_in_s_0055e1e4 (*(char (*)[])0x0055e1e4)
#define s_dir___invalid_argument_0055e268 (*(char (*)[])0x0055e268)
#define s_dir___invalid_array_element_type_0055e20c (*(char (*)[])0x0055e20c)
#define s_dir___invalid_filespec_0055e280 (*(char (*)[])0x0055e280)
#define s_dir___reached_end_of_array_befor_0055e230 (*(char (*)[])0x0055e230)
#define s_dir___unknown_error_0055e298 (*(char (*)[])0x0055e298)

#define LOM_SELF_004cd0f0 1
void __fastcall rb_004cd0f0(void *param_1)

{
  int iVar1;
  DWORD *pDVar2;
  int iVar3;
  size_t _Count;
  int iVar4;
  uint uVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  uchar _fr[0x130] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_128;
  typedef int _t_local_124;
  typedef HANDLE _t_local_120;
  typedef LPCSTR _t_local_11c;
  typedef uint _t_local_118[5];
  typedef char _t_local_104[260];
#define local_128 (*(_t_local_128 *)(_fr + 0x0))
#define local_124 (*(_t_local_124 *)(_fr + 0x4))
#define local_120 (*(_t_local_120 *)(_fr + 0x8))
#define local_11c (*(_t_local_11c *)(_fr + 0xc))
#define local_118 (*(_t_local_118 *)(_fr + 0x10))
#define local_104 (*(_t_local_104 *)(_fr + 0x24))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    cVar6 = (char)*(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_128 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    cVar6 = '\0';
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  iVar3 = 0;
  FUN_0040adb0(param_1,&local_120);
  iVar1 = *(int *)((int)param_1 + 0x90);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  if (iVar1 == 0) {
    if ((char)local_120 != '\b') {
      FUN_00404ab0(param_1,0xe);
      local_11c = (LPCSTR)0x0;
    }
  }
  else {
    local_11c = (LPCSTR)0x0;
  }
  if (local_11c == (LPCSTR)0x0) {
    return;
  }
  local_120 = FUN_0053af20(local_11c,local_118);
  if (local_120 == (HANDLE)0xffffffff) {
    pDVar2 = FUN_0053b4c0();
    if (*pDVar2 != 2) {
      if (*pDVar2 != 0x16) {
        pcVar8 = s_dir___unknown_error_0055e298;
        goto LAB_004cd1fe;
      }
      FUN_004d41c0(param_1,s_dir___invalid_filespec_0055e280);
    }
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar3 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      iVar1 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
      return;
    }
  }
  else {
    if (cVar6 == '\x06') {
      local_124 = 0;
      if (0 < local_128[1]) {
        do {
          if (*(char *)(*local_128 + iVar3 * 8) != '\b') {
            FUN_0041d1d0(param_1,1,iVar3);
            FUN_004d41c0(param_1,s_dir___invalid_array_element_type_0055e20c);
            return;
          }
          pcVar8 = *(char **)(*local_128 + iVar3 * 8 + 4);
          iVar1 = _strncmp(local_104,&DAT_0055e264,2);
          if (iVar1 == 0) {
            iVar1 = -1;
            pcVar7 = local_104;
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              cVar6 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar6 != '\0');
            if (iVar1 != -4) goto LAB_004cd282;
          }
          else {
LAB_004cd282:
            iVar1 = _strncmp(local_104,(char *)&DAT_0055e260,1);
            if (iVar1 == 0) {
              iVar1 = -1;
              pcVar7 = local_104;
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                cVar6 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar6 != '\0');
              if (iVar1 == -3) goto LAB_004cd2e3;
            }
            iVar3 = iVar3 + 1;
            _Count = FUN_004cee20(pcVar8);
            _strncpy(pcVar8,local_104,_Count);
            uVar5 = 0xffffffff;
            pcVar7 = local_104;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar6 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar6 != '\0');
            if ((int)_Count < (int)(~uVar5 - 1)) {
              pcVar8[_Count] = '\0';
              FUN_004d41c0(param_1,s_dir___filename_wouldn_t_fit_in_s_0055e1e4);
              FUN_0041d1d0(param_1,1,iVar3);
              return;
            }
          }
LAB_004cd2e3:
          iVar1 = FUN_0053b050(local_120,local_118);
          if (iVar1 != 0) {
            if (*(int *)((int)param_1 + 0x54) != 0) {
              iVar1 = *(int *)((int)param_1 + 0x50);
              iVar4 = *(int *)((int)param_1 + 0x54) + -1;
              *(int *)((int)param_1 + 0x54) = iVar4;
              *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
              *(int *)(iVar1 + 4 + iVar4 * 8) = iVar3;
              return;
            }
            goto LAB_004cd3b1;
          }
          local_124 = local_124 + 1;
        } while (local_124 < local_128[1]);
      }
      FUN_004d41c0(param_1,s_dir___reached_end_of_array_befor_0055e230);
      FUN_0041d1d0(param_1,1,iVar3);
      return;
    }
    pcVar8 = s_dir___invalid_argument_0055e268;
LAB_004cd1fe:
    FUN_004d41c0(param_1,pcVar8);
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar3 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      iVar1 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
      return;
    }
  }
LAB_004cd3b1:
  FUN_00404ab0(param_1,3);
  return;
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
#undef local_118
#undef local_104
}
