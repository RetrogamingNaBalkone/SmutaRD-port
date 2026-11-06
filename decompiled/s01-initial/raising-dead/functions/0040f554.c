/* Ghidra address: 0040f554; FUN_0040f554 */

undefined4 __cdecl
FUN_0040f554(short *param_1,undefined2 *param_2,undefined2 *param_3,short param_4,
            undefined2 *param_5,short param_6)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  char *local_8;
  
  if (param_4 < 0) {
    param_4 = 0;
  }
  else if (param_1[1] <= param_4) {
    param_4 = param_1[1] + -1;
  }
  sVar1 = *param_1;
  iVar3 = 0;
  if (sVar1 != 0) {
    iVar3 = ((((int)param_6 + ((int)sVar1 >> 1)) % 0x168) / (int)sVar1) * (int)param_1[1];
  }
  if ((int)param_1[2] <= iVar3 + param_4) {
    local_8 = s_Flic__j>_fl_>count_00439b19;
    FUN_0042b3bd((uint *)&DAT_00402f2c,&local_8,0,(undefined *)0x0,0,0,0,0);
  }
  puVar2 = (undefined2 *)((iVar3 + param_4) * 10 + *(int *)(param_1 + 4));
  *param_2 = puVar2[1];
  *param_3 = puVar2[2];
  *param_5 = *puVar2;
  return *(undefined4 *)(puVar2 + 3);
}

