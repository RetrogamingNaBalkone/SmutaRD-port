/* Ghidra address: 004015f2; FUN_004015f2 */

undefined4 FUN_004015f2(void)

{
  undefined4 *puVar1;
  uint uVar2;
  HMIXEROBJ hmxobj;
  MMRESULT MVar3;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  uVar2 = *(uint *)(unaff_EBP + 8);
  *puVar1 = 0;
  if (((DAT_00434074 != (HMIXEROBJ)0x0) &&
      ((*(byte *)(&DAT_00439040 + (uVar2 & 0xff) * 6) & 2) != 0)) && (puVar1 != (undefined4 *)0x0))
  {
    FUN_00429054();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x18;
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(&DAT_00439048 + (uVar2 & 0xff) * 0x18);
    hmxobj = DAT_00434074;
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined4 *)(unaff_EBP + -0xc) = 4;
    *(int *)(unaff_EBP + -8) = unaff_EBP + -4;
    MVar3 = mixerGetControlDetailsA(hmxobj,(LPMIXERCONTROLDETAILS)(unaff_EBP + -0x1c),0);
    if (MVar3 != 0) {
      return 0xffffffff;
    }
    *puVar1 = *(undefined4 *)(unaff_EBP + -4);
  }
  return 0;
}

