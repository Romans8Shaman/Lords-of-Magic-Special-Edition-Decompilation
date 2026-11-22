
void __cdecl FUN_00534f70(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x16b8);
  if (iVar1 < 0xe) {
    *(ushort *)(param_1 + 0x16b4) =
         *(ushort *)(param_1 + 0x16b4) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
    *(int *)(param_1 + 0x16b8) = iVar1 + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16b4) =
         *(ushort *)(param_1 + 0x16b4) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b4);
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b5);
    iVar1 = *(int *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16b8) = iVar1 + -0xd;
    *(ushort *)(param_1 + 0x16b4) = (ushort)param_4 >> (0x10U - (char)iVar1 & 0x1f);
  }
  *(uint *)(param_1 + 0x16a8) = (*(int *)(param_1 + 0x16a8) + 10U & 0xfffffff8) + 0x20 + param_3 * 8
  ;
  FUN_00536a60(param_1,param_2,param_3,1);
  return;
}


