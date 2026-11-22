
void __fastcall FUN_00495080(int *param_1)

{
  int *a1;
  int iVar1;
  char *pcVar2;
  
  a1 = (int *)param_1[6];
  if (((a1 != (int *)0x0) && (*param_1 != 0)) && ((*(byte *)(param_1 + 5) & 8) != 0)) {
    pcVar2 = s_m_surf_>Unlock__LPVOID_m_ptr__0055c618;
    iVar1 = (/*IC:0049509f*/**(code **)(*a1 + 0x80))(a1,*param_1);
    FUN_004756f0(iVar1,pcVar2);
    *param_1 = 0;
  }
  return;
}


