/* Ghidra address: 0040168a; FUN_0040168a */

undefined4 FUN_0040168a(void)

{
  uint uVar1;
  HMIXEROBJ hmxobj;
  MMRESULT MVar2;
  int unaff_EBP;
  
  uVar1 = *(uint *)(unaff_EBP + 8);
  if ((DAT_00434074 != (HMIXEROBJ)0x0) && ((*(byte *)(&DAT_00439040 + (uVar1 & 0xff) * 6) & 2) != 0)
     ) {
    FUN_00429054();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x18;
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(&DAT_00439048 + (uVar1 & 0xff) * 0x18);
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined4 *)(unaff_EBP + -0xc) = 4;
    *(int *)(unaff_EBP + -8) = unaff_EBP + -4;
    hmxobj = DAT_00434074;
    *(undefined4 *)(unaff_EBP + -4) = *(undefined4 *)(unaff_EBP + 0xc);
    MVar2 = mixerSetControlDetails(hmxobj,(LPMIXERCONTROLDETAILS)(unaff_EBP + -0x1c),0);
    if (MVar2 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

