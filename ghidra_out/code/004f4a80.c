
undefined4 __cdecl FUN_004f4a80(byte *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int iVar5;
  
  puVar3 = param_2 + param_3;
  do {
    iVar5 = (int)(char)*param_1;
    puVar2 = param_2;
    pbVar4 = param_1 + 1;
    if (iVar5 < 0) {
      do {
        bVar1 = *pbVar4;
        param_1 = pbVar4 + 1;
        param_2 = (undefined1 *)(uint)bVar1;
        *puVar2 = *(undefined1 *)(((uint)param_2 & 3) + param_4);
        puVar2[1] = *(undefined1 *)((bVar1 >> 2 & 3) + param_4);
        puVar2[2] = *(undefined1 *)((bVar1 >> 4 & 3) + param_4);
        puVar2[3] = *(undefined1 *)((uint)(bVar1 >> 6) + param_4);
        param_2 = puVar2 + 4;
        iVar5 = iVar5 + 1;
        puVar2 = param_2;
        pbVar4 = param_1;
      } while (iVar5 != 0);
    }
    else {
      bVar1 = param_1[1];
      iVar5 = iVar5 + 3;
      param_3 = (uint)bVar1;
      do {
        *param_2 = *(undefined1 *)((param_3 & 3) + param_4);
        param_2[1] = *(undefined1 *)((bVar1 >> 2 & 3) + param_4);
        param_2[2] = *(undefined1 *)((bVar1 >> 4 & 3) + param_4);
        param_2[3] = *(undefined1 *)((uint)(bVar1 >> 6) + param_4);
        param_2 = param_2 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      param_1 = param_1 + 2;
    }
  } while (param_2 < puVar3);
  return 0;
}


