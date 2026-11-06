/* Ghidra address: 0042bab7; FUN_0042bab7 */

int * __cdecl FUN_0042bab7(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  while( true ) {
    if (*piVar2 == 0) {
      return (int *)0x0;
    }
    if ((int *)piVar2[1] == (int *)0x0) break;
    bVar1 = FUN_0042ad62(*(int **)(param_2 + 4),*(undefined4 *)(param_2 + 8),(int *)piVar2[1],
                         (byte)*(undefined4 *)(param_2 + 0xc));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return piVar2;
    }
    piVar2 = piVar2 + 5;
  }
  return piVar2;
}

