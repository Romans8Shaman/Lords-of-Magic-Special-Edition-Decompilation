/* Rebuilt from lomse.exe FUN_00530ae0 @ 0x00530ae0 (474 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055e260 (*(undefined2 *)0x0055e260)
#define DAT_0055e264 (*(undefined *)0x0055e264)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0053af20 ((HANDLE (__cdecl *)(LPCSTR, uint *))0x0053af20)
#define FUN_0053b050 ((undefined4 (__cdecl *)(HANDLE, uint *))0x0053b050)
#define FUN_0053b7b0 ((undefined4 (__cdecl *)(LPCSTR))0x0053b7b0)
#define FUN_0053b850 ((char * (__cdecl *)(char *, uint))0x0053b850)
#define _strncmp ((int (__cdecl *)(char *, char *, size_t))0x0053aa30)

#define LOM_SELF_00530ae0 1
void __thiscall
rb_00530ae0(void *this,LPCSTR param_1,LPCSTR param_2,uint param_3,int *param_4,void *param_5)

{
  int iVar1;
  HANDLE pvVar2;
  int iVar3;
  uchar _fr[0x1d8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_1cc[5];
  typedef char _t_local_1b8[260];
  typedef char _t_local_b4[180];
#define local_1cc (*(_t_local_1cc *)(_fr + 0x4))
#define local_1b8 (*(_t_local_1b8 *)(_fr + 0x18))
#define local_b4 (*(_t_local_b4 *)(_fr + 0x11c))
  
  FUN_0053b850(local_b4,0xb4);
  iVar1 = FUN_0053b7b0(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)this = 0;
    pvVar2 = FUN_0053af20(param_2,local_1cc);
    if (pvVar2 != (HANDLE)0xffffffff) {
      iVar1 = _strncmp(local_1b8,(char *)&DAT_0055e260,1);
      if ((iVar1 != 0) && (iVar1 = _strncmp(local_1b8,&DAT_0055e264,2), iVar1 != 0)) {
        if (*(int *)((int)param_5 + 0x54) == 0) {
          *(undefined4 *)((int)param_5 + 0x90) = 3;
          FUN_004d4550(param_5);
          *(undefined4 *)((int)param_5 + 0x90) = 0;
          *(undefined4 *)((int)param_5 + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)param_5 + 0x50);
          iVar3 = *(int *)((int)param_5 + 0x54) + -1;
          *(int *)((int)param_5 + 0x54) = iVar3;
          *(undefined4 *)(iVar1 + iVar3 * 8) = 8;
          *(char **)(iVar1 + 4 + iVar3 * 8) = local_1b8;
        }
        FUN_004d05e0(param_5,param_3,param_4);
        iVar1 = *(int *)((int)param_5 + 0x6c);
        *(undefined4 *)((int)param_5 + 0x6c) = *(undefined4 *)((int)param_5 + 0x70);
        if (iVar1 != 0) {
          return;
        }
      }
      iVar1 = FUN_0053b050(pvVar2,local_1cc);
      while (iVar1 == 0) {
        iVar1 = _strncmp(local_1b8,(char *)&DAT_0055e260,1);
        if ((iVar1 != 0) && (iVar1 = _strncmp(local_1b8,&DAT_0055e264,2), iVar1 != 0)) {
          if (*(int *)((int)param_5 + 0x54) == 0) {
            *(undefined4 *)((int)param_5 + 0x90) = 3;
            FUN_004d4550(param_5);
            *(undefined4 *)((int)param_5 + 0x90) = 0;
            *(undefined4 *)((int)param_5 + 0xa4) = 0;
          }
          else {
            iVar1 = *(int *)((int)param_5 + 0x50);
            iVar3 = *(int *)((int)param_5 + 0x54) + -1;
            *(int *)((int)param_5 + 0x54) = iVar3;
            *(undefined4 *)(iVar1 + iVar3 * 8) = 8;
            *(char **)(iVar1 + 4 + iVar3 * 8) = local_1b8;
          }
          FUN_004d05e0(param_5,param_3,param_4);
          iVar1 = *(int *)((int)param_5 + 0x6c);
          *(undefined4 *)((int)param_5 + 0x6c) = *(undefined4 *)((int)param_5 + 0x70);
          if (iVar1 != 0) {
            return;
          }
        }
        iVar1 = FUN_0053b050(pvVar2,local_1cc);
      }
    }
    FUN_0053b7b0(local_b4);
  }
  return;
#undef local_1cc
#undef local_1b8
#undef local_b4
}
