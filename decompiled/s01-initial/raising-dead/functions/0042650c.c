/* Ghidra address: 0042650c; FUN_0042650c */

void __cdecl FUN_0042650c(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0;
  do {
    FUN_0040d414((short *)((short)uVar1 * 6 + param_1),(byte *)((uint)uVar1 * 3 + param_2));
    uVar1 = uVar1 + 1;
  } while ((short)uVar1 < 0x100);
  return;
}

