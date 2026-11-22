
void __thiscall FUN_0047a770(void *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_005832f0 = DAT_005832f0 + -0xd0;
  puVar2 = this;
  for (iVar1 = 0x32; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
  }
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)((int)this + 0xcc) = 0;
  return;
}


