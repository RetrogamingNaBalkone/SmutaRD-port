/* Ghidra address: 0040f9f0; FUN_0040f9f0 */

void __cdecl FUN_0040f9f0(int param_1,short *param_2)

{
  undefined4 uVar1;
  undefined2 local_6;
  
  *(short **)(param_1 + 0x1c) = param_2;
  if (*param_2 == 0) {
    uVar1 = FUN_0040f4b0(param_2,0,&local_6,0);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
  }
  else {
    uVar1 = FUN_0040f4b0(*(short **)(param_1 + 0x1c),0,&local_6,*(short *)(param_1 + 0x32));
    *(undefined4 *)(param_1 + 0x20) = uVar1;
  }
  return;
}

