
undefined4 __thiscall FUN_00478c00(void *this,int in_stack_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uStack_14;
  byte local_4 [4];
  
  if ((((*(int *)((int)this + 0x13b4) != 0) && (-1 < in_stack_4)) &&
      (in_stack_4 <= *(int *)((int)this + 0xfb8) + -1)) && (-0x9c4 < *(int *)((int)this + 0x13a0)))
  {
    iVar7 = 0;
    piVar6 = (int *)((int)this + 0xf0);
    piVar8 = this;
    do {
      piVar2 = (int *)*piVar8;
      if (piVar2 != (int *)0x0) {
        iVar3 = (/*IC:00478c5a*/**(code **)(*piVar2 + 0x24))(piVar2,local_4);
        if (iVar3 == -0x7787ff6a) {
          (/*IC:00478c69*/**(code **)(*(int *)*piVar8 + 0x50))((int *)*piVar8);
        }
        if (((*piVar6 == *(int *)((int)this + 0x1398)) && (*(int *)((int)this + 0x1398) != -1)) &&
           ((local_4[0] & 5) != 0)) {
          return 0xffffffff;
        }
      }
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 1;
      piVar6 = piVar6 + 7;
    } while (iVar7 < 5);
    iVar7 = FUN_004784f0(this);
    if ((char)iVar7 != -1) {
      iVar7 = (int)(char)iVar7;
      piVar8 = (int *)((int)this + iVar7 * 4);
      puVar4 = (undefined4 *)((int)this + iVar7 * 0x1c + 0xf0);
      FUN_00479050(puVar4,piVar8);
      uStack_14 = (uint)(*(int *)((int)this + 0x13ac) == 1);
      iVar3 = 0;
      piVar6 = (int *)((int)this + 0x180);
      do {
        if (*piVar6 == in_stack_4) {
          piVar6 = *(int **)((int)this + 0x13b4);
          puVar1 = (undefined4 *)((int)this + iVar3 * 4 + 0x14);
          pcVar5 = (char *)(/*IC:00478e66*/**(code **)(*piVar6 + 0x14))(piVar6,piVar6,*puVar1,piVar8);
          if (pcVar5 == (char *)0x88780096) {
            (/*IC:00478e76*/**(code **)(*(int *)*puVar1 + 0x50))((int *)*puVar1);
            iVar3 = FUN_00478570(this,in_stack_4,puVar1);
            if (iVar3 == 0) {
              return 0xffffffff;
            }
          }
          else if (pcVar5 != (char *)0x0) {
            FUN_00478ec0(s_DUPLICATE_SOUND_BUFFER_ERROR_1_0055aefc,pcVar5);
            return 0xffffffff;
          }
          goto LAB_00478df9;
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 7;
      } while (iVar3 < 0x32);
      iVar3 = 0;
      piVar6 = (int *)((int)this + 0x6f8);
      do {
        if (*piVar6 == in_stack_4) {
          piVar6 = *(int **)((int)this + 0x13b4);
          puVar1 = (undefined4 *)((int)this + iVar3 * 4 + 0xdc);
          pcVar5 = (char *)(/*IC:00478d33*/**(code **)(*piVar6 + 0x14))(piVar6,piVar6,*puVar1,piVar8);
          if (pcVar5 == (char *)0x88780096) {
            (/*IC:00478d43*/**(code **)(*(int *)*puVar1 + 0x50))((int *)*puVar1);
            iVar3 = FUN_00478570(this,in_stack_4,puVar1);
            if (iVar3 == 0) {
              return 0xffffffff;
            }
          }
          else if (pcVar5 != (char *)0x0) {
            FUN_00478ec0(s_DUPLICATE_SOUND_BUFFER_ERROR_2_0055af3c,pcVar5);
            return 0xffffffff;
          }
          goto LAB_00478df9;
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 7;
      } while (iVar3 < 5);
      iVar3 = FUN_00478a70(this,in_stack_4);
      if (-1 < iVar3) {
        piVar6 = *(int **)((int)this + 0x13b4);
        puVar1 = (undefined4 *)((int)this + iVar3 * 4 + 0xdc);
        pcVar5 = (char *)(/*IC:00478dad*/**(code **)(*piVar6 + 0x14))(piVar6,piVar6,*puVar1,piVar8);
        if (pcVar5 == (char *)0x88780096) {
          (/*IC:00478dbd*/**(code **)(*(int *)*puVar1 + 0x50))((int *)*puVar1);
          iVar3 = FUN_00478570(this,in_stack_4,puVar1);
          if (iVar3 == 0) {
            return 0xffffffff;
          }
        }
        else if (pcVar5 != (char *)0x0) {
          FUN_00478ec0(s_DUPLICATE_SOUND_BUFFER_ERROR_3_0055af1c,pcVar5);
          return 0xffffffff;
        }
LAB_00478df9:
        *puVar4 = *(undefined4 *)((int)this + 0x1398);
        *(int *)((int)this + iVar7 * 0x1c + 0xf4) = in_stack_4;
        (/*IC:00478e16*/**(code **)(*(int *)*piVar8 + 0x40))((int *)*piVar8,0);
        (/*IC:00478e25*/**(code **)(*(int *)*piVar8 + 0x3c))((int *)*piVar8,*(undefined4 *)((int)this + 0x13a0));
        (/*IC:00478e36*/**(code **)(*(int *)*piVar8 + 0x30))((int *)*piVar8,0,0);
        return uStack_14;
      }
    }
  }
  return 0xffffffff;
}


