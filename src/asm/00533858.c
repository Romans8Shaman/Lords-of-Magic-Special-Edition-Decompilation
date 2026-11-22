/* Ordinal_1: linker import thunk for DSOUND.dll!Ordinal_1.
 * IAT slot 0x0054d028; named via .set so the encoding stays jmp *0x0054d028 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_00533858 1
__attribute__((naked)) void rb_00533858(void)
{
  __asm__(
    "jmp *__imp_DSOUND_Ordinal_1\n"
  );
}
__asm__(".set __imp_DSOUND_Ordinal_1, 0x0054d028\n");
