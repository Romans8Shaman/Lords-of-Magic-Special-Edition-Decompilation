
void __thiscall FUN_004f2f70(void *this,uint param_1)

{
  if (*(int *)((int)this + 0x40) != 0) {
    *(uint *)((int)this + 0x44) =
         *(int *)(*(int *)((int)this + 0x40) + 0xc) + (param_1 & 0xffff) * 8;
  }
  return;
}


