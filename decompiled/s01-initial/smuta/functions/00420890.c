/* Ghidra address: 00420890; FUN_00420890 */

undefined4 FUN_00420890(void)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  ushort in_stack_0000000c;
  
  iVar3 = DAT_0048aab4;
  sVar2 = (short)in_stack_00000008;
  if (sVar2 == 0) {
    if ((short)in_stack_0000000c < 0) {
      *(undefined1 *)(in_stack_00000004 + 300) = 1;
    }
    if ((0 < (short)in_stack_0000000c) &&
       (*(short *)(in_stack_00000004 + 0x7e) == *(short *)(in_stack_00000004 + 0x82))) {
      return 0;
    }
    *(short *)(in_stack_00000004 + 0x7e) = *(short *)(in_stack_00000004 + 0x7e) + in_stack_0000000c;
    if (*(short *)(in_stack_00000004 + 0x7e) < 0) {
      *(undefined2 *)(in_stack_00000004 + 0x7e) = 0;
    }
    else if (*(short *)(in_stack_00000004 + 0x82) < *(short *)(in_stack_00000004 + 0x7e)) {
      *(short *)(in_stack_00000004 + 0x7e) = *(short *)(in_stack_00000004 + 0x82);
    }
    in_stack_00000008 = FUN_00408944();
  }
  else if ((sVar2 < 0x3c) || (0x45 < sVar2)) {
    if ((sVar2 < 0x32) || (0x3b < sVar2)) {
      if (sVar2 == 1) {
        if ((0 < (short)in_stack_0000000c) &&
           (*(short *)(in_stack_00000004 + 0x80) == *(short *)(in_stack_00000004 + 0x84))) {
          return 0;
        }
        *(short *)(in_stack_00000004 + 0x80) =
             *(short *)(in_stack_00000004 + 0x80) + in_stack_0000000c;
        if (*(short *)(in_stack_00000004 + 0x80) < 0) {
          *(undefined2 *)(in_stack_00000004 + 0x80) = 0;
        }
        else if (*(short *)(in_stack_00000004 + 0x84) < *(short *)(in_stack_00000004 + 0x80)) {
          *(short *)(in_stack_00000004 + 0x80) = *(short *)(in_stack_00000004 + 0x84);
        }
        in_stack_00000008 = FUN_0040895c();
      }
      else if (sVar2 == 2) {
        *(ushort *)(in_stack_00000004 + 0x82) = in_stack_0000000c;
        *(ushort *)(in_stack_00000004 + 0x7e) = in_stack_0000000c;
        FUN_00408944();
        in_stack_00000008 = FUN_00408984();
      }
      else if (sVar2 == 3) {
        *(short *)(in_stack_00000004 + 0x84) =
             *(short *)(in_stack_00000004 + 0x84) + in_stack_0000000c;
        *(undefined2 *)(in_stack_00000004 + 0x80) = *(undefined2 *)(in_stack_00000004 + 0x84);
        FUN_0040895c();
        in_stack_00000008 = FUN_0040899c();
      }
      else if (sVar2 == 10) {
        *(ushort *)(in_stack_00000004 + 0x92) =
             *(ushort *)(in_stack_00000004 + 0x92) | in_stack_0000000c;
        in_stack_00000008 = FUN_004089dc();
      }
      else if (sVar2 == 100) {
        in_stack_00000008 = FUN_0041f61c();
      }
      else if (sVar2 == 0x65) {
        in_stack_00000008 = FUN_0041f61c();
      }
      else if (sVar2 == 0x66) {
        in_stack_00000008 = FUN_0041f61c();
      }
      else {
        if (sVar2 == 1000) {
          DAT_00436c18 = 1;
          return 0;
        }
        if (sVar2 == 99) {
          *(short *)(in_stack_00000004 + 0x122) =
               *(short *)(in_stack_00000004 + 0x122) + in_stack_0000000c;
          in_stack_00000008 = FUN_004089b4();
        }
        else if (sVar2 == 200) {
          *(undefined2 *)(DAT_0048aab4 + 0xc) = 1;
          in_stack_00000008 = iVar3;
        }
        else {
          psVar1 = (short *)(in_stack_00000004 + 0x7e + sVar2 * 2);
          *psVar1 = *psVar1 + in_stack_0000000c;
        }
      }
    }
    else {
      *(ushort *)(in_stack_00000004 + 0xf0 + (sVar2 + -0x32) * 2) = in_stack_0000000c;
      if ((short)in_stack_0000000c < 0) {
        *(undefined2 *)(in_stack_00000004 + 0xf0 + (sVar2 + -0x32) * 2) = 0;
      }
      in_stack_00000008 = FUN_00420890();
    }
  }
  else {
    iVar3 = sVar2 + -0x3c;
    if ((0 < (short)in_stack_0000000c) &&
       (*(short *)(in_stack_00000004 + 0x104 + iVar3 * 2) ==
        *(short *)(in_stack_00000004 + 0xf0 + iVar3 * 2))) {
      return 0;
    }
    psVar1 = (short *)(in_stack_00000004 + 0x104 + iVar3 * 2);
    *psVar1 = *psVar1 + in_stack_0000000c;
    if (*(short *)(in_stack_00000004 + 0x104 + iVar3 * 2) < 0) {
      *(undefined2 *)(in_stack_00000004 + 0x104 + iVar3 * 2) = 0;
    }
    else {
      sVar2 = *(short *)(in_stack_00000004 + 0xf0 + iVar3 * 2);
      if (sVar2 < *(short *)(in_stack_00000004 + 0x104 + iVar3 * 2)) {
        *(short *)(in_stack_00000004 + 0x104 + iVar3 * 2) = sVar2;
      }
    }
    if (((*(int *)(in_stack_00000004 + 200 + iVar3 * 4) == 0) &&
        (0 < *(short *)(in_stack_00000004 + 0x104 + iVar3 * 2))) ||
       (*(short *)(in_stack_00000004 + 0x124) == 1)) {
      *(undefined4 *)(in_stack_00000004 + 200 + iVar3 * 4) = (&DAT_00499dfc)[iVar3];
      FUN_00420ed0();
      *(undefined2 *)(in_stack_00000004 + 0x124) = 0;
    }
    else if (*(short *)(in_stack_00000004 + 0x104 + iVar3 * 2) == 0) {
      FUN_00420d5c();
    }
    in_stack_00000008 = (int)*(short *)(in_stack_00000004 + 0x118);
    if (iVar3 == *(short *)(in_stack_00000004 + 0x118)) {
      in_stack_00000008 = FUN_0040895c();
    }
  }
  return CONCAT22((short)((uint)in_stack_00000008 >> 0x10),1);
}

