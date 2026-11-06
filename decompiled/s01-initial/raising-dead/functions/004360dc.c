/* Ghidra address: 004360dc; FUN_004360dc */

uint * __cdecl FUN_004360dc(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_00435b40((int)param_1);
    puVar1 = (uint *)0x0;
  }
  else if (param_1 == (uint *)0x0) {
    puVar1 = FUN_00435c48(param_2);
  }
  else {
    iVar2 = FUN_00435fb4((int)param_1,param_2);
    puVar1 = param_1;
    if (iVar2 == 0) {
      puVar1 = FUN_00435c48(param_2);
      if (puVar1 != (uint *)0x0) {
        if ((param_1[-1] & 0xfffffffc) <= param_2) {
          param_2 = param_1[-1] & 0xfffffffc;
        }
        FUN_00429f78(puVar1,param_1,param_2);
        FUN_00435b40((int)param_1);
      }
    }
  }
  return puVar1;
}

