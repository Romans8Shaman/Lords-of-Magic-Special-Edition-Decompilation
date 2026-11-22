/* Ordinal_109: linker import thunk for STORM.dll!Ordinal_109.
 * IAT slot 0x0054d23c; named via .set so the encoding stays jmp *0x0054d23c (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_005338ac 1
__attribute__((naked)) void rb_005338ac(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_109\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_109, 0x0054d23c\n");
