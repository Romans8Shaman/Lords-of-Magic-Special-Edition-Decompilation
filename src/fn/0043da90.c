/* HAND-WRITTEN: GS VM pop of a tagged value into *param_1 (tag 1 int, 2 fixed 24.8, 4 float); underflow -> error 6, bad tag -> error 14. */
#include "lom.h"
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define LOM_SELF_0043da90 1
int __thiscall rb_0043da90(void *this, int *param_1)
{
  char *t = (char *)this;
  int sp = *(int *)(t + 0x54), tag, val = 0;
  if (sp < *(int *)(t + 0x58)) {
    int *e = *(int **)(t + 0x50);
    sp++;
    *(int *)(t + 0x54) = sp;
    tag = e[sp * 2 - 2];
    val = e[sp * 2 - 1];
  } else {
    *(int *)(t + 0x90) = 6;
    FUN_004d4550(this);
    *(int *)(t + 0x90) = 0;
    *(int *)(t + 0xa4) = 0;
    tag = 0;
  }
  switch (tag & 0xff) {
  case 1: *param_1 = val; return 1;
  case 2: *param_1 = val >> 8; return 1;
  case 4: *param_1 = (int)(longlong)(float10)*(float *)&val; return 1;
  }
  *(int *)(t + 0x90) = 0xe;
  FUN_004d4550(this);
  *(int *)(t + 0x90) = 0;
  *(int *)(t + 0xa4) = 0;
  return 0;
}
