/* Rebuilt from lomse.exe FUN_0044c630 @ 0x0044c630 (415 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define CreateDirectoryA (*(__typeof__(BOOL (__stdcall *)(LPCSTR, LPSECURITY_ATTRIBUTES)) *)0x0054d0bc) /* KERNEL32.DLL!CreateDirectoryA via IAT */
#define DAT_005572ec (*(undefined *)0x005572ec)
#define DAT_0055b1b0 (*(int *)0x0055b1b0)
#define DAT_005aa12c (*(int *)0x005aa12c)
#define DAT_005af0f4 (*(undefined4 *)0x005af0f4)
#define DAT_005d22f0 (*(undefined1 *)0x005d22f0)
#define FUN_00411610 ((undefined4 * (__fastcall *)(undefined4 *))0x00411610)
#define FUN_005394d0 ((undefined4 (__cdecl *)(int *))0x005394d0)
#define FUN_00539610 ((undefined4 (__cdecl *)(LPCSTR, char *))0x00539610)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_custldr_005572e4 (*(char (*)[])0x005572e4)
#define s_custldr__s_005572d8 (*(char (*)[])0x005572d8)

#define LOM_SELF_0044c630 1
undefined4 __thiscall rb_0044c630(void *this,uint param_1)

{
  int *a1;
  undefined4 *puVar1;
  int *this_00;

  CreateDirectoryA(s_custldr_005572e4,(LPSECURITY_ATTRIBUTES)0x0);
  FUN_0053a090(&DAT_005d22f0,s_custldr__s_005572d8,param_1);
  a1 = (int *)FUN_00539610(&DAT_005d22f0,&DAT_005572ec);
  if (a1 == (int *)0x0) {
    return 0;
  }
  FUN_005397f0((char *)((int)this + 0x58),0x2a0,1,a1);
  FUN_005397f0((char *)((int)this + 0x2f8),0x78,1,a1);
  FUN_005397f0((char *)((int)this + 0x40),4,1,a1);
  FUN_005397f0((char *)((int)this + 0x44),4,1,a1);
  FUN_005397f0((char *)((int)this + 0x38),4,1,a1);
  DAT_005aa12c = DAT_0055b1b0;
  puVar1 = (undefined4 *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = FUN_00411610(puVar1);
  }
  *(int **)this = this_00;
  ((undefined4 (__thiscall *)(__typeof__(this_00), __typeof__(a1)))(**(code **)(*this_00 + 0x24)))(this_00,a1);
  if (0x66 < DAT_0055b1b0) {
    FUN_005397f0((char *)((int)this + 0x54),4,1,a1);
    FUN_005397f0((char *)((int)this + 0x4c),4,1,a1);
    FUN_005397f0((char *)((int)this + 0x50),4,1,a1);
    FUN_005397f0((char *)((int)this + 0x48),4,1,a1);
  }
  if (0x6c < DAT_0055b1b0) {
    FUN_005397f0((char *)&DAT_005af0f4,4,1,a1);
  }
  FUN_005394d0(a1);
  return 1;
}
