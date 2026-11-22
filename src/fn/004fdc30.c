/* Rebuilt from lomse.exe FUN_004fdc30 @ 0x004fdc30 (11 bytes). HAND (2026-11-13, was asmfn):
 * thiscall thunk: `add ecx, 0x2f4; jmp 0051bc30`. 0051bc30 is an empty method (`ret`, no stack args),
 * so the tail jump forwards no arguments: a plain thiscall on the member object at +0x2f4. */
#include "lom.h"

#define FUN_0051bc30 ((void (__thiscall *)(void *))0x0051bc30)

#define LOM_SELF_004fdc30 1
void __thiscall rb_004fdc30(void *this)
{
  FUN_0051bc30((char *)this + 0x2f4);
}
