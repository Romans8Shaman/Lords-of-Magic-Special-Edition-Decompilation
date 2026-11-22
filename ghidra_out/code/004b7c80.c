
bool __thiscall FUN_004b7c80(void *this,char *param_1)

{
  int iVar1;
  CHAR local_c8 [200];
  
  FUN_0053a090(local_c8,s_AddGame__s_id__num_games_before__0055d3c4,(uint)param_1,
               *(undefined4 *)((int)this + 0x36c));
  OutputDebugStringA(local_c8);
  _strncpy((char *)(*(int *)((int)this + 0x36c) * 0x1f + 0x2d0 + (int)this),param_1,0x1d);
  *(undefined1 *)(*(int *)((int)this + 0x36c) * 0x1f + 0x2ed + (int)this) = 0;
  iVar1 = *(int *)((int)this + 0x36c) + 1;
  *(int *)((int)this + 0x36c) = iVar1;
  FUN_0053a090(local_c8,s_AddGame__s_id__num_games_after___0055d39c,(uint)param_1,iVar1);
  OutputDebugStringA(local_c8);
  return *(int *)((int)this + 0x36c) < 5;
}


