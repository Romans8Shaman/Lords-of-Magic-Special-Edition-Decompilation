
void __thiscall FUN_0040afc0(void *this)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  char local_7c;
  char local_7b;
  short local_7a;
  undefined2 auStack_78 [60];
  
  pcVar4 = &local_7c;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  local_7a = 0;
  do {
    bVar1 = false;
    for (puVar2 = FUN_004fbed0(&DAT_005ae974,0); puVar2 != (undefined4 *)0x0;
        puVar2 = FUN_004fbed0(&DAT_005ae974,(int)puVar2)) {
      if (*(char *)(puVar2 + 0x30) != '\0') {
        if ((local_7a == 0) ||
           ((local_7c == *(char *)(puVar2 + 0x30) && (local_7b == *(char *)((int)puVar2 + 0xc1)))))
        {
          local_7c = *(char *)(puVar2 + 0x30);
          local_7b = *(char *)((int)puVar2 + 0xc1);
          auStack_78[local_7a * 2] = *(undefined2 *)(puVar2 + 10);
          auStack_78[local_7a * 2 + 1] = *(undefined2 *)((int)puVar2 + 0xc2);
          local_7a = local_7a + 1;
          *(undefined1 *)(puVar2 + 0x30) = 0;
          if (local_7a == 0x1e) {
            bVar1 = true;
            break;
          }
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (local_7a != 0) {
      FUN_0040aeb0((undefined4 *)&local_7c);
      local_7a = 0;
    }
    if (!bVar1) {
      return;
    }
  } while( true );
}


