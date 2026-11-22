/* RtlUnwind: linker import thunk for KERNEL32.dll!RtlUnwind.
 * IAT slot 0x0054d1e8; named via .set so the encoding stays jmp *0x0054d1e8 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_00548e00 1
__attribute__((naked)) void rb_00548e00(void)
{
  __asm__(
    "jmp *__imp_KERNEL32_RtlUnwind\n"
  );
}
__asm__(".set __imp_KERNEL32_RtlUnwind, 0x0054d1e8\n");
