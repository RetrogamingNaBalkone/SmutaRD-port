/* Ghidra address: 0042a4f9; FUN_0042a4f9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0042a4f9(void)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int in_FS_OFFSET;
  int in_stack_00000004;
  uint in_stack_00000008;
  
  iVar2 = *(int *)(in_stack_00000004 + 8);
  uVar1 = *(ushort *)(in_stack_00000004 + 0x10);
  do {
    while( true ) {
      do {
        while( true ) {
          uVar6 = (uint)uVar1;
          if ((uVar6 == 0) || (uVar6 == in_stack_00000008)) {
            return;
          }
          uVar1 = *(ushort *)(iVar2 + uVar6);
          uVar5 = (uint)*(ushort *)(iVar2 + uVar6 + 2);
          *(ushort *)(in_stack_00000004 + 0x10) = uVar1;
          if (uVar5 != 0) break;
          _DAT_0049aa1c = *(undefined4 *)(iVar2 + uVar6 + 8);
          *(undefined2 *)(in_stack_00000004 + 0x12) = 1;
          FUN_0042b937();
          *(undefined2 *)(in_stack_00000004 + 0x12) = 0;
        }
      } while (uVar5 - 1 < 3);
      if (uVar5 == 4) break;
      if (uVar5 - 1 == 4) {
        FUN_0042adbe();
      }
    }
    piVar3 = *(int **)(*(int *)(in_FS_OFFSET + 4) + -8);
    do {
      piVar4 = piVar3;
      piVar3 = (int *)*piVar4;
      if (piVar3 == (int *)0x0) break;
    } while ((piVar3[10] != in_stack_00000004) || (uVar6 != piVar3[0xc]));
    *piVar4 = *piVar3;
    if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
      FUN_00429684();
    }
    FUN_0042a177();
    (*(code *)piVar3[7])();
  } while( true );
}

