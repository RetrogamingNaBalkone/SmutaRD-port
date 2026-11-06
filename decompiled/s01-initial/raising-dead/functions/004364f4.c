/* Ghidra address: 004364f4; FUN_004364f4 */

void __cdecl FUN_004364f4(LPCSTR param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  char *pcVar3;
  
  uVar1 = FUN_004302c8(param_1,0x4141,0x180);
  if (uVar1 != 0xffffffff) {
    puVar2 = (uint *)FUN_00436494();
    pcVar3 = FUN_0042a144(puVar2);
    FUN_0042fc00(uVar1,(char *)puVar2,pcVar3);
    pcVar3 = FUN_0042a144(param_2);
    FUN_0042fc00(uVar1,(char *)param_2,pcVar3);
    FUN_004301bc(uVar1);
  }
  return;
}

