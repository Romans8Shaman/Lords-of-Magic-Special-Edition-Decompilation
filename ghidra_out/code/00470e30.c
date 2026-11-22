
void __thiscall FUN_00470e30(void *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint arg1;
  char *pcVar5;
  char *pcVar6;
  uint uStack_28;
  int iStack_24;
  uint uStack_20;
  char acStack_1c [28];
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  iStack_24 = 0;
  Ordinal_109(&uStack_20,&uStack_28,&iStack_24);
  if (iStack_24 != 0) {
    if (0x14 < (int)((uStack_28 - uStack_20) + 1)) {
      return;
    }
    arg1 = uStack_20;
    if (uStack_20 <= uStack_28) {
      do {
        iVar2 = Ordinal_113(arg1,acStack_1c,0x19);
        if (iVar2 == 0) {
          OutputDebugStringA(s_player_gap_00557fbc);
        }
        else {
          if (DAT_005d1e84 != (void *)0x0) {
            FUN_004b80f0(DAT_005d1e84,arg1);
          }
          *(uint *)((int)this + *(int *)((int)this + 0x100) * 0x25 + 0xc) = arg1;
          *(int *)((int)this + *(int *)((int)this + 0x100) * 0x25 + 0x10) =
               *(int *)((int)this + 0x100) + 1;
          uVar3 = 0xffffffff;
          pcVar5 = acStack_1c;
          do {
            pcVar6 = pcVar5;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar6 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar6;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          pcVar5 = pcVar6 + -uVar3;
          pcVar6 = (char *)((int)this + *(int *)((int)this + 0x100) * 0x25 + 0x14);
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar6 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          }
          *(undefined4 *)((int)this + *(int *)((int)this + 0x100) * 0x25 + 0x2d) = 0;
          iVar2 = *(int *)((int)this + 0x100) + 1;
          *(int *)((int)this + 0x100) = iVar2;
          if (arg1 == *(uint *)((int)this + 0x2c4)) {
            *(int *)((int)this + 0x120) = iVar2;
          }
        }
        arg1 = arg1 + 1;
      } while (arg1 <= uStack_28);
    }
  }
  FUN_004b7f90();
  return;
}


