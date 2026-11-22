/* GetCurrentProcessId: linker import thunk for KERNEL32.dll!GetCurrentProcessId.
 * IAT slot 0x0054d148; named via .set so the encoding stays jmp *0x0054d148 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_00542040 1
__attribute__((naked)) void rb_00542040(void)
{
  __asm__(
    "jmp *__imp_KERNEL32_GetCurrentProcessId\n"
  );
}
__asm__(".set __imp_KERNEL32_GetCurrentProcessId, 0x0054d148\n");
