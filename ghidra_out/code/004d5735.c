
void FUN_004d5735(void)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint *puVar11;
  uint uVar12;
  undefined *puVar13;
  size_t *psVar14;
  size_t *psVar15;
  size_t sVar16;
  undefined4 uVar17;
  uint *unaff_EBX;
  void *unaff_EBP;
  byte *pbVar18;
  uint *unaff_ESI;
  byte *pbVar19;
  undefined4 *puVar20;
  bool bVar21;
  uint *puStack00000010;
  undefined4 in_stack_00000014;
  undefined *in_stack_0000001c;
  undefined *in_stack_00000024;
  undefined4 uStack0000002c;
  uint *in_stack_00000030;
  undefined4 uStack00000034;
  undefined1 *in_stack_00000038;
  int in_stack_0000003c;
  undefined4 uStack00000040;
  undefined *in_stack_00000044;
  undefined4 uStack00000048;
  char cStack00000050;
  undefined4 *in_stack_00000414;
  char acStackY_7ffffffe [2147483626];
  
code_r0x004d5735:
  puVar13 = (undefined *)*unaff_ESI;
LAB_004d5399:
  if (*(undefined **)((int)unaff_EBP + 0x7c) <= puVar13) {
    *(undefined4 *)((int)unaff_EBP + 0x90) = 10;
    *in_stack_00000414 = 0;
    in_stack_00000414[1] = in_stack_0000001c;
    return;
  }
  iVar8 = *(int *)((int)unaff_EBP + 0x54);
  uVar17 = 0x105;
  in_stack_0000001c = puVar13;
  if (iVar8 != 0) goto LAB_004d550f;
  do {
    *(undefined4 *)((int)unaff_EBP + 0x90) = 3;
    FUN_004d4550(unaff_EBP);
    *(undefined4 *)((int)unaff_EBP + 0x90) = 0;
    *(undefined4 *)((int)unaff_EBP + 0xa4) = 0;
LAB_004d55df:
    *in_stack_00000038 = in_stack_00000014._3_1_;
    if ((int)in_stack_00000024 < 1) goto LAB_004d55f5;
    puStack00000010 = (uint *)((int)unaff_EBX + (int)in_stack_00000024);
LAB_004d55fa:
    if (*(int *)((int)unaff_EBP + 0x70) != 0) {
LAB_004d5603:
      if (*(int *)((int)unaff_EBP + 0x70) != 0) {
        *in_stack_00000414 = 0;
        in_stack_00000414[1] = in_stack_0000001c;
        return;
      }
      pcVar1 = (char *)(*(int *)((int)unaff_EBP + 0x50) + in_stack_0000003c * 8);
      if (*pcVar1 == '\0') {
        pcVar1[0] = '\f';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        FUN_004d57c0(unaff_EBP,0xd,in_stack_0000001c);
        iVar8 = *(int *)((int)unaff_EBP + 0x54);
        iVar9 = *(int *)((int)unaff_EBP + 0x50);
        *in_stack_00000414 = *(undefined4 *)(iVar9 + iVar8 * 8);
        in_stack_00000414[1] = *(undefined4 *)(iVar9 + 4 + iVar8 * 8);
        return;
      }
      *(undefined4 *)((int)unaff_EBP + 0x90) = 6;
      *in_stack_00000414 = 0;
      in_stack_00000414[1] = in_stack_0000001c;
      return;
    }
    if (in_stack_00000030 != puStack00000010) {
      *(char **)((int)unaff_EBP + 0x87c) =
           (char *)((int)puStack00000010 +
                   (*(int *)((int)unaff_EBP + 0x87c) - (int)in_stack_00000030));
    }
    cVar2 = (char)*puStack00000010;
    unaff_EBX = puStack00000010;
    while ((cVar2 != '\0' && (uVar4 = FUN_0053b6e0((int)cVar2), uVar4 != 0))) {
      if ((char)*unaff_EBX == '\n') {
        *(undefined4 *)((int)unaff_EBP + 0x87c) = 1;
        *(int *)((int)unaff_EBP + 0x878) = *(int *)((int)unaff_EBP + 0x878) + 1;
      }
      if ((char)*unaff_EBX == '\t') {
        *(int *)((int)unaff_EBP + 0x87c) =
             (*(int *)((int)unaff_EBP + 0xa68) -
             *(int *)((int)unaff_EBP + 0x87c) % *(int *)((int)unaff_EBP + 0xa68)) + 1 +
             *(int *)((int)unaff_EBP + 0x87c);
      }
      else if ((char)*unaff_EBX == ' ') {
        *(int *)((int)unaff_EBP + 0x87c) = *(int *)((int)unaff_EBP + 0x87c) + 1;
      }
      cVar2 = *(char *)((int)unaff_EBX + 1);
      unaff_EBX = (uint *)((int)unaff_EBX + 1);
    }
    cVar2 = (char)*unaff_EBX;
    if (cVar2 == '\0') goto LAB_004d5603;
    in_stack_00000030 = unaff_EBX;
    if ((int)cVar2 - 0x22U < 0x5c) {
      bVar3 = *(byte *)((int)&switchD_004d4cc1::switchdataD_004d573c + cVar2 + 2);
      puStack00000010 = unaff_EBX;
      switch(cVar2) {
      case '\"':
        uVar4 = *(uint *)((int)unaff_EBP + 0x878);
        puVar7 = (uint *)((int)unaff_EBX + 1);
        cVar2 = *(char *)puVar7;
        puStack00000010 = puVar7;
        do {
          if (cVar2 == '\"') goto LAB_004d4d8b;
          puVar11 = (uint *)((int)puStack00000010 + 1);
          cVar2 = *(char *)puVar11;
          if (cVar2 == '\\') {
            puVar11 = (uint *)((int)puStack00000010 + 2);
            if (*(char *)puVar11 == '\n') {
              *(int *)((int)unaff_EBP + 0x878) = *(int *)((int)unaff_EBP + 0x878) + 1;
              *(undefined4 *)((int)unaff_EBP + 0x87c) = 1;
            }
            if (*(char *)puVar11 != '\0') {
              puVar11 = (uint *)((int)puStack00000010 + 3);
              cVar2 = *(char *)puVar11;
              goto joined_r0x004d4d27;
            }
          }
          else {
joined_r0x004d4d27:
            if (cVar2 == '\n') {
              *(undefined4 *)((int)unaff_EBP + 0x87c) = 1;
              *(int *)((int)unaff_EBP + 0x878) = *(int *)((int)unaff_EBP + 0x878) + 1;
            }
          }
          puStack00000010 = puVar11;
          cVar2 = (char)*puStack00000010;
        } while (cVar2 != '\0');
        if (*(uint *)((int)unaff_EBP + 0x874) == 0) {
          FUN_0053a090(&cStack00000050,s_unterminated_quote__line__d_colu_0055e778,uVar4);
        }
        else {
          FUN_0053a090(&cStack00000050,s_unterminated_quote___s___line__d_0055e748,
                       *(uint *)((int)unaff_EBP + 0x874));
        }
        FUN_004d41c0(unaff_EBP,&cStack00000050);
LAB_004d4d8b:
        *(char *)puStack00000010 = '\0';
        puVar6 = (undefined4 *)FUN_004d2f40(unaff_EBP,&uStack00000040,(char *)puVar7);
        uVar17 = *puVar6;
        in_stack_0000001c = (undefined *)puVar6[1];
        if ((char)uVar17 == '\0') {
          *(undefined4 *)((int)unaff_EBP + 0x90) = 2;
          *in_stack_00000414 = uVar17;
          in_stack_00000414[1] = in_stack_0000001c;
          return;
        }
        if (*(int *)((int)unaff_EBP + 0x54) != 0) {
          iVar8 = *(int *)((int)unaff_EBP + 0x50);
          iVar9 = *(int *)((int)unaff_EBP + 0x54) + -1;
          *(int *)((int)unaff_EBP + 0x54) = iVar9;
          *(undefined4 *)(iVar8 + iVar9 * 8) = uVar17;
          *(undefined **)(iVar8 + 4 + iVar9 * 8) = in_stack_0000001c;
          *(undefined4 *)(*(int *)((int)unaff_EBP + 0x870) + *(int *)((int)unaff_EBP + 0x54) * 8) =
               *(undefined4 *)((int)unaff_EBP + 0x878);
          *(undefined4 *)
           (*(int *)((int)unaff_EBP + 0x870) + 4 + *(int *)((int)unaff_EBP + 0x54) * 8) =
               *(undefined4 *)((int)unaff_EBP + 0x87c);
          puStack00000010 = (uint *)((int)puStack00000010 + 1);
          goto LAB_004d55fa;
        }
        break;
      default:
        goto switchD_004d4cc1_caseD_23;
      case '%':
        if (*(int *)((int)unaff_EBP + 0x8c) != 0) goto switchD_004d4cc1_caseD_3b;
        puStack00000010 = (uint *)((int)unaff_EBX + 1);
        *(int *)((int)unaff_EBP + 0x87c) = *(int *)((int)unaff_EBP + 0x87c) + 1;
        goto LAB_004d55fa;
      case '*':
        puVar5 = *(undefined1 **)((int)unaff_EBP + 0x874);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_00579274;
        }
        FUN_0053a090((undefined1 *)((int)register0x00000010 + 0x21c),s__s_line__d_column__d_0055e730
                     ,(uint)puVar5);
        puVar6 = (undefined4 *)
                 FUN_004d2f40(unaff_EBP,&uStack00000048,(char *)((int)register0x00000010 + 0x21c));
        uVar17 = *puVar6;
        in_stack_0000001c = (undefined *)puVar6[1];
        if ((char)uVar17 == '\0') {
          *(undefined4 *)((int)unaff_EBP + 0x90) = 2;
          *in_stack_00000414 = uVar17;
          in_stack_00000414[1] = in_stack_0000001c;
          return;
        }
        if (*(int *)((int)unaff_EBP + 0x54) != 0) {
          iVar8 = *(int *)((int)unaff_EBP + 0x50);
          iVar9 = *(int *)((int)unaff_EBP + 0x54) + -1;
          *(int *)((int)unaff_EBP + 0x54) = iVar9;
          *(undefined4 *)(iVar8 + iVar9 * 8) = uVar17;
          *(undefined **)(iVar8 + 4 + iVar9 * 8) = in_stack_0000001c;
LAB_004d5044:
          *(undefined4 *)(*(int *)((int)unaff_EBP + 0x870) + *(int *)((int)unaff_EBP + 0x54) * 8) =
               *(undefined4 *)((int)unaff_EBP + 0x878);
          *(undefined4 *)
           (*(int *)((int)unaff_EBP + 0x870) + 4 + *(int *)((int)unaff_EBP + 0x54) * 8) =
               *(undefined4 *)((int)unaff_EBP + 0x87c);
          puStack00000010 = (uint *)((int)unaff_EBX + 1);
          goto LAB_004d55fa;
        }
        break;
      case ';':
switchD_004d4cc1_caseD_3b:
        sVar16 = _strcspn((char *)((int)unaff_EBX + 1),&DAT_0055d4bc);
        puStack00000010 = (uint *)((char *)((int)unaff_EBX + 1) + sVar16);
        goto LAB_004d55fa;
      case '[':
        if (*(int *)((int)unaff_EBP + 0x54) != 0) {
          iVar8 = *(int *)((int)unaff_EBP + 0x50);
          iVar9 = *(int *)((int)unaff_EBP + 0x54) + -1;
          *(int *)((int)unaff_EBP + 0x54) = iVar9;
          *(undefined4 *)(iVar8 + iVar9 * 8) = 10;
          *(undefined **)(iVar8 + 4 + iVar9 * 8) = in_stack_0000001c;
          *(undefined4 *)(*(int *)((int)unaff_EBP + 0x870) + *(int *)((int)unaff_EBP + 0x54) * 8) =
               *(undefined4 *)((int)unaff_EBP + 0x878);
          *(undefined4 *)
           (*(int *)((int)unaff_EBP + 0x870) + 4 + *(int *)((int)unaff_EBP + 0x54) * 8) =
               *(undefined4 *)((int)unaff_EBP + 0x87c);
          puStack00000010 = (uint *)((int)unaff_EBX + 1);
          goto LAB_004d55fa;
        }
        break;
      case ']':
        if (*(int *)((int)unaff_EBP + 0x54) != 0) {
          iVar8 = *(int *)((int)unaff_EBP + 0x50);
          iVar9 = *(int *)((int)unaff_EBP + 0x54) + -1;
          *(int *)((int)unaff_EBP + 0x54) = iVar9;
          *(undefined4 *)(iVar8 + iVar9 * 8) = 0xb;
          *(undefined **)(iVar8 + 4 + iVar9 * 8) = in_stack_0000001c;
          *(undefined4 *)(*(int *)((int)unaff_EBP + 0x870) + *(int *)((int)unaff_EBP + 0x54) * 8) =
               *(undefined4 *)((int)unaff_EBP + 0x878);
          *(undefined4 *)
           (*(int *)((int)unaff_EBP + 0x870) + 4 + *(int *)((int)unaff_EBP + 0x54) * 8) =
               *(undefined4 *)((int)unaff_EBP + 0x87c);
          puStack00000010 = (uint *)((int)unaff_EBX + 1);
          goto LAB_004d55fa;
        }
        break;
      case '{':
        if (*(int *)((int)unaff_EBP + 0x54) == 0) break;
        iVar8 = *(int *)((int)unaff_EBP + 0x50);
        iVar9 = *(int *)((int)unaff_EBP + 0x54) + -1;
        *(int *)((int)unaff_EBP + 0x54) = iVar9;
        *(undefined4 *)(iVar8 + iVar9 * 8) = 0xc;
        *(undefined **)(iVar8 + 4 + iVar9 * 8) = in_stack_0000001c;
        *(undefined4 *)(*(int *)((int)unaff_EBP + 0x870) + *(int *)((int)unaff_EBP + 0x54) * 8) =
             *(undefined4 *)((int)unaff_EBP + 0x878);
        *(undefined4 *)(*(int *)((int)unaff_EBP + 0x870) + 4 + *(int *)((int)unaff_EBP + 0x54) * 8)
             = *(undefined4 *)((int)unaff_EBP + 0x87c);
        puStack00000010 = (uint *)((int)unaff_EBX + 1);
        goto LAB_004d55fa;
      case '}':
        *(undefined4 *)((int)unaff_EBP + 0x94) = 0xd;
        *(undefined **)((int)unaff_EBP + 0x98) = in_stack_0000001c;
        FUN_004d3930((int)unaff_EBP,(uint)bVar3,0xd,in_stack_0000001c);
        if ((*(int *)((int)unaff_EBP + 0x90) != 0) && (*(int *)((int)unaff_EBP + 0xa4) == 0)) {
          FUN_004d4550(unaff_EBP);
        }
        if (*(int *)((int)unaff_EBP + 0x54) < *(int *)((int)unaff_EBP + 0x58)) {
          iVar8 = *(int *)((int)unaff_EBP + 0x54) + 1;
          *(int *)((int)unaff_EBP + 0x54) = iVar8;
          uVar17 = *(undefined4 *)(*(int *)((int)unaff_EBP + 0x50) + -8 + iVar8 * 8);
          in_stack_0000001c = *(undefined **)(*(int *)((int)unaff_EBP + 0x50) + -4 + iVar8 * 8);
        }
        else {
          *(undefined4 *)((int)unaff_EBP + 0x90) = 6;
          FUN_004d4550(unaff_EBP);
          *(undefined4 *)((int)unaff_EBP + 0x90) = 0;
          *(undefined4 *)((int)unaff_EBP + 0xa4) = 0;
          uVar17 = 0;
          in_stack_0000001c = in_stack_00000044;
        }
        if (*(int *)((int)unaff_EBP + 0x54) != 0) {
          iVar8 = *(int *)((int)unaff_EBP + 0x50);
          iVar9 = *(int *)((int)unaff_EBP + 0x54) + -1;
          *(int *)((int)unaff_EBP + 0x54) = iVar9;
          *(undefined4 *)(iVar8 + iVar9 * 8) = uVar17;
          *(undefined **)(iVar8 + 4 + iVar9 * 8) = in_stack_0000001c;
          goto LAB_004d5044;
        }
      }
      *(undefined4 *)((int)unaff_EBP + 0x90) = 3;
      FUN_004d4550(unaff_EBP);
      *(undefined4 *)((int)unaff_EBP + 0x90) = 0;
      puStack00000010 = (uint *)((int)puStack00000010 + 1);
      *(undefined4 *)((int)unaff_EBP + 0xa4) = 0;
      goto LAB_004d55fa;
    }
