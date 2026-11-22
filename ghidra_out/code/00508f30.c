
undefined4 __thiscall FUN_00508f30(void *this,int param_1,undefined4 param_2)

{
  if (((param_1 < 0) || (*(int *)((int)this + 0x2c) <= param_1)) ||
     (*(int *)((int)this + 0x18) == 0)) {
    FUN_005047d0(s_TileSet__SetType_failed_005736fc);
    return 0;
  }
  *(undefined4 *)(*(int *)((int)this + 0x18) + param_1 * 4) = param_2;
  return 1;
}


