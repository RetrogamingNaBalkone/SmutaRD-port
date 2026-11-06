/* Ghidra address: 00431c3c; FUN_00431c3c */

uint __cdecl FUN_00431c3c(int *param_1,undefined4 *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_8;
  
  if ((uint)param_1[8] < (uint)param_1[9]) {
    uVar4 = param_1[9] - param_1[8];
  }
  else {
    uVar4 = 0;
  }
  if (0 < (int)uVar4) {
    FUN_00429f54(param_2,(undefined4 *)param_1[8],uVar4);
    param_2 = (undefined4 *)((int)param_2 + uVar4);
    param_1[8] = param_1[8] + uVar4;
  }
  while( true ) {
    if (param_3 <= (int)uVar4) {
      return uVar4;
    }
    if (((uint)param_1[8] < (uint)param_1[9]) ||
       (iVar2 = (**(code **)(*param_1 + 0xc))(), iVar2 != -1)) {
      pbVar1 = (byte *)param_1[8];
      param_1[8] = param_1[8] + 1;
      uVar3 = (uint)*pbVar1;
    }
    else {
      uVar3 = 0xffffffff;
    }
    if (uVar3 == 0xffffffff) break;
    local_8 = (undefined1)uVar3;
    *(undefined1 *)param_2 = local_8;
    param_2 = (undefined4 *)((int)param_2 + 1);
    uVar4 = uVar4 + 1;
  }
  return uVar4;
}

