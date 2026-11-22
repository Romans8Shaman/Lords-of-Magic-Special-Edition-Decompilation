
undefined4 __thiscall FUN_0044f190(void *this,int param_1)

{
  if ((param_1 < 0) || (8 < param_1)) {
    OutputDebugStringA(s_City__GetBuildingLevel___invalid_00557390);
    return 0;
  }
  return *(undefined4 *)((int)this + param_1 * 0x44 + 0xd4);
}


