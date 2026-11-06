/* Ghidra address: 00431560; FUN_00431560 */

undefined4 __cdecl FUN_00431560(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x32) == 0) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x32);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    puVar1 = (undefined1 *)FUN_00435154(uVar3);
  }
  else {
    puVar1 = (undefined1 *)(**(code **)(param_1 + 0x28))();
  }
  if (puVar1 == (undefined1 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x32) = 0;
    FUN_00431d8c(param_1,(uint)puVar1,(uint)(puVar1 + uVar3),0);
    *puVar1 = 0;
    uVar2 = 1;
  }
  return uVar2;
}

