/* Ordinal_127: linker import thunk for STORM.dll!Ordinal_127.
 * IAT slot 0x0054d234; named via .set so the encoding stays jmp *0x0054d234 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_005338b8 1
__attribute__((naked)) void rb_005338b8(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_127\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_127, 0x0054d234\n");
