/* Ordinal_265: linker import thunk for STORM.dll!Ordinal_265.
 * IAT slot 0x0054d274; named via .set so the encoding stays jmp *0x0054d274 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_005338e2 1
__attribute__((naked)) void rb_005338e2(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_265\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_265, 0x0054d274\n");
