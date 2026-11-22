
int __thiscall FUN_00508f70(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 0x14) <= param_1)) {
    FUN_005047d0(s_TileSet__GetTypeName___invalid_s_00573718);
    return 0;
  }
  return *(int *)((int)this + 0x10) + 4 + param_1 * 0x58;
}


