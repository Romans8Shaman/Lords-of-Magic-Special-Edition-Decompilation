/* Rebuilt from lomse.exe FUN_004b30e0 @ 0x004b30e0 (417 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_00483010 ((undefined4 (__thiscall *)(void *, LPCSTR, char *, char *))0x00483010)
#define FUN_004b1c20 ((undefined4 (__thiscall *)(void *, char, char, int))0x004b1c20)
#define FUN_004b2310 ((undefined4 (__fastcall *)(int))0x004b2310)
#define FUN_004b54c0 ((undefined4 * (__stdcall *)(void))0x004b54c0)
#define FUN_004b7b50 ((undefined4 (__stdcall *)(undefined4, undefined4))0x004b7b50)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004c03b0 ((undefined4 (__stdcall *)(undefined4, char *))0x004c03b0)
#define _strncmp ((int (__cdecl *)(char *, char *, size_t))0x0053aa30)
#define _strncpy ((char * (__cdecl *)(char *, char *, size_t))0x0053a220)

#define LOM_SELF_004b30e0 1
void __thiscall rb_004b30e0(void *this,char *param_1)

{
  int iVar1;
  int iVar2;
  LPCSTR pCVar3;
  char *pcVar4;
  bool bVar5;
  uchar _fr[0x2f0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_2e4;
  typedef undefined1 _t_local_2e0;
  typedef undefined4 _t_local_2df;
  typedef undefined1 _t_local_2db;
  typedef undefined4 _t_local_2da;
  typedef undefined1 _t_local_2d6;
  typedef undefined4 _t_local_2d5;
  typedef undefined1 _t_local_2d1;
  typedef undefined4 _t_local_2d0;
  typedef undefined1 _t_local_2cc;
  typedef undefined4 _t_local_2cb;
  typedef undefined1 _t_local_2c7;
  typedef undefined4 _t_local_2c6;
  typedef undefined1 _t_local_2c2;
  typedef undefined4 _t_local_2c1;
  typedef undefined1 _t_local_2bd;
  typedef char _t_local_2bc;
  typedef undefined4 _t_local_2b7;
  typedef undefined1 _t_local_2b3;
  typedef char _t_local_240[4];
  typedef char _t_local_23c[572];
#define local_2e4 (*(_t_local_2e4 *)(_fr + 0x4))
#define local_2e0 (*(_t_local_2e0 *)(_fr + 0x8))
#define local_2df (*(_t_local_2df *)(_fr + 0x9))
#define local_2db (*(_t_local_2db *)(_fr + 0xd))
#define local_2da (*(_t_local_2da *)(_fr + 0xe))
#define local_2d6 (*(_t_local_2d6 *)(_fr + 0x12))
#define local_2d5 (*(_t_local_2d5 *)(_fr + 0x13))
#define local_2d1 (*(_t_local_2d1 *)(_fr + 0x17))
#define local_2d0 (*(_t_local_2d0 *)(_fr + 0x18))
#define local_2cc (*(_t_local_2cc *)(_fr + 0x1c))
#define local_2cb (*(_t_local_2cb *)(_fr + 0x1d))
#define local_2c7 (*(_t_local_2c7 *)(_fr + 0x21))
#define local_2c6 (*(_t_local_2c6 *)(_fr + 0x22))
#define local_2c2 (*(_t_local_2c2 *)(_fr + 0x26))
#define local_2c1 (*(_t_local_2c1 *)(_fr + 0x27))
#define local_2bd (*(_t_local_2bd *)(_fr + 0x2b))
#define local_2bc (*(_t_local_2bc *)(_fr + 0x2c))
#define local_2b7 (*(_t_local_2b7 *)(_fr + 0x31))
#define local_2b3 (*(_t_local_2b3 *)(_fr + 0x35))
#define local_240 (*(_t_local_240 *)(_fr + 0xa8))
#define local_23c (*(_t_local_23c *)(_fr + 0xac))
  
  if (DAT_005d1e84 == 0) {
    bVar5 = true;
  }
  else {
    iVar2 = *(int *)(DAT_005d1e84 + 0x390);
    iVar1 = FUN_004b7dd0(DAT_005d1e84);
    bVar5 = iVar2 == iVar1;
  }
  if (bVar5) {
    iVar2 = _strncmp((char *)((int)this + 0x32),param_1,0x32);
    if (iVar2 != 0) {
      _strncpy((char *)((int)this + 0x32),param_1,0x32);
      if (*(char *)((int)this + 0x2d) != '\0') {
        pCVar3 = (LPCSTR)FUN_004b54c0();
        if (pCVar3 != (LPCSTR)0x0) {
          iVar2 = FUN_00483010(&DAT_005aa12c,pCVar3,(char *)&local_2e4,local_240);
          if (iVar2 != 0) {
            *(undefined4 *)this = local_2e4;
            *(undefined1 *)((int)this + 4) = local_2e0;
            *(undefined4 *)((int)this + 5) = local_2df;
            *(undefined1 *)((int)this + 9) = local_2db;
            *(undefined4 *)((int)this + 10) = local_2da;
            *(undefined1 *)((int)this + 0xe) = local_2d6;
            *(undefined4 *)((int)this + 0xf) = local_2d5;
            *(undefined1 *)((int)this + 0x13) = local_2d1;
            *(undefined4 *)((int)this + 0x14) = local_2d0;
            *(undefined1 *)((int)this + 0x18) = local_2cc;
            *(undefined4 *)((int)this + 0x19) = local_2cb;
            *(undefined1 *)((int)this + 0x1d) = local_2c7;
            *(undefined4 *)((int)this + 0x1e) = local_2c6;
            *(undefined1 *)((int)this + 0x22) = local_2c2;
            *(undefined4 *)((int)this + 0x23) = local_2c1;
            *(undefined1 *)((int)this + 0x27) = local_2bd;
            FUN_004b1c20(this,'\b',local_2bc,0);
            *(undefined4 *)((int)this + 0x2d) = local_2b7;
            *(undefined1 *)((int)this + 0x31) = local_2b3;
            if (0x62 < (int)DAT_005aa12c) {
              iVar2 = 0;
              do {
                FUN_004b7b50(iVar2,0xffffffff);
                iVar2 = iVar2 + 1;
              } while (iVar2 < 0x10);
              iVar2 = 0;
              pcVar4 = local_23c;
              do {
                FUN_004b7b50(iVar2,*(undefined4 *)(pcVar4 + -4));
                FUN_004c03b0(iVar2,pcVar4);
                iVar2 = iVar2 + 1;
                pcVar4 = pcVar4 + 0x24;
              } while (iVar2 < 0x10);
            }
          }
        }
      }
      FUN_004b2310(0x5aa12c);
    }
  }
  return;
#undef local_2e4
#undef local_2e0
#undef local_2df
#undef local_2db
#undef local_2da
#undef local_2d6
#undef local_2d5
#undef local_2d1
#undef local_2d0
#undef local_2cc
#undef local_2cb
#undef local_2c7
#undef local_2c6
#undef local_2c2
#undef local_2c1
#undef local_2bd
#undef local_2bc
#undef local_2b7
#undef local_2b3
#undef local_240
#undef local_23c
}
