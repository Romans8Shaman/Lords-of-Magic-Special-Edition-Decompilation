/* Ordinal_102: linker import thunk for STORM.dll!Ordinal_102.
 * IAT slot 0x0054d260; named via .set so the encoding stays jmp *0x0054d260 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_0053386a 1
__attribute__((naked)) void rb_0053386a(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_102\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_102, 0x0054d260\n");
