/* Ordinal_2: linker import thunk for DPLAYX.dll!Ordinal_2.
 * IAT slot 0x0054d01c; named via .set so the encoding stays jmp *0x0054d01c (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_0053384c 1
__attribute__((naked)) void rb_0053384c(void)
{
  __asm__(
    "jmp *__imp_DPLAYX_Ordinal_2\n"
  );
}
__asm__(".set __imp_DPLAYX_Ordinal_2, 0x0054d01c\n");
