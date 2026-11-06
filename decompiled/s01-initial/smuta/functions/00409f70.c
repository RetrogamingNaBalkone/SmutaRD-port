/* Ghidra address: 00409f70; FUN_00409f70 */

undefined1 * FUN_00409f70(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint unaff_ESI;
  short sVar4;
  short *in_stack_00000004;
  undefined1 *local_8;
  
  if (((in_stack_00000004[2] & 0x40U) == 0) && ((in_stack_00000004[2] & 0x400U) == 0)) {
    if (((in_stack_00000004[2] & 0x80U) == 0) && ((in_stack_00000004[2] & 0x800U) == 0)) {
      if (((in_stack_00000004[2] & 0x100U) == 0) && ((in_stack_00000004[2] & 0x1000U) == 0)) {
        if (((in_stack_00000004[2] & 0x200U) == 0) && ((in_stack_00000004[2] & 0x2000U) == 0)) {
          if ((*(byte *)((int)in_stack_00000004 + 5) & 0x40) == 0) {
            puVar1 = *(undefined1 **)(in_stack_00000004 + 7);
          }
          else {
            if (in_stack_00000004[4] != 0) {
              unaff_ESI = ((int)*in_stack_00000004 / (int)in_stack_00000004[3]) *
                          (int)in_stack_00000004[4];
            }
            uVar2 = 0;
            puVar1 = &DAT_00446bc8;
            local_8 = *(undefined1 **)(in_stack_00000004 + 7);
            for (iVar3 = 0; iVar3 < *(int *)(in_stack_00000004 + 5); iVar3 = iVar3 + 1) {
              if (uVar2 == (unaff_ESI & 0xffff)) {
                *puVar1 = *local_8;
                uVar2 = 0;
              }
              else {
                *puVar1 = 0;
                uVar2 = uVar2 + 1;
              }
              puVar1 = puVar1 + 1;
              local_8 = local_8 + 1;
            }
            puVar1 = &DAT_00446bc8;
          }
        }
        else {
          FUN_00428fe4();
          if ((*(byte *)((int)in_stack_00000004 + 5) & 0x20) == 0) {
            FUN_00429054();
          }
          else {
            FUN_00428fe4();
          }
          puVar1 = &DAT_00446bc8;
        }
      }
      else {
        FUN_00428fe4();
        if ((*(byte *)((int)in_stack_00000004 + 5) & 0x10) == 0) {
          FUN_00429054();
        }
        else {
          FUN_00428fe4();
        }
        puVar1 = &DAT_00446bc8;
      }
    }
    else {
      FUN_00428fe4();
      if ((*(byte *)((int)in_stack_00000004 + 5) & 8) == 0) {
        for (sVar4 = 0; sVar4 < in_stack_00000004[1]; sVar4 = sVar4 + 1) {
          FUN_00429054();
        }
      }
      else {
        for (sVar4 = 0; sVar4 < in_stack_00000004[1]; sVar4 = sVar4 + 1) {
          FUN_00428fe4();
        }
      }
      puVar1 = &DAT_00446bc8;
    }
  }
  else {
    FUN_00428fe4();
    if ((*(byte *)((int)in_stack_00000004 + 5) & 4) == 0) {
      for (sVar4 = 0; sVar4 < in_stack_00000004[1]; sVar4 = sVar4 + 1) {
        FUN_00429054();
      }
    }
    else {
      for (sVar4 = 0; sVar4 < in_stack_00000004[1]; sVar4 = sVar4 + 1) {
        FUN_00428fe4();
      }
    }
    puVar1 = &DAT_00446bc8;
  }
  return puVar1;
}

