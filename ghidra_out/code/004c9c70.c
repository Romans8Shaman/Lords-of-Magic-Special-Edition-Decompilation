
void __cdecl op_quit(void *vm)

{
  *(undefined4 *)((int)vm + 0x90) = 0x16;
  *(undefined4 *)((int)vm + 0x70) = 1;
  *(undefined4 *)((int)vm + 0x6c) = 1;
  return;
}


