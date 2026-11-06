/* Ghidra address: 0040978c; FUN_0040978c */

int FUN_0040978c(void)

{
  char *pcVar1;
  short sVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if (*(short *)(in_stack_00000004 + 4) != 1) {
    FUN_00427b9f();
  }
  if (in_stack_0000000c < 0) {
    in_stack_0000000c = in_stack_0000000c + 0x3fff;
  }
  iVar3 = in_stack_0000000c >> 0xe;
  sVar2 = (short)iVar3;
  while (0 < sVar2) {
    pcVar1 = thunk_FUN_0042da20();
    if (pcVar1 == (char *)0xffffffff) {
      FUN_00427b9f();
    }
    iVar3 = iVar3 + -1;
    sVar2 = (short)iVar3;
  }
  pcVar1 = thunk_FUN_0042da20();
  if (pcVar1 == (char *)0xffffffff) {
    FUN_00427b9f();
  }
  return (int)*(short *)(in_stack_00000004 + 6);
}

