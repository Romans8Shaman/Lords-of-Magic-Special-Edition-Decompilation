/* Rebuilt from lomse.exe FUN_004fed50 @ 0x004fed50 (131 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match.
 * v1.2: the original chdirs to CDPath, FindFirstFile("lomse.dat"), and
 * GetDriveType. lomse.dat is a CD token and is not in the Steam install;
 * SetCurrentDirectory on an empty optical drive also raises the Windows
 * "Please insert a disk / CD-ROM" dialog. Always succeed and do not
 * touch any drive. Game data is read from the exe folder (see 004fec80). */
#include "lom.h"

#define FUN_0053af20 ((HANDLE (__cdecl *)(LPCSTR, uint *))0x0053af20)
#define FUN_0053b7b0 ((undefined4 (__cdecl *)(LPCSTR))0x0053b7b0)
#define FUN_0053b850 ((char * (__cdecl *)(char *, uint))0x0053b850)
#define GetDriveTypeA (*(__typeof__(UINT (__stdcall *)(LPCSTR)) *)0x0054d0b0) /* KERNEL32.DLL!GetDriveTypeA via IAT */
#define s_lomse_dat_005734c4 (*(char (*)[])0x005734c4)

#define LOM_SELF_004fed50 1
undefined4 __fastcall rb_004fed50(int param_1)

{
  uchar _fr[0x228] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef char _t_local_21c[260];
  typedef uint _t_local_118[70];
#define local_21c (*(_t_local_21c *)(_fr + 0x4))
#define local_118 (*(_t_local_118 *)(_fr + 0x108))
  
  /* v1.2: do not probe lomse.dat or change directory onto a CD. */
  (void)param_1;
  (void)local_21c;
  (void)local_118;
  return 1;
#undef local_21c
#undef local_118
}
