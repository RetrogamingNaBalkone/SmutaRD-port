/* Ghidra address: 0041e98c; FUN_0041e98c */

int FUN_0041e98c(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int in_stack_00000004;
  
  iVar3 = 0;
  for (pbVar2 = (byte *)(in_stack_00000004 + 0x94); *pbVar2 != 0; pbVar2 = pbVar2 + 1) {
    iVar1 = *(int *)(DAT_0048aab4 + 0x30e + (uint)*pbVar2 * 4);
    if ((*(short *)(iVar1 + 0x18) == 9) && (*(short *)(iVar1 + 0xfc) == 0)) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

