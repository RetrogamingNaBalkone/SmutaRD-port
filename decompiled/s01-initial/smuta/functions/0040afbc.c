/* Ghidra address: 0040afbc; FUN_0040afbc */

undefined4 FUN_0040afbc(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  iVar1 = in_stack_00000010;
  iVar2 = in_stack_00000014;
  if (in_stack_00000010 < in_stack_00000008) {
    iVar1 = (int)(short)in_stack_00000008;
    iVar2 = (int)(short)in_stack_0000000c;
    in_stack_00000008 = in_stack_00000010;
    in_stack_0000000c = in_stack_00000014;
  }
  if ((in_stack_00000008 < 0) || (*(int *)(in_stack_00000004 + 0x32) <= in_stack_00000008)) {
    in_stack_00000008 = 0;
  }
  *(int *)(in_stack_00000004 + 0x3a) = in_stack_00000008;
  if ((iVar1 < 2) || (*(int *)(in_stack_00000004 + 0x32) <= iVar1)) {
    iVar1 = *(int *)(in_stack_00000004 + 0x32) + -1;
  }
  *(int *)(in_stack_00000004 + 0x42) = iVar1;
  if ((in_stack_0000000c < 0) || (*(int *)(in_stack_00000004 + 0x36) <= in_stack_0000000c)) {
    in_stack_0000000c = 0;
  }
  *(int *)(in_stack_00000004 + 0x3e) = in_stack_0000000c;
  if ((iVar2 < 2) || (*(int *)(in_stack_00000004 + 0x36) <= iVar2)) {
    iVar2 = *(int *)(in_stack_00000004 + 0x36) + -1;
  }
  *(int *)(in_stack_00000004 + 0x46) = iVar2;
  DAT_00434098 = *(undefined2 *)(in_stack_00000004 + 0x3a);
  DAT_0043409a = *(undefined2 *)(in_stack_00000004 + 0x42);
  DAT_0043409c = *(undefined2 *)(in_stack_00000004 + 0x3e);
  DAT_0043409e = *(undefined2 *)(in_stack_00000004 + 0x46);
  return CONCAT22((short)((uint)in_stack_00000004 >> 0x10),1);
}

