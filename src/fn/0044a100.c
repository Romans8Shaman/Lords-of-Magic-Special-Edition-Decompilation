/* HAND-WRITTEN: release this->+0x4a0 (COM vt[0x10] then vt[8]=Release, results logged by FUN_004756f0(hr, msg));
 * MSVC pushed the logger's msg arg BEFORE the COM call (shared push; Ghidra counted it as a COM arg). FUN_0046f360(); return 1. */
#include "lom.h"
#define FUN_004756f0 ((int (__cdecl *)(int, ...))0x004756f0)
#define FUN_0046f360 ((void (__stdcall *)(void))0x0046f360)
#define LOM_SELF_0044a100 1
int __fastcall rb_0044a100(int param_1)
{
  int *p = *(int **)(param_1 + 0x4a0);
  if (p != 0) {
    FUN_004756f0((*(int (__stdcall **)(int *))(*p + 0x10))(p), 0x5568d8);
    p = *(int **)(param_1 + 0x4a0);
    FUN_004756f0((*(int (__stdcall **)(int *))(*p + 8))(p), 0x5568bc);
    *(int **)(param_1 + 0x4a0) = 0;
  }
  FUN_0046f360();
  return 1;
}
