/* Rebuilt from lomse.exe FUN_00536cd0 @ 0x00536cd0 (1098 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00537160 ((undefined4 (__cdecl *)(int *, int, int *))0x00537160)
#define FUN_00537270 ((undefined4 (__cdecl *)(uint *, byte *, int))0x00537270)
#define s_incorrect_data_check_00574574 (*(char (*)[])0x00574574)
#define s_incorrect_header_check_0057458c (*(char (*)[])0x0057458c)
#define s_invalid_window_size_005745a4 (*(char (*)[])0x005745a4)
#define s_need_dictionary_0057451c (*(char (*)[])0x0057451c)
#define s_unknown_compression_method_005745b8 (*(char (*)[])0x005745b8)

#define LOM_SELF_00536cd0 1
int __cdecl rb_00536cd0(byte *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((((param_1 == (byte *)0x0) || (*(int *)(param_1 + 0x1c) == 0)) || (*(int *)param_1 == 0)) ||
     (param_2 < 0)) {
LAB_00537115:
    return -2;
  }
  iVar4 = -5;
  do {
    puVar2 = *(undefined4 **)(param_1 + 0x1c);
    switch(*puVar2) {
    case 0:
      if (*(int *)(param_1 + 4) == 0) {
        return iVar4;
      }
      if (param_2 != 4) {
        iVar4 = 0;
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      puVar2[1] = (uint)**(byte **)param_1;
      puVar2 = *(undefined4 **)(param_1 + 0x1c);
      uVar3 = puVar2[1];
      *(int *)param_1 = *(int *)param_1 + 1;
      if (((byte)uVar3 & 0xf) != 8) {
        *puVar2 = 0xd;
        *(char **)(param_1 + 0x18) = s_unknown_compression_method_005745b8;
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = 5;
        break;
      }
      if ((uint)puVar2[4] < ((uint)puVar2[1] >> 4) + 8) {
        *puVar2 = 0xd;
        *(char **)(param_1 + 0x18) = s_invalid_window_size_005745a4;
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = 5;
        break;
      }
      *puVar2 = 1;
    case 1:
      if (*(int *)(param_1 + 4) == 0) {
        return iVar4;
      }
      if (param_2 != 4) {
        iVar4 = 0;
      }
      puVar2 = *(undefined4 **)(param_1 + 0x1c);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      bVar1 = **(byte **)param_1;
      *(byte **)param_1 = *(byte **)param_1 + 1;
      if ((puVar2[1] * 0x100 + (uint)bVar1) % 0x1f == 0) {
        if ((bVar1 & 0x20) != 0) {
          **(undefined4 **)(param_1 + 0x1c) = 2;
          goto switchD_00536d18_caseD_2;
        }
        *puVar2 = 7;
      }
      else {
        *puVar2 = 0xd;
        *(char **)(param_1 + 0x18) = s_incorrect_header_check_0057458c;
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = 5;
      }
      break;
    case 2:
switchD_00536d18_caseD_2:
      if (*(int *)(param_1 + 4) == 0) {
        return iVar4;
      }
      if (param_2 != 4) {
        iVar4 = 0;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      *(uint *)(*(int *)(param_1 + 0x1c) + 8) = (uint)**(byte **)param_1 << 0x18;
      *(int *)param_1 = *(int *)param_1 + 1;
      **(undefined4 **)(param_1 + 0x1c) = 3;
switchD_00536d18_caseD_3:
      if (*(int *)(param_1 + 4) == 0) {
        return iVar4;
      }
      if (param_2 != 4) {
        iVar4 = 0;
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(uint *)(*(int *)(param_1 + 0x1c) + 8) =
           *(int *)(*(int *)(param_1 + 0x1c) + 8) + (uint)**(byte **)param_1 * 0x10000;
      *(int *)param_1 = *(int *)param_1 + 1;
      **(undefined4 **)(param_1 + 0x1c) = 4;
switchD_00536d18_caseD_4:
      if (*(int *)(param_1 + 4) == 0) {
        return iVar4;
      }
      if (param_2 != 4) {
        iVar4 = 0;
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(uint *)(*(int *)(param_1 + 0x1c) + 8) =
           *(int *)(*(int *)(param_1 + 0x1c) + 8) + (uint)**(byte **)param_1 * 0x100;
      *(int *)param_1 = *(int *)param_1 + 1;
      **(undefined4 **)(param_1 + 0x1c) = 5;
switchD_00536d18_caseD_5:
      if (*(int *)(param_1 + 4) == 0) {
        return iVar4;
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(uint *)(*(int *)(param_1 + 0x1c) + 8) =
           *(int *)(*(int *)(param_1 + 0x1c) + 8) + (uint)**(byte **)param_1;
      *(int *)param_1 = *(int *)param_1 + 1;
      *(undefined4 *)(param_1 + 0x30) = (*(undefined4 **)(param_1 + 0x1c))[2];
      **(undefined4 **)(param_1 + 0x1c) = 6;
      return 2;
    case 3:
      goto switchD_00536d18_caseD_3;
    case 4:
      goto switchD_00536d18_caseD_4;
    case 5:
      goto switchD_00536d18_caseD_5;
    case 6:
      **(undefined4 **)(param_1 + 0x1c) = 0xd;
      *(char **)(param_1 + 0x18) = s_need_dictionary_0057451c;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = 0;
      return -2;
    case 7:
      iVar4 = FUN_00537270((uint *)puVar2[5],param_1,iVar4);
      if (iVar4 == -3) {
        **(undefined4 **)(param_1 + 0x1c) = 0xd;
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = 0;
        iVar4 = -3;
      }
      else {
        if (iVar4 != 1) {
          if (param_2 != 4) {
            return iVar4;
          }
          if (iVar4 == 0) {
            return -5;
          }
          return iVar4;
        }
        iVar4 = 0;
        FUN_00537160(*(int **)(*(int *)(param_1 + 0x1c) + 0x14),(int)param_1,
                     (int *)(*(int *)(param_1 + 0x1c) + 4));
        puVar2 = *(undefined4 **)(param_1 + 0x1c);
        if (puVar2[3] == 0) {
          *puVar2 = 8;
          if (param_2 == 4) {
            iVar4 = -5;
          }
          goto switchD_00536d18_caseD_8;
        }
        *puVar2 = 0xc;
      }
      break;
    case 8:
switchD_00536d18_caseD_8:
      if (*(int *)(param_1 + 4) == 0) {
        return iVar4;
      }
      if (param_2 != 4) {
        iVar4 = 0;
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(uint *)(*(int *)(param_1 + 0x1c) + 8) = (uint)**(byte **)param_1 << 0x18;
      *(int *)param_1 = *(int *)param_1 + 1;
      **(undefined4 **)(param_1 + 0x1c) = 9;
switchD_00536d18_caseD_9:
      if (*(int *)(param_1 + 4) == 0) {
        return iVar4;
      }
      if (param_2 != 4) {
        iVar4 = 0;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      *(uint *)(*(int *)(param_1 + 0x1c) + 8) =
           *(int *)(*(int *)(param_1 + 0x1c) + 8) + (uint)**(byte **)param_1 * 0x10000;
      *(int *)param_1 = *(int *)param_1 + 1;
      **(undefined4 **)(param_1 + 0x1c) = 10;
switchD_00536d18_caseD_a:
      if (*(int *)(param_1 + 4) == 0) {
        return iVar4;
      }
      if (param_2 != 4) {
        iVar4 = 0;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      *(uint *)(*(int *)(param_1 + 0x1c) + 8) =
           *(int *)(*(int *)(param_1 + 0x1c) + 8) + (uint)**(byte **)param_1 * 0x100;
      *(int *)param_1 = *(int *)param_1 + 1;
      **(undefined4 **)(param_1 + 0x1c) = 0xb;
switchD_00536d18_caseD_b:
      if (*(int *)(param_1 + 4) == 0) {
        return iVar4;
      }
      if (param_2 != 4) {
        iVar4 = 0;
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(uint *)(*(int *)(param_1 + 0x1c) + 8) =
           *(int *)(*(int *)(param_1 + 0x1c) + 8) + (uint)**(byte **)param_1;
      *(int *)param_1 = *(int *)param_1 + 1;
      puVar2 = *(undefined4 **)(param_1 + 0x1c);
      if (puVar2[1] == puVar2[2]) {
        **(undefined4 **)(param_1 + 0x1c) = 0xc;
switchD_00536d18_caseD_c:
        return 1;
      }
      *puVar2 = 0xd;
      *(char **)(param_1 + 0x18) = s_incorrect_data_check_00574574;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = 5;
      break;
    case 9:
      goto switchD_00536d18_caseD_9;
    case 10:
      goto switchD_00536d18_caseD_a;
    case 0xb:
      goto switchD_00536d18_caseD_b;
    case 0xc:
      goto switchD_00536d18_caseD_c;
    case 0xd:
      return -3;
    default:
      goto LAB_00537115;
    }
  } while( true );
}
