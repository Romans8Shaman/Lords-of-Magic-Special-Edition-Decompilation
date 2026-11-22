/* Ordinal_123: linker import thunk for STORM.dll!Ordinal_123.
 * IAT slot 0x0054d24c; named via .set so the encoding stays jmp *0x0054d24c (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_00533876 1
__attribute__((naked)) void rb_00533876(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_123\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_123, 0x0054d24c\n");