switchD_004d4cc1_caseD_23:
    in_stack_00000024 = (undefined *)_strcspn((char *)unaff_EBX,s__________0055e724);
    uStack0000002c = in_stack_00000024;
    if (in_stack_00000024 == (undefined *)0x0) {
LAB_004d55f5:
      puStack00000010 = (uint *)((int)unaff_EBX + 1);
      goto LAB_004d55fa;
    }
    in_stack_00000014._3_1_ = in_stack_00000024[(int)unaff_EBX];
    in_stack_00000038 = in_stack_00000024 + (int)unaff_EBX;
    *in_stack_00000038 = 0;
    puVar7 = FUN_0053ae60(unaff_EBX,'.');
    if (puVar7 != (uint *)0x0) {
      iVar8 = FUN_0053ae00((char *)unaff_EBX,&DAT_0055e71c,&uStack00000034);
      if (iVar8 < 1) {
FUN_004d570c:
        *(undefined4 *)((int)unaff_EBP + 0x90) = 9;
        *in_stack_00000414 = 0;
        in_stack_00000414[1] = in_stack_0000001c;
        return;
      }
      in_stack_0000001c = uStack00000034;
      if (*(int *)((int)unaff_EBP + 0x54) == 0) {
LAB_004d55c2:
        *(undefined4 *)((int)unaff_EBP + 0x90) = 3;
        FUN_004d4550(unaff_EBP);
        *(undefined4 *)((int)unaff_EBP + 0x90) = 0;
        *(undefined4 *)((int)unaff_EBP + 0xa4) = 0;
      }
      else {
        iVar8 = *(int *)((int)unaff_EBP + 0x50);
        iVar9 = *(int *)((int)unaff_EBP + 0x54) + -1;
        *(int *)((int)unaff_EBP + 0x54) = iVar9;
        *(undefined4 *)(iVar8 + iVar9 * 8) = 4;
        *(undefined **)(iVar8 + 4 + iVar9 * 8) = uStack00000034;
        *(undefined4 *)(*(int *)((int)unaff_EBP + 0x870) + *(int *)((int)unaff_EBP + 0x54) * 8) =
             *(undefined4 *)((int)unaff_EBP + 0x878);
        *(undefined4 *)(*(int *)((int)unaff_EBP + 0x870) + 4 + *(int *)((int)unaff_EBP + 0x54) * 8)
             = *(undefined4 *)((int)unaff_EBP + 0x87c);
      }
      goto LAB_004d55df;
    }
    cVar2 = (char)*unaff_EBX;
    if (((cVar2 == '+') || (cVar2 == '-')) || (uVar4 = FUN_0053b6b0((int)cVar2), uVar4 != 0)) {
      iVar8 = FUN_0053ae00((char *)unaff_EBX,(byte *)0x55e714,&uStack0000002c);
      if (iVar8 < 1) goto FUN_004d570c;
      in_stack_0000001c = uStack0000002c;
      if (*(int *)((int)unaff_EBP + 0x54) == 0) goto LAB_004d55c2;
      iVar8 = *(int *)((int)unaff_EBP + 0x50);
      iVar9 = *(int *)((int)unaff_EBP + 0x54) + -1;
      *(int *)((int)unaff_EBP + 0x54) = iVar9;
      *(undefined4 *)(iVar8 + iVar9 * 8) = 1;
      *(undefined **)(iVar8 + 4 + iVar9 * 8) = uStack0000002c;
      *(undefined4 *)(*(int *)((int)unaff_EBP + 0x870) + *(int *)((int)unaff_EBP + 0x54) * 8) =
           *(undefined4 *)((int)unaff_EBP + 0x878);
      *(undefined4 *)(*(int *)((int)unaff_EBP + 0x870) + 4 + *(int *)((int)unaff_EBP + 0x54) * 8) =
           *(undefined4 *)((int)unaff_EBP + 0x87c);
      goto LAB_004d55df;
    }
    pbVar18 = &DAT_0055e3d0;
    puVar7 = unaff_EBX;
    do {
      bVar3 = (byte)*puVar7;
      bVar21 = bVar3 < *pbVar18;
      if (bVar3 != *pbVar18) {
LAB_004d51ac:
        iVar8 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
        goto LAB_004d51b1;
      }
      if (bVar3 == 0) break;
      bVar3 = *(byte *)((int)puVar7 + 1);
      bVar21 = bVar3 < pbVar18[1];
      if (bVar3 != pbVar18[1]) goto LAB_004d51ac;
      puVar7 = (uint *)((int)puVar7 + 2);
      pbVar18 = pbVar18 + 2;
    } while (bVar3 != 0);
    iVar8 = 0;
