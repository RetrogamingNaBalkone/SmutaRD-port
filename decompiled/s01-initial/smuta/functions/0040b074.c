/* Ghidra address: 0040b074; FUN_0040b074 */

void FUN_0040b074(void)

{
  int *in_stack_00000004;
  
  *(bool *)((int)in_stack_00000004 + 0x34a) = *(char *)((int)in_stack_00000004 + 0x34a) == '\0';
  (**(code **)(*in_stack_00000004 + 0x2c))();
  *(bool *)((int)in_stack_00000004 + 0x34b) = *(char *)((int)in_stack_00000004 + 0x34b) == '\0';
  (**(code **)(*in_stack_00000004 + 0x30))();
  return;
}

