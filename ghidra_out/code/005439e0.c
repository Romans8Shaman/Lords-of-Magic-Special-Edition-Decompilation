
uint __cdecl FUN_005439e0(uint in_stack_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = (in_stack_4 & 0x10) != 0;
  if ((in_stack_4 & 8) != 0) {
    bVar3 = bVar3 | 4;
  }
  if ((in_stack_4 & 4) != 0) {
    bVar3 = bVar3 | 8;
  }
  if ((in_stack_4 & 2) != 0) {
    bVar3 = bVar3 | 0x10;
  }
  if ((in_stack_4 & 1) != 0) {
    bVar3 = bVar3 | 0x20;
  }
  if ((in_stack_4 & 0x80000) != 0) {
    bVar3 = bVar3 | 2;
  }
  uVar1 = (uint)bVar3;
  uVar2 = in_stack_4 & 0x300;
  if (uVar2 < 0x101) {
    if (uVar2 == 0x100) {
      uVar1 = (uint)CONCAT11(4,bVar3);
    }
  }
  else if (uVar2 == 0x200) {
    uVar1 = (uint)CONCAT11(8,bVar3);
  }
  else if (uVar2 == 0x300) {
    uVar1 = (uint)CONCAT11(0xc,bVar3);
  }
  if ((in_stack_4 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((in_stack_4 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((in_stack_4 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}


