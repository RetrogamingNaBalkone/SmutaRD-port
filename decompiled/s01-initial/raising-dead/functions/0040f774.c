/* Ghidra address: 0040f774; FUN_0040f774 */

LPVOID __cdecl FUN_0040f774(int *param_1,SIZE_T param_2)

{
  LPVOID pvVar1;
  int iVar2;
  short sVar3;
  SIZE_T SVar4;
  
  SVar4 = param_2;
  pvVar1 = FUN_004235d4(param_2);
  (**(code **)(*param_1 + 0xc))(param_1,*param_1,SVar4,param_1,pvVar1,param_2);
  *(int *)((int)pvVar1 + 8) = (int)pvVar1 + 0xc;
  iVar2 = *(short *)((int)pvVar1 + 4) * 10 + (int)pvVar1 + 0xc;
  for (sVar3 = 0; sVar3 < *(short *)((int)pvVar1 + 4); sVar3 = sVar3 + 1) {
    *(int *)(*(int *)((int)pvVar1 + 8) + 6 + sVar3 * 10) = iVar2;
    *(int *)(iVar2 + 0xe) = iVar2 + 0x12;
    *(undefined2 *)(iVar2 + 4) = 8;
    iVar2 = *(int *)(iVar2 + 0xe) + *(int *)(iVar2 + 10);
  }
  return pvVar1;
}

