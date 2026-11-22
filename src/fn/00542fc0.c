/* Rebuilt from lomse.exe FUN_00542fc0 @ 0x00542fc0 (34 bytes). HAND (2026-11-13, was asmfn):
 * CRT _unlock_fhandle(fh): LeaveCriticalSection(&__pioinfo[fh >> 5][fh & 0x1f].lock) (36-byte ioinfo, lock at +0xc).
 * eax is whatever the import left (tail value returned so callers see the same register). */
#include "lom.h"

#define DAT_005d6a20 ((char **)0x005d6a20)
#define LeaveCriticalSection_r (*(__typeof__(int (__stdcall *)(void *)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */

#define LOM_SELF_00542fc0 1
int __cdecl rb_00542fc0(int fh)
{
  return LeaveCriticalSection_r(DAT_005d6a20[fh >> 5] + 0xc + (fh & 0x1f) * 0x24);
}
