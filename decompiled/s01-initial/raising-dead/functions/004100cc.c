/* Ghidra address: 004100cc; FUN_004100cc */

short __cdecl FUN_004100cc(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_3c [13];
  short local_6;
  
  FUN_0040f894(&local_6,0);
  if ((*param_2 != 0) && (*(int *)(DAT_004f1434 + 0x754) != 0)) {
    piVar3 = (int *)(*(int *)(DAT_004f1434 + 0x754) + 0x31);
    piVar4 = local_3c;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((local_3c[2] == *(int *)(param_1 + 0x39)) && (*(int *)(param_1 + 0x31) == local_3c[0])) {
      local_6 = 0;
    }
    else {
      sVar1 = FUN_00426780(*(int *)(param_1 + 0x39) - local_3c[2],
                           *(int *)(param_1 + 0x31) - local_3c[0]);
      FUN_0040f8c4(&local_6,sVar1 + *(short *)(param_1 + 0x3d));
    }
  }
  return local_6;
}

