/* Ghidra address: 00402974; FUN_00402974 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_00402974(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  short asStack_24 [6];
  short local_18 [6];
  
  if (DAT_004385ac == 0) {
    if (DAT_004381be == 0) {
      uVar2 = thunk_FUN_00548000();
      FUN_00429e84(asStack_24);
      FUN_00429e84(local_18);
      if (DAT_0043dc90 == 0) {
        DAT_0043dc94 = FUN_00429edc();
        DAT_0043dc90 = DAT_0043dc94 - DAT_0043dc8c;
        while (DAT_0043dc90 == 0) {
          DAT_0043dc94 = FUN_00429edc();
          DAT_0043dc90 = DAT_0043dc94 - DAT_0043dc8c;
        }
        DAT_0043dc8c = DAT_0043dc94;
      }
      DAT_0043dc90 = DAT_0043dc90 - 1;
      if (2 < DAT_0043dc90) {
        DAT_0043dc90 = 2;
      }
      FUN_00429e9c(asStack_24);
      FUN_00429e9c(local_18);
      FUN_0040e3dc();
      iVar3 = FUN_00429ebc(local_18);
      DAT_0043dc6c = iVar3 + DAT_0043dc6c >> 1;
      FUN_00429ef0(local_18);
      puVar4 = (undefined4 *)(DAT_0043dccc + 0x31);
      puVar5 = &DAT_0043dc98;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_00429e9c(local_18);
      FUN_004209b8(DAT_00438218,&DAT_0043dc98,(undefined4 *)&DAT_004381c2);
      FUN_00429ef0(local_18);
      iVar3 = FUN_00429ebc(local_18);
      DAT_0043dc60 = iVar3 + DAT_0043dc60 >> 1;
      if (DAT_0043dc90 == 0) {
        FUN_0040bbb4(0);
      }
      FUN_0040b700();
      if (DAT_0043822c == 5) {
        FUN_00422540((int)DAT_00438218,0);
      }
      else {
        if (DAT_0043dc90 == 0) {
          FUN_00429e9c(local_18);
        }
        FUN_00422540((int)DAT_00438218,(short)DAT_0043dc90);
        if (DAT_0043dc90 == 0) {
          FUN_00429ef0(local_18);
          DAT_0043dc64 = FUN_00429ebc(local_18);
        }
      }
      if ((DAT_0043dc90 == 0) || (DAT_0043822c == 5)) {
        FUN_00404248();
        FUN_004046b0(DAT_004385a0);
        (**(code **)(*DAT_0053d640 + 0x38))();
      }
      FUN_0040b7b4();
      DAT_004398f8 = 0;
      FUN_00429ef0(asStack_24);
      iVar3 = FUN_00429ebc(asStack_24);
      _DAT_0043dc5c = iVar3 + 1;
      DAT_0043820c = ((uint)((int)(1000 / (ulonglong)_DAT_0043dc5c) + DAT_0043820c) >> 1) + 1;
      if (DAT_0043820c < 4) {
        DAT_0043820c = 4;
      }
      if (uVar2 == 0) {
        uVar1 = 1;
      }
      else {
        if ((uVar2 & 0x20000) != 0) {
          FUN_00401358(1);
        }
        if ((uVar2 & 0x10000) != 0) {
          FUN_00401358(-1);
        }
        if ((uVar2 & 0x4000) == 0) {
          uVar1 = 1;
        }
        else {
          (**(code **)(*DAT_0053d640 + 0x34))();
          FUN_00427578(DAT_0053d640);
          FUN_004028a4();
          uVar1 = 10;
        }
      }
    }
    else {
      uVar1 = 10;
    }
  }
  else {
    FUN_00404c88();
    uVar1 = 1;
  }
  return uVar1;
}

