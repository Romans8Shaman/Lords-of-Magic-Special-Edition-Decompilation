
void __thiscall FUN_004feac0(void *this,uint param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = VirtualAlloc((LPVOID)0x0,(param_1 & 3) + param_1,0x2000,4);
  *(LPVOID *)((int)this + 0x128) = pvVar1;
  return;
}


