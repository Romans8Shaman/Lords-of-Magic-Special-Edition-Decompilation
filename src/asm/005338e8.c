/* Ordinal_268: linker import thunk for STORM.dll!Ordinal_268.
 * IAT slot 0x0054d21c; named via .set so the encoding stays jmp *0x0054d21c (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_005338e8 1
__attribute__((naked)) void rb_005338e8(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_268\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_268, 0x0054d21c\n");
