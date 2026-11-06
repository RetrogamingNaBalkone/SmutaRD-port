/* Ghidra address: 004041ac; FUN_004041ac */

void __cdecl FUN_004041ac(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  FUN_004274c0((int)DAT_0053d640,0,0,*(int *)((int)DAT_0053d640 + 0x32) + -1,
               *(int *)((int)DAT_0053d640 + 0x36) + -1);
  sVar1 = **(short **)(param_1 + 0x65);
  sVar2 = (*(short **)(param_1 + 0x65))[1];
  sVar4 = *(short *)((int)DAT_0053d640 + 0x32) + -1;
  sVar3 = *(short *)((int)DAT_0053d640 + 0x36) + -1;
  sVar6 = 0;
  if (0 < sVar3) {
    do {
      sVar5 = 0;
      if (0 < sVar4) {
        do {
          (**(code **)(*DAT_0053d640 + 0x40))();
          sVar5 = sVar5 + sVar1;
        } while (sVar5 < sVar4);
      }
      sVar6 = sVar6 + sVar2;
    } while (sVar6 < sVar3);
  }
  return;
}

