/* Rebuilt from lomse.exe FUN_004c5950 @ 0x004c5950 (325 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(int *)0x005aa12c)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c5950 1
undefined4 __thiscall rb_004c5950(void *this, int *volatile param_1)

{
  int *piVar1;
  char *pcVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  piVar1 = param_1;
  local_4 = this;
  if (DAT_005aa12c < 0x39) {
    FUN_005397f0((char *)&local_4,4,1,param_1);
    *(undefined1 *)((int)this + 8) = (*(uchar *)((uchar *)&local_4 + 0));
    *(undefined1 *)((int)this + 9) = (*(uchar *)((uchar *)&local_4 + 0));
  }
  else {
    FUN_005397f0((char *)((int)this + 8),1,1,param_1);
    FUN_005397f0((char *)((int)this + 9),1,1,piVar1);
  }
  FUN_005397f0((char *)&param_1,1,1,piVar1);
  if ((char)param_1 != '\0') {
    if (*(int *)((int)this + 0xc) != 0) {
      Ordinal_403(*(int *)((int)this + 0xc),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    pcVar2 = (char *)Ordinal_401((uint)param_1 & 0xff,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(char **)((int)this + 0xc) = pcVar2;
    FUN_005397f0(pcVar2,(uint)param_1 & 0xff,1,piVar1);
  }
  FUN_005397f0((char *)((int)this + 0x10),4,1,piVar1);
  FUN_005397f0((char *)((int)this + 0x18),0x40,1,piVar1);
  FUN_005397f0((char *)((int)this + 0x58),0x40,1,piVar1);
  FUN_005397f0((char *)((int)this + 0x98),0x40,1,piVar1);
  FUN_005397f0((char *)((int)this + 0xd8),0x40,1,piVar1);
  FUN_005397f0((char *)((int)this + 0x118),0x40,1,piVar1);
  FUN_005397f0((char *)((int)this + 0x158),0x40,1,piVar1);
  return 1;
#undef local_4
}
