/* Ghidra address: 00426f60; FUN_00426f60 */

int * __cdecl FUN_00426f60(int *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  SIZE_T SVar4;
  
  FUN_0040cf10(param_1 + 2);
  (**(code **)(param_1[2] + 0xc))();
  SVar4 = *param_1 * 0x10e;
  pvVar2 = FUN_004235d4(SVar4);
  param_1[1] = (int)pvVar2;
  (**(code **)(param_1[2] + 0xc))
            (*param_1 * 0x10e,param_1[2],SVar4,param_1 + 2,pvVar2,*param_1 * 0x10e);
  for (iVar3 = 0; iVar3 < *param_1; iVar3 = iVar3 + 1) {
    iVar1 = param_1[1];
    *(undefined4 *)(iVar1 + 0x10a + iVar3 * 0x10e) = 0;
    *(undefined2 *)(iVar1 + 0x108 + iVar3 * 0x10e) = 0;
  }
  DAT_0053d630 = param_1;
  return param_1;
}

