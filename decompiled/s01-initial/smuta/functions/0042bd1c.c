/* Ghidra address: 0042bd1c; FUN_0042bd1c */

uint FUN_0042bd1c(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *in_stack_00000004;
  uint *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  
  uVar4 = 0;
  cVar1 = *in_stack_00000004;
  if (cVar1 == 'r') {
    uVar3 = 0;
    uVar2 = 1;
  }
  else if (cVar1 == 'w') {
    uVar3 = 0x301;
    uVar4 = 0x80;
    uVar2 = 2;
  }
  else {
    if (cVar1 != 'a') {
      return 0;
    }
    uVar3 = 0x901;
    uVar4 = 0x80;
    uVar2 = 2;
  }
  cVar1 = in_stack_00000004[1];
  if ((cVar1 == '+') || ((in_stack_00000004[2] == '+' && ((cVar1 == 't' || (cVar1 == 'b')))))) {
    if (cVar1 == '+') {
      cVar1 = in_stack_00000004[2];
    }
    uVar4 = 0x180;
    uVar3 = uVar3 & 0xfffffffe | 2;
    uVar2 = 3;
  }
  if (cVar1 == 't') {
    uVar3 = uVar3 | 0x4000;
  }
  else if (cVar1 == 'b') {
    uVar3 = uVar3 | 0x8000;
    uVar2 = uVar2 | 0x40;
  }
  else {
    if ((cVar1 != '+') && (cVar1 != '\0')) {
      return 0;
    }
    uVar3 = uVar3 | *(uint *)PTR_DAT_00437ff4 & 0xc000;
    if ((*(uint *)PTR_DAT_00437ff4 & 0x8000) != 0) {
      uVar2 = uVar2 | 0x40;
    }
  }
  PTR_FUN_00438ce8 = &LAB_0042d870;
  *in_stack_00000008 = uVar3;
  *in_stack_0000000c = uVar4;
  return uVar2;
}

