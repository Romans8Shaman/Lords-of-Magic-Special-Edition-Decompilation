
void __thiscall FUN_0042d8a0(void *this,uint param_1,uint param_2,int param_3)

{
  if (param_3 == 2) {
    if ((*(void **)((int)this + 0x14) != (void *)0x0) &&
       (*(void **)((int)this + 0x10) != (void *)0x0)) {
      FUN_0049e070(*(void **)((int)this + 0x10),*(void **)((int)this + 0x14),param_1,param_2,-1,1,
                   *(int *)this);
      *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 8;
      return;
    }
    if (*(void **)((int)this + 0x10) != (void *)0x0) {
      FUN_0049cd80(*(void **)((int)this + 0x10),param_1,param_2,-1,1,2);
      *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 8;
    }
  }
  return;
}


