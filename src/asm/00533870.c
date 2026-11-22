/* Ordinal_101: linker import thunk for STORM.dll!Ordinal_101.
 * IAT slot 0x0054d25c; named via .set so the encoding stays jmp *0x0054d25c (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_00533870 1
__attribute__((naked)) void rb_00533870(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_101\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_101, 0x0054d25c\n");
