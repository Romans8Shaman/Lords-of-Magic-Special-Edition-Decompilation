/* Rebuilt from lomse.exe FUN_004d3f20 @ 0x004d3f20 (306 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055c020 (*(undefined *)0x0055c020)
#define FUN_004d5ca0 ((undefined4 * (__thiscall *)(void *, int, int, undefined4 *, undefined4 *))0x004d5ca0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define FUN_0053b3e0 ((int (__cdecl *)(char *, int *))0x0053b3e0)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_____________________________0055e454 (*(char (*)[])0x0055e454)
#define s____last_error_call_stack____0055e498 (*(char (*)[])0x0055e498)
#define s__d____0055e490 (*(char (*)[])0x0055e490)
#define s__d___s__Line__d_Column__d_0055e474 (*(char (*)[])0x0055e474)

#define LOM_SELF_004d3f20 1
void __thiscall rb_004d3f20(void *this,LPCSTR param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uchar _fr[0x208] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_1fc;
  typedef undefined4 _t_local_1f8;
  typedef char _t_local_1f4[500];
#define local_1fc (*(_t_local_1fc *)(_fr + 0x4))
#define local_1f8 (*(_t_local_1f8 *)(_fr + 0x8))
#define local_1f4 (*(_t_local_1f4 *)(_fr + 0xc))
  
  piVar1 = (int *)FUN_00539610(param_1,&DAT_0055c020);
  FUN_0053a090(local_1f4,s____last_error_call_stack____0055e498);
  if (piVar1 != (int *)0x0) {
    FUN_0053b3e0(local_1f4,piVar1);
  }
  OutputDebugStringA(local_1f4);
  uVar4 = *(int *)((int)this + 0x558) - 1;
  if (-1 < (int)uVar4) {
    piVar3 = (int *)((int)this + uVar4 * 4 + 0x3c8);
    puVar5 = (undefined4 *)((int)this + uVar4 * 8 + 0xa8);
    do {
      if ((char)*puVar5 == '\x06') {
        puVar2 = FUN_004d5ca0(this,puVar5[1],*piVar3,&local_1f8,&local_1fc);
        if (puVar2 == (undefined4 *)0x0) {
          FUN_0053a090(local_1f4,s__d____0055e490,uVar4);
        }
        else {
          FUN_0053a090(local_1f4,s__d___s__Line__d_Column__d_0055e474,uVar4,puVar2,local_1f8,
                       local_1fc);
        }
        if (piVar1 != (int *)0x0) {
          FUN_0053b3e0(local_1f4,piVar1);
        }
        OutputDebugStringA(local_1f4);
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + -2;
      piVar3 = piVar3 + -1;
    } while (-1 < (int)uVar4);
  }
  FUN_0053a090(local_1f4,s_____________________________0055e454);
  OutputDebugStringA(local_1f4);
  if (piVar1 != (int *)0x0) {
    FUN_005394d0(piVar1);
  }
  return;
#undef local_1fc
#undef local_1f8
#undef local_1f4
}
