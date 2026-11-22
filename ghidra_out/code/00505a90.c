
uint FUN_00505a90(void)

{
  ushort uVar1;
  
  uVar1 = GetAsyncKeyState(0x10);
  if (uVar1 == 0) {
    return 0;
  }
  return (uint)(uVar1 >> 0xf);
}