LAB_004d51b1:
    if (iVar8 != 0) {
      pbVar18 = &DAT_0055e3cc;
      puVar7 = unaff_EBX;
      do {
        bVar3 = (byte)*puVar7;
        bVar21 = bVar3 < *pbVar18;
        if (bVar3 != *pbVar18) {
LAB_004d51f4:
          iVar8 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
          goto LAB_004d51f9;
        }
        if (bVar3 == 0) break;
        bVar3 = *(byte *)((int)puVar7 + 1);
        bVar21 = bVar3 < pbVar18[1];
        if (bVar3 != pbVar18[1]) goto LAB_004d51f4;
        puVar7 = (uint *)((int)puVar7 + 2);
        pbVar18 = pbVar18 + 2;
      } while (bVar3 != 0);
      iVar8 = 0;
LAB_004d51f9:
      if (iVar8 == 0) {
        iVar8 = *(int *)((int)unaff_EBP + 0x54);
        uVar17 = 0xf;
        if (iVar8 != 0) goto LAB_004d5209;
        *(undefined4 *)((int)unaff_EBP + 0x90) = 3;
        FUN_004d4550(unaff_EBP);
        *(undefined4 *)((int)unaff_EBP + 0x90) = 0;
        *(undefined4 *)((int)unaff_EBP + 0xa4) = 0;
      }
      else {
        if ((char)*unaff_EBX == '/') {
          unaff_ESI = *(uint **)((int)unaff_EBP + 0x74);
          puVar7 = (uint *)((int)unaff_EBP + 0x74);
          pbVar18 = (byte *)((int)unaff_EBX + 1);
          break;
        }
        psVar14 = (size_t *)((int)unaff_EBP + 0x74);
        psVar15 = *(size_t **)((int)unaff_EBP + 0x74);
        while (psVar15 != (size_t *)0x0) {
          pbVar18 = (byte *)psVar15[1];
          puVar7 = unaff_EBX;
          do {
            bVar3 = (byte)*puVar7;
            bVar21 = bVar3 < *pbVar18;
            if (bVar3 != *pbVar18) {
code_r0x004d5415:
              iVar8 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
              goto code_r0x004d541a;
            }
            if (bVar3 == 0) break;
            bVar3 = *(byte *)((int)puVar7 + 1);
            bVar21 = bVar3 < pbVar18[1];
            if (bVar3 != pbVar18[1]) goto code_r0x004d5415;
            puVar7 = (uint *)((int)puVar7 + 2);
            pbVar18 = pbVar18 + 2;
          } while (bVar3 != 0);
          iVar8 = 0;
code_r0x004d541a:
          if (iVar8 == 0) {
            in_stack_0000001c = (undefined *)*psVar15;
            goto code_r0x004d54fd;
          }
          psVar14 = psVar15 + 2;
          if (-1 < iVar8) {
            psVar14 = psVar15 + 3;
          }
          psVar15 = (size_t *)*psVar14;
        }
        psVar15 = (size_t *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
        if (psVar15 == (size_t *)0x0) {
          in_stack_0000001c = *(undefined **)((int)unaff_EBP + 0x7c);
        }
        else {
          uVar4 = 0xffffffff;
          puVar7 = unaff_EBX;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            uVar12 = *puVar7;
            puVar7 = (uint *)((int)puVar7 + 1);
          } while ((char)uVar12 != '\0');
          sVar16 = Ordinal_401(~uVar4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
          psVar15[1] = sVar16;
          if (sVar16 == 0) {
            Ordinal_403(psVar15,s_C__lomse_source_storm_h_00555130,0x3eb,0);
            in_stack_0000001c = (undefined *)0x0;
          }
          else {
            *(uint *)((int)unaff_EBP + 0xa90) = *(int *)((int)unaff_EBP + 0xa90) + ~uVar4 + 0x18;
            *(size_t **)(*(int *)((int)unaff_EBP + 0x80) + *(int *)((int)unaff_EBP + 0x78) * 4) =
                 psVar15;
            psVar15[2] = 0;
            psVar15[3] = 0;
            *psVar15 = *(size_t *)((int)unaff_EBP + 0x78);
            uVar4 = 0xffffffff;
            *(int *)((int)unaff_EBP + 0x78) = *(int *)((int)unaff_EBP + 0x78) + 1;
            psVar15[4] = 0;
            psVar15[5] = 0;
            puVar7 = unaff_EBX;
            do {
              puVar11 = puVar7;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              puVar11 = (uint *)((int)puVar7 + 1);
              uVar12 = *puVar7;
              puVar7 = puVar11;
            } while ((char)uVar12 != '\0');
            uVar4 = ~uVar4;
            puVar6 = (undefined4 *)((int)puVar11 - uVar4);
            puVar20 = (undefined4 *)psVar15[1];
            for (uVar12 = uVar4 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar20 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar20 = puVar20 + 1;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined1 *)puVar20 = *(undefined1 *)puVar6;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
              puVar20 = (undefined4 *)((int)puVar20 + 1);
            }
            *psVar14 = (size_t)psVar15;
            in_stack_0000001c = (undefined *)*psVar15;
          }
        }
code_r0x004d54fd:
        iVar8 = *(int *)((int)unaff_EBP + 0x54);
        uVar17 = 5;
        if (iVar8 == 0) {
          FUN_00404ab0(unaff_EBP,3);
        }
        else {
LAB_004d550f:
          iVar9 = *(int *)((int)unaff_EBP + 0x50);
          iVar8 = iVar8 + -1;
          *(int *)((int)unaff_EBP + 0x54) = iVar8;
          *(undefined4 *)(iVar9 + iVar8 * 8) = uVar17;
          *(undefined **)(iVar9 + 4 + iVar8 * 8) = in_stack_0000001c;
          *(undefined4 *)(*(int *)((int)unaff_EBP + 0x870) + *(int *)((int)unaff_EBP + 0x54) * 8) =
               *(undefined4 *)((int)unaff_EBP + 0x878);
          *(undefined4 *)
           (*(int *)((int)unaff_EBP + 0x870) + 4 + *(int *)((int)unaff_EBP + 0x54) * 8) =
               *(undefined4 *)((int)unaff_EBP + 0x87c);
        }
      }
      goto LAB_004d55df;
    }
    iVar8 = *(int *)((int)unaff_EBP + 0x54);
    uVar17 = 0xe;
    if (iVar8 != 0) {
LAB_004d5209:
      iVar9 = *(int *)((int)unaff_EBP + 0x50);
      iVar8 = iVar8 + -1;
      *(int *)((int)unaff_EBP + 0x54) = iVar8;
      *(undefined4 *)(iVar9 + iVar8 * 8) = uVar17;
      *(undefined **)(iVar9 + 4 + iVar8 * 8) = in_stack_0000001c;
      *(undefined4 *)(*(int *)((int)unaff_EBP + 0x870) + *(int *)((int)unaff_EBP + 0x54) * 8) =
           *(undefined4 *)((int)unaff_EBP + 0x878);
      *(undefined4 *)(*(int *)((int)unaff_EBP + 0x870) + 4 + *(int *)((int)unaff_EBP + 0x54) * 8) =
           *(undefined4 *)((int)unaff_EBP + 0x87c);
      goto LAB_004d55df;
    }
  } while( true );
