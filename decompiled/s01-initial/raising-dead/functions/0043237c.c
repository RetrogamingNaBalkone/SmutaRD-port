/* Ghidra address: 0043237c; FUN_0043237c */

undefined4 __cdecl FUN_0043237c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 - 0x14U < 0x44) {
                    /* WARNING: Could not emulate address calculation at 0x00432393 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_004323e4)
                      [CONCAT31((int3)(param_1 - 0x14U >> 8),*(undefined1 *)(param_1 + 0x43238c))])
                      ();
    return uVar1;
  }
  return 0;
}

