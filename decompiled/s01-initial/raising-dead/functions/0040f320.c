/* Ghidra address: 0040f320; FUN_0040f320 */

int __cdecl FUN_0040f320(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = FUN_0040f2ec(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0043334c(pcVar1);
  }
  return iVar2;
}

