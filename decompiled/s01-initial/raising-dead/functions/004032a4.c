/* Ghidra address: 004032a4; FUN_004032a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004032a4(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_00402034();
  if (iVar1 == 0xb) {
    if (DAT_00438210 == 0) {
      puVar2 = FUN_00435120(0x1a);
      if (puVar2 != (uint *)0x0) {
        FUN_00403458(puVar2,*(undefined4 *)(param_1 + 4),1);
      }
    }
    else if (_DAT_0043f464 < DAT_00438324) {
      _DAT_0043f464 = _DAT_0043f464 + 1;
      FUN_00402e70(_DAT_0043f464,_DAT_0043f468);
      puVar2 = FUN_00435120(8);
      if (puVar2 != (uint *)0x0) {
        FUN_00403138(puVar2,*(undefined4 *)(param_1 + 4));
      }
    }
    else {
      puVar2 = FUN_00435120(0x1a);
      if (puVar2 != (uint *)0x0) {
        FUN_00403458(puVar2,*(undefined4 *)(param_1 + 4),1);
      }
    }
  }
  else if (iVar1 == 10) {
    puVar2 = FUN_00435120(0x1a);
    if (puVar2 != (uint *)0x0) {
      FUN_00403458(puVar2,*(undefined4 *)(param_1 + 4),1);
    }
  }
  else if (iVar1 == 2) {
    puVar2 = FUN_00435120(0x1a);
    if (puVar2 != (uint *)0x0) {
      FUN_00403458(puVar2,*(undefined4 *)(param_1 + 4),0);
    }
  }
  return;
}

