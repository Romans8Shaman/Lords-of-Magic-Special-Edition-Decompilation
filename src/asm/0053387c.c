/* Ordinal_116: linker import thunk for STORM.dll!Ordinal_116.
 * IAT slot 0x0054d254; named via .set so the encoding stays jmp *0x0054d254 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_0053387c 1
__attribute__((naked)) void rb_0053387c(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_116\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_116, 0x0054d254\n");
