/* Ghidra address: 0042d92c; FUN_0042d92c */

uint FUN_0042d92c(void)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  uint in_stack_00000004;
  
  if (in_stack_00000004 < DAT_00437f24) {
    if (((&DAT_00437f28)[in_stack_00000004] & 0x200) == 0) {
      if (((&DAT_00437f28)[in_stack_00000004] & 0x2000) == 0) {
        DVar2 = FUN_0042e20c();
        if (DVar2 == 0xffffffff) {
          uVar1 = 0xffffffff;
        }
        else {
          DVar3 = FUN_0042e20c();
          if (DVar3 == 0xffffffff) {
            uVar1 = 0xffffffff;
          }
          else {
            DVar4 = FUN_0042e20c();
            if (DVar4 == 0xffffffff) {
              uVar1 = 0xffffffff;
            }
            else {
              uVar1 = (uint)((int)DVar3 <= (int)DVar2);
            }
          }
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = FUN_0042dfc8();
  }
  return uVar1;
}

