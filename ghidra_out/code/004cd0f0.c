
void __fastcall FUN_004cd0f0(void *param_1)

{
  int iVar1;
  DWORD *pDVar2;
  int iVar3;
  size_t _Count;
  int iVar4;
  uint uVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  int *local_128;
  int local_124;
  HANDLE local_120;
  LPCSTR local_11c;
  uint local_118 [5];
  char local_104 [260];
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    cVar6 = (char)*(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_128 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    cVar6 = '\0';
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  iVar3 = 0;
  FUN_0040adb0(param_1,&local_120);
  iVar1 = *(int *)((int)param_1 + 0x90);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  if (iVar1 == 0) {
    if ((char)local_120 != '\b') {
      FUN_00404ab0(param_1,0xe);
      local_11c = (LPCSTR)0x0;
    }
  }
  else {
    local_11c = (LPCSTR)0x0;
  }
  if (local_11c == (LPCSTR)0x0) {
    return;
  }
  local_120 = FUN_0053af20(local_11c,local_118);
  if (local_120 == (HANDLE)0xffffffff) {
    pDVar2 = FUN_0053b4c0();
    if (*pDVar2 != 2) {
      if (*pDVar2 != 0x16) {
        pcVar8 = s_dir___unknown_error_0055e298;
        goto LAB_004cd1fe;
      }
      FUN_004d41c0(param_1,s_dir___invalid_filespec_0055e280);
    }
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar3 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      iVar1 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
      return;
    }
  }
  else {
    if (cVar6 == '\x06') {
      local_124 = 0;
      if (0 < local_128[1]) {
        do {
          if (*(char *)(*local_128 + iVar3 * 8) != '\b') {
            FUN_0041d1d0(param_1,1,iVar3);
            FUN_004d41c0(param_1,s_dir___invalid_array_element_type_0055e20c);
            return;
          }
          pcVar8 = *(char **)(*local_128 + iVar3 * 8 + 4);
          iVar1 = _strncmp(local_104,&DAT_0055e264,2);
          if (iVar1 == 0) {
            iVar1 = -1;
            pcVar7 = local_104;
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              cVar6 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar6 != '\0');
            if (iVar1 != -4) goto LAB_004cd282;
          }
          else {
LAB_004cd282:
            iVar1 = _strncmp(local_104,(char *)&DAT_0055e260,1);
            if (iVar1 == 0) {
              iVar1 = -1;
              pcVar7 = local_104;
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                cVar6 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar6 != '\0');
              if (iVar1 == -3) goto LAB_004cd2e3;
            }
            iVar3 = iVar3 + 1;
            _Count = FUN_004cee20(pcVar8);
            _strncpy(pcVar8,local_104,_Count);
            uVar5 = 0xffffffff;
            pcVar7 = local_104;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar6 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar6 != '\0');
            if ((int)_Count < (int)(~uVar5 - 1)) {
              pcVar8[_Count] = '\0';
              FUN_004d41c0(param_1,s_dir___filename_wouldn_t_fit_in_s_0055e1e4);
              FUN_0041d1d0(param_1,1,iVar3);
              return;
            }
          }
LAB_004cd2e3:
          iVar1 = FUN_0053b050(local_120,local_118);
          if (iVar1 != 0) {
            if (*(int *)((int)param_1 + 0x54) != 0) {
              iVar1 = *(int *)((int)param_1 + 0x50);
              iVar4 = *(int *)((int)param_1 + 0x54) + -1;
              *(int *)((int)param_1 + 0x54) = iVar4;
              *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
              *(int *)(iVar1 + 4 + iVar4 * 8) = iVar3;
              return;
            }
            goto LAB_004cd3b1;
          }
          local_124 = local_124 + 1;
        } while (local_124 < local_128[1]);
      }
      FUN_004d41c0(param_1,s_dir___reached_end_of_array_befor_0055e230);
      FUN_0041d1d0(param_1,1,iVar3);
      return;
    }
    pcVar8 = s_dir___invalid_argument_0055e268;
LAB_004cd1fe:
    FUN_004d41c0(param_1,pcVar8);
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar3 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      iVar1 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
      return;
    }
  }
LAB_004cd3b1:
  FUN_00404ab0(param_1,3);
  return;
}


