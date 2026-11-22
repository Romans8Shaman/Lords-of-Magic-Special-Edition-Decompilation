
uint __cdecl FUN_005438e0(uint in_stack_4,uint in_stack_8)

{
  uint uVar1;
  undefined4 in_ECX;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)in_ECX >> 0x10),in_FPUControlWord);
  uVar1 = FUN_00543940(local_8);
  uVar1 = in_stack_8 & in_stack_4 | ~in_stack_8 & uVar1;
  FUN_005439e0(uVar1);
  return uVar1;
}


