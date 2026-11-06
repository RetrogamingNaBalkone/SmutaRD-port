/* Ghidra address: 0040f4b0; FUN_0040f4b0 */

undefined4 __cdecl FUN_0040f4b0(short *param_1,short param_2,undefined2 *param_3,short param_4)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  char *local_8;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (param_1[1] <= param_2) {
    param_2 = param_1[1] + -1;
  }
  sVar1 = *param_1;
  iVar3 = 0;
  if (sVar1 != 0) {
    iVar3 = ((((int)param_4 + ((int)sVar1 >> 1)) % 0x168) / (int)sVar1) * (int)param_1[1];
  }
  iVar3 = iVar3 + param_2;
  if ((param_1[2] <= iVar3) || (iVar3 < 0)) {
    local_8 = s_Flic__j>_fl_>count____j_<_0_00439afd;
    FUN_0042b3bd((uint *)&DAT_00402f2c,&local_8,0,(undefined *)0x0,0,0,0,0);
  }
  puVar2 = (undefined2 *)(iVar3 * 10 + *(int *)(param_1 + 4));
  *param_3 = *puVar2;
  return *(undefined4 *)(puVar2 + 3);
}

