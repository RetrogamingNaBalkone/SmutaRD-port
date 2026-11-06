/* Ghidra address: 004370e8; FUN_004370e8 */

undefined4 * __cdecl FUN_004370e8(undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_2c;
  
  FUN_0042c8f0(0x43cb0c);
  puVar1 = FUN_00435120(0x12);
  if (puVar1 != (uint *)0x0) {
    iVar5 = 0;
    uVar4 = 0;
    puVar3 = (undefined4 *)0x0;
    if (param_2 == (uint *)0x0) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = FUN_0042a144(param_2);
    }
    FUN_004374dc((undefined2 *)puVar1,param_2,(uint)pcVar2,puVar3,uVar4,iVar5);
  }
  *param_1 = puVar1;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

