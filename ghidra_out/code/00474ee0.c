
int __thiscall FUN_00474ee0(void *this,int param_1,int param_2,int param_3)

{
  return ((param_1 >> (*(byte *)((int)this + 0x908) & 0x1f)) <<
         ((byte)*(undefined4 *)((int)this + 0x904) & 0x1f)) +
         ((param_2 >> (*(byte *)((int)this + 0x910) & 0x1f)) <<
         ((byte)*(undefined4 *)((int)this + 0x90c) & 0x1f)) +
         ((param_3 >> (*(byte *)((int)this + 0x918) & 0x1f)) <<
         ((byte)*(undefined4 *)((int)this + 0x914) & 0x1f));
}


