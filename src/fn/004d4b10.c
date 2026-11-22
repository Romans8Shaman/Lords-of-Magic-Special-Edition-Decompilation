/* Hand C for lomse.exe FUN_004d4b10 @ 0x004d4b10 (3068 bytes, __thiscall, ret 8).
 * Written from the original instruction stream in src/asmfn/004d4b10.c and the
 * bytes at 004d4b10..004d570b. `.run` script tokenizer / interpreter: skips
 * whitespace (0053b6e0 / isspace, tracking line at this+0x878 and column at
 * this+0x87c with tab width this+0xa68), then switches on the current char
 * (table 004d5760 / jumps 004d573c):
 *   '"'  quoted string (escapes, 004d2f40 intern; unterminated -> 0053a090 + 004d41c0)
 *   '%'  if this+0x8c==0 just consume; else treated as ';'
 *   ';'  comment through 0053b770(strcspn) on "\r\n" at 0055d4bc
 *   '*'  0053a090("%s line %d column %d") then 004d2f40
 *   '[' / ']' / '{'  token types 0xa / 0xb / 0xc
 *   '}'  004d3930(this, 0xd, local_3f4) then pop/push the token stack
 *   default  token: 0053b770 on "[]{}\"\\r\\n\\t;%" at 0055e724, then
 *            sscanf %f%n (if strchr '.', type 4) or %d%n (type 1), or
 *            "<<" (type 0xe) / ">>" (type 0xf), or '/' include / identifier
 *            lookup in the BST at this+0x74 (SMemAlloc 00533864 / SMemFree
 *            0053385e, types 0x105 / 5).
 * Tokens are written into the countdown array at this+0x50 (count this+0x54)
 * with line/col at this+0x870. Overflow calls 004d4550 (code 3) or 00404ab0.
 * Optional fread of this+0x868 into the 260-byte name buffer (copy of this+0x874).
 * 004d570c is its own fn. 004d5735 (mov eax,[esi]; jmp) is retargeted to
 * mid-entry label rb_004d5399 (no remaining original-VA bodyref).
 * No SEH frame, no x87.
 */
#include "lom.h"

#define LOM_SELF_004d4b10 1

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00539660 ((uint (__cdecl *)(char *, uint, uint, int *))0x00539660)
#define FUN_0053b6e0 ((uint (__cdecl *)(int))0x0053b6e0)
#define FUN_0053b6b0 ((uint (__cdecl *)(int))0x0053b6b0)
#define FUN_0053a090 ((int (__cdecl *)(char *, char *, ...))0x0053a090)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d2f40 ((undefined4 * (__thiscall *)(void *, undefined4 *, char *))0x004d2f40)
#define FUN_004d3930 ((void (__fastcall *)(void *, undefined4, undefined4, undefined4))0x004d3930)
#define FUN_0053b770 ((size_t (__cdecl *)(char *, char *))0x0053b770)
#define FUN_0053ae60 ((uint * (__cdecl *)(uint *, char))0x0053ae60)
#define FUN_0053ae00 ((int (__cdecl *)(char *, byte *, ...))0x0053ae00)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d57c0 ((undefined4 (__thiscall *)(void *, uint, undefined *))0x004d57c0)
#define FUN_00533864 ((void * (__stdcall *)(uint, char *, int, int))0x00533864)
#define FUN_0053385e ((void (__stdcall *)(void *, char *, int, int))0x0053385e)

/* MSVC 2-byte strcmp step: 0 if equal, -1 if a<b, +1 if a>b. */
static int cmp2(byte *a, byte *b)
{
  byte ba;
  byte bb;
  int r;

  while (1) {
    ba = *a;
    bb = *b;
    if (ba != bb) {
      r = (1 - (uint)(ba < bb)) - (uint)(ba < bb);
      return r;
    }
    if (ba == 0) {
      return 0;
    }
    ba = a[1];
    bb = b[1];
    if (ba != bb) {
      r = (1 - (uint)(ba < bb)) - (uint)(ba < bb);
      return r;
    }
    a = a + 2;
    b = b + 2;
    if (ba == 0) {
      return 0;
    }
  }
}

