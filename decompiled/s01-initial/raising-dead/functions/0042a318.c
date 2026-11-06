/* Ghidra address: 0042a318; FUN_0042a318 */

int __cdecl FUN_0042a318(char *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  while( true ) {
    uVar1 = FUN_00432c44((int)*param_1);
    uVar2 = FUN_00432c44((int)*param_2);
    if (((uVar1 != uVar2) || (*param_1 == '\0')) || (param_3 == 0)) break;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_00432c44((int)*param_1);
    uVar2 = FUN_00432c44((int)*param_2);
    iVar3 = uVar1 - uVar2;
  }
  return iVar3;
}

