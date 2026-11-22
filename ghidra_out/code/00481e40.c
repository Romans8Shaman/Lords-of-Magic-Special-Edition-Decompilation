
undefined4 __thiscall FUN_00481e40(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (char)param_1[1];
  if ((((cVar1 != '_') && (cVar1 != '>')) && (cVar1 != 'P')) && (cVar1 != 'A')) {
    if ((cVar1 == '\x1f') || (cVar1 == '2')) {
      *(undefined1 *)((int)param_1 + 7) = 1;
      return 1;
    }
    if (((*(int *)((int)this + 0x4fec) == 0) && (*(int *)((int)this + 0x4ff0) == 0)) ||
       ((*param_1 == *(int *)((int)this + 0x4ff8) ||
        ((cVar1 == '=' || (*(char *)((int)param_1 + 7) != '\x02')))))) {
      if (cVar1 == ':') {
        *(undefined4 *)((int)this + 0x4ff0) = 1;
        *(int *)((int)this + 0x4ff8) = *param_1;
        *(undefined4 *)((int)this + 0x4ffc) = *(undefined4 *)((int)param_1 + 9);
        FUN_00460eb0(this,0);
        return 1;
      }
    }
    else {
      piVar2 = (int *)FUN_0048c2b0((int)param_1);
      if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 0x4ffc) <= *piVar2)) {
        return 0;
      }
    }
  }
  return 1;
}


