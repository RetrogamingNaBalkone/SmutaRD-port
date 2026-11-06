/* Ghidra address: 0042983c; FUN_0042983c */

undefined4 FUN_0042983c(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int in_stack_00000004;
  int in_stack_00000010;
  
  piVar4 = (int *)((uint)*(ushort *)(in_stack_00000004 + 0x12) + in_stack_00000004);
  do {
    iVar2 = *piVar4;
    if (iVar2 == 0) {
      piVar4 = (int *)((uint)*(ushort *)(in_stack_00000004 + 0x10) + in_stack_00000004);
      while( true ) {
        iVar2 = *piVar4;
        if (iVar2 == 0) {
          return 0;
        }
        if ((in_stack_00000010 == 0) || ((piVar4[2] & 3U) != 3)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        iVar1 = FUN_004297d6();
        if ((iVar1 != 0) && (bVar3)) break;
        if (((*(byte *)(iVar2 + 0xc) & 4) != 0) && (iVar2 = FUN_0042983c(), iVar2 != 0)) {
          return 1;
        }
        piVar4 = piVar4 + 3;
      }
      return 1;
    }
    if ((*(byte *)(piVar4 + 2) & 8) == 0) {
      if ((in_stack_00000010 == 0) || ((piVar4[2] & 3U) != 3)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      iVar1 = FUN_004297d6();
      if ((iVar1 != 0) && (bVar3)) {
        return 1;
      }
      if (((*(byte *)(iVar2 + 0xc) & 4) != 0) && (iVar2 = FUN_0042983c(), iVar2 != 0)) {
        return 1;
      }
    }
    piVar4 = piVar4 + 3;
  } while( true );
}

