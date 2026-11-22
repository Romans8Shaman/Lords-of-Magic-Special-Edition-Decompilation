/* Ordinal_401: linker import thunk for STORM.dll!Ordinal_401.
 * IAT slot 0x0054d258; named via .set so the encoding stays jmp *0x0054d258 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_00533864 1
__attribute__((naked)) void rb_00533864(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_401\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_401, 0x0054d258\n");
