
void __thiscall FUN_0040b620(void *this,void *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *this_00;
  
  *(undefined4 *)((int)this + 0xc) = 1;
  puVar3 = (uint *)0x0;
  this_00 = *(uint **)this;
  do {
    while( true ) {
      if (this_00 == (uint *)0x0) {
        *(undefined4 *)((int)this + 0xc) = 0;
        return;
      }
      if ((*this_00 <= param_2) || ((param_3 & this_00[3]) != 0)) break;
LAB_0040b69a:
      puVar3 = this_00;
      this_00 = (uint *)this_00[0x11];
    }
    *(uint **)((int)this + 0x10) = this_00;
    FUN_0040b0e0(this_00,param_1);
    *(undefined4 *)((int)this + 0x10) = 0;
    *this_00 = *this_00 + this_00[1];
    if (((this_00[2] == 0) && ((param_3 & 1) == 0)) ||
       (((uVar1 = this_00[2], this_00[2] = uVar1 - 1, 0 < (int)(uVar1 - 1) && (DAT_00578138 == 0))
        && ((param_3 & 1) == 0)))) goto LAB_0040b69a;
    puVar2 = (uint *)this_00[0x11];
    if (puVar3 == (uint *)0x0) {
      *(uint **)this = puVar2;
    }
    else {
      puVar3[0x11] = (uint)puVar2;
    }
    FUN_0040b5d0(this,(int)this_00);
    this_00 = puVar2;
  } while( true );
}


