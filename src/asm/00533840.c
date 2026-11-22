/* DirectDrawCreate: linker import thunk for DDRAW.dll!DirectDrawCreate.
 * IAT slot 0x0054d010; named via .set so the encoding stays jmp *0x0054d010 (original 6 bytes).
 * Must target lomse.exe's IAT, not a harness-DLL import. */
#include "lom.h"
#define LOM_SELF_00533840 1
__attribute__((naked)) void rb_00533840(void)
{
  __asm__(
    "jmp *__imp_DDRAW_DirectDrawCreate\n"
  );
}
__asm__(".set __imp_DDRAW_DirectDrawCreate, 0x0054d010\n");
