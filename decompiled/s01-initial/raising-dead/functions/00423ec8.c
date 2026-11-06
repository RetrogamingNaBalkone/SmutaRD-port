/* Ghidra address: 00423ec8; FUN_00423ec8 */

undefined4 __cdecl FUN_00423ec8(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  MMRESULT MVar1;
  tMIXERCONTROLDETAILS local_24;
  undefined4 local_c;
  undefined4 local_8;
  
  *param_2 = 0;
  *param_3 = 0;
  if ((((DAT_0043a014 != (HMIXEROBJ)0x0) && (((&DAT_0053c87c)[(param_1 & 0xff) * 0x18] & 1) != 0))
      && (param_2 != (undefined4 *)0x0)) && (param_3 != (undefined4 *)0x0)) {
    FUN_00429fc4(&local_24.cbStruct,0,0x18);
    local_24.cbStruct = 0x18;
    local_24.dwControlID = *(DWORD *)(&DAT_0053c880 + (param_1 & 0xff) * 0x18);
    local_24.cChannels = *(DWORD *)(&DAT_0053c888 + (param_1 & 0xff) * 0x18);
    local_24.paDetails = &local_c;
    local_24.cbDetails = 4;
    MVar1 = mixerGetControlDetailsA(DAT_0043a014,&local_24,0);
    if (MVar1 != 0) {
      return 0xffffffff;
    }
    *param_2 = local_c;
    *param_3 = local_8;
  }
  return 0;
}

