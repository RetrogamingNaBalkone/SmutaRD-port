/* Ghidra address: 00407bd8; FUN_00407bd8 */

void __cdecl FUN_00407bd8(undefined4 param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_004c2690 + param_3;
  for (; param_3 <= param_4; param_3 = param_3 + 1) {
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
    *(undefined2 *)(iVar1 + param_2 * 2) = param_5;
  }
  return;
}

