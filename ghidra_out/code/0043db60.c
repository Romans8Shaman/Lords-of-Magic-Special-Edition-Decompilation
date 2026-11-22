
void __thiscall FUN_0043db60(void *this,void *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004d6220(&DAT_00578f60,param_1,param_2,this);
  if (iVar1 == 0) {
    FUN_004d41c0(param_1,s_Invalid_data_id_00556604);
  }
  if (param_2 == 8) {
    *(undefined4 *)((int)this + 0x84) = 0xffffffff;
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  return;
}


