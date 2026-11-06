/* Ghidra address: 00429e50; FUN_00429e50 */

uint * __cdecl FUN_00429e50(undefined4 param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x18;
  puVar1 = FUN_00435120(0x18);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = (uint)&PTR_FUN_0043a1d0;
    (**(code **)*puVar1)(puVar1,(undefined4 *)*puVar1,uVar2,puVar1,param_1);
  }
  return puVar1;
}

