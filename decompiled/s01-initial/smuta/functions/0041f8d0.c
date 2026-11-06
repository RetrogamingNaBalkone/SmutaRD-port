/* Ghidra address: 0041f8d0; FUN_0041f8d0 */

int FUN_0041f8d0(void)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 *in_stack_00000010;
  undefined4 local_38 [6];
  undefined4 local_20;
  
  bVar8 = 0;
  puVar6 = (undefined4 *)(in_stack_00000004 + 0x30);
  puVar7 = local_38;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_20 = 0xffffff9c;
  sVar5 = 0;
  do {
    iVar3 = FUN_00411480();
    if (in_stack_00000004 != iVar3) {
      if (*(short *)(iVar3 + 0x18) == in_stack_00000008) {
        puVar6 = (undefined4 *)(iVar3 + 0x30);
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *in_stack_00000010 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          in_stack_00000010 = in_stack_00000010 + (uint)bVar8 * -2 + 1;
        }
        return iVar3;
      }
      sVar1 = *(short *)(in_stack_00000004 + 0x34);
      if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
          (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
           -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
         (iVar4 = *(short *)(iVar3 + 0x1f) + 20000, -iVar4 != (int)sVar1 && iVar4 <= -(int)sVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) && ((*(ushort *)(iVar3 + 0x1b) & 8) == 0)) {
        return 0;
      }
      iVar3 = FUN_00411480();
      sVar1 = *(short *)(in_stack_00000004 + 0x34);
      if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
          (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
           -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
         (iVar4 = *(short *)(iVar3 + 0x1f) + 20000, -iVar4 != (int)sVar1 && iVar4 <= -(int)sVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) && ((*(ushort *)(iVar3 + 0x1b) & 8) == 0)) {
        return 0;
      }
    }
    sVar5 = sVar5 + 1;
    if (4999 < sVar5) {
      return 0;
    }
  } while( true );
}

