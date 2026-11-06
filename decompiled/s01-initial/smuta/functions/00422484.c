/* Ghidra address: 00422484; FUN_00422484 */

void FUN_00422484(void)

{
  ushort uVar1;
  ushort uVar2;
  int in_stack_00000004;
  uint *in_stack_00000008;
  int in_stack_0000000c;
  
  if ((((*in_stack_00000008 & 0x40000) != 0) &&
      ((((*(byte *)(in_stack_00000004 + 0x1b) & 8) == 0 ||
        ((*(short *)(in_stack_00000004 + 0x81) == 10 &&
         (*(char *)(in_stack_00000004 + 0x74) != '\x03')))) &&
       (*in_stack_00000008 = *in_stack_00000008 & 0xfffbffff,
       *(short *)(in_stack_00000004 + 0x81) == 10)))) &&
     (*(char *)(in_stack_00000004 + 0x74) != '\x03')) {
    *(undefined1 *)(in_stack_00000004 + 0x74) = 3;
    FUN_00409f40();
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x10;
  }
  if (*(short *)(in_stack_00000004 + 0x81) != 10) {
    if (((*in_stack_00000008 & 0x800) != 0) && (*(int *)(in_stack_00000004 + 0x75) == 0)) {
      *in_stack_00000008 = *in_stack_00000008 & 0xfffff7ff;
      *(undefined2 *)(in_stack_00000004 + 0x83) = 0xc;
      if (*(short *)(in_stack_0000000c + 0x18) == 0xd) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *(ushort *)(in_stack_0000000c + 0x92);
      }
      uVar1 = *(ushort *)(in_stack_00000004 + 0x7f);
      if (((uVar1 != 0) && ((uVar1 & uVar2) == 0)) &&
         (*(char *)(in_stack_00000004 + 0x74) == '\x02')) {
        if (*(short *)(in_stack_0000000c + 0x18) != 1) {
          return;
        }
        if (uVar1 == 1) {
          *(undefined **)(in_stack_00000004 + 0x85) = &DAT_00436736;
        }
        else if (uVar1 == 2) {
          *(undefined **)(in_stack_00000004 + 0x85) = &DAT_00436748;
        }
        else if (uVar1 == 4) {
          *(undefined **)(in_stack_00000004 + 0x85) = &DAT_00436759;
        }
        else if (uVar1 == 8) {
          *(undefined **)(in_stack_00000004 + 0x85) = &DAT_0043676c;
        }
        else {
          *(undefined **)(in_stack_00000004 + 0x85) = &DAT_0043678d;
        }
        FUN_0040886c();
        return;
      }
      if ((*(char *)(in_stack_00000004 + 0x74) == '\x02') &&
         (*(int *)(in_stack_00000004 + 0x75) == 0)) {
        *(int *)(in_stack_00000004 + 0x75) = *(int *)(in_stack_00000004 + 0x75) + 1;
        FUN_00427c8d();
        if (*(short *)(in_stack_00000004 + 0x81) == 1) {
          *(int *)(in_stack_00000004 + 0x75) = *(int *)(in_stack_00000004 + 0x75) + 1;
          FUN_00427c8d();
        }
      }
    }
    *in_stack_00000008 = *in_stack_00000008 & 0xfffff7ff;
  }
  return;
}

