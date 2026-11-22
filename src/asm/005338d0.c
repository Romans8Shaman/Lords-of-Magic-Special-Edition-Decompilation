/* Ordinal_252: linker import thunk for STORM.dll!Ordinal_252.
 * IAT slot 0x0054d210; named via .set so the encoding stays jmp *0x0054d210 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_005338d0 1
__attribute__((naked)) void rb_005338d0(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_252\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_252, 0x0054d210\n");
