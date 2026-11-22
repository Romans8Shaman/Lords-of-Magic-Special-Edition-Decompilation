
void __cdecl op_exit(void *vm)

{
  *(undefined4 *)((int)vm + 0x6c) = 1;
  return;
}


