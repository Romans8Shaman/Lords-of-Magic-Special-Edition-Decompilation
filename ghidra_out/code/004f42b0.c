
undefined4 __cdecl
FUN_004f42b0(byte *param_1,undefined1 *param_2,int param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  iVar1 = param_5 - param_3;
  param_5 = 0;
  puVar6 = param_2;
  do {
    param_2 = (undefined1 *)param_3;
    do {
      puVar2 = DAT_00584aa8;
      if (DAT_00584aa8 == (uint *)0x0) {
        puVar2 = &DAT_00573288;
      }
      puVar4 = DAT_00584aa8;
      if (DAT_00584aa8 == (uint *)0x0) {
        puVar4 = &DAT_00573288;
      }
      puVar3 = DAT_00584aa8;
      if (DAT_00584aa8 == (uint *)0x0) {
        puVar3 = &DAT_00573288;
      }
      puVar5 = puVar6 + 1;
      *puVar6 = *(undefined1 *)
                 (((uint)(*param_1 >> (((byte)puVar2[1] & (byte)param_5) * (char)puVar4[2] & 0x1f))
                  & *puVar3 & 0xff) + param_6);
      puVar2 = DAT_00584aa8;
      if (DAT_00584aa8 == (uint *)0x0) {
        puVar2 = &DAT_00573288;
      }
      puVar4 = DAT_00584aa8;
      if (DAT_00584aa8 == (uint *)0x0) {
        puVar4 = &DAT_00573288;
      }
      param_1 = param_1 + ((puVar2[1] & param_5) == puVar4[1]);
      param_5 = param_5 + 1;
      param_2 = param_2 + -1;
      puVar6 = puVar5;
    } while (param_2 != (undefined1 *)0x0);
    puVar6 = puVar5 + iVar1;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return 0;
}


