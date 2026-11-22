/* Ordinal_269: linker import thunk for STORM.dll!Ordinal_269.
 * IAT slot 0x0054d220; named via .set so the encoding stays jmp *0x0054d220 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_005338dc 1
__attribute__((naked)) void rb_005338dc(void)
{
  __asm__(
    "jmp *__imp_STORM_Ordinal_269\n"
  );
}
__asm__(".set __imp_STORM_Ordinal_269, 0x0054d220\n");
