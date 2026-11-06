/* Ghidra address: 00420544; FUN_00420544 */

void FUN_00420544(void)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int in_stack_00000004;
  byte in_stack_00000008;
  
  sVar2 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar3 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar3) {
    sVar3 = *DAT_0048aab4 + -1;
  }
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar2) {
    sVar2 = DAT_0048aab4[2] + -1;
  }
  (&DAT_0048e518)[(short)(sVar2 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6) + sVar3)] = 0x20;
  iVar1 = *(int *)(DAT_0048aab4 + (uint)in_stack_00000008 * 2 + 0x187);
  *(undefined4 *)(in_stack_00000004 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
  *(int *)(in_stack_00000004 + 0x34) =
       *(int *)(iVar1 + 0x34) - (int)*(short *)(in_stack_00000004 + 0x1f);
  *(undefined4 *)(in_stack_00000004 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
  sVar2 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar3 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar3) {
    sVar3 = *DAT_0048aab4 + -1;
  }
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar2) {
    sVar2 = DAT_0048aab4[2] + -1;
  }
  (&DAT_0048e518)[(short)(sVar2 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6) + sVar3)] =
       *(undefined1 *)(in_stack_00000004 + 0xb8);
  return;
}

