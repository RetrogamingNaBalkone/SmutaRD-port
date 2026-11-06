/* Ghidra address: 0041e4b4; FUN_0041e4b4 */

undefined2 FUN_0041e4b4(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  int in_stack_00000004;
  short *in_stack_00000008;
  int local_3c [2];
  int local_34;
  undefined2 local_6;
  
  bVar4 = 0;
  FUN_0041da64();
  if ((*in_stack_00000008 != 0) && (*(int *)(DAT_0048aab4 + 0x754) != 0)) {
    piVar2 = (int *)(*(int *)(DAT_0048aab4 + 0x754) + 0x30);
    piVar3 = local_3c;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    }
    if ((local_34 == *(int *)(in_stack_00000004 + 0x38)) &&
       (*(int *)(in_stack_00000004 + 0x30) == local_3c[0])) {
      local_6 = 0;
    }
    else {
      FUN_00409020();
      FUN_0041da94();
    }
  }
  return local_6;
}

