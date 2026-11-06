/* Ghidra address: 0040b238; FUN_0040b238 */

void FUN_0040b238(void)

{
  uint *puVar1;
  short sVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x435568);
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_00431b68();
  }
  sVar2 = 100;
  do {
    FUN_00407e34();
    FUN_0040b0d0();
    sVar2 = sVar2 + -3;
  } while (-1 < sVar2);
  FUN_00431954();
  *in_FS_OFFSET = local_28;
  return;
}

