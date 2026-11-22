
void __thiscall FUN_004755a0(void *this,undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = s_DDSURFACE_BACKBUFFER__>Unlock__L_00558844;
  iVar1 = (/*IC:004755b6*/**(code **)(**(int **)((int)this + 0x688) + 0x80))(*(int **)((int)this + 0x688),*param_1)
  ;
  FUN_004756f0(iVar1,pcVar2);
  *param_1 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  return;
}


