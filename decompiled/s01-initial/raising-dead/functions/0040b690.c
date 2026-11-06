/* Ghidra address: 0040b690; FUN_0040b690 */

int __stdcall FUN_0040b690(void)

{
  int iVar1;
  int *piVar2;
  undefined4 local_6c [22];
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if (DAT_00438f28 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_00429fc4(local_6c,0,0x6c);
    local_6c[0] = 0x6c;
    piVar2 = DAT_00438f38;
    FUN_0040ba10(DAT_00438f38);
    do {
      piVar2 = (int *)(**(code **)(*DAT_00438f38 + 0x58))
                                (DAT_00438f38,*DAT_00438f38,piVar2,DAT_00438f38,local_6c);
      iVar1 = FUN_0040bac8((int)piVar2);
    } while (iVar1 != 0);
    iVar1 = 0;
    for (uStack_c = uStack_14 | uStack_10 | uStack_c; 0 < (int)uStack_c;
        uStack_c = (int)uStack_c >> 1) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

