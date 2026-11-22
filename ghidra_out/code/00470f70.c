
void __thiscall FUN_00470f70(void *this,int param_1)

{
  undefined1 auStack_258 [100];
  undefined1 auStack_1f4 [500];
  
  FUN_0053a090(auStack_258,s_Type__d_0055700c,(uint)*(byte *)(param_1 + 4));
  FUN_0053a090(auStack_1f4,s__d_received_unprocessed_message_f_00556fd0,*(uint *)((int)this + 0x120)
               ,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x101),auStack_258);
  FUN_005047d0(auStack_1f4);
  return;
}


