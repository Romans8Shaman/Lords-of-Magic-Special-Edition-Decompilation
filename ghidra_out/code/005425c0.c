
void __cdecl FUN_005425c0(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_005770d0 == param_1) {
    PTR_LOOP_005770d0 = param_1[1];
  }
  if (param_1 == &PTR_LOOP_005750b0) {
    DAT_005750c0 = 0xffffffff;
    return;
  }
  *(undefined **)param_1[1] = *param_1;
  *(undefined **)(*param_1 + 4) = param_1[1];
  HeapFree(DAT_005d6a04,0,param_1);
  return;
}


