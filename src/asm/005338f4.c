/* Ordinal_468: linker import thunk for STORM.dll!Ordinal_468.
 * IAT slot 0x0054d230; named via .set so the encoding stays jmp *0x0054d230 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_005338f4 1
__attribute__((naked)) void rb_005338f4(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_468\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_468, 0x0054d230\n");
