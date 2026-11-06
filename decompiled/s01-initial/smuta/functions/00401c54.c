/* Ghidra address: 00401c54; FUN_00401c54 */

void FUN_00401c54(void)

{
  int iVar1;
  int *piVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined1 in_stack_00000014;
  
  piVar2 = &DAT_004390f0 + in_stack_0000000c;
  for (; in_stack_0000000c <= in_stack_00000010; in_stack_0000000c = in_stack_0000000c + 1) {
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
    *(undefined1 *)(iVar1 + in_stack_00000008) = in_stack_00000014;
  }
  return;
}

