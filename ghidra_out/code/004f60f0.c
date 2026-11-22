
void __thiscall FUN_004f60f0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0x10) <= param_1)) {
    OutputDebugStringA(s_Unlink___invalid_sprite_id_00573378);
  }
  else {
    piVar1 = (int *)(*(int *)((int)this + 8) + param_1 * 4);
    if (*piVar1 != 0) {
      *piVar1 = 0;
      iVar2 = *(int *)(*(int *)((int)this + 8) + *(int *)((int)this + 0x18) * 4);
      while ((iVar2 == 0 && (0 < *(int *)((int)this + 0x18)))) {
        iVar2 = *(int *)((int)this + 0x18) + -1;
        *(int *)((int)this + 0x18) = iVar2;
        iVar2 = *(int *)(*(int *)((int)this + 8) + iVar2 * 4);
      }
      iVar2 = FUN_004f6270((int)this);
      if (iVar2 == 0) {
        FUN_004f62f0((int)this);
        return;
      }
    }
  }
  return;
}


