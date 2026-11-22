/* Rebuilt from lomse.exe FUN_00546720 @ 0x00546720 (1632 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00575094 (*(int *)0x00575094)
#define DAT_00575098 (*(byte *)0x00575098)
#define FUN_00541d40 ((uint (__cdecl *)(int, uint))0x00541d40)
#define FUN_005474b0 ((undefined4 (__cdecl *)(char *, int, uint *))0x005474b0)
#define FUN_00548370 ((undefined4 (__cdecl *)(int *, uint, int))0x00548370)
#define PTR_DAT_00574e88 (*(undefined * *)0x00574e88)

#define LOM_SELF_00546720 1
undefined4 __cdecl
rb_00546720(ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  uchar _fr[0x68] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_60;
  typedef char * _t_local_5c;
  typedef uint _t_local_54;
  typedef byte * _t_local_50;
  typedef int _t_local_4c;
  typedef int _t_local_48;
  typedef undefined4 _t_local_30;
  typedef undefined4 _t_local_2c;
  typedef undefined2 _t_uStack_28;
  typedef byte * _t_local_26;
  typedef ushort _t_local_22;
  typedef char _t_local_1c[23];
  typedef char _t_local_5;
#define local_60 (*(_t_local_60 *)(_fr + 0x0))
#define local_5c (*(_t_local_5c *)(_fr + 0x4))
#define local_54 (*(_t_local_54 *)(_fr + 0xc))
#define local_50 (*(_t_local_50 *)(_fr + 0x10))
#define local_4c (*(_t_local_4c *)(_fr + 0x14))
#define local_48 (*(_t_local_48 *)(_fr + 0x18))
#define local_30 (*(_t_local_30 *)(_fr + 0x30))
#define local_2c (*(_t_local_2c *)(_fr + 0x34))
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x38))
#define local_26 (*(_t_local_26 *)(_fr + 0x3a))
#define local_22 (*(_t_local_22 *)(_fr + 0x3e))
#define local_1c (*(_t_local_1c *)(_fr + 0x44))
#define local_5 (*(_t_local_5 *)(_fr + 0x5b))
  
  local_5c = local_1c;
  iVar8 = 0;
  uVar13 = 0;
  uVar7 = 0;
  local_4c = 1;
  local_54 = 0;
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  bVar5 = false;
  bVar6 = false;
  local_48 = 0;
  local_60 = 0;
  local_30 = 0;
  local_50 = param_3;
  pbVar11 = param_3;
  do {
    bVar10 = *pbVar11;
    if (((bVar10 != 0x20) && (bVar10 != 9)) && (bVar10 != 10)) {
      pbVar14 = param_3;
      if (bVar10 != 0xd) break;
    }
    pbVar11 = pbVar11 + 1;
  } while( true );
  do {
    bVar10 = *pbVar11;
    pbVar12 = pbVar11 + 1;
    param_3 = (byte *)CONCAT31(((uint)((uchar *)&param_3 + 1)[0] | (uint)((uchar *)&param_3 + 1)[1] << 8 | (uint)((uchar *)&param_3 + 1)[2] << 16),bVar10);
    switch(iVar8) {
    case 0:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_00546bf2;
      }
      if (bVar10 == DAT_00575098) {
        iVar8 = 5;
      }
      else if (bVar10 == 0x2b) {
        iVar8 = 2;
        uVar7 = 0;
      }
      else if (bVar10 == 0x2d) {
        iVar8 = 2;
        uVar7 = 0x8000;
      }
      else {
        if (bVar10 != 0x30) goto switchD_005469e2_caseD_2c;
        iVar8 = 1;
      }
      break;
    case 1:
      bVar2 = true;
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_00546bf2;
      }
      if (bVar10 == DAT_00575098) {
        iVar8 = 4;
      }
      else {
        switch(bVar10) {
        case 0x2b:
        case 0x2d:
          goto switchD_005469e2_caseD_2b;
        default:
          goto switchD_005469e2_caseD_2c;
        case 0x30:
switchD_00546856_caseD_30:
          iVar8 = 1;
          break;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          goto switchD_005469e2_caseD_44;
        }
      }
      break;
    case 2:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_00546bf2;
      }
      if (bVar10 == DAT_00575098) {
        iVar8 = 5;
      }
      else {
        if (bVar10 == 0x30) goto switchD_00546856_caseD_30;
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      break;
    case 3:
      while( true ) {
        bVar2 = true;
        if (DAT_00575094 < 2) {
          uVar9 = (byte)PTR_DAT_00574e88[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar9 = FUN_00541d40((uint)param_3 & 0xff,4);
        }
        if (uVar9 == 0) break;
        if (uVar13 < 0x19) {
          uVar13 = uVar13 + 1;
          *local_5c = bVar10 - 0x30;
          bVar10 = *pbVar12;
          local_5c = local_5c + 1;
          param_3 = (byte *)CONCAT31(((uint)((uchar *)&param_3 + 1)[0] | (uint)((uchar *)&param_3 + 1)[1] << 8 | (uint)((uchar *)&param_3 + 1)[2] << 16),bVar10);
          pbVar12 = pbVar12 + 1;
        }
        else {
          bVar10 = *pbVar12;
          local_60 = local_60 + 1;
          param_3 = (byte *)CONCAT31(((uint)((uchar *)&param_3 + 1)[0] | (uint)((uchar *)&param_3 + 1)[1] << 8 | (uint)((uchar *)&param_3 + 1)[2] << 16),bVar10);
          pbVar12 = pbVar12 + 1;
        }
      }
      local_54 = uVar13;
      if (bVar10 != DAT_00575098) {
        switch(bVar10) {
        case 0x2b:
        case 0x2d:
          goto switchD_005469e2_caseD_2b;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          goto switchD_005469e2_caseD_44;
        }
switchD_005469e2_caseD_2c:
        iVar8 = 10;
        goto LAB_00546bf2;
      }
      iVar8 = 4;
      break;
    case 4:
      bVar4 = true;
      if ((uVar13 == 0) && (bVar10 == 0x30)) {
        do {
          bVar10 = *pbVar12;
          local_60 = local_60 + -1;
          pbVar12 = pbVar12 + 1;
          param_3 = (byte *)CONCAT31(((uint)((uchar *)&param_3 + 1)[0] | (uint)((uchar *)&param_3 + 1)[1] << 8 | (uint)((uchar *)&param_3 + 1)[2] << 16),bVar10);
        } while (bVar10 == 0x30);
      }
      while( true ) {
        bVar2 = true;
        if (DAT_00575094 < 2) {
          uVar9 = (byte)PTR_DAT_00574e88[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar9 = FUN_00541d40((uint)param_3 & 0xff,4);
        }
        if (uVar9 == 0) break;
        if (uVar13 < 0x19) {
          uVar13 = uVar13 + 1;
          *local_5c = bVar10 - 0x30;
          local_5c = local_5c + 1;
          local_60 = local_60 + -1;
        }
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(((uint)((uchar *)&param_3 + 1)[0] | (uint)((uchar *)&param_3 + 1)[1] << 8 | (uint)((uchar *)&param_3 + 1)[2] << 16),bVar10);
      }
      local_54 = uVar13;
      switch(bVar10) {
      case 0x2b:
      case 0x2d:
switchD_005469e2_caseD_2b:
        bVar2 = true;
        pbVar12 = pbVar12 + -1;
        iVar8 = 0xb;
        break;
      default:
        goto switchD_005469e2_caseD_2c;
      case 0x44:
      case 0x45:
      case 100:
      case 0x65:
switchD_005469e2_caseD_44:
        bVar2 = true;
        iVar8 = 6;
      }
      break;
    case 5:
      bVar4 = true;
      if (DAT_00575094 < 2) {
        uVar9 = (byte)PTR_DAT_00574e88[(uint)bVar10 * 2] & 4;
      }
      else {
        uVar9 = FUN_00541d40((uint)bVar10,4);
      }
      if (uVar9 == 0) {
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      else {
        iVar8 = 4;
        pbVar12 = pbVar11;
      }
      break;
    case 6:
      pbVar14 = pbVar11 + -1;
      local_50 = pbVar14;
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 9;
        goto LAB_00546bf2;
      }
      if (bVar10 == 0x2b) {
LAB_00546be6:
        iVar8 = 7;
        pbVar14 = local_50;
      }
      else {
        if (bVar10 != 0x2d) goto LAB_00546ad6;
LAB_00546bd7:
        iVar8 = 7;
        local_4c = -1;
        pbVar14 = local_50;
      }
      break;
    case 7:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 9;
        goto LAB_00546bf2;
      }
LAB_00546ad6:
      if (bVar10 == 0x30) {
        iVar8 = 8;
      }
      else {
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      break;
    case 8:
      bVar3 = true;
      while (bVar10 == 0x30) {
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      }
      if (((char)bVar10 < '1') || ('9' < (char)bVar10)) goto switchD_005469e2_caseD_2c;
      iVar8 = 9;
LAB_00546bf2:
      pbVar12 = pbVar12 + -1;
      break;
    case 9:
      bVar3 = true;
      local_48 = 0;
      while( true ) {
        if (DAT_00575094 < 2) {
          uVar13 = (byte)PTR_DAT_00574e88[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar13 = FUN_00541d40((uint)param_3 & 0xff,4);
        }
        if (uVar13 == 0) goto LAB_00546b5a;
        local_48 = (char)bVar10 + -0x30 + local_48 * 10;
        if (0x1450 < local_48) break;
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(((uint)((uchar *)&param_3 + 1)[0] | (uint)((uchar *)&param_3 + 1)[1] << 8 | (uint)((uchar *)&param_3 + 1)[2] << 16),bVar10);
      }
      local_48 = 0x1451;
LAB_00546b5a:
      while( true ) {
        if (DAT_00575094 < 2) {
          uVar13 = (byte)PTR_DAT_00574e88[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar13 = FUN_00541d40((uint)param_3 & 0xff,4);
        }
        if (uVar13 == 0) break;
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(((uint)((uchar *)&param_3 + 1)[0] | (uint)((uchar *)&param_3 + 1)[1] << 8 | (uint)((uchar *)&param_3 + 1)[2] << 16),bVar10);
      }
      iVar8 = 10;
      pbVar12 = pbVar12 + -1;
      uVar13 = local_54;
      pbVar14 = local_50;
      break;
    case 0xb:
      if (param_7 == 0) goto switchD_005469e2_caseD_2c;
      local_50 = pbVar11;
      if (bVar10 == 0x2b) goto LAB_00546be6;
      if (bVar10 == 0x2d) goto LAB_00546bd7;
      iVar8 = 10;
      pbVar12 = pbVar11;
      pbVar14 = pbVar11;
    }
    pbVar11 = pbVar12;
  } while (iVar8 != 10);
  *param_2 = (int)pbVar12;
  if (bVar2) {
    if (0x18 < uVar13) {
      if ('\x04' < local_5) {
        local_5 = local_5 + '\x01';
      }
      local_5c = local_5c + -1;
      local_60 = local_60 + 1;
      uVar13 = 0x18;
    }
    if (uVar13 == 0) {
      (*(ushort *)((uchar *)&local_2c + 0)) = 0;
      local_22 = 0;
      param_3 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      goto LAB_00546cc4;
    }
    if (local_5c[-1] == '\0') {
      do {
        pcVar1 = local_5c + -2;
        uVar13 = uVar13 - 1;
        local_60 = local_60 + 1;
        local_5c = local_5c + -1;
      } while (*pcVar1 == '\0');
    }
    FUN_005474b0(local_1c,uVar13,&local_2c);
    if (local_4c < 0) {
      local_48 = -local_48;
    }
    uVar13 = local_48 + local_60;
    if (!bVar3) {
      uVar13 = uVar13 + param_5;
    }
    if (!bVar4) {
      uVar13 = uVar13 - param_6;
    }
    if ((int)uVar13 < 0x1451) {
      if (-0x1451 < (int)uVar13) {
        FUN_00548370(&local_2c,uVar13,param_4);
        pbVar11 = (byte *)CONCAT22(uStack_28,(*(ushort *)((uchar *)&local_2c + 2)));
        param_3 = local_26;
        goto LAB_00546cc4;
      }
      bVar6 = true;
    }
    else {
      bVar5 = true;
    }
  }
  (*(ushort *)((uchar *)&local_2c + 0)) = (ushort)param_3;
  pbVar11 = param_3;
  local_22 = (ushort)local_2c;
LAB_00546cc4:
  if (bVar2) {
    if (bVar5) {
      pbVar11 = (byte *)0x0;
      local_22 = 0x7fff;
      param_3 = (byte *)0x80000000;
      (*(ushort *)((uchar *)&local_2c + 0)) = 0;
      local_30 = 2;
    }
    else if (bVar6) {
      (*(ushort *)((uchar *)&local_2c + 0)) = 0;
      local_22 = 0;
      param_3 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      local_30 = 1;
    }
  }
  else {
    (*(ushort *)((uchar *)&local_2c + 0)) = 0;
    local_22 = 0;
    param_3 = (byte *)0x0;
    pbVar11 = (byte *)0x0;
    local_30 = 4;
  }
  *param_1 = (ushort)local_2c;
  *(byte **)(param_1 + 1) = pbVar11;
  *(byte **)(param_1 + 3) = param_3;
  param_1[5] = local_22 | uVar7;
  return local_30;
#undef local_60
#undef local_5c
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_30
#undef local_2c
#undef uStack_28
#undef local_26
#undef local_22
#undef local_1c
#undef local_5
}
