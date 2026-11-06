/* Ghidra address: 004368d4; FUN_004368d4 */

void __cdecl FUN_004368d4(uint *param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (DAT_0053e5ec == DAT_0053e5b8) {
    DAT_0053e5b8 = DAT_0053e5b8 + 0x10;
    DAT_0053e5b4 = FUN_004360dc(DAT_0053e5b4,DAT_0053e5b8 * 4);
    if (DAT_0053e5b4 == (uint *)0x0) {
      FUN_0043647c();
    }
  }
  puVar2 = param_1;
  if (param_2 != 0) {
    pcVar1 = FUN_0042a144(param_1);
    puVar2 = FUN_00435c48((uint)(pcVar1 + 1));
    if (puVar2 == (uint *)0x0) {
      FUN_0043647c();
    }
    uVar3 = 0xffffffff;
    do {
      puVar5 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      puVar5 = (uint *)((int)param_1 + 1);
      uVar4 = *param_1;
      param_1 = puVar5;
    } while ((char)uVar4 != '\0');
    uVar3 = ~uVar3;
    puVar5 = (uint *)((int)puVar5 - uVar3);
    puVar6 = puVar2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar6 = (char)*puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
  }
  DAT_0053e5b4[DAT_0053e5ec] = (uint)puVar2;
  DAT_0053e5ec = DAT_0053e5ec + 1;
  return;
}

