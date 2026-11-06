/* Ghidra address: 0042b4b4; FUN_0042b4b4 */

void FUN_0042b4b4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined2 in_FS;
  
  puVar2 = (undefined4 *)(unaff_EBP + *(int *)(param_1 + 4));
  puVar2[2] = param_1;
  puVar2[3] = &stack0x00000004;
  puVar2[1] = &LAB_0042a6a5;
  puVar2[4] = 0;
  *(undefined4 *)((int)puVar2 + 0x12) = 0;
  puVar2[7] = *DAT_0049aa2c;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar2 = *puVar1;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = puVar2;
  return;
}

