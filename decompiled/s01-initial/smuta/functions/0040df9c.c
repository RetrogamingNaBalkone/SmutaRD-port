/* Ghidra address: 0040df9c; FUN_0040df9c */

undefined4 * FUN_0040df9c(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_stack_00000004;
  int *in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  undefined1 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined2 in_stack_0000001c;
  
  *in_stack_00000004 = &PTR_LAB_0043550a;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_stack_00000004 = &PTR_LAB_00435752;
  FUN_00431b68();
  iVar3 = *in_stack_00000008;
  iVar2 = in_stack_00000008[1];
  iVar5 = in_stack_00000008[2];
  *(int *)((int)in_stack_00000004 + 6) = iVar3;
  *(int *)((int)in_stack_00000004 + 10) = iVar2 - ((int)in_stack_0000000c >> 1);
  *(int *)((int)in_stack_00000004 + 0xe) = iVar5;
  *(undefined4 *)((int)in_stack_00000004 + 0x12) = 3;
  iVar5 = iVar5 - DAT_0044ec00;
  iVar3 = iVar3 - DAT_0044ebf8;
  iVar6 = iVar5 * DAT_0044ebf4 - iVar3 * DAT_0044ebf0 >> 0xf;
  if (DAT_0044ebc8 < iVar6) {
    iVar5 = iVar3 * DAT_0044ebf4 + iVar5 * DAT_0044ebf0 >> 0xf;
    iVar3 = DAT_0044f6cc / iVar6;
    iVar4 = ((iVar5 - ((int)in_stack_00000010 >> 1)) * iVar3 >> 0xf) + (int)DAT_0044ebd0;
    iVar5 = ((((int)in_stack_00000010 >> 1) + iVar5) * iVar3 >> 0xf) + (int)DAT_0044ebd0;
    if (iVar4 < iVar5) {
      if ((DAT_0044ebdc < iVar4) || (iVar5 < DAT_0044ebd4)) {
        *(byte *)((int)in_stack_00000004 + 0x16) = *(byte *)((int)in_stack_00000004 + 0x16) & 0xfe;
        *(undefined2 *)((int)in_stack_00000004 + 0x17) = 0;
        goto LAB_0040e1b6;
      }
    }
    else if ((DAT_0044ebdc < iVar5) || (iVar4 < DAT_0044ebd4)) {
      *(byte *)((int)in_stack_00000004 + 0x16) = *(byte *)((int)in_stack_00000004 + 0x16) & 0xfe;
      *(undefined2 *)((int)in_stack_00000004 + 0x17) = 0;
      goto LAB_0040e1b6;
    }
    *(int *)((int)in_stack_00000004 + 0x3d) = iVar4;
    *(int *)((int)in_stack_00000004 + 0x19) = iVar4;
    *(int *)((int)in_stack_00000004 + 0x31) = iVar5;
    *(int *)((int)in_stack_00000004 + 0x25) = iVar5;
    iVar2 = iVar2 - DAT_0044ebfc;
    iVar5 = ((iVar2 - in_stack_0000000c) * iVar3 >> 0xf) + (int)DAT_0044ebd2;
    *(int *)((int)in_stack_00000004 + 0x29) = iVar5;
    *(int *)((int)in_stack_00000004 + 0x1d) = iVar5;
    iVar5 = iVar6 + -0x32;
    iVar2 = (iVar3 * iVar2 >> 0xf) + (int)DAT_0044ebd2;
    *(int *)((int)in_stack_00000004 + 0x41) = iVar2;
    *(int *)((int)in_stack_00000004 + 0x35) = iVar2;
    *(int *)((int)in_stack_00000004 + 0x45) = iVar5;
    *(int *)((int)in_stack_00000004 + 0x39) = iVar5;
    *(int *)((int)in_stack_00000004 + 0x2d) = iVar5;
    *(int *)((int)in_stack_00000004 + 0x21) = iVar5;
    if ((DAT_0044ebd8 < *(int *)((int)in_stack_00000004 + 0x35)) &&
       (*(int *)((int)in_stack_00000004 + 0x1d) < DAT_0044ebe0)) {
      *(undefined1 *)((int)in_stack_00000004 + 0x16) = in_stack_00000014;
      *(undefined4 *)((int)in_stack_00000004 + 0x49) = in_stack_00000018;
      *(byte *)((int)in_stack_00000004 + 0x16) = *(byte *)((int)in_stack_00000004 + 0x16) | 1;
      sVar1 = (short)iVar6 - (in_stack_00000010 >> 2);
      *(short *)((int)in_stack_00000004 + 0x17) = sVar1;
      if (sVar1 < 0) {
        *(undefined2 *)((int)in_stack_00000004 + 0x17) = 0;
      }
      *(undefined2 *)(in_stack_00000004 + 1) = in_stack_0000001c;
    }
    else {
      *(byte *)((int)in_stack_00000004 + 0x16) = *(byte *)((int)in_stack_00000004 + 0x16) & 0xfe;
      *(undefined2 *)((int)in_stack_00000004 + 0x17) = 0;
    }
  }
  else {
    *(byte *)((int)in_stack_00000004 + 0x16) = *(byte *)((int)in_stack_00000004 + 0x16) & 0xfe;
    *(undefined2 *)((int)in_stack_00000004 + 0x17) = 0;
  }
LAB_0040e1b6:
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