undefined4 * __thiscall rb_004d4b10(void *this, undefined4 *param_1, uint *param_2)
{
  char cVar1;
  int iVar3;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  char *pcVar16;
  char *pcVar18;
  undefined4 *puVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar17;
  size_t *psVar10;
  size_t sVar11;
  undefined *puVar9;
  uint *local_400;
  char local_3f9;
  undefined4 local_3f8;
  undefined *local_3f4;
  size_t *local_3f0;
  int local_3ec;
  byte *local_3e8;
  undefined *local_3e4;
  uint *local_3e0;
  undefined *local_3dc;
  char *local_3d8;
  int local_3d4;
  undefined4 local_3d0;
  undefined *local_3cc;
  undefined4 local_3c8[2];
  char local_3c0[200];
  char local_2f8[260];
  char local_1f4[500];
  char *tok;

  local_400 = param_2;
  /* original frame is 0x400 bytes from sub $0x400; with DT_STACKFILL0 both sides start zeroed */
  local_3f9 = 0;
  local_3f8 = 0;
  local_3f4 = 0;
  local_3f0 = 0;
  local_3ec = 0;
  local_3e8 = 0;
  local_3e4 = 0;
  local_3e0 = 0;
  local_3dc = 0;
  local_3d8 = 0;
  local_3d4 = 0;
  local_3d0 = 0;
  local_3cc = 0;
  local_3c8[0] = 0;
  local_3c8[1] = 0;
  tok = 0;
  {
    int _zi;
    for (_zi = 0; _zi < 200; _zi = _zi + 1) local_3c0[_zi] = 0;
    for (_zi = 0; _zi < 260; _zi = _zi + 1) local_2f8[_zi] = 0;
    for (_zi = 0; _zi < 500; _zi = _zi + 1) local_1f4[_zi] = 0;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  } else {
    iVar12 = *(int *)((int)this + 0x50);
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    *(undefined4 *)(iVar12 + iVar3 * 8) = 0;
    *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
  }
  local_3d4 = *(int *)((int)this + 0x54);
  pcVar16 = local_2f8;
  for (iVar12 = 0x41; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(undefined4 *)pcVar16 = 0;
    pcVar16 = pcVar16 + 4;
  }
  if (*(char **)((int)this + 0x874) != (char *)0x0) {
    uVar13 = 0xffffffff;
    pcVar16 = *(char **)((int)this + 0x874);
    do {
      pcVar18 = pcVar16;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar18 = pcVar16 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar18;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    pcVar16 = pcVar18 + -(int)uVar13;
    pcVar18 = local_2f8;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar18 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar18 = pcVar18 + 1;
    }
  }
  if (*(int **)((int)this + 0x868) != (int *)0x0) {
    local_3f9 = '\0';
    FUN_00539660(&local_3f9, 1, 1, *(int **)((int)this + 0x868));
    FUN_00539660(local_2f8, 0x104, 1, *(int **)((int)this + 0x868));
  }
  local_3e0 = param_2;
  *(undefined4 *)((int)this + 0x878) = 1;
  *(undefined4 *)((int)this + 0x87c) = 1;
  if (*(int *)((int)this + 0x70) != 0) {
LAB_004d56ed:
    *param_1 = 0;
    param_1[1] = (undefined4)local_3f4;
    return param_1;
  }

  do {
    if (local_3e0 != local_400) {
      *(int *)((int)this + 0x87c) =
           *(int *)((int)this + 0x87c) + ((int)local_400 - (int)local_3e0);
    }
    cVar1 = (char)*local_400;
    while ((cVar1 != '\0') && (uVar13 = FUN_0053b6e0((int)cVar1), uVar13 != 0)) {
      if ((char)*local_400 == '\n') {
        *(undefined4 *)((int)this + 0x87c) = 1;
        *(int *)((int)this + 0x878) = *(int *)((int)this + 0x878) + 1;
      }
      if ((char)*local_400 == '\t') {
        *(int *)((int)this + 0x87c) =
             (*(int *)((int)this + 0xa68) -
              *(int *)((int)this + 0x87c) % *(int *)((int)this + 0xa68)) + 1 +
             *(int *)((int)this + 0x87c);
      } else if ((char)*local_400 == ' ') {
        *(int *)((int)this + 0x87c) = *(int *)((int)this + 0x87c) + 1;
      }
      cVar1 = *(char *)((int)local_400 + 1);
      local_400 = (uint *)((int)local_400 + 1);
    }
    cVar1 = (char)*local_400;
    if (cVar1 == '\0') break;
    local_3e0 = local_400;

    if ((uint)((int)cVar1 - 0x22) > 0x5b) goto LAB_default;
    switch (cVar1) {
    case '\"': {
      uVar13 = *(uint *)((int)this + 0x878);
      uVar15 = *(undefined4 *)((int)this + 0x87c);
      puVar7 = (uint *)((int)local_400 + 1);
      cVar1 = *(char *)puVar7;
      local_400 = puVar7;
      if (cVar1 != '\"') {
        do {
          puVar6 = (undefined4 *)((int)local_400 + 1);
          cVar1 = *(char *)puVar6;
          if (cVar1 == '\\') {
            puVar6 = (undefined4 *)((int)local_400 + 2);
            if (*(char *)puVar6 == '\n') {
              *(int *)((int)this + 0x878) = *(int *)((int)this + 0x878) + 1;
              *(undefined4 *)((int)this + 0x87c) = 1;
            }
            if (*(char *)puVar6 == '\0') {
              local_400 = (uint *)puVar6;
              cVar1 = '\0';
              break;
            }
            puVar6 = (undefined4 *)((int)local_400 + 3);
            cVar1 = *(char *)puVar6;
            if (cVar1 == '\n') {
              *(undefined4 *)((int)this + 0x87c) = 1;
              *(int *)((int)this + 0x878) = *(int *)((int)this + 0x878) + 1;
            }
          } else if (cVar1 == '\n') {
            *(undefined4 *)((int)this + 0x87c) = 1;
            *(int *)((int)this + 0x878) = *(int *)((int)this + 0x878) + 1;
          }
          local_400 = (uint *)puVar6;
          cVar1 = (char)*local_400;
        } while ((cVar1 != '\0') && (cVar1 != '\"'));
      }
      if (cVar1 != '\"') {
        if (*(uint *)((int)this + 0x874) == 0) {
          FUN_0053a090(local_3c0, (char *)0x0055e778, uVar13, uVar15);
        } else {
          FUN_0053a090(local_3c0, (char *)0x0055e748,
                       *(uint *)((int)this + 0x874), uVar13, uVar15);
        }
        FUN_004d41c0(this, local_3c0);
      }
      *(char *)local_400 = '\0';
      puVar6 = FUN_004d2f40(this, &local_3d0, (char *)puVar7);
      uVar15 = *puVar6;
      local_3f4 = (undefined *)puVar6[1];
      if ((char)uVar15 == '\0') {
        *(undefined4 *)((int)this + 0x90) = 2;
        *param_1 = uVar15;
        param_1[1] = (undefined4)local_3f4;
        return param_1;
      }
      if (*(int *)((int)this + 0x54) == 0) goto LAB_overflow_inc;
      iVar12 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar12 + iVar3 * 8) = uVar15;
      *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
LAB_004d5044:
      *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
           *(undefined4 *)((int)this + 0x878);
      *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
           *(undefined4 *)((int)this + 0x87c);
      local_400 = (uint *)((int)local_400 + 1);
      goto LAB_004d55fa;
    }
    case '%':
      if (*(int *)((int)this + 0x8c) == 0) {
        local_400 = (uint *)((int)local_400 + 1);
        *(int *)((int)this + 0x87c) = *(int *)((int)this + 0x87c) + 1;
        goto LAB_004d55fa;
      }
      /* fall through */
    case ';':
      sVar11 = FUN_0053b770((char *)((int)local_400 + 1), (char *)0x0055d4bc);
      local_400 = (uint *)((char *)((int)local_400 + 1) + sVar11);
      goto LAB_004d55fa;
    case '*': {
      pcVar16 = *(char **)((int)this + 0x874);
      if (pcVar16 == (char *)0x0) {
        pcVar16 = (char *)0x00579274;
      }
      FUN_0053a090(local_1f4, (char *)0x0055e730, (uint)pcVar16,
                   *(undefined4 *)((int)this + 0x878), *(undefined4 *)((int)this + 0x87c));
      puVar6 = FUN_004d2f40(this, local_3c8, local_1f4);
      uVar15 = *puVar6;
      local_3f4 = (undefined *)puVar6[1];
      if ((char)uVar15 == '\0') {
        *(undefined4 *)((int)this + 0x90) = 2;
        *param_1 = uVar15;
        param_1[1] = (undefined4)local_3f4;
        return param_1;
      }
      if (*(int *)((int)this + 0x54) == 0) goto LAB_overflow_inc;
      iVar12 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar12 + iVar3 * 8) = uVar15;
      *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
      goto LAB_004d5044;
    }
    case '[':
      uVar15 = 0xa;
      goto LAB_punct;
    case ']':
      uVar15 = 0xb;
      goto LAB_punct;
    case '{':
      uVar15 = 0xc;
    LAB_punct:
      if (*(int *)((int)this + 0x54) == 0) goto LAB_overflow_inc;
      iVar12 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar12 + iVar3 * 8) = uVar15;
      *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
      *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
           *(undefined4 *)((int)this + 0x878);
      *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
           *(undefined4 *)((int)this + 0x87c);
      local_400 = (uint *)((int)local_400 + 1);
      goto LAB_004d55fa;
    case '}':
      *(undefined4 *)((int)this + 0x94) = 0xd;
      *(undefined **)((int)this + 0x98) = local_3f4;
      FUN_004d3930(this, 0, 0xd, (undefined4)local_3f4);
      if ((*(int *)((int)this + 0x90) != 0) && (*(int *)((int)this + 0xa4) == 0)) {
        FUN_004d4550(this);
      }
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar12 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar12;
        local_3f8 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar12 * 8);
        local_3f4 = *(undefined **)(*(int *)((int)this + 0x50) + -4 + iVar12 * 8);
      } else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        local_3f8 = 0;
        local_3f4 = local_3cc;
      }
      if (*(int *)((int)this + 0x54) == 0) goto LAB_overflow_inc;
      iVar12 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar12 + iVar3 * 8) = local_3f8;
      *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
      goto LAB_004d5044;
    default:
    LAB_default: {
      /* ebx in the original is the start of this token and stays so until 004d55df. */
      tok = (char *)local_400;
      sVar11 = FUN_0053b770(tok, (char *)0x0055e724);
      local_3e4 = (undefined *)sVar11;
      if (sVar11 == 0) {
        local_400 = (uint *)((int)local_400 + 1);
        goto LAB_004d55fa;
      }
      local_3f9 = tok[sVar11];
      local_3d8 = tok + sVar11;
      *local_3d8 = '\0';
      local_3ec = (int)sVar11;
      puVar7 = FUN_0053ae60((uint *)tok, '.');
      if (puVar7 != (uint *)0x0) {
        iVar12 = FUN_0053ae00(tok, (byte *)0x0055e71c, &local_3dc, &local_3ec);
        if (iVar12 < 1) goto LAB_004d570c;
        local_3f4 = local_3dc;
        uVar15 = 4;
        if (*(int *)((int)this + 0x54) == 0) goto LAB_overflow_restore;
        iVar12 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar12 + iVar3 * 8) = 4;
        *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3dc;
        *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
             *(undefined4 *)((int)this + 0x878);
        *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
             *(undefined4 *)((int)this + 0x87c);
        goto LAB_004d55df;
      }
      cVar1 = *tok;
      if (((cVar1 == '+') || (cVar1 == '-')) || (uVar13 = FUN_0053b6b0((int)cVar1), uVar13 != 0)) {
        iVar12 = FUN_0053ae00(tok, (byte *)0x0055e714, &local_3e4, &local_3ec);
        if (iVar12 < 1) goto LAB_004d570c;
        local_3f4 = local_3e4;
        if (*(int *)((int)this + 0x54) == 0) goto LAB_overflow_restore;
        iVar12 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar12 + iVar3 * 8) = 1;
        *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3e4;
        *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
             *(undefined4 *)((int)this + 0x878);
        *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
             *(undefined4 *)((int)this + 0x87c);
        goto LAB_004d55df;
      }
      iVar12 = cmp2((byte *)tok, (byte *)0x0055e3d0);
      if (iVar12 == 0) {
        uVar15 = 0xe;
        if (*(int *)((int)this + 0x54) == 0) goto LAB_overflow_restore;
        goto LAB_push_u15_uninitval;
      }
      iVar12 = cmp2((byte *)tok, (byte *)0x0055e3cc);
      if (iVar12 == 0) {
        uVar15 = 0xf;
        if (*(int *)((int)this + 0x54) == 0) goto LAB_overflow_restore;
        goto LAB_push_u15_uninitval;
      }
      if (*tok == '/') {
        local_3f0 = (size_t *)((int)this + 0x74);
        local_3e8 = (byte *)(tok + 1);
        puVar7 = *(uint **)((int)this + 0x74);
        while (puVar7 != (uint *)0x0) {
          iVar12 = cmp2(local_3e8, (byte *)puVar7[1]);
          if (iVar12 == 0) {
            puVar9 = (undefined *)*puVar7;
            goto LAB_004d5399;
          }
          local_3f0 = puVar7 + 2;
          if (-1 < iVar12) {
            local_3f0 = puVar7 + 3;
          }
          puVar7 = (uint *)*local_3f0;
        }
        puVar7 = (uint *)FUN_00533864(0x18, (char *)0x00555130, 0x3ef, 0);
        if (puVar7 == (uint *)0x0) {
          puVar9 = *(undefined **)((int)this + 0x7c);
        } else {
          uVar13 = 0xffffffff;
          pbVar17 = local_3e8;
          do {
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            pbVar8 = pbVar17;
            pbVar17 = pbVar17 + 1;
          } while (*pbVar8 != 0);
          uVar14 = (uint)FUN_00533864(~uVar13, (char *)0x00555130, 0x3fa, 0);
          puVar7[1] = uVar14;
          if (uVar14 == 0) {
            FUN_0053385e(puVar7, (char *)0x00555130, 0x3eb, 0);
            puVar9 = (undefined *)0x0;
          } else {
            *(uint *)((int)this + 0xa90) = *(int *)((int)this + 0xa90) + ~uVar13 + 0x18;
            *(uint **)(*(int *)((int)this + 0x80) + *(int *)((int)this + 0x78) * 4) = puVar7;
            puVar7[2] = 0;
            puVar7[3] = 0;
            *puVar7 = *(uint *)((int)this + 0x78);
            *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + 1;
            puVar7[4] = 0;
            puVar7[5] = 0;
            uVar13 = 0xffffffff;
            pbVar17 = local_3e8;
            do {
              pbVar8 = pbVar17;
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              pbVar8 = pbVar17 + 1;
              cVar1 = (char)*pbVar17;
              pbVar17 = pbVar8;
            } while (cVar1 != '\0');
            uVar13 = ~uVar13;
            pbVar17 = pbVar8 + -(int)uVar13;
            pbVar8 = (byte *)puVar7[1];
            for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined4 *)pbVar8 = *(undefined4 *)pbVar17;
              pbVar17 = pbVar17 + 4;
              pbVar8 = pbVar8 + 4;
            }
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *pbVar8 = *pbVar17;
              pbVar17 = pbVar17 + 1;
              pbVar8 = pbVar8 + 1;
            }
            *local_3f0 = (size_t)puVar7;
            puVar9 = (undefined *)*puVar7;
          }
        }
      LAB_004d5399:
        asm volatile(".globl _rb_004d5399\n_rb_004d5399:" ::: "memory");
        if (*(undefined **)((int)this + 0x7c) <= puVar9) {
          *(undefined4 *)((int)this + 0x90) = 10;
          goto LAB_004d56ed;
        }
        local_3f4 = puVar9;
        uVar15 = 0x105;
        if (*(int *)((int)this + 0x54) == 0) goto LAB_overflow_restore;
        goto LAB_push_u15;
      }
      /* identifier (no leading '/') */
      local_3f0 = (size_t *)((int)this + 0x74);
      psVar10 = *(size_t **)((int)this + 0x74);
      while (psVar10 != (size_t *)0x0) {
        iVar12 = cmp2((byte *)tok, (byte *)psVar10[1]);
        if (iVar12 == 0) {
          local_3f4 = (undefined *)*psVar10;
          goto LAB_004d54fd;
        }
        local_3f0 = psVar10 + 2;
        if (-1 < iVar12) {
          local_3f0 = psVar10 + 3;
        }
        psVar10 = (size_t *)*local_3f0;
      }
      psVar10 = (size_t *)FUN_00533864(0x18, (char *)0x00555130, 0x3ef, 0);
      if (psVar10 == (size_t *)0x0) {
        local_3f4 = *(undefined **)((int)this + 0x7c);
      } else {
        uVar13 = 0xffffffff;
        pcVar16 = tok;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar1 != '\0');
        sVar11 = (size_t)FUN_00533864(~uVar13, (char *)0x00555130, 0x3fa, 0);
        psVar10[1] = sVar11;
        if (sVar11 == 0) {
          FUN_0053385e(psVar10, (char *)0x00555130, 0x3eb, 0);
          local_3f4 = (undefined *)0x0;
        } else {
          *(uint *)((int)this + 0xa90) = *(int *)((int)this + 0xa90) + ~uVar13 + 0x18;
          *(size_t **)(*(int *)((int)this + 0x80) + *(int *)((int)this + 0x78) * 4) = psVar10;
          psVar10[2] = 0;
          psVar10[3] = 0;
          *psVar10 = *(size_t *)((int)this + 0x78);
          *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + 1;
          psVar10[4] = 0;
          psVar10[5] = 0;
          uVar13 = 0xffffffff;
          pcVar16 = tok;
          do {
            pcVar18 = pcVar16;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            pcVar18 = pcVar16 + 1;
            cVar1 = *pcVar16;
            pcVar16 = pcVar18;
          } while (cVar1 != '\0');
          uVar13 = ~uVar13;
          pcVar16 = pcVar18 + -(int)uVar13;
          pcVar18 = (char *)psVar10[1];
          for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pcVar18 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar18 = pcVar18 + 1;
          }
          *local_3f0 = (size_t)psVar10;
          local_3f4 = (undefined *)*psVar10;
        }
      }
    LAB_004d54fd:
      uVar15 = 5;
      if (*(int *)((int)this + 0x54) == 0) {
        FUN_00404ab0(this, 3);
        goto LAB_004d55df;
      }
    LAB_push_u15:
      iVar12 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar12 + iVar3 * 8) = uVar15;
      *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
      *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
           *(undefined4 *)((int)this + 0x878);
      *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
           *(undefined4 *)((int)this + 0x87c);
      goto LAB_004d55df;

    LAB_push_u15_uninitval:
      iVar12 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar12 + iVar3 * 8) = uVar15;
      *(undefined **)(iVar12 + 4 + iVar3 * 8) = local_3f4;
      *(undefined4 *)(*(int *)((int)this + 0x870) + *(int *)((int)this + 0x54) * 8) =
           *(undefined4 *)((int)this + 0x878);
      *(undefined4 *)(*(int *)((int)this + 0x870) + 4 + *(int *)((int)this + 0x54) * 8) =
           *(undefined4 *)((int)this + 0x87c);
      goto LAB_004d55df;
    }
    }
  LAB_overflow_inc:
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    local_400 = (uint *)((int)local_400 + 1);
    *(undefined4 *)((int)this + 0xa4) = 0;
    goto LAB_004d55fa;

  LAB_overflow_restore:
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  LAB_004d55df:
    *local_3d8 = local_3f9;
    if (local_3ec < 1) {
      tok = tok + 1;
    } else {
      tok = tok + local_3ec;
    }
    local_400 = (uint *)tok;
  LAB_004d55fa:
    ;
  } while (*(int *)((int)this + 0x70) == 0);

  if (*(int *)((int)this + 0x70) != 0) {
    *param_1 = 0;
    param_1[1] = (undefined4)local_3f4;
    return param_1;
  }
  pcVar16 = (char *)(*(int *)((int)this + 0x50) + local_3d4 * 8);
  if (*pcVar16 == '\0') {
    *(undefined4 *)pcVar16 = 0xc;
    FUN_004d57c0(this, 0xd, local_3f4);
    iVar12 = *(int *)((int)this + 0x54);
    iVar3 = *(int *)((int)this + 0x50);
    *param_1 = *(undefined4 *)(iVar3 + iVar12 * 8);
    param_1[1] = *(undefined4 *)(iVar3 + 4 + iVar12 * 8);
    return param_1;
  }
  *(undefined4 *)((int)this + 0x90) = 6;
  *param_1 = 0;
  param_1[1] = (undefined4)local_3f4;
  return param_1;

LAB_004d570c:
  *(undefined4 *)((int)this + 0x90) = 9;
  *param_1 = 0;
  param_1[1] = (undefined4)local_3f4;
  return param_1;
}
