/* Ghidra address: 00427b48; FUN_00427b48 */

void FUN_00427b48(void)

{
  int iVar1;
  LPCSTR in_stack_00000004;
  CHAR local_104 [256];
  
  wvsprintfA(local_104,in_stack_00000004,&stack0x00000008);
  FUN_0040fbf8();
  iVar1 = FUN_0042bebc();
  if (iVar1 != 0) {
    FUN_0042bee8();
    FUN_0042ba40();
  }
  return;
}

