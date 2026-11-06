/* Ghidra address: 004238a4; FUN_004238a4 */

void FUN_004238a4(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    if (((*(int *)(in_stack_00000004 + 0xf4) == 0) ||
        (*(int *)(in_stack_00000004 + 0x2c) == *(int *)(in_stack_00000004 + 0x128))) ||
       (*(short *)(in_stack_00000004 + 0xfc) != 0)) {
      puVar4 = (undefined4 *)(in_stack_00000004 + 0xc0);
      puVar5 = (undefined4 *)(in_stack_00000004 + 0x30);
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(int *)(in_stack_00000004 + 0xf4) = *(int *)(in_stack_00000004 + 0xf4) + 1;
      sVar2 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
      sVar1 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
      if (sVar1 < 0) {
        sVar1 = 0;
      }
      if (*DAT_0048aab4 + -1 < (int)sVar1) {
        sVar1 = *DAT_0048aab4 + -1;
      }
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      if (DAT_0048aab4[2] + -1 < (int)sVar2) {
        sVar2 = DAT_0048aab4[2] + -1;
      }
      sVar1 = sVar2 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6) + sVar1;
      if (*(short *)(*(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048e518)[sVar1] * 2 + 0x187) + 0x18)
          == 0) {
        (&DAT_0048e518)[sVar1] = *(undefined1 *)(in_stack_00000004 + 0xb8);
      }
      *(undefined2 *)(in_stack_00000004 + 0x12e) = *(undefined2 *)(in_stack_00000004 + 0x130);
      *(undefined4 *)(in_stack_00000004 + 0x2c) = *(undefined4 *)(in_stack_00000004 + 0x114);
    }
    else {
      DAT_0043649e = DAT_0043649e + 1;
    }
  }
  return;
}

