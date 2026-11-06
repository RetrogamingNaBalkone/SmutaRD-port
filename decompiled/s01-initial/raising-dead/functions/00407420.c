/* Ghidra address: 00407420; FUN_00407420 */

int __cdecl FUN_00407420(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = thunk_FUN_0042a378(param_1,(uint *)&DAT_00438e78);
  if (puVar1 == (uint *)0x0) {
    puVar1 = thunk_FUN_0042a378(param_1,(uint *)&DAT_00438e7c);
    if (puVar1 == (uint *)0x0) {
      puVar1 = thunk_FUN_0042a378(param_1,(uint *)&DAT_00438e80);
      if (puVar1 == (uint *)0x0) {
        puVar1 = thunk_FUN_0042a378(param_1,(uint *)&DAT_00438e84);
        if (puVar1 == (uint *)0x0) {
          return 0;
        }
      }
      puVar1 = FUN_00406fcc((LPCSTR)param_1);
      iVar2 = FUN_004073dc((short *)puVar1);
      return iVar2;
    }
  }
  iVar2 = FUN_00406970((char *)param_1);
  return iVar2;
}

