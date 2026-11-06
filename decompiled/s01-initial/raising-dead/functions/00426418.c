/* Ghidra address: 00426418; FUN_00426418 */

undefined2 * __cdecl FUN_00426418(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  short sVar2;
  
  sVar2 = 0;
  puVar1 = param_1;
  do {
    *puVar1 = *param_2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
    sVar2 = sVar2 + 1;
    puVar1 = (undefined2 *)((int)puVar1 + 3);
    param_2 = (undefined2 *)((int)param_2 + 3);
  } while (sVar2 < 0x100);
  return param_1;
}

