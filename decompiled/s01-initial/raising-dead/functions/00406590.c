/* Ghidra address: 00406590; FUN_00406590 */

void __cdecl
FUN_00406590(int param_1,short *param_2,undefined4 param_3,undefined4 param_4,byte *param_5)

{
  undefined4 *puVar1;
  
  FUN_0042ed9c(&DAT_00442320,param_5,(uint *)&stack0x00000018);
  puVar1 = FUN_00429fc4(*(undefined4 **)(param_2 + 7),0,*(uint *)(param_2 + 5));
  FUN_00406514((uint)puVar1,param_4,param_3,param_1,param_2,param_3,param_4,&DAT_00442320);
  return;
}

