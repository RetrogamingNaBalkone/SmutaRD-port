/* Ghidra address: 0040b700; FUN_0040b700 */

void __stdcall FUN_0040b700(void)

{
  int iVar1;
  int *piVar2;
  undefined4 local_6c [4];
  int iStack_5c;
  int iStack_48;
  
  if ((DAT_00438f28 != 0) && (DAT_00438f50 == 0)) {
    DAT_00438f50 = 1;
    FUN_00429fc4(local_6c,0,0x6c);
    local_6c[0] = 0x6c;
    FUN_0040ba10(DAT_00438f38);
    do {
      iVar1 = (**(code **)(*DAT_00438f38 + 100))();
      iVar1 = FUN_0040bac8(iVar1);
    } while (iVar1 != 0);
    DAT_004cf8f0 = iStack_5c;
    DAT_00438f14 = iStack_5c >> 1;
    DAT_00438f4c = 1;
    DAT_004c2688 = iStack_48;
    piVar2 = &DAT_004c2690;
    for (iVar1 = 0; iVar1 < DAT_004cf7ec; iVar1 = iVar1 + 1) {
      *piVar2 = iStack_48;
      iStack_48 = iStack_48 + iStack_5c;
      piVar2 = piVar2 + 1;
    }
  }
  return;
}

