/* Ghidra address: 004014b2; FUN_004014b2 */

undefined4 FUN_004014b2(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  HMIXEROBJ hmxobj;
  uint uVar3;
  MMRESULT MVar4;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
  puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
  uVar3 = *(uint *)(unaff_EBP + 8);
  *puVar2 = 0;
  *puVar1 = 0;
  if ((((DAT_00434074 != (HMIXEROBJ)0x0) &&
       ((*(byte *)(&DAT_00439040 + (uVar3 & 0xff) * 6) & 1) != 0)) && (puVar2 != (undefined4 *)0x0))
     && (puVar1 != (undefined4 *)0x0)) {
    FUN_00429054();
    uVar3 = uVar3 & 0xff;
    *(undefined4 *)(unaff_EBP + -0x20) = 0x18;
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(&DAT_00439044 + uVar3 * 0x18);
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(&DAT_0043904c + uVar3 * 0x18);
    hmxobj = DAT_00434074;
    *(undefined4 *)(unaff_EBP + -0x10) = 4;
    *(int *)(unaff_EBP + -0xc) = unaff_EBP + -8;
    MVar4 = mixerGetControlDetailsA(hmxobj,(LPMIXERCONTROLDETAILS)(unaff_EBP + -0x20),0);
    if (MVar4 != 0) {
      return 0xffffffff;
    }
    *puVar2 = *(undefined4 *)(unaff_EBP + -8);
    *puVar1 = *(undefined4 *)(unaff_EBP + -4);
  }
  return 0;
}

