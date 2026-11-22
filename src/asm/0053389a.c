/* Ordinal_117: linker import thunk for STORM.dll!Ordinal_117.
 * IAT slot 0x0054d214; named via .set so the encoding stays jmp *0x0054d214 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_0053389a 1
__attribute__((naked)) void rb_0053389a(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_117\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_117, 0x0054d214\n");
