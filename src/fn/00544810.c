/* Rebuilt from lomse.exe FUN_00544810 @ 0x00544810 (108 bytes, __cdecl).
 * Full body 0x00544810-0x0054487b, including the internal jmp 00544843 /
 * xor-else 00544845 / continuation 00544847 that Ghidra split off.
 * Behaviour-match, not byte-match. */
#include "lom.h"

#ifndef LOM_00544810_NATIVE
#define DAT_005d6b28 (*(int *)0x005d6b28)
#define DAT_005d6b2c (*(undefined *)0x005d6b2c)
#define FUN_0053cbb0 ((undefined4 (__cdecl *)(int))0x0053cbb0)
#define FUN_0053cc30 ((undefined4 (__cdecl *)(int))0x0053cc30)
#define FUN_00544880 ((int (__cdecl *)(LPSTR, WCHAR))0x00544880)
#define InterlockedDecrement (*(__typeof__(LONG (__stdcall *)(LONG *)) *)0x0054d1f0) /* KERNEL32.DLL!InterlockedDecrement via IAT */
#define InterlockedIncrement (*(__typeof__(LONG (__stdcall *)(LONG *)) *)0x0054d1e0) /* KERNEL32.DLL!InterlockedIncrement via IAT */
#else
extern int g_lock_flag;
extern volatile LONG g_lock_count;
int stub_0053cbb0(int a);
int stub_0053cc30(int a);
int stub_00544880(char *p, unsigned short w);
LONG __stdcall stub_InterlockedIncrement(LONG *p);
LONG __stdcall stub_InterlockedDecrement(LONG *p);
#define DAT_005d6b28 (g_lock_flag)
#define DAT_005d6b2c (*(undefined *)(void *)&g_lock_count)
#define FUN_0053cbb0 stub_0053cbb0
#define FUN_0053cc30 stub_0053cc30
#define FUN_00544880 stub_00544880
#define InterlockedDecrement stub_InterlockedDecrement
#define InterlockedIncrement stub_InterlockedIncrement
#endif

#define LOM_SELF_00544810 1
int __cdecl rb_00544810(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_005d6b2c);
  bVar2 = DAT_005d6b28 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_005d6b2c);
    FUN_0053cbb0(0x13);
  }
  iVar1 = FUN_00544880(param_1,param_2);
  if (bVar2) {
    FUN_0053cc30(0x13);
    return iVar1;
  }
  InterlockedDecrement((LONG *)&DAT_005d6b2c);
  return iVar1;
}
