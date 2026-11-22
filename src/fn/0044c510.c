/* Rebuilt from lomse.exe FUN_0044c510 @ 0x0044c510 (279 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CreateDirectoryA (*(__typeof__(BOOL (__stdcall *)(LPCSTR, LPSECURITY_ATTRIBUTES)) *)0x0054d0bc) /* KERNEL32.DLL!CreateDirectoryA via IAT */
#define DAT_00556168 (*(undefined *)0x00556168)
#define DAT_005af0f4 (*(undefined4 *)0x005af0f4)
#define DAT_005d22f0 (*(undefined1 *)0x005d22f0)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s_custldr_005572e4 (*(char (*)[])0x005572e4)
#define s_custldr__s_005572d8 (*(char (*)[])0x005572d8)

#define LOM_SELF_0044c510 1
undefined4 __thiscall rb_0044c510(void *this,uint param_1)

{
  int *a1;
  
  CreateDirectoryA(s_custldr_005572e4,(LPSECURITY_ATTRIBUTES)0x0);
  FUN_0053a090(&DAT_005d22f0,s_custldr__s_005572d8,param_1);
  a1 = (int *)FUN_00539610(&DAT_005d22f0,&DAT_00556168);
  if (a1 == (int *)0x0) {
    return 0;
  }
  FUN_00539660((char *)((int)this + 0x58),0x2a0,1,a1);
  FUN_00539660((char *)((int)this + 0x2f8),0x78,1,a1);
  FUN_00539660((char *)((int)this + 0x40),4,1,a1);
  FUN_00539660((char *)((int)this + 0x44),4,1,a1);
  FUN_00539660((char *)((int)this + 0x38),4,1,a1);
  ((undefined4 (__thiscall *)(__typeof__(*(int **)this), __typeof__(a1)))(**(code **)(**(int **)this + 0x20)))(*(int **)this,a1);
  FUN_00539660((char *)((int)this + 0x54),4,1,a1);
  FUN_00539660((char *)((int)this + 0x4c),4,1,a1);
  FUN_00539660((char *)((int)this + 0x50),4,1,a1);
  FUN_00539660((char *)((int)this + 0x48),4,1,a1);
  FUN_00539660((char *)&DAT_005af0f4,4,1,a1);
  FUN_005394d0(a1);
  return 1;
}
