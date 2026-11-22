
BOOL __thiscall FUN_0049d840(void *this,LONG param_1,LONG param_2,int param_3,int param_4)

{
  POINT pt;
  BOOL BVar1;
  RECT local_10;
  
  FUN_0049cc10(this,&local_10.left,param_3,param_4);
  pt.y = param_2;
  pt.x = param_1;
  BVar1 = PtInRect(&local_10,pt);
  return BVar1;
}


