/* Ghidra address: 00401bdc; FUN_00401bdc */

void FUN_00401bdc(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  
  if (DAT_00435924 == 0) {
    FUN_00429054();
  }
  else {
    uVar1 = *(undefined2 *)(DAT_00434094 + 8 + (in_stack_00000014 & 0xff) * 2);
    puVar2 = (undefined2 *)((&DAT_004390f0)[in_stack_0000000c] + in_stack_00000008 * 2);
    *puVar2 = uVar1;
    puVar3 = puVar2 + (in_stack_00000010 - in_stack_00000008) + 1;
    while (puVar3 != puVar2) {
      puVar2 = puVar2 + 1;
      *puVar2 = uVar1;
    }
  }
  return;
}

