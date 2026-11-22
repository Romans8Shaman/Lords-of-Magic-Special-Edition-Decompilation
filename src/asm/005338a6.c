/* Ordinal_113: linker import thunk for STORM.dll!Ordinal_113.
 * IAT slot 0x0054d270; named via .set so the encoding stays jmp *0x0054d270 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_005338a6 1
__attribute__((naked)) void rb_005338a6(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_113\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_113, 0x0054d270\n");
