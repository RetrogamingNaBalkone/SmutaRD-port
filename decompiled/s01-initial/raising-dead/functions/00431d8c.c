/* Ghidra address: 00431d8c; FUN_00431d8c */

void __cdecl FUN_00431d8c(int param_1,uint param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  
  if (((*(short *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) &&
     (param_2 != *(uint *)(param_1 + 8))) {
    FUN_004350fc(*(int *)(param_1 + 8));
  }
  *(uint *)(param_1 + 8) = param_2;
  if (((param_2 == 0) || (param_3 == 0)) || (param_3 < param_2)) {
    param_3 = param_2;
  }
  *(uint *)(param_1 + 0xc) = param_3;
  *(ushort *)(param_1 + 6) = (ushort)(param_2 == 0);
  if ((param_4 == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined2 *)(param_1 + 4) = uVar1;
  return;
}

