/* Ghidra address: 00428280; FUN_00428280 */

uint FUN_00428280(void)

{
  UINT UVar1;
  MMRESULT MVar2;
  uint uVar3;
  tagAUXCAPSA local_34;
  
  UVar1 = auxGetNumDevs();
  uVar3 = 0;
  if ((ushort)UVar1 != 0) {
    do {
      MVar2 = auxGetDevCapsA(uVar3 & 0xffff,&local_34,0x30);
      if (MVar2 != 0) {
        return uVar3;
      }
      if (((byte)local_34.wTechnology & 1) != 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((ushort)uVar3 < (ushort)UVar1);
  }
  return uVar3;
}

