/* Ghidra address: 00436a14; FUN_00436a14 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_00436a14(void)

{
  char *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  
  if (DAT_0053e5c0 == (uint *)0x0) {
    if ((DAT_0053e5dc == (uint *)0x0) &&
       (DAT_0053e5dc = (uint *)GetEnvironmentStrings(), DAT_0053e5dc == (uint *)0x0)) {
      FUN_0043647c();
    }
    pcVar6 = (char *)0x0;
    iVar8 = 0;
    puVar2 = DAT_0053e5dc;
    while (pcVar1 = FUN_0042a144(puVar2), pcVar1 != (char *)0x0) {
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar6 + (int)(pcVar1 + 1);
      puVar2 = (uint *)((int)puVar2 + (int)(pcVar1 + 1));
    }
    DAT_0053e5c4 = FUN_00435c48((uint)(pcVar6 + 1));
    if (DAT_0053e5c4 == (uint *)0x0) {
      return 0;
    }
    FUN_00429f54(DAT_0053e5c4,DAT_0053e5dc,(uint)(pcVar6 + 1));
  }
  else {
    iVar8 = 0;
    for (puVar2 = DAT_0053e5c0; (uint *)*puVar2 != (uint *)0x0; puVar2 = puVar2 + 1) {
      pcVar6 = FUN_0042a144((uint *)*puVar2);
      if (pcVar6 == (char *)0x0) {
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + 1;
    }
  }
  _DAT_0053e5c8 = iVar8 + 4;
  puVar2 = FUN_004350c0(iVar8 + 5,4);
  if (puVar2 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = DAT_0053e5c0;
    puVar4 = DAT_0053e5c4;
    puVar7 = puVar2;
    if (DAT_0053e5c0 == (uint *)0x0) {
      while (pcVar6 = FUN_0042a144(puVar4), pcVar6 != (char *)0x0) {
        *puVar7 = (uint)puVar4;
        puVar4 = (uint *)((int)puVar4 + (int)(pcVar6 + 1));
        puVar7 = puVar7 + 1;
      }
    }
    else {
      for (; (uint *)*puVar5 != (uint *)0x0; puVar5 = puVar5 + 1) {
        pcVar6 = FUN_0042a144((uint *)*puVar5);
        if (pcVar6 == (char *)0x0) {
          puVar7 = puVar7 + -1;
        }
        else {
          *puVar7 = *puVar5;
        }
        puVar7 = puVar7 + 1;
      }
    }
    if (DAT_0053e5c0 != (uint *)0x0) {
      FUN_00435b40((int)DAT_0053e5c0);
    }
    uVar3 = 1;
    DAT_0053e5c0 = puVar2;
  }
  return uVar3;
}

