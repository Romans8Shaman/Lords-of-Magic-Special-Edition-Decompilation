
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00495900(void *this,int in_stack_4)

{
  if (in_stack_4 == 0) {
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & 0xfffffffe;
  }
  else {
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 1;
    if (-1 < *(int *)((int)this + 0x14)) {
      _DAT_005867b0 = 0;
      _DAT_005867a8 = DAT_00586774;
      DAT_005867a4 = *(undefined4 *)((int)this + 0x14);
      _DAT_005867a0 = 0xffffffff;
      _DAT_005867b4 = 0;
      FUN_00478c00(&DAT_00585408,*(undefined4 *)((int)this + 0x14));
      return;
    }
  }
  return;
}


