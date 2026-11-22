
bool __thiscall FUN_0044a050(void *this)

{
  uint *puVar1;
  char *_Source;
  int iVar2;
  uint auStack_80 [32];
  
  (/*IC:0044a05d*/**(code **)(*(int *)this + 0x48))();
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x2c8)) {
    _Source = (char *)((int)this + 0x134);
    do {
      _strncpy((char *)auStack_80,_Source,0x80);
      FUN_0053a5e0((char *)auStack_80);
      puVar1 = FUN_0053a560(auStack_80,&DAT_005568b8);
      if (puVar1 != (uint *)0x0) {
        *(int *)((int)this + 0x49c) = iVar2;
        break;
      }
      iVar2 = iVar2 + 1;
      _Source = _Source + 0x32;
    } while (iVar2 < *(int *)((int)this + 0x2c8));
  }
  *(undefined4 *)((int)this + 0xd4) = 1;
  *(undefined4 *)((int)this + 0x390) = 1;
  *(undefined4 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0x36c) = 0;
  return *(int *)((int)this + 0x49c) != -1;
}


