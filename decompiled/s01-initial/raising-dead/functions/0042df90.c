/* Ghidra address: 0042df90; FUN_0042df90 */

void __cdecl FUN_0042df90(uint *param_1)

{
  char *pcVar1;
  
  if ((DAT_0043c8b4 < DAT_0043b664) && (-1 < DAT_0043c8b4)) {
    pcVar1 = (&PTR_s_Error_0_0043b5a0)[DAT_0043c8b4];
  }
  else {
    pcVar1 = s_Unknown_error_0043ba06;
  }
  if ((param_1 != (uint *)0x0) && ((char)*param_1 != '\0')) {
    FUN_0042d9f4(param_1,(int *)&DAT_0043b040);
    FUN_0042d9f4((uint *)&DAT_0043ba14,(int *)&DAT_0043b040);
  }
  FUN_0042d9f4((uint *)pcVar1,(int *)&DAT_0043b040);
  FUN_0042d9f4((uint *)&DAT_0043ba17,(int *)&DAT_0043b040);
  return;
}

