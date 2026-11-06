/* Ghidra address: 004272b0; FUN_004272b0 */

undefined4 __cdecl FUN_004272b0(int *param_1,char *param_2,undefined2 *param_3,int param_4)

{
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = FUN_004270dc(param_1,param_2);
  if ((*(byte *)(param_1[1] + 0x108 + iVar1 * 0x10e) & 2) == 0) {
    if (param_4 == 0) {
      pvVar2 = FUN_004235d4(*(SIZE_T *)(param_1[1] + 0x100 + iVar1 * 0x10e));
      *(LPVOID *)(param_1[1] + 0x10a + iVar1 * 0x10e) = pvVar2;
    }
    else {
      *(int *)(param_1[1] + 0x10a + iVar1 * 0x10e) = param_4;
    }
    (**(code **)(param_1[2] + 0x14))();
    (**(code **)(param_1[2] + 0xc))();
    *(undefined2 *)(param_1[1] + 0x108 + iVar1 * 0x10e) = 2;
  }
  *param_3 = *(undefined2 *)(param_1[1] + 0x100 + iVar1 * 0x10e);
  return *(undefined4 *)(param_1[1] + 0x10a + iVar1 * 0x10e);
}

