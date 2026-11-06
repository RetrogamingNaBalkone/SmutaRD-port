/* Ghidra address: 0040f99c; FUN_0040f99c */

undefined4 __cdecl FUN_0040f99c(int param_1)

{
  short *psVar1;
  undefined4 uVar2;
  undefined2 local_6;
  
  psVar1 = *(short **)(param_1 + 0x1c);
  if (psVar1 != (short *)0x0) {
    if (*psVar1 == 0) {
      uVar2 = FUN_0040f4b0(psVar1,*(short *)(param_1 + 0x30),&local_6,0);
      *(undefined4 *)(param_1 + 0x20) = uVar2;
    }
    else {
      uVar2 = FUN_0040f4b0(*(short **)(param_1 + 0x1c),*(short *)(param_1 + 0x30),&local_6,
                           *(short *)(param_1 + 0x32));
      *(undefined4 *)(param_1 + 0x20) = uVar2;
    }
  }
  return *(undefined4 *)(param_1 + 0x20);
}

