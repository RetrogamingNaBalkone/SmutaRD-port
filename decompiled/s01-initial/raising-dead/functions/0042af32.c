/* Ghidra address: 0042af32; FUN_0042af32 */

void __cdecl
FUN_0042af32(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6
            )

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 2;
  if (param_6 == 0) {
    uVar5 = 0;
  }
  if ((param_3 & 2) != 0) {
    uVar5 = uVar5 | 0x80;
  }
  iVar3 = FUN_004010f9();
  if (**(int **)(iVar3 + 0xc) != 0) {
    ___lockDebuggerData_qv();
    iVar3 = FUN_004010f9();
    *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x14) = 3;
    iVar3 = FUN_004010f9();
    *(undefined **)(*(int *)(iVar3 + 0x10) + 0x18) = param_4;
    pcVar4 = FUN_0042c92c(param_2);
    iVar3 = FUN_004010f9();
    *(char **)(*(int *)(iVar3 + 0x10) + 0x28) = pcVar4;
    iVar3 = FUN_004010f9();
    *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x24) = 0;
    iVar3 = FUN_004010f9();
    pcVar4 = *(char **)(*(int *)(iVar3 + 0x10) + 0x28);
    while ((pcVar4 != (char *)0x0 && (cVar2 = *pcVar4, pcVar4 = pcVar4 + 1, cVar2 != '\0'))) {
      iVar3 = FUN_004010f9();
      piVar1 = (int *)(*(int *)(iVar3 + 0x10) + 0x24);
      *piVar1 = *piVar1 + 1;
    }
    iVar3 = FUN_004010f9();
    *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x1c) = param_1;
    iVar3 = FUN_004010f9();
    (**(code **)(*(int *)(iVar3 + 0x10) + 0xc))();
    ___unlockDebuggerData_qv();
  }
  if ((param_5 & 0x80) != 0) {
    FUN_004362c4(s__dtorMask___0x0080_____0_0043a614,s_XX_CPP_0043a62d,0x2ab);
  }
  uVar6 = param_5 & 7;
  if (uVar6 == 1) {
    (*(code *)param_4)();
  }
  else if (uVar6 == 2) {
    (*(code *)param_4)();
  }
  else if (uVar6 == 3) {
    (*(code *)param_4)(param_1,uVar5);
  }
  else if (uVar6 == 5) {
    (*(code *)param_4)();
  }
  else {
    FUN_004362c4(s___what___0043a63a,s_XX_CPP_0043a643,0x2d2);
  }
  return;
}

