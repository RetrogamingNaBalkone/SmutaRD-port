/* Ghidra address: 004306c0; FUN_004306c0 */

undefined4 __cdecl FUN_004306c0(LPCSTR param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00430070();
  }
  return uVar2;
}

