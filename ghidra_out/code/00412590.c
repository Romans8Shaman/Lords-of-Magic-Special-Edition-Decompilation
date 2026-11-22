
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00412590(void *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  FUN_004122a0(this,param_1);
  uVar1 = *(uint *)((int)this + 0x30);
  if ((~uVar1 & 0x100) == 0) {
    if ((uVar1 & 0x1800000) == 0) {
      if (*(int *)((int)this + 0x48) == DAT_005aa7d4) {
        FUN_0041da60((int)this);
        FUN_00411760(0x5ab344);
        iVar4 = 0xf;
        puVar2 = this;
        puVar5 = &DAT_005ab344;
        for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        _DAT_005ab370 = 0;
        _DAT_005ab388 = *(undefined4 *)((int)this + 0x44);
        _DAT_005ab38c = *(undefined4 *)((int)this + 0x48);
        _DAT_005ab390 = *(undefined4 *)((int)this + 0x4c);
        _DAT_005ab394 = *(undefined4 *)((int)this + 0x50);
        _DAT_005ab398 = *(undefined4 *)((int)this + 0x54);
        _DAT_005ab39c = *(undefined4 *)((int)this + 0x58);
        _DAT_005ab3a0 = *(undefined4 *)((int)this + 0x5c);
        _DAT_005ab3a4 = *(undefined4 *)((int)this + 0x60);
        _DAT_005ab3a8 = *(undefined4 *)((int)this + 100);
        puVar2 = (undefined4 *)((int)this + 0x68);
        puVar5 = &DAT_005ab3ac;
        for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        _DAT_005ab404 = *(undefined4 *)((int)this + 0xc0);
        puVar2 = &DAT_005ab408;
        do {
          iVar4 = iVar4 + -1;
          puVar5 = (undefined4 *)((int)this + -0x5ab344 + (int)puVar2);
          puVar6 = puVar2;
          for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar2 = puVar2 + 0x13;
        } while (iVar4 != 0);
        _DAT_005ab87c = *(undefined4 *)((int)this + 0x538);
        _DAT_005ab880 = *(undefined4 *)((int)this + 0x53c);
        _DAT_005ab884 = *(undefined4 *)((int)this + 0x540);
        _DAT_005ab888 = *(undefined4 *)((int)this + 0x544);
        _DAT_005ab88c = *(undefined4 *)((int)this + 0x548);
        _DAT_005ab890 = *(undefined4 *)((int)this + 0x54c);
        _DAT_005ab894 = *(undefined4 *)((int)this + 0x550);
        _DAT_005ab898 = *(undefined4 *)((int)this + 0x554);
        _DAT_005ab89c = *(undefined4 *)((int)this + 0x558);
        _DAT_005ab8a0 = *(undefined4 *)((int)this + 0x55c);
        _DAT_005ab8a4 = *(undefined4 *)((int)this + 0x560);
        _DAT_005ab8a8 = *(undefined4 *)((int)this + 0x564);
        puVar2 = (undefined4 *)((int)this + 0x568);
        puVar5 = &DAT_005ab8ac;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        _DAT_005ab8d0 = *(undefined4 *)((int)this + 0x58c);
        _DAT_005ab8d4 = *(undefined4 *)((int)this + 0x590);
        _DAT_005ab8d8 = *(undefined4 *)((int)this + 0x594);
        _DAT_005ab8dc = *(undefined4 *)((int)this + 0x598);
        _DAT_005ab8e0 = *(undefined4 *)((int)this + 0x59c);
        _DAT_005ab8e4 = *(undefined4 *)((int)this + 0x5a0);
        _DAT_005ab8e8 = *(undefined4 *)((int)this + 0x5a4);
        _DAT_005ab8ec = *(undefined4 *)((int)this + 0x5a8);
        DAT_005ab8f0 = *(undefined1 *)((int)this + 0x5ac);
        _DAT_005ab8f4 = *(undefined4 *)((int)this + 0x5b0);
        _DAT_005ab8f8 = *(undefined4 *)((int)this + 0x5b4);
        _DAT_005ab8fc = *(undefined4 *)((int)this + 0x5b8);
        _DAT_005ab900 = *(undefined4 *)((int)this + 0x5bc);
        _DAT_005ab904 = *(undefined4 *)((int)this + 0x5c0);
        _DAT_005ab908 = *(undefined4 *)((int)this + 0x5c4);
        DAT_005ab90c = *(undefined1 *)((int)this + 0x5c8);
        _DAT_005ab910 = *(undefined4 *)((int)this + 0x5cc);
        DAT_005ab914 = *(undefined1 *)((int)this + 0x5d0);
        _DAT_005ab918 = *(undefined4 *)((int)this + 0x5d4);
        DAT_005ab91c = *(undefined1 *)((int)this + 0x5d8);
        _DAT_005ab36c = 0xfffffffa;
      }
      else if (*(int *)((int)this + 0x48) == DAT_005aadb0) {
        FUN_0041da60((int)this);
        FUN_00411760(0x5ab920);
        iVar4 = 0xf;
        puVar2 = this;
        puVar5 = &DAT_005ab920;
        for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        _DAT_005ab94c = 0;
        _DAT_005ab964 = *(undefined4 *)((int)this + 0x44);
        _DAT_005ab968 = *(undefined4 *)((int)this + 0x48);
        _DAT_005ab96c = *(undefined4 *)((int)this + 0x4c);
        _DAT_005ab970 = *(undefined4 *)((int)this + 0x50);
        _DAT_005ab974 = *(undefined4 *)((int)this + 0x54);
        _DAT_005ab978 = *(undefined4 *)((int)this + 0x58);
        _DAT_005ab97c = *(undefined4 *)((int)this + 0x5c);
        _DAT_005ab980 = *(undefined4 *)((int)this + 0x60);
        _DAT_005ab984 = *(undefined4 *)((int)this + 100);
        puVar2 = (undefined4 *)((int)this + 0x68);
        puVar5 = &DAT_005ab988;
        for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        _DAT_005ab9e0 = *(undefined4 *)((int)this + 0xc0);
        puVar2 = &DAT_005ab9e4;
        do {
          iVar4 = iVar4 + -1;
          puVar5 = (undefined4 *)((int)this + -0x5ab920 + (int)puVar2);
          puVar6 = puVar2;
          for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar2 = puVar2 + 0x13;
        } while (iVar4 != 0);
        _DAT_005abe58 = *(undefined4 *)((int)this + 0x538);
        _DAT_005abe5c = *(undefined4 *)((int)this + 0x53c);
        _DAT_005abe60 = *(undefined4 *)((int)this + 0x540);
        _DAT_005abe64 = *(undefined4 *)((int)this + 0x544);
        _DAT_005abe68 = *(undefined4 *)((int)this + 0x548);
        _DAT_005abe6c = *(undefined4 *)((int)this + 0x54c);
        _DAT_005abe70 = *(undefined4 *)((int)this + 0x550);
        _DAT_005abe74 = *(undefined4 *)((int)this + 0x554);
        _DAT_005abe78 = *(undefined4 *)((int)this + 0x558);
        _DAT_005abe7c = *(undefined4 *)((int)this + 0x55c);
        _DAT_005abe80 = *(undefined4 *)((int)this + 0x560);
        _DAT_005abe84 = *(undefined4 *)((int)this + 0x564);
        puVar2 = (undefined4 *)((int)this + 0x568);
        puVar5 = &DAT_005abe88;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        _DAT_005abeac = *(undefined4 *)((int)this + 0x58c);
        _DAT_005abeb0 = *(undefined4 *)((int)this + 0x590);
        _DAT_005abeb4 = *(undefined4 *)((int)this + 0x594);
        _DAT_005abeb8 = *(undefined4 *)((int)this + 0x598);
        _DAT_005abebc = *(undefined4 *)((int)this + 0x59c);
        _DAT_005abec0 = *(undefined4 *)((int)this + 0x5a0);
        _DAT_005abec4 = *(undefined4 *)((int)this + 0x5a4);
        _DAT_005abec8 = *(undefined4 *)((int)this + 0x5a8);
        DAT_005abecc = *(undefined1 *)((int)this + 0x5ac);
        _DAT_005abed0 = *(undefined4 *)((int)this + 0x5b0);
        _DAT_005abed4 = *(undefined4 *)((int)this + 0x5b4);
        _DAT_005abed8 = *(undefined4 *)((int)this + 0x5b8);
        _DAT_005abedc = *(undefined4 *)((int)this + 0x5bc);
        _DAT_005abee0 = *(undefined4 *)((int)this + 0x5c0);
        _DAT_005abee4 = *(undefined4 *)((int)this + 0x5c4);
        DAT_005abee8 = *(undefined1 *)((int)this + 0x5c8);
        _DAT_005abeec = *(undefined4 *)((int)this + 0x5cc);
        DAT_005abef0 = *(undefined1 *)((int)this + 0x5d0);
        _DAT_005abef4 = *(undefined4 *)((int)this + 0x5d4);
        DAT_005abef8 = *(undefined1 *)((int)this + 0x5d8);
        _DAT_005ab948 = 0xfffffff9;
      }
    }
    else {
      FUN_00411760(0x5ab920);
      iVar4 = 0xf;
      puVar2 = this;
      puVar5 = &DAT_005ab920;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      _DAT_005ab94c = 0;
      _DAT_005ab964 = *(undefined4 *)((int)this + 0x44);
      _DAT_005ab968 = *(undefined4 *)((int)this + 0x48);
      _DAT_005ab96c = *(undefined4 *)((int)this + 0x4c);
      _DAT_005ab970 = *(undefined4 *)((int)this + 0x50);
      _DAT_005ab974 = *(undefined4 *)((int)this + 0x54);
      _DAT_005ab978 = *(undefined4 *)((int)this + 0x58);
      _DAT_005ab97c = *(undefined4 *)((int)this + 0x5c);
      _DAT_005ab980 = *(undefined4 *)((int)this + 0x60);
      _DAT_005ab984 = *(undefined4 *)((int)this + 100);
      puVar2 = (undefined4 *)((int)this + 0x68);
      puVar5 = &DAT_005ab988;
      for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      _DAT_005ab9e0 = *(undefined4 *)((int)this + 0xc0);
      puVar2 = &DAT_005ab9e4;
      do {
        iVar4 = iVar4 + -1;
        puVar5 = (undefined4 *)((int)puVar2 + (int)this + -0x5ab920);
        puVar6 = puVar2;
        for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar2 = puVar2 + 0x13;
      } while (iVar4 != 0);
      _DAT_005abe58 = *(undefined4 *)((int)this + 0x538);
      _DAT_005abe5c = *(undefined4 *)((int)this + 0x53c);
      _DAT_005abe60 = *(undefined4 *)((int)this + 0x540);
      _DAT_005abe64 = *(undefined4 *)((int)this + 0x544);
      _DAT_005abe68 = *(undefined4 *)((int)this + 0x548);
      _DAT_005abe6c = *(undefined4 *)((int)this + 0x54c);
      _DAT_005abe70 = *(undefined4 *)((int)this + 0x550);
      _DAT_005abe74 = *(undefined4 *)((int)this + 0x554);
      _DAT_005abe78 = *(undefined4 *)((int)this + 0x558);
      _DAT_005abe7c = *(undefined4 *)((int)this + 0x55c);
      _DAT_005abe80 = *(undefined4 *)((int)this + 0x560);
      _DAT_005abe84 = *(undefined4 *)((int)this + 0x564);
      puVar2 = (undefined4 *)((int)this + 0x568);
      puVar5 = &DAT_005abe88;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      _DAT_005abeac = *(undefined4 *)((int)this + 0x58c);
      _DAT_005abeb0 = *(undefined4 *)((int)this + 0x590);
      _DAT_005abeb4 = *(undefined4 *)((int)this + 0x594);
      _DAT_005abeb8 = *(undefined4 *)((int)this + 0x598);
      _DAT_005abebc = *(undefined4 *)((int)this + 0x59c);
      _DAT_005abec0 = *(undefined4 *)((int)this + 0x5a0);
      _DAT_005abec4 = *(undefined4 *)((int)this + 0x5a4);
      _DAT_005abec8 = *(undefined4 *)((int)this + 0x5a8);
      DAT_005abecc = *(undefined1 *)((int)this + 0x5ac);
      _DAT_005abed0 = *(undefined4 *)((int)this + 0x5b0);
      _DAT_005abed4 = *(undefined4 *)((int)this + 0x5b4);
      _DAT_005abed8 = *(undefined4 *)((int)this + 0x5b8);
      _DAT_005abedc = *(undefined4 *)((int)this + 0x5bc);
      _DAT_005abee0 = *(undefined4 *)((int)this + 0x5c0);
      _DAT_005abee4 = *(undefined4 *)((int)this + 0x5c4);
      DAT_005abee8 = *(undefined1 *)((int)this + 0x5c8);
      _DAT_005abeec = *(undefined4 *)((int)this + 0x5cc);
      DAT_005abef0 = *(undefined1 *)((int)this + 0x5d0);
      _DAT_005abef4 = *(undefined4 *)((int)this + 0x5d4);
      DAT_005abef8 = *(undefined1 *)((int)this + 0x5d8);
    }
    FUN_004117f0(this,0);
    if (this == (void *)0x0) {
      return 1;
    }
    (/*IC:00412cb1*/*(code *)**(undefined4 **)this)(1);
    return 1;
  }
  if ((uVar1 & 0x400000) == 0) {
    if ((uVar1 & 0x1000000) == 0) {
      if (((uVar1 & 0x800000) == 0) || ((uVar1 & 0x800) != 0)) goto LAB_0041306a;
      uVar1 = FUN_00482ac0(&DAT_005aa12c,DAT_005ae8a0,2);
      if (uVar1 == 0) {
        OutputDebugStringA(s____________BUILDING_ARMY_with_no_005558c4);
        if (this == (void *)0x0) {
          return 1;
        }
        (/*IC:00413013*/*(code *)**(undefined4 **)this)(1);
        return 1;
      }
      if (*(int *)(uVar1 + 0x48) != 0) {
        FUN_00411760(*(int *)(uVar1 + 0x48));
      }
      *(void **)(uVar1 + 0x48) = this;
    }
    else {
      if ((uVar1 & 0x800) != 0) {
LAB_0041306a:
        FUN_004a7d50(&DAT_005ae958,this,*(int *)((int)this + 0x1c));
        uVar1 = *(uint *)((int)this + 0x30);
        if ((uVar1 & 0x400) == 0) {
          if ((uVar1 & 0x800) == 0) {
            if (*(int *)((int)this + 0x48) == DAT_005aa7d4) {
              _DAT_005adc48 = *(undefined4 *)((int)this + 0x28);
              return 1;
            }
            if (*(int *)((int)this + 0x48) == DAT_005aadb0) {
              _DAT_005adc4c = *(undefined4 *)((int)this + 0x28);
            }
          }
          else {
            if ((*(int *)((int)this + 0x5b0) != -1) &&
               (*(int *)((int)this + 0x48) != *(int *)((int)this + 0x5b8))) {
              *(uint *)((int)this + 0x30) = uVar1 & 0xfffff7ff;
              return 1;
            }
            if (*(int *)((int)this + 0x48) == DAT_005aa7d4) {
              FUN_00419d00(&DAT_005acab4,this);
              return 1;
            }
            if (*(int *)((int)this + 0x48) == DAT_005aadb0) {
              FUN_00419d00(&DAT_005ad090,this);
              return 1;
            }
          }
        }
        else {
          if (*(int *)((int)this + 0x48) == DAT_005aa7d4) {
            FUN_00419d00(&DAT_005abefc,this);
            return 1;
          }
          if (*(int *)((int)this + 0x48) == DAT_005aadb0) {
            FUN_00419d00(&DAT_005ac4d8,this);
            return 1;
          }
        }
        return 1;
      }
      uVar1 = FUN_00482ac0(&DAT_005aa12c,DAT_005ae8a0,1);
      if (uVar1 == 0) {
        OutputDebugStringA(s____________SPRITE_ARMY_with_no_T_005558fc);
        if (this == (void *)0x0) {
          return 1;
        }
        (/*IC:00412faf*/*(code *)**(undefined4 **)this)(1);
        return 1;
      }
      if (*(int *)(uVar1 + 0x58) != 0) {
        FUN_00411760(*(int *)(uVar1 + 0x58));
      }
      *(void **)(uVar1 + 0x58) = this;
    }
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(uVar1 + 0x28);
    if ((*(uint *)((int)this + 0x30) & 0x400) != 0) {
      FUN_00419d00(&DAT_005ac4d8,this);
      return 1;
    }
  }
  else {
    if ((uVar1 & 0x800) != 0) goto LAB_0041306a;
    uVar1 = FUN_00482ac0(&DAT_005aa12c,DAT_005ae8a0,3);
    if (uVar1 == 0) {
      OutputDebugStringA(s____________ARMY_FROM_CITY_with_n_0055592c);
      if (this == (void *)0x0) {
        return 1;
      }
      (/*IC:00412d04*/*(code *)**(undefined4 **)this)(1);
      return 1;
    }
    if (*(int *)(uVar1 + 0x44) != 0) {
      FUN_00411760(*(int *)(uVar1 + 0x44));
      if (*(undefined4 **)(uVar1 + 0x44) != (undefined4 *)0x0) {
        (/*IC:00412d29*/**(code **)**(undefined4 **)(uVar1 + 0x44))(1);
      }
      *(undefined4 *)(uVar1 + 0x44) = 0;
    }
    *(void **)(uVar1 + 0x44) = this;
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(uVar1 + 0x28);
    if ((*(uint *)((int)this + 0x30) & 0x400) != 0) {
      FUN_00418f10(&DAT_005ac4d8,this);
      _DAT_005ac51c = *(undefined4 *)((int)this + 0x44);
      _DAT_005ac520 = *(undefined4 *)((int)this + 0x48);
      _DAT_005ac524 = *(undefined4 *)((int)this + 0x4c);
      _DAT_005ac528 = *(undefined4 *)((int)this + 0x50);
      _DAT_005ac52c = *(undefined4 *)((int)this + 0x54);
      _DAT_005ac530 = *(undefined4 *)((int)this + 0x58);
      _DAT_005ac534 = *(undefined4 *)((int)this + 0x5c);
      _DAT_005ac538 = *(undefined4 *)((int)this + 0x60);
      _DAT_005ac53c = *(undefined4 *)((int)this + 100);
      puVar2 = (undefined4 *)((int)this + 0x68);
      puVar5 = &DAT_005ac540;
      for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      _DAT_005ac598 = *(undefined4 *)((int)this + 0xc0);
      iVar3 = 0xf;
      puVar2 = &DAT_005ac59c;
      do {
        iVar3 = iVar3 + -1;
        puVar5 = (undefined4 *)((int)this + -0x5ac4d8 + (int)puVar2);
        puVar6 = puVar2;
        for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar2 = puVar2 + 0x13;
      } while (iVar3 != 0);
      _DAT_005aca10 = *(undefined4 *)((int)this + 0x538);
      _DAT_005aca14 = *(undefined4 *)((int)this + 0x53c);
      _DAT_005aca18 = *(undefined4 *)((int)this + 0x540);
      _DAT_005aca1c = *(undefined4 *)((int)this + 0x544);
      _DAT_005aca20 = *(undefined4 *)((int)this + 0x548);
      _DAT_005aca24 = *(undefined4 *)((int)this + 0x54c);
      _DAT_005aca28 = *(undefined4 *)((int)this + 0x550);
      _DAT_005aca2c = *(undefined4 *)((int)this + 0x554);
      _DAT_005aca30 = *(undefined4 *)((int)this + 0x558);
      _DAT_005aca34 = *(undefined4 *)((int)this + 0x55c);
      _DAT_005aca38 = *(undefined4 *)((int)this + 0x560);
      _DAT_005aca3c = *(undefined4 *)((int)this + 0x564);
      puVar2 = (undefined4 *)((int)this + 0x568);
      puVar5 = &DAT_005aca40;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      _DAT_005aca64 = *(undefined4 *)((int)this + 0x58c);
      _DAT_005aca68 = *(undefined4 *)((int)this + 0x590);
      _DAT_005aca6c = *(undefined4 *)((int)this + 0x594);
      _DAT_005aca70 = *(undefined4 *)((int)this + 0x598);
      _DAT_005aca74 = *(undefined4 *)((int)this + 0x59c);
      _DAT_005aca78 = *(undefined4 *)((int)this + 0x5a0);
      _DAT_005aca7c = *(undefined4 *)((int)this + 0x5a4);
      _DAT_005aca80 = *(undefined4 *)((int)this + 0x5a8);
      DAT_005aca84 = *(undefined1 *)((int)this + 0x5ac);
      _DAT_005aca88 = *(undefined4 *)((int)this + 0x5b0);
      _DAT_005aca8c = *(undefined4 *)((int)this + 0x5b4);
      _DAT_005aca90 = *(undefined4 *)((int)this + 0x5b8);
      _DAT_005aca94 = *(undefined4 *)((int)this + 0x5bc);
      _DAT_005aca98 = *(undefined4 *)((int)this + 0x5c0);
      _DAT_005aca9c = *(undefined4 *)((int)this + 0x5c4);
      DAT_005acaa0 = *(undefined1 *)((int)this + 0x5c8);
      _DAT_005acaa4 = *(undefined4 *)((int)this + 0x5cc);
      DAT_005acaa8 = *(undefined1 *)((int)this + 0x5d0);
      _DAT_005acaac = *(undefined4 *)((int)this + 0x5d4);
      DAT_005acab0 = *(undefined1 *)((int)this + 0x5d8);
      return 1;
    }
  }
  _DAT_005adc4c = *(undefined4 *)(uVar1 + 0x28);
  return 1;
}


