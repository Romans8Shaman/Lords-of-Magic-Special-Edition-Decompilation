/* Ordinal_403: linker import thunk for STORM.dll!Ordinal_403.
 * IAT slot 0x0054d268; named via .set so the encoding stays jmp *0x0054d268 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_0053385e 1
__attribute__((naked)) void rb_0053385e(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_403\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_403, 0x0054d268\n");
