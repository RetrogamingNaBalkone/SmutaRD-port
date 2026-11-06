/* Ghidra address: 0042d8cc; FUN_0042d8cc */

int * __cdecl FUN_0042d8cc(LPCSTR param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = FUN_0042d8a0();
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_0042d7f8(piVar1,param_1,param_2,0);
  }
  return piVar2;
}

