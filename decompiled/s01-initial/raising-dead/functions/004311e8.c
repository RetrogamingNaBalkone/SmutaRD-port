/* Ghidra address: 004311e8; FUN_004311e8 */

int * __cdecl FUN_004311e8(int *param_1,undefined1 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  
  bVar3 = FUN_00430c98(param_1,0);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    iVar5 = *(int *)(*param_1 + 4);
    if (*(uint *)(iVar5 + 0x20) < *(uint *)(iVar5 + 0x24)) {
      iVar5 = *(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x20);
    }
    else {
      iVar5 = 0;
    }
    if (iVar5 == 0) {
      uVar4 = FUN_00430c48(param_1);
      uVar6 = (undefined1)uVar4;
    }
    else {
      piVar1 = *(int **)(*param_1 + 4);
      if (((uint)piVar1[8] < (uint)piVar1[9]) ||
         (iVar5 = (**(code **)(*piVar1 + 0xc))(), iVar5 != -1)) {
        puVar2 = (undefined1 *)piVar1[8];
        piVar1[8] = piVar1[8] + 1;
        uVar6 = *puVar2;
      }
      else {
        uVar6 = 0xff;
      }
    }
    *param_2 = uVar6;
    return param_1;
  }
  return param_1;
}

