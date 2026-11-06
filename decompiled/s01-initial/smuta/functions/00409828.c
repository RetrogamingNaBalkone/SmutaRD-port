/* Ghidra address: 00409828; FUN_00409828 */

int FUN_00409828(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if (*(short *)(in_stack_00000004 + 4) != 2) {
    FUN_00427b9f();
  }
  if (in_stack_0000000c < 0) {
    in_stack_0000000c = in_stack_0000000c + 0x3fff;
  }
  iVar3 = in_stack_0000000c >> 0xe;
  sVar2 = (short)iVar3;
  while (0 < sVar2) {
    iVar1 = thunk_FUN_0042dc08();
    if (iVar1 == -1) {
      FUN_00427b9f();
    }
    iVar3 = iVar3 + -1;
    sVar2 = (short)iVar3;
  }
  iVar3 = thunk_FUN_0042dc08();
  if (iVar3 == -1) {
    FUN_00427b9f();
  }
  return (int)*(short *)(in_stack_00000004 + 6);
}

