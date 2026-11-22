
undefined4 * __thiscall
FUN_0047eb20(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  
  FUN_00539ff0((int)this + 0x10,0x1c,0x100,&LAB_0047f4e0,FUN_0047f510);
  DAT_0058341c = DAT_0058341c + 0x1c14;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x1c10) = 0;
  puVar1 = (undefined1 *)((int)this + 0x2a);
  iVar2 = 0x100;
  do {
    *(undefined4 *)(puVar1 + -0x1a) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x1c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return this;
}


