/* Ghidra address: 0042a255; thunk_FUN_0042a378 */

uint * __cdecl thunk_FUN_0042a378(uint *param_1,uint *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puStack_10;
  
  pcVar1 = FUN_0042a144(param_1);
  pcVar2 = FUN_0042a144(param_2);
  if (pcVar2 != (char *)0x0) {
    if (pcVar1 == (char *)0x0) {
      param_1 = (uint *)0x0;
    }
    else {
      pcVar3 = (char *)0x0;
      while( true ) {
        for (pcVar5 = (char *)((int)param_1 + (int)pcVar3);
            ((int)pcVar3 < (int)pcVar1 && (*pcVar5 != (char)*param_2)); pcVar5 = pcVar5 + 1) {
          pcVar3 = pcVar3 + 1;
        }
        if (pcVar1 == pcVar3) {
          return (uint *)0x0;
        }
        pcVar6 = (char *)0x0;
        puStack_10 = param_2;
        pcVar4 = pcVar3;
        for (pcVar5 = (char *)((int)param_1 + (int)pcVar3);
            (((int)pcVar4 < (int)pcVar1 && ((int)pcVar6 < (int)pcVar2)) &&
            (*pcVar5 == (char)*puStack_10)); pcVar5 = pcVar5 + 1) {
          pcVar4 = pcVar4 + 1;
          pcVar6 = pcVar6 + 1;
          puStack_10 = (uint *)((int)puStack_10 + 1);
        }
        if (pcVar6 == pcVar2) {
          return (uint *)((int)param_1 + (int)pcVar3);
        }
        if (pcVar1 == pcVar4) break;
        pcVar3 = pcVar3 + 1;
      }
      param_1 = (uint *)0x0;
    }
  }
  return param_1;
}

