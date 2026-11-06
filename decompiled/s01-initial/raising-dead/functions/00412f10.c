/* Ghidra address: 00412f10; FUN_00412f10 */

int * __cdecl FUN_00412f10(int *param_1,undefined2 *param_2)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  
  FUN_0040fee0(param_1,param_2);
  param_1[5] = (int)&PTR_FUN_00439cf8;
  *(undefined1 *)((int)param_1 + 0x89) = 0x20;
  *(undefined2 *)((int)param_1 + 0x71) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x79) = 0;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  psVar1 = *(short **)((int)param_1 + 0x69);
  sVar2 = FUN_004100cc((int)param_1,psVar1);
  uVar3 = FUN_0040f3f8(psVar1,(undefined2 *)((int)param_1 + 0x75),
                       (undefined2 *)((int)param_1 + 0x77),(undefined2 *)((int)param_1 + 0x73),
                       (short *)((int)param_1 + 0x71),sVar2);
  *(undefined4 *)((int)param_1 + 0x65) = uVar3;
  return param_1;
}

