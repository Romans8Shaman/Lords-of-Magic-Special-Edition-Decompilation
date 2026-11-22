
void __thiscall FUN_004b3cb0(void *this,uint param_1)

{
  if (param_1 != *(uint *)((int)this + 0x1358)) {
    *(uint *)((int)this + 0x1358) = param_1;
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x123c) = 2;
    }
    if ((int)param_1 < 0) {
      *(undefined4 *)((int)this + 0x123c) = 0;
    }
    if (0 < (int)param_1) {
      *(undefined4 *)((int)this + 0x123c) = 1;
    }
    *(undefined1 *)((int)this + 0x1345) = 0;
    *(uint *)((int)this + 0x1240) = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
    if (*(int *)((int)this + 0xfb0) != 0) {
      FUN_004b3a40((int)this);
      return;
    }
    FUN_004b3ac0((int)this);
  }
  return;
}


