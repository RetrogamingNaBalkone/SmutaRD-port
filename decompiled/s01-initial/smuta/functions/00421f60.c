/* Ghidra address: 00421f60; FUN_00421f60 */

void FUN_00421f60(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte bVar8;
  int in_stack_00000004;
  uint *in_stack_00000008;
  int in_stack_0000000c;
  int local_38 [13];
  
  bVar8 = 0;
  if ((*in_stack_00000008 & 0x40000) != 0) {
    piVar4 = (int *)(in_stack_0000000c + 0x30);
    piVar6 = local_38;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    iVar3 = FUN_00411480();
    sVar1 = *(short *)(iVar3 + 0x1f);
    sVar2 = (**(code **)(*(int *)(in_stack_00000004 + 0x14) + 0xc))();
    iVar3 = (int)sVar2 >> 1;
    if (iVar3 < 100) {
      iVar3 = 100;
    }
    if (((-(int)sVar1 - local_38[1] < iVar3) && (*(short *)(in_stack_00000004 + 0x74) == 0)) &&
       (*(short *)(in_stack_00000004 + 0x76) < 0)) {
      puVar5 = (undefined4 *)(in_stack_0000000c + 0x30);
      puVar7 = (undefined4 *)(in_stack_00000004 + 0x30);
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      *in_stack_00000008 = *in_stack_00000008 & 0xfffbffff;
      FUN_0041e39c();
    }
  }
  return;
}

