
void __cdecl op_repoman(void *vm)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int *this;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uStack_24;
  int *piStack_1c;
  uint auStack_14 [2];
  int iStack_c;
  void *pvVar7;
  
  iStack_c = 0x4c05af;
  pvVar7 = vm;
  iVar3 = FUN_004bdce0(vm,&vm);
  pvVar2 = vm;
  if (iVar3 == 0) {
    return;
  }
  bVar1 = false;
  FUN_004bde30((int)vm);
  if (((-1 < *(int *)((int)pvVar2 + 0xd10)) && (-1 < *(int *)((int)pvVar2 + 0xd18))) &&
     (-1 < *(int *)((int)pvVar2 + 0xd1c))) {
    bVar1 = true;
  }
  if (!bVar1) {
    this = FUN_004fbed0(&DAT_005ae974,0);
    bVar1 = false;
    do {
      if (this == (int *)0x0) {
        return;
      }
      iVar6 = 0;
      piVar4 = FUN_004fbed0(&DAT_005ae974,(int)this);
      iVar3 = (/*IC:004c062b*/**(code **)(*this + 0x3c))(this);
      if ((iVar3 == *(int *)((int)pvVar2 + 0x15a8)) && (iVar3 = FUN_004c1cf0((int)this), iVar3 == 0)
         ) {
        uStack_24 = 0;
        if (0 < this[0x13]) {
          piStack_1c = this + 0x31;
          do {
            uVar5 = FUN_00525f10((int)piStack_1c);
            if (uVar5 == 0) {
              iVar3 = FUN_00522350(this[10],iVar6,auStack_14);
              if ((iVar3 != 0) &&
                 (((((int)auStack_14[0] < 0 && (*(int *)((int)pvVar2 + 0xd10) < 0)) ||
                   ((iStack_c < 0 && (*(int *)((int)pvVar2 + 0xd18) < 0)))) ||
                  (((int)pvVar7 < 0 && (*(int *)((int)pvVar2 + 0xd1c) < 0)))))) {
                uStack_24 = uStack_24 | 1 << ((byte)iVar6 & 0x1f);
                *(uint *)((int)pvVar2 + 0xd10) = *(int *)((int)pvVar2 + 0xd10) + auStack_14[0];
                *(int *)((int)pvVar2 + 0xd18) = *(int *)((int)pvVar2 + 0xd18) + iStack_c;
                iVar3 = *(int *)((int)pvVar2 + 0xd1c) + (int)pvVar7;
                *(int *)((int)pvVar2 + 0xd1c) = iVar3;
                if ((-1 < *(int *)((int)pvVar2 + 0xd10)) &&
                   ((-1 < *(int *)((int)pvVar2 + 0xd18) && (-1 < iVar3)))) {
                  bVar1 = true;
                }
              }
              if (bVar1) break;
            }
            iVar6 = iVar6 + 1;
            piStack_1c = piStack_1c + 0x13;
          } while (iVar6 < this[0x13]);
        }
        if (uStack_24 != 0) {
          FUN_0041e170(this,uStack_24);
        }
      }
      this = piVar4;
    } while (!bVar1);
  }
  return;
}


