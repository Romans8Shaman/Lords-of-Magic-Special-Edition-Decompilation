
uint __thiscall FUN_00474e70(void *this,uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4 & 0xffff;
  *param_1 = (uVar1 >> (*(byte *)((int)this + 0x904) & 0x1f)) <<
             (*(byte *)((int)this + 0x908) & 0x1f) & 0xff;
  *param_2 = (uVar1 >> (*(byte *)((int)this + 0x90c) & 0x1f)) <<
             (*(byte *)((int)this + 0x910) & 0x1f) & 0xff;
  uVar1 = (uVar1 >> (*(byte *)((int)this + 0x914) & 0x1f)) << (*(byte *)((int)this + 0x918) & 0x1f)
          & 0xff;
  *param_3 = uVar1;
  return uVar1;
}


