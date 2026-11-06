/* Ghidra address: 0042d258; FUN_0042d258 */

int __cdecl FUN_0042d258(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_3;
  iVar3 = param_2;
  if (((param_1 != 0) &&
      (iVar2 = FUN_0042d1b6((undefined4 *)((uint)*(ushort *)(param_2 + 0x10) + param_2),0,param_3,
                            &param_1), iVar2 == 0)) &&
     (iVar3 = FUN_0042d1b6((undefined4 *)((uint)*(ushort *)(iVar3 + 0x12) + iVar3),1,piVar1,&param_1
                          ), iVar3 == 0)) {
    FUN_004362c4(s___Can_t_adjust_class_address__no_0043afbb,s_XXTYPE_CPP_0043aff5,0x4d3);
    param_1 = 0;
  }
  return param_1;
}

