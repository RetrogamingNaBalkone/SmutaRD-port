/* Ghidra address: 00431354; FUN_00431354 */

int * __cdecl FUN_00431354(int *param_1,undefined1 *param_2,int param_3,byte param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint uVar4;
  
  puVar2 = param_2;
  bVar3 = FUN_00430c98(param_1,1);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    uVar4 = 0;
    while (param_3 = param_3 + -1, 0 < param_3) {
      piVar1 = *(int **)(*param_1 + 4);
      if ((uint)piVar1[8] < (uint)piVar1[9]) {
        uVar4 = (uint)*(byte *)piVar1[8];
      }
      else {
        uVar4 = (**(code **)(*piVar1 + 0xc))();
      }
      if (uVar4 == 0xffffffff) break;
      param_1[2] = param_1[2] + 1;
      piVar1 = *(int **)(*param_1 + 4);
      if ((uint)piVar1[8] < (uint)piVar1[9]) {
        piVar1[8] = piVar1[8] + 1;
      }
      else {
        (**(code **)(*piVar1 + 0xc))();
      }
      if (uVar4 == param_4) break;
      *param_2 = (char)uVar4;
      param_2 = param_2 + 1;
    }
    if (uVar4 == 0xffffffff) {
      uVar4 = 3;
      if (param_2 != puVar2) {
        uVar4 = 1;
      }
      FUN_0043201c(*param_1,uVar4);
    }
  }
  *param_2 = 0;
  return param_1;
}

