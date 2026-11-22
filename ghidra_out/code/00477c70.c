
undefined4 __cdecl FUN_00477c70(char *param_1)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  SHELLEXECUTEINFOA local_23c;
  CHAR local_200 [256];
  char local_100 [256];
  
  DVar2 = GetModuleFileNameA((HMODULE)0x0,local_200,0x100);
  if (DVar2 == 0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar3 = local_200;
  do {
    pcVar9 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar9 + -uVar5;
  pcVar9 = local_100;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  pcVar3 = _strrchr(local_200,0x5c);
  if (pcVar3 != (char *)0x0) {
    pcVar3[1] = '\0';
  }
  uVar5 = 0xffffffff;
  pcVar3 = s_DPStub_exe_0055aee4;
  do {
    pcVar9 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_23c.cbSize = 0x3c;
  iVar7 = -1;
  pcVar3 = local_200;
  do {
    pcVar8 = pcVar3;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar3 = pcVar9 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  local_23c.fMask = 0x40;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar3 = &DAT_0055aee0;
  do {
    pcVar9 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_23c.hwnd = (HWND)0x0;
  iVar7 = -1;
  pcVar3 = local_100;
  do {
    pcVar8 = pcVar3;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar3 = pcVar9 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  local_23c.lpVerb = &DAT_0055aed8;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar3 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar3 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar3;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_23c.lpDirectory = &DAT_00579274;
  iVar7 = -1;
  pcVar9 = local_100;
  do {
    pcVar8 = pcVar9;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + -uVar5;
  pcVar9 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  local_23c.lpFile = local_200;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  local_23c.lpParameters = local_100;
  local_23c.nShow = 0;
  local_23c.hInstApp = (HINSTANCE)0x0;
  local_23c.hProcess = (HANDLE)0x0;
  BVar4 = ShellExecuteExA(&local_23c);
  return (uint)(BVar4 != 0);
}


