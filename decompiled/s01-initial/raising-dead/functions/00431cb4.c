/* Ghidra address: 00431cb4; FUN_00431cb4 */

uint __cdecl FUN_00431cb4(int *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1[6] - param_1[5];
  if (0 < (int)uVar4) {
    FUN_00429f54((undefined4 *)param_1[5],(undefined4 *)param_2,uVar4);
    param_1[5] = param_1[5] + uVar4;
    param_2 = param_2 + uVar4;
  }
  while( true ) {
    if (param_3 <= uVar4) {
      return uVar4;
    }
    bVar1 = *param_2;
    if ((uint)param_1[5] < (uint)param_1[6]) {
      pbVar2 = (byte *)param_1[5];
      param_1[5] = param_1[5] + 1;
      uVar3 = (uint)bVar1;
      *pbVar2 = bVar1;
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x18))();
    }
    if (uVar3 == 0xffffffff) break;
    uVar4 = uVar4 + 1;
    param_2 = param_2 + 1;
  }
  return uVar4;
}

