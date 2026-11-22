/* Rebuilt from lomse.exe FUN_0053cbb0 @ 0x0053cbb0 (118 bytes). HAND (2026-11-13, was asmfn):
 * CRT _lock(locknum): create the critical section on first use (under _LOCKTAB_LOCK 0x11, _amsg_exit(0x11) if
 * _malloc_crt fails), then EnterCriticalSection(_locktable[locknum]). eax = the import's return. */
#include "lom.h"

#define DAT_00574980 ((void **)0x00574980)
#define FUN_0053c1f0 ((void *(__cdecl *)(uint))0x0053c1f0)
#define FUN_0053c470 ((void (__cdecl *)(int))0x0053c470)
#define FUN_0053cbb0 ((void (__cdecl *)(int))0x0053cbb0)
#define FUN_0053bce0 ((void (__cdecl *)(void *))0x0053bce0)
#define FUN_0053cc30 ((void (__cdecl *)(int))0x0053cc30)
#define InitializeCriticalSection_r (*(__typeof__(void (__stdcall *)(void *)) *)0x0054d0e4)
#define EnterCriticalSection_r (*(__typeof__(int (__stdcall *)(void *)) *)0x0054d0d8)

#define LOM_SELF_0053cbb0 1
int __cdecl rb_0053cbb0(int n)
{
  if (DAT_00574980[n] == 0) {
    void *p = FUN_0053c1f0(0x18);
    if (p == 0) FUN_0053c470(0x11);
    FUN_0053cbb0(0x11);
    if (DAT_00574980[n] == 0) {
      InitializeCriticalSection_r(p);
      DAT_00574980[n] = p;
    } else {
      FUN_0053bce0(p);
    }
    FUN_0053cc30(0x11);
  }
  return EnterCriticalSection_r(DAT_00574980[n]);
}
