/* Ghidra address: 00407cf0; FUN_00407cf0 */

undefined2 *
FUN_00407cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 local_7;
  undefined1 local_5;
  
  FUN_00431b68();
  sVar1 = 0;
  puVar2 = param_4;
  do {
    FUN_00407840();
    local_7 = (undefined2)((uint)param_3 >> 8);
    *puVar2 = local_7;
    local_5 = (undefined1)((uint)param_3 >> 0x18);
    *(undefined1 *)(puVar2 + 1) = local_5;
    sVar1 = sVar1 + 1;
    puVar2 = (undefined2 *)((int)puVar2 + 3);
  } while (sVar1 < 0x100);
  return param_4;
}

