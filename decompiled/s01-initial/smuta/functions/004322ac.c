/* Ghidra address: 004322ac; FUN_004322ac */

undefined4 FUN_004322ac(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000004;
  
  iVar2 = FUN_00432094();
  if (iVar2 == -1) {
    uVar3 = 1;
  }
  else {
    pcVar1 = *(code **)(&DAT_00438cf4 + iVar2 * 4);
    if (pcVar1 != (code *)0x1) {
      if (pcVar1 == (code *)0x0) {
        if ((1 < in_stack_00000004 - 0x10U) && (in_stack_00000004 != 0x14)) {
          if (in_stack_00000004 == 0x16) {
            FUN_00431fc0();
          }
          else {
            FUN_00432058();
          }
        }
      }
      else {
        *(undefined4 *)(&DAT_00438cf4 + iVar2 * 4) = 0;
        if ((&DAT_00438d44)[iVar2] == '\0') {
          (*pcVar1)(pcVar1,0,in_stack_00000004);
        }
        else {
          (*pcVar1)();
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

