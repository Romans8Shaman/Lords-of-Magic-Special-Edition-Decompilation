/* Ordinal_105: linker import thunk for STORM.dll!Ordinal_105.
 * IAT slot 0x0054d248; named via .set so the encoding stays jmp *0x0054d248 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_0053388e 1
__attribute__((naked)) void rb_0053388e(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_105\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_105, 0x0054d248\n");
