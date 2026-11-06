/* Ghidra address: 0043232c; FUN_0043232c */

undefined4 FUN_0043232c(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int *in_stack_00000004;
  uint in_stack_00000008;
  int *local_10;
  int local_c;
  char *local_8;
  
  uVar4 = 0;
  if (in_stack_00000008 == 0) {
    uVar4 = 0xffff;
  }
  local_8 = (char *)0x0;
  local_10 = in_stack_00000004;
  for (local_c = 0; local_10 = local_10 + 1, local_c < *in_stack_00000004; local_c = local_c + 1) {
    puVar1 = (undefined4 *)*local_10;
    if (in_stack_00000008 == 0) {
      pcVar2 = (char *)*puVar1;
      pcVar5 = (char *)puVar1[1];
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar5 = (char *)puVar1[3];
    }
    for (; (pcVar2 < pcVar5 && (*(int *)(pcVar2 + 2) != 0)); pcVar2 = pcVar2 + 6) {
      if ((*pcVar2 == '\0') && (in_stack_00000008 == uVar4 <= (byte)pcVar2[1])) {
        uVar4 = (uint)(byte)pcVar2[1];
        local_8 = pcVar2;
      }
    }
  }
  if (local_8 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    *local_8 = '\x01';
    uVar3 = *(undefined4 *)(local_8 + 2);
  }
  return uVar3;
}

