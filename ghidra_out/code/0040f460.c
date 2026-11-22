
void __thiscall FUN_0040f460(void *this,void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *this_00;
  
  *(undefined4 *)((int)this + 8) = 1;
  pvVar2 = (void *)0x0;
  this_00 = *(void **)this;
  while (this_00 != (void *)0x0) {
    if ((*(int *)((int)this_00 + 8) < 0) ||
       (FUN_0040eb70(this_00,param_1,0,0xffffffff), DAT_00578138 == 0)) {
      pvVar2 = this_00;
      this_00 = *(void **)((int)this_00 + 0x4c);
    }
    else {
      pvVar1 = *(void **)((int)this_00 + 0x4c);
      if (pvVar2 == (void *)0x0) {
        *(void **)this = pvVar1;
        FUN_0040f420(this,(int)this_00);
        this_00 = pvVar1;
      }
      else {
        *(void **)((int)pvVar2 + 0x4c) = pvVar1;
        FUN_0040f420(this,(int)this_00);
        this_00 = pvVar1;
      }
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  return;
}


