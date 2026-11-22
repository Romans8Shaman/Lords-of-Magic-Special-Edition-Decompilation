
void __thiscall FUN_00531930(void *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  byte bVar4;
  undefined4 unaff_EBX;
  int iVar5;
  undefined2 *puVar6;
  
  if (*(int *)this != 0) {
    iVar2 = 0;
    puVar6 = (undefined2 *)((int)this + 0xc);
    do {
      iVar1 = *(int *)this;
      iVar3 = iVar2 + 3;
      iVar5 = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                       (ushort)(*(byte *)(iVar2 + 0x6e + iVar1) >> (DAT_00585400 & 0x1f))) <<
              ((byte)DAT_005853fc & 0x1f);
      bVar4 = *(byte *)(iVar2 + 0x6d + iVar1) >> (DAT_005853f8 & 0x1f);
      unaff_EBX = CONCAT31((int3)((uint)iVar5 >> 8),bVar4);
      in_EDX = (CONCAT22((short)((uint)in_EDX >> 0x10),
                         (ushort)(*(byte *)(iVar2 + 0x6c + iVar1) >> (DAT_005853f0 & 0x1f))) <<
               ((byte)DAT_005853ec & 0x1f)) + iVar5 +
               (CONCAT22((short)((uint)iVar1 >> 0x10),(ushort)bVar4) << ((byte)DAT_005853f4 & 0x1f))
      ;
      *puVar6 = (short)in_EDX;
      iVar2 = iVar3;
      puVar6 = puVar6 + 1;
    } while (iVar3 < 0x300);
  }
  return;
}


