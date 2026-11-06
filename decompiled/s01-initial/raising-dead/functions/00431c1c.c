/* Ghidra address: 00431c1c; FUN_00431c1c */

uint __cdecl FUN_00431c1c(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(byte *)param_1[8];
  }
  return uVar2;
}

