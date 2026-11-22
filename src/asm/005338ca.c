/* Ordinal_114: linker import thunk for STORM.dll!Ordinal_114.
 * IAT slot 0x0054d218; named via .set so the encoding stays jmp *0x0054d218 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_005338ca 1
__attribute__((naked)) void rb_005338ca(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_114\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_114, 0x0054d218\n");
