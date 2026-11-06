/* Ghidra address: 0042dc08; FUN_0042dc08 */

int FUN_0042dc08(void)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD extraout_ECX;
  uint in_stack_00000004;
  DWORD in_stack_00000008;
  int in_stack_0000000c;
  undefined1 local_8c [128];
  DWORD local_c;
  int local_8;
  
  if (in_stack_00000004 < DAT_00437f24) {
    if (in_stack_0000000c + 1U < 2) {
      in_stack_0000000c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 8) != 0) {
        FUN_0042e20c();
      }
      iVar1 = in_stack_0000000c;
      DVar2 = in_stack_00000008;
      if ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 0x40) == 0) {
        in_stack_0000000c =
             FUN_0042e0d8(in_stack_00000004,in_stack_0000000c,in_stack_00000008,in_stack_00000004,
                          (LPCVOID)in_stack_00000008,in_stack_0000000c);
      }
      else {
        for (; iVar1 != 0; iVar1 = iVar1 - local_8) {
          local_8 = iVar1;
          DVar3 = FUN_0042db50();
          local_c = FUN_0042e0d8(local_8c,in_stack_00000004,extraout_ECX,in_stack_00000004,local_8c,
                                 DVar3);
          if (DVar3 != local_c) {
            if (local_c == 0xffffffff) {
              return -1;
            }
            return (DVar2 - in_stack_00000008) + local_c;
          }
          DVar2 = DVar2 + local_8;
        }
      }
    }
  }
  else {
    in_stack_0000000c = FUN_0042dfc8();
  }
  return in_stack_0000000c;
}

