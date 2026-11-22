
void __cdecl op_showmaplocation(void)

{
  int iVar1;
  tagPOINT tStack_8;
  
  GetCursorPos(&tStack_8);
  iVar1 = FUN_004a61e0(tStack_8.x,tStack_8.y);
  FUN_0053a090(&DAT_005d22f0,s__d__d_005575ac,iVar1 % DAT_005ae9b4,iVar1 / DAT_005ae9b4);
  MessageBoxA(DAT_00584d54,&DAT_005d22f0,&DAT_005575a8,0);
  return;
}


