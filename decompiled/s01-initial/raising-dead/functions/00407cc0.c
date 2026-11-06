/* Ghidra address: 00407cc0; FUN_00407cc0 */

void __cdecl FUN_00407cc0(int param_1,uint param_2,ushort param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 local_6;
  
  puVar1 = (undefined4 *)((param_2 & 0xffff) + DAT_004c2684);
  puVar2 = (undefined4 *)((param_2 & 0xffff) + DAT_0053d63c);
  for (local_6 = *(short *)(param_1 + 0x3e); (int)local_6 <= *(int *)(param_1 + 0x46);
      local_6 = local_6 + 1) {
    FUN_00429f54(puVar1,puVar2,(uint)param_3);
    puVar1 = (undefined4 *)((int)puVar1 + *(int *)(param_1 + 0x32));
    puVar2 = (undefined4 *)((int)puVar2 + *(int *)(param_1 + 0x32));
  }
  return;
}

