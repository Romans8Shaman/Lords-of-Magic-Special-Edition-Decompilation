
uint FUN_00505a70(void)

{
  ushort uVar1;
  
  uVar1 = GetAsyncKeyState(0x11);
  if (uVar1 == 0) {
    return 0;
  }
  return (uint)(uVar1 >> 0xf);
}


