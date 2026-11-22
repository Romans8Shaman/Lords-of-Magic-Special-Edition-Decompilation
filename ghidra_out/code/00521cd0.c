
void FUN_00521cd0(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0049b110(param_1,10);
  if (iVar1 == 0) {
    FUN_0049b150(param_1,10,0xb);
  }
  iVar1 = FUN_0049b110(param_1,0xb);
  if (iVar1 == 0) {
    FUN_0049b150(param_1,0xb,10);
  }
  iVar1 = FUN_0049b110(param_1,0);
  if (iVar1 == 0) {
    FUN_0049b150(param_1,0,1);
  }
  iVar1 = FUN_0049b110(param_1,1);
  if (iVar1 == 0) {
    FUN_0049b150(param_1,1,0);
  }
  iVar1 = FUN_0049b110(param_1,2);
  if (iVar1 == 0) {
    FUN_0049b150(param_1,2,0);
  }
  iVar1 = FUN_0049b110(param_1,2);
  if (iVar1 == 0) {
    FUN_0049b150(param_1,2,0xf);
  }
  iVar1 = FUN_0049b110(param_1,8);
  if (iVar1 == 0) {
    FUN_0049b150(param_1,8,0x13);
  }
  iVar1 = FUN_0049b110(param_1,9);
  if (iVar1 == 0) {
    FUN_0049b150(param_1,9,0x13);
  }
  iVar1 = FUN_0049b110(param_1,0xe);
  if (iVar1 == 0) {
    FUN_0049b150(param_1,0xe,3);
  }
  iVar1 = FUN_0049b110(param_1,4);
  if (iVar1 == 0) {
    FUN_0049b150(param_1,4,3);
  }
  iVar1 = FUN_0049b110(param_1,5);
  if (iVar1 == 0) {
    FUN_0049b150(param_1,5,3);
  }
  iVar1 = 0;
  do {
    iVar2 = FUN_0049b110(param_1,iVar1);
    if (iVar2 == 0) {
      FUN_0049b150(param_1,iVar1,2);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x16);
  return;
}


