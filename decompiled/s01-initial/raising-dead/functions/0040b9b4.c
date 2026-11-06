/* Ghidra address: 0040b9b4; FUN_0040b9b4 */

undefined4 __stdcall FUN_0040b9b4(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (DAT_00438f28 == 0) {
    return DAT_004cf8fc;
  }
  piVar3 = DAT_00438f30;
  iVar1 = (**(code **)(*DAT_00438f30 + 0x60))();
  if (iVar1 == -0x7789fe3e) {
    (**(code **)(*DAT_00438f30 + 0x6c))();
  }
  piVar2 = DAT_00438f30;
  FUN_0040ba10(DAT_00438f30);
  do {
    piVar2 = (int *)(**(code **)(*DAT_00438f30 + 0x44))
                              (DAT_00438f30,*DAT_00438f30,piVar2,DAT_00438f30,&DAT_004cf8f4,piVar3);
    iVar1 = FUN_0040bac8((int)piVar2);
  } while (iVar1 != 0);
  return DAT_004cf8f4;
}

