/* Rebuilt from lomse.exe @ 0x0047c800 (__stdcall thread proc, never returns): AI worker thread.
 * Waits forever on the event at ctx+0x228b4, enters the critical section ctx+0x22928, marks ctx+0x22924 busy and
 * drains the job queue ctx+0x228bc (0047bfb0 pops into the job record 00583308), dispatching each job by the
 * DAT_005833f4 flags (0x100 -> 0047c350, 1 -> 0047c370, 2 -> 0047c280, else 0047c040), then clears busy and leaves.
 * Hand-written from the disassembly. Behaviour-match target, not byte-match. */
#include "lom.h"

#define WaitForSingleObject (*(__typeof__(DWORD (__stdcall *)(HANDLE, DWORD)) *)0x0054d0c4) /* KERNEL32.DLL!WaitForSingleObject via IAT */
#define EnterCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0d8) /* KERNEL32.DLL!EnterCriticalSection via IAT */
#define LeaveCriticalSection (*(__typeof__(void (__stdcall *)(LPCRITICAL_SECTION)) *)0x0054d0dc) /* KERNEL32.DLL!LeaveCriticalSection via IAT */
#define DAT_005833f4 (*(volatile uint *)0x005833f4)
#define JOB ((int *)0x00583308)
#define FUN_0047bfb0 ((int (__thiscall *)(void *, int *))0x0047bfb0)
#define FUN_0047c350 ((void (__thiscall *)(void *))0x0047c350)
#define FUN_0047c370 ((void (__thiscall *)(void *, int *))0x0047c370)
#define FUN_0047c280 ((void (__thiscall *)(void *, int *))0x0047c280)
#define FUN_0047c040 ((void (__thiscall *)(void *, int *))0x0047c040)

#define LOM_SELF_0047c800 1
DWORD __stdcall rb_0047c800(char *param_1)
{
  void *q = param_1 + 0x228bc;
  LPCRITICAL_SECTION cs = (LPCRITICAL_SECTION)(param_1 + 0x22928);
  uint f;

  for (;;) {
    while (WaitForSingleObject(*(HANDLE *)(param_1 + 0x228b4), 0xffffffff) == 0x102) { }
    EnterCriticalSection(cs);
    *(volatile int *)(param_1 + 0x22924) = 1;
    if (FUN_0047bfb0(q, JOB) != 0) {
      do {
        f = DAT_005833f4;
        if ((f & 0x100) != 0) FUN_0047c350(q);
        else if ((f & 1) != 0) FUN_0047c370(q, JOB);
        else if ((f & 2) != 0) FUN_0047c280(q, JOB);
        else FUN_0047c040(q, JOB);
      } while (FUN_0047bfb0(q, JOB) != 0);
    }
    *(volatile int *)(param_1 + 0x22924) = 0;
    LeaveCriticalSection(cs);
  }
}
