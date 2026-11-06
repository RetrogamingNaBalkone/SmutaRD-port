/* Ghidra address: 00404b2c; FUN_00404b2c */

void __cdecl FUN_00404b2c(short param_1)

{
  short sVar1;
  short *psVar2;
  short local_c [2];
  short local_8 [2];
  
  FUN_00404620(DAT_0043faf0,(int *)local_8,(int *)local_c);
  psVar2 = *(short **)(DAT_004385a0 + 0x99);
  sVar1 = psVar2[2];
  psVar2[2] = param_1;
  *psVar2 = local_8[0] + 1;
  if (*(int *)((int)DAT_0053d640 + 0x32) < (int)**(short **)(DAT_004385a0 + 0x99)) {
    *psVar2 = *(short *)((int)DAT_0053d640 + 0x32);
  }
  *(short *)(*(int *)(DAT_004385a0 + 0x99) + 2) = local_c[0] + 1;
  if (*(short *)((int)DAT_0053d640 + 0x26) * 10 < (int)(short)(local_c[0] + 1)) {
    *(short *)(*(int *)(DAT_004385a0 + 0x99) + 2) = *(short *)((int)DAT_0053d640 + 0x26) * 10;
  }
  FUN_00406590((int)DAT_0053d640,*(short **)(DAT_004385a0 + 0x99),0,0,&DAT_004385c8);
  (**(code **)(*DAT_0053d640 + 0x40))();
  *(short *)(*(int *)(DAT_004385a0 + 0x99) + 4) = sVar1;
  return;
}

