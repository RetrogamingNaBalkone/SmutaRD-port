/* Ghidra address: 0042bf08; FUN_0042bf08 */

uint FUN_0042bf08(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint in_stack_00000008;
  int *in_stack_0000000c;
  
  uVar3 = in_stack_00000008;
  if ((*(byte *)((int)in_stack_0000000c + 0x12) & 8) == 0) {
    uVar3 = in_stack_0000000c[3];
    if ((uVar3 == 0) || (uVar3 < in_stack_00000008)) {
      if ((in_stack_0000000c[3] == 0) ||
         ((in_stack_0000000c[2] == 0 || (iVar2 = FUN_0042bad4(), iVar2 == 0)))) {
        uVar3 = FUN_0042dc08();
        if ((uVar3 == 0xffffffff) || (uVar3 < in_stack_00000008)) {
          in_stack_00000008 = 0;
        }
      }
      else {
        in_stack_00000008 = 0;
      }
    }
    else {
      if (-1 < (int)(in_stack_0000000c[2] + in_stack_00000008)) {
        if (in_stack_0000000c[2] == 0) {
          in_stack_0000000c[2] = -1 - uVar3;
        }
        else {
          iVar2 = FUN_0042bad4();
          if (iVar2 != 0) {
            return 0;
          }
        }
      }
      FUN_00428fe4();
      in_stack_0000000c[2] = in_stack_0000000c[2] + in_stack_00000008;
      *in_stack_0000000c = *in_stack_0000000c + in_stack_00000008;
    }
  }
  else {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = FUN_0042c304();
      if (uVar1 == 0xffffffff) {
        return 0;
      }
    }
  }
  return in_stack_00000008;
}

