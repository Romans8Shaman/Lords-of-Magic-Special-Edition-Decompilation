/* Ordinal_104: linker import thunk for STORM.dll!Ordinal_104.
 * IAT slot 0x0054d26c; named via .set so the encoding stays jmp *0x0054d26c (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_005338a0 1
__attribute__((naked)) void rb_005338a0(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_104\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_104, 0x0054d26c\n");
