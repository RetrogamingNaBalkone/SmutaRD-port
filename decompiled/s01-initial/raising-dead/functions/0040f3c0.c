/* Ghidra address: 0040f3c0; FUN_0040f3c0 */

uint * __cdecl FUN_0040f3c0(short param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = FUN_00435120(0xc);
  *(short *)(puVar1 + 1) = param_1;
  *(undefined2 *)((int)puVar1 + 6) = 0;
  uVar2 = FUN_00435154(param_1 * 10);
  puVar1[2] = uVar2;
  return puVar1;
}

