/* Ghidra address: 0042ea38; FUN_0042ea38 */

undefined4 __cdecl FUN_0042ea38(int *param_1,uint *param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  
  if ((((char)param_1 == *(char *)((int)param_1 + 0x17)) && (param_3 < 3)) && (param_4 < 0x80000000)
     ) {
    if (param_1[2] != 0) {
      FUN_0042dab4(param_1,0,1);
    }
    uVar1 = FUN_0042d3bc(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

