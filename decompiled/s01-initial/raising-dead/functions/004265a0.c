/* Ghidra address: 004265a0; FUN_004265a0 */

void __cdecl FUN_004265a0(undefined4 *param_1,ushort param_2)

{
  ushort uVar1;
  short sVar2;
  undefined4 *puVar3;
  ushort *in_stack_ffffffd8;
  short local_14 [4];
  undefined4 local_c;
  undefined2 local_8;
  
  sVar2 = 0;
  puVar3 = param_1;
  do {
    uVar1 = 100 - param_2;
    in_stack_ffffffd8 = (ushort *)FUN_0040d3e8(local_14,(uint)in_stack_ffffffd8 & 0xff000000);
    FUN_0040d6c8((undefined2 *)&local_c,(ushort *)(sVar2 * 6 + (int)param_1),param_2,
                 in_stack_ffffffd8,uVar1);
    *puVar3 = local_c;
    *(undefined2 *)(puVar3 + 1) = local_8;
    sVar2 = sVar2 + 1;
    puVar3 = (undefined4 *)((int)puVar3 + 6);
  } while (sVar2 < 0x100);
  return;
}

