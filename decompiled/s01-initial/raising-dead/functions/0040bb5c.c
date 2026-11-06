/* Ghidra address: 0040bb5c; FUN_0040bb5c */

void __cdecl FUN_0040bb5c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_68 [20];
  undefined4 local_18;
  
  if (DAT_00438f28 != 0) {
    FUN_00429fc4(local_68,0,100);
    local_68[0] = 100;
    local_18 = param_2;
    do {
      iVar1 = (**(code **)(*param_1 + 0x14))();
      iVar1 = FUN_0040bac8(iVar1);
    } while (iVar1 != 0);
  }
  return;
}

