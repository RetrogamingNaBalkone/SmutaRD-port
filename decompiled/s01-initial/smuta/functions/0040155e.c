/* Ghidra address: 0040155e; FUN_0040155e */

undefined4 FUN_0040155e(void)

{
  HMIXEROBJ hmxobj;
  MMRESULT MVar1;
  uint uVar2;
  int unaff_EBP;
  
  uVar2 = *(uint *)(unaff_EBP + 8);
  if ((DAT_00434074 != (HMIXEROBJ)0x0) && ((*(byte *)(&DAT_00439040 + (uVar2 & 0xff) * 6) & 1) != 0)
     ) {
    FUN_00429054();
    uVar2 = uVar2 & 0xff;
    *(undefined4 *)(unaff_EBP + -0x20) = 0x18;
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(&DAT_00439044 + uVar2 * 0x18);
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(&DAT_0043904c + uVar2 * 0x18);
    *(undefined4 *)(unaff_EBP + -0x10) = 4;
    *(int *)(unaff_EBP + -0xc) = unaff_EBP + -8;
    *(undefined4 *)(unaff_EBP + -8) = *(undefined4 *)(unaff_EBP + 0xc);
    hmxobj = DAT_00434074;
    *(undefined4 *)(unaff_EBP + -4) = *(undefined4 *)(unaff_EBP + 0x10);
    MVar1 = mixerSetControlDetails(hmxobj,(LPMIXERCONTROLDETAILS)(unaff_EBP + -0x20),0);
    if (MVar1 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

