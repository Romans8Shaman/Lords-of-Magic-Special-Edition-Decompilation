
void __thiscall FUN_00474f30(void *this,int param_1)

{
  int *piVar1;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_24;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  local_6c = 0x6c;
  local_24 = 0x20;
  piVar1 = *(int **)((int)this + param_1 * 4 + 0x684);
  local_68 = 0x1000;
  (/*IC:00474f61*/**(code **)(*piVar1 + 0x58))(piVar1,&local_6c);
  if ((uStack_14 | 0x1f) != 0x1f) {
    *(undefined4 *)((int)this + 0x904) = 0xb;
    *(undefined4 *)((int)this + 0x90c) = 6;
    *(undefined4 *)((int)this + 0x914) = 0;
    *(undefined1 *)((int)this + 0x908) = 3;
    *(undefined1 *)((int)this + 0x910) = 3;
    *(undefined1 *)((int)this + 0x918) = 2;
    *(undefined2 *)((int)this + 0x91a) = 0xf800;
    *(undefined2 *)((int)this + 0x91c) = 0x7c0;
    *(undefined2 *)((int)this + 0x91e) = 0x3f;
    return;
  }
  if ((uStack_18 | 0x3e0) != 0x3e0) {
    *(undefined4 *)((int)this + 0x904) = 0xb;
    *(undefined4 *)((int)this + 0x90c) = 5;
    *(undefined4 *)((int)this + 0x914) = 0;
    *(undefined1 *)((int)this + 0x908) = 3;
    *(undefined1 *)((int)this + 0x910) = 2;
    *(undefined1 *)((int)this + 0x918) = 3;
    *(undefined2 *)((int)this + 0x91a) = 0xf800;
    *(undefined2 *)((int)this + 0x91c) = 0x7e0;
    *(undefined2 *)((int)this + 0x91e) = 0x1f;
    return;
  }
  *(undefined4 *)((int)this + 0x904) = 10;
  *(undefined4 *)((int)this + 0x90c) = 5;
  *(undefined4 *)((int)this + 0x914) = 0;
  if ((uStack_1c | 0x7c00) == 0x7c00) {
    *(undefined2 *)((int)this + 0x91a) = 0x7c00;
    *(undefined1 *)((int)this + 0x908) = 3;
    *(undefined1 *)((int)this + 0x910) = 3;
    *(undefined1 *)((int)this + 0x918) = 3;
  }
  else {
    *(undefined1 *)((int)this + 0x908) = 2;
    *(undefined1 *)((int)this + 0x910) = 3;
    *(undefined1 *)((int)this + 0x918) = 3;
    *(undefined2 *)((int)this + 0x91a) = 0xfc00;
  }
  *(undefined2 *)((int)this + 0x91c) = 0x3e0;
  *(undefined2 *)((int)this + 0x91e) = 0x1f;
  return;
}


