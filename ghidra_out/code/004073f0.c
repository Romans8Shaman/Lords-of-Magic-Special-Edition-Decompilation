
int __thiscall FUN_004073f0(void *this,void *param_1,int param_2)

{
  void *this_00;
  int iVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  
  this_00 = param_1;
  bVar4 = *(int *)((int)param_1 + 0x48) != DAT_005aa7d4;
  pvVar3 = (void *)0x0;
  iVar2 = 999999;
  param_1 = (void *)0xffffffff;
  if (0 < *(int *)((int)this + 0x68)) {
    do {
      if (((((*(uint *)(*(int *)((int)this + 100) + 4 + (int)pvVar3 * 8) &
             (-(uint)bVar4 & 0x400) + 0x400) != 0) &&
           (iVar1 = FUN_00405fe0(this_00,(int)pvVar3), iVar1 != 0)) &&
          (iVar1 = FUN_004a8a50(&DAT_005ae958,(int)pvVar3,*(int *)((int)this_00 + 0x1c)),
          iVar1 < iVar2)) && (pvVar3 != (void *)param_2)) {
        iVar2 = iVar1;
        param_1 = pvVar3;
      }
      pvVar3 = (void *)((int)pvVar3 + 1);
    } while ((int)pvVar3 < *(int *)((int)this + 0x68));
  }
  return (int)param_1;
}


