/* Ordinal_103: linker import thunk for STORM.dll!Ordinal_103.
 * IAT slot 0x0054d250; named via .set so the encoding stays jmp *0x0054d250 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_00533882 1
__attribute__((naked)) void rb_00533882(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_103\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_103, 0x0054d250\n");
