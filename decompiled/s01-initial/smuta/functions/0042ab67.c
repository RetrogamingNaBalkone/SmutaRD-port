/* Ghidra address: 0042ab67; FUN_0042ab67 */

void FUN_0042ab67(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  uint local_18;
  int *local_10;
  
  if (in_stack_00000010 == 0) {
    uVar2 = *(uint *)(in_stack_00000008 + 0x24);
  }
  else {
    uVar2 = *(uint *)(in_stack_00000008 + 0x20);
  }
  if ((in_stack_0000000c == 0) || (uVar2 <= in_stack_0000000c)) {
    FUN_0042aab4();
  }
  else {
    local_10 = (int *)((uint)*(ushort *)(in_stack_00000008 + 0x12) + in_stack_00000008);
    if (in_stack_00000010 != 0) {
      for (; iVar1 = *local_10, iVar1 != 0; local_10 = local_10 + 3) {
        if ((*(byte *)(iVar1 + 0xc) & 2) != 0) {
          if (in_stack_0000000c <= *(uint *)(iVar1 + 0x24)) {
            FUN_0042ab22();
            return;
          }
          in_stack_0000000c = in_stack_0000000c - *(uint *)(iVar1 + 0x24);
        }
      }
    }
    for (piVar4 = (int *)((uint)*(ushort *)(in_stack_00000008 + 0x10) + in_stack_00000008);
        iVar1 = *piVar4, iVar1 != 0; piVar4 = piVar4 + 3) {
      if ((*(byte *)(iVar1 + 0xc) & 2) != 0) {
        if (in_stack_0000000c <= *(uint *)(iVar1 + 0x24)) {
          FUN_0042ab22();
          if (in_stack_00000010 == 0) {
            return;
          }
          FUN_0042ab22();
          return;
        }
        in_stack_0000000c = in_stack_0000000c - *(uint *)(iVar1 + 0x24);
      }
    }
    piVar3 = (int *)((uint)*(ushort *)(in_stack_00000008 + 0x2e) + in_stack_00000008);
    piVar4 = piVar3;
    while( true ) {
      iVar1 = *piVar4;
      local_18 = 1;
      if ((*(byte *)(iVar1 + 5) & 4) != 0) {
        local_18 = *(uint *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 8);
      }
      uVar2 = *(int *)(iVar1 + 0x20) * local_18;
      if (in_stack_0000000c <= uVar2) break;
      in_stack_0000000c = in_stack_0000000c - uVar2;
      piVar4 = piVar4 + 2;
    }
    do {
      if (local_18 < 2) {
        FUN_0042ab67();
      }
      else {
        FUN_0042ad0d();
      }
      piVar4 = piVar4 + -2;
    } while (piVar3 <= piVar4);
    FUN_0042ab22();
    if (in_stack_00000010 != 0) {
      FUN_0042ab22();
    }
  }
  return;
}