joined_r0x004d5289:
  if (unaff_ESI == (uint *)0x0) goto LAB_004d52d5;
  pbVar19 = (byte *)unaff_ESI[1];
  pbVar10 = pbVar18;
  do {
    bVar3 = *pbVar10;
    bVar21 = bVar3 < *pbVar19;
    if (bVar3 != *pbVar19) {
LAB_004d52b6:
      iVar8 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
      goto LAB_004d52bb;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar10[1];
    bVar21 = bVar3 < pbVar19[1];
    if (bVar3 != pbVar19[1]) goto LAB_004d52b6;
    pbVar10 = pbVar10 + 2;
    pbVar19 = pbVar19 + 2;
  } while (bVar3 != 0);
  iVar8 = 0;
LAB_004d52bb:
  if (iVar8 == 0) goto code_r0x004d5735;
  puVar7 = unaff_ESI + 2;
  if (-1 < iVar8) {
    puVar7 = unaff_ESI + 3;
  }
  unaff_ESI = (uint *)*puVar7;
  goto joined_r0x004d5289;
LAB_004d52d5:
  puVar11 = (uint *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar11 == (uint *)0x0) {
    puVar13 = *(undefined **)((int)unaff_EBP + 0x7c);
  }
  else {
    uVar4 = 0xffffffff;
    pbVar19 = pbVar18;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar3 = *pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (bVar3 != 0);
    uVar12 = Ordinal_401(~uVar4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    puVar11[1] = uVar12;
    if (uVar12 == 0) {
      Ordinal_403(puVar11,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      puVar13 = (undefined *)0x0;
    }
    else {
      *(uint *)((int)unaff_EBP + 0xa90) = *(int *)((int)unaff_EBP + 0xa90) + ~uVar4 + 0x18;
      *(uint **)(*(int *)((int)unaff_EBP + 0x80) + *(int *)((int)unaff_EBP + 0x78) * 4) = puVar11;
      puVar11[2] = 0;
      puVar11[3] = 0;
      *puVar11 = *(uint *)((int)unaff_EBP + 0x78);
      uVar4 = 0xffffffff;
      *(int *)((int)unaff_EBP + 0x78) = *(int *)((int)unaff_EBP + 0x78) + 1;
      puVar11[4] = 0;
      puVar11[5] = 0;
      do {
        pbVar19 = pbVar18;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pbVar19 = pbVar18 + 1;
        bVar3 = *pbVar18;
        pbVar18 = pbVar19;
      } while (bVar3 != 0);
      uVar4 = ~uVar4;
      pbVar18 = pbVar19 + -uVar4;
      pbVar19 = (byte *)puVar11[1];
      for (uVar12 = uVar4 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pbVar19 = *(undefined4 *)pbVar18;
        pbVar18 = pbVar18 + 4;
        pbVar19 = pbVar19 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pbVar19 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        pbVar19 = pbVar19 + 1;
      }
      *puVar7 = (uint)puVar11;
      puVar13 = (undefined *)*puVar11;
    }
  }
  goto LAB_004d5399;
}


