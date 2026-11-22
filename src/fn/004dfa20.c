/* HAND-WRITTEN: GS op setmultilevelconquered: pop tagged value -> int DAT_005cd1ec (1 int, 2 fixed>>8, 4 (int)float). */
#include "lom.h"
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define LOM_SELF_004dfa20 1
void __cdecl rb_004dfa20(void *vm)
{
  char *t = (char *)vm;
  int sp = *(int *)(t + 0x54), tag, val = 0;
  if (sp < *(int *)(t + 0x58)) {
    int *e = *(int **)(t + 0x50);
    sp++;
    *(int *)(t + 0x54) = sp;
    tag = e[sp * 2 - 2];
    val = e[sp * 2 - 1];
  } else {
    *(int *)(t + 0x90) = 6;
    FUN_004d4550(vm);
    *(int *)(t + 0x90) = 0;
    *(int *)(t + 0xa4) = 0;
    tag = 0;
  }
  switch (tag & 0xff) {
  case 1: *(int *)0x5cd1ec = val; return;
  case 2: *(int *)0x5cd1ec = val >> 8; return;
  case 4: *(int *)0x5cd1ec = (int)(longlong)(float10)*(float *)&val; return;
  }
  *(int *)(t + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(int *)(t + 0x90) = 0;
  *(int *)(t + 0xa4) = 0;
}
