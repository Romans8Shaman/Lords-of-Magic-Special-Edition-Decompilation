/* HAND-WRITTEN: GS op setmargin: pop tagged value -> float DAT_005a79ec (1 int, 2 int*scale@0054d818, 4 raw float). */
#include "lom.h"
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define LOM_SELF_0046b510 1
void __cdecl rb_0046b510(void *vm)
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
  case 1: *(float *)0x5a79ec = (float)(float10)val; return;
  case 2: *(float *)0x5a79ec = (float)((float10)val * (float10)*(double *)0x54d818); return;
  case 4: *(int *)0x5a79ec = val; return;
  }
  *(int *)(t + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(int *)(t + 0x90) = 0;
  *(int *)(t + 0xa4) = 0;
}
