/* Ghidra address: 0040ba10; FUN_0040ba10 */

void __cdecl FUN_0040ba10(int *param_1)

{
  int iVar1;
  char *in_ECX;
  int iVar2;
  int iVar3;
  char *local_8;
  
  local_8 = in_ECX;
  if (param_1 == (int *)0x0) {
    local_8 = s_DDraw_restore_error__Serface_NIL_00439358;
    FUN_0042b3bd((uint *)&DAT_00402f2c,&local_8,0,(undefined *)0x0,0,0,0,0);
  }
  iVar2 = 10;
  while( true ) {
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x60))();
    if (iVar1 == 0) break;
    iVar2 = iVar3;
    if (iVar1 == -0x7789fe3e) {
      (**(code **)(*param_1 + 0x6c))();
    }
    else if (iVar1 != -0x7789fde4) {
      FUN_0040bac8(iVar1);
    }
  }
  return;
}

