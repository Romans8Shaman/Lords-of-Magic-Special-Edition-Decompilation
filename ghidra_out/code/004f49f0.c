
undefined4 __cdecl FUN_004f49f0(byte *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  
  puVar2 = param_2 + param_3;
  do {
    iVar4 = (int)(char)*param_1;
    puVar3 = param_2;
    pbVar5 = param_1 + 1;
    if (iVar4 < 0) {
      do {
        bVar1 = *pbVar5;
        param_1 = pbVar5 + 1;
        param_2 = (undefined1 *)(uint)bVar1;
        *puVar3 = *(undefined1 *)(((uint)param_2 & 0xf) + param_4);
        puVar3[1] = *(undefined1 *)((uint)(bVar1 >> 4) + param_4);
        param_2 = puVar3 + 2;
        iVar4 = iVar4 + 1;
        puVar3 = param_2;
        pbVar5 = param_1;
      } while (iVar4 != 0);
    }
    else {
      bVar1 = param_1[1];
      iVar4 = iVar4 + 3;
      param_3 = (uint)bVar1;
      do {
        *param_2 = *(undefined1 *)((param_3 & 0xf) + param_4);
        param_2[1] = *(undefined1 *)((uint)(bVar1 >> 4) + param_4);
        param_2 = param_2 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      param_1 = param_1 + 2;
    }
  } while (param_2 < puVar2);
  return 0;
}


