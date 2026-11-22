/* Ordinal_121: linker import thunk for STORM.dll!Ordinal_121.
 * IAT slot 0x0054d238; named via .set so the encoding stays jmp *0x0054d238 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_005338b2 1
__attribute__((naked)) void rb_005338b2(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_121\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_121, 0x0054d238\n");
