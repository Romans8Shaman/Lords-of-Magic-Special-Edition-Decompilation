/* Rebuilt from lomse.exe FUN_00432be0 @ 0x00432be0 (131 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_0044c0c0 ((undefined4 * (__stdcall *)(int, int *))0x0044c0c0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_BarterSlot__ReaquireUnit_____fai_00556000 (*(char (*)[])0x00556000)

#define LOM_SELF_00432be0 1
void __fastcall rb_00432be0(short *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef short * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (-1 < param_1[1]) {
    local_4 = param_1;
    puVar2 = FUN_00485080(&DAT_005aa12c,(int)*param_1,0x2f);
    if (puVar2 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)param_1 + 5);
      if (((cVar1 < '\0') || ((int)puVar2[0x13] <= (int)cVar1)) ||
         ((int)param_1[1] != puVar2[(cVar1 + 3) * 0x13])) {
        puVar2 = (undefined4 *)0x0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        return;
      }
    }
    puVar2 = FUN_0044c0c0((int)param_1[1],(int *)&local_4);
    if (puVar2 == (undefined4 *)0x0) {
      OutputDebugStringA(s_BarterSlot__ReaquireUnit_____fai_00556000);
      *(undefined1 *)(param_1 + 2) = 0;
      return;
    }
    *param_1 = *(short *)(puVar2 + 10);
    *(undefined1 *)((int)param_1 + 5) = (*(uchar *)((uchar *)&local_4 + 0));
  }
  return;
#undef local_4
}
