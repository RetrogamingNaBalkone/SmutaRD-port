/* Ghidra address: 0043109c; FUN_0043109c */

int * __cdecl FUN_0043109c(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  
  bVar2 = FUN_00430c98(param_1,0);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    piVar1 = *(int **)(*param_1 + 4);
    if ((uint)piVar1[8] < (uint)piVar1[9]) {
      uVar3 = (uint)*(byte *)piVar1[8];
    }
    else {
      uVar3 = (**(code **)(*piVar1 + 0xc))();
    }
    bVar2 = uVar3 == 0x2d;
    if ((uVar3 == 0x2b) || (bVar2)) {
      piVar1 = *(int **)(*param_1 + 4);
      if ((piVar1[8] == 0) || (piVar1[8] = piVar1[8] + 1, (uint)piVar1[9] <= (uint)piVar1[8])) {
        uVar3 = FUN_00431c1c(piVar1);
      }
      else {
        uVar3 = (uint)*(byte *)piVar1[8];
      }
    }
    if ((*(byte *)(*param_1 + 0x18) & 0x40) == 0) {
      if ((*(byte *)(*param_1 + 0x18) & 0x20) == 0) {
        if (((*(byte *)(*param_1 + 0x18) & 0x10) == 0) && (uVar3 == 0x30)) {
          piVar1 = *(int **)(*param_1 + 4);
          if ((piVar1[8] == 0) || (piVar1[8] = piVar1[8] + 1, (uint)piVar1[9] <= (uint)piVar1[8])) {
            uVar3 = FUN_00431c1c(piVar1);
          }
          else {
            uVar3 = (uint)*(byte *)piVar1[8];
          }
          if ((uVar3 == 0x78) || (uVar3 == 0x58)) {
            piVar1 = *(int **)(*param_1 + 4);
            if ((piVar1[8] == 0) || (piVar1[8] = piVar1[8] + 1, (uint)piVar1[9] <= (uint)piVar1[8]))
            {
              uVar3 = FUN_00431c1c(piVar1);
            }
            else {
              uVar3 = (uint)*(byte *)piVar1[8];
            }
            iVar4 = FUN_00430ffc(param_1,uVar3);
          }
          else if (((int)uVar3 < 0x30) || (0x37 < (int)uVar3)) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_00430f78(param_1,uVar3);
          }
        }
        else {
          iVar4 = FUN_00430ef0(param_1,uVar3);
        }
      }
      else {
        iVar4 = FUN_00430f78(param_1,uVar3);
      }
    }
    else {
      iVar4 = FUN_00430ffc(param_1,uVar3);
    }
    if (bVar2) {
      iVar4 = -iVar4;
    }
    *param_2 = iVar4;
  }
  return param_1;
}

