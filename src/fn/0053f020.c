/* Rebuilt from lomse.exe FUN_0053f020 @ 0x0053f020 (176 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574a50 (*(DWORD *)0x00574a50)
#define DAT_00574dd0 (*(undefined *)0x00574dd0)
#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)
#define TlsGetValue (*(__typeof__(LPVOID (__stdcall *)(DWORD)) *)0x0054d194) /* KERNEL32.DLL!TlsGetValue via IAT */
#define TlsSetValue (*(__typeof__(BOOL (__stdcall *)(DWORD, LPVOID)) *)0x0054d1e4) /* KERNEL32.DLL!TlsSetValue via IAT */

#define LOM_SELF_0053f020 1
void __cdecl rb_0053f020(undefined *param_1)

{
  if (DAT_00574a50 == 0xffffffff) {
    return;
  }
  if ((param_1 != (undefined *)0x0) ||
     (param_1 = TlsGetValue(DAT_00574a50), param_1 != (undefined *)0x0)) {
    if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x24));
    }
    if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x44));
    }
    if (*(undefined **)(param_1 + 0x50) != &DAT_00574dd0) {
      FUN_0053bce0(*(undefined **)(param_1 + 0x50));
    }
    FUN_0053bce0(param_1);
  }
  TlsSetValue(DAT_00574a50,(LPVOID)0x0);
  return;
}
