/* Ghidra address: 0042bb58; FUN_0042bb58 */

undefined1 * FUN_0042bb58(void)

{
  int *piVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint unaff_EDI;
  undefined1 *in_stack_00000004;
  int in_stack_00000008;
  int *in_stack_0000000c;
  char *local_8;
  
  puVar5 = in_stack_00000004;
  if (in_stack_0000000c[3] == 0) {
    unaff_EDI = 0;
    while ((unaff_EDI != 10 && (in_stack_00000008 = in_stack_00000008 + -1, 0 < in_stack_00000008)))
    {
      piVar1 = in_stack_0000000c + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        unaff_EDI = FUN_0042c220();
      }
      else {
        pbVar3 = (byte *)*in_stack_0000000c;
        *in_stack_0000000c = *in_stack_0000000c + 1;
        unaff_EDI = (uint)*pbVar3;
      }
      if (unaff_EDI == 0xffffffff) break;
      *puVar5 = (char)unaff_EDI;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    pcVar2 = (char *)(in_stack_00000008 - 1);
    do {
      while( true ) {
        if ((int)pcVar2 < 0) goto LAB_0042bc5d;
        local_8 = (char *)in_stack_0000000c[2];
        if ((int)local_8 < 1) break;
        if (pcVar2 <= local_8) {
          local_8 = pcVar2;
        }
        pcVar4 = FUN_00428fc4();
        if (pcVar4 != (char *)0x0) {
          local_8 = pcVar4 + (1 - *in_stack_0000000c);
        }
        FUN_00428fe4();
        *in_stack_0000000c = (int)(local_8 + *in_stack_0000000c);
        in_stack_0000000c[2] = in_stack_0000000c[2] - (int)local_8;
        puVar5 = puVar5 + (int)local_8;
        pcVar2 = pcVar2 + -(int)local_8;
        if ((pcVar4 != (char *)0x0) || (pcVar2 == (char *)0x0)) {
          unaff_EDI = 10;
          goto LAB_0042bc5d;
        }
      }
      piVar1 = in_stack_0000000c + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        unaff_EDI = FUN_0042c220();
      }
      else {
        pbVar3 = (byte *)*in_stack_0000000c;
        *in_stack_0000000c = *in_stack_0000000c + 1;
        unaff_EDI = (uint)*pbVar3;
      }
      if (unaff_EDI == 0xffffffff) {
        *(ushort *)((int)in_stack_0000000c + 0x12) =
             *(ushort *)((int)in_stack_0000000c + 0x12) | 0x20;
        break;
      }
      *puVar5 = (char)unaff_EDI;
      puVar5 = puVar5 + 1;
      pcVar2 = pcVar2 + -1;
    } while (unaff_EDI != 10);
  }
LAB_0042bc5d:
  if ((unaff_EDI == 0xffffffff) && (puVar5 == in_stack_00000004)) {
    in_stack_00000004 = (undefined1 *)0x0;
  }
  else {
    *puVar5 = 0;
    if ((*(byte *)((int)in_stack_0000000c + 0x12) & 0x10) != 0) {
      in_stack_00000004 = (undefined1 *)0x0;
    }
  }
  return in_stack_00000004;
}

