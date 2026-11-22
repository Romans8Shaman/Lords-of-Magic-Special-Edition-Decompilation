/* Ordinal_301: linker import thunk for STORM.dll!Ordinal_301.
 * IAT slot 0x0054d244; named via .set so the encoding stays jmp *0x0054d244 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_00533894 1
__attribute__((naked)) void rb_00533894(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_301\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_301, 0x0054d244\n");
