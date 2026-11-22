/* Ordinal_118: linker import thunk for STORM.dll!Ordinal_118.
 * IAT slot 0x0054d240; named via .set so the encoding stays jmp *0x0054d240 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_00533888 1
__attribute__((naked)) void rb_00533888(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_118\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_118, 0x0054d240\n");
