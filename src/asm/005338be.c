/* Ordinal_130: linker import thunk for STORM.dll!Ordinal_130.
 * IAT slot 0x0054d224; named via .set so the encoding stays jmp *0x0054d224 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_005338be 1
__attribute__((naked)) void rb_005338be(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_130\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_130, 0x0054d224\n");
