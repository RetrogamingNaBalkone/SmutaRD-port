/* Ghidra address: 004240a0; FUN_004240a0 */

undefined4 __cdecl FUN_004240a0(uint param_1,undefined4 param_2)

{
  MMRESULT MVar1;
  tMIXERCONTROLDETAILS local_20;
  undefined4 local_8;
  
  if ((DAT_0043a014 != (HMIXEROBJ)0x0) && (((&DAT_0053c87c)[(param_1 & 0xff) * 0x18] & 2) != 0)) {
    FUN_00429fc4(&local_20.cbStruct,0,0x18);
    local_20.cbStruct = 0x18;
    local_20.paDetails = &local_8;
    local_20.dwControlID = *(DWORD *)(&DAT_0053c884 + (param_1 & 0xff) * 0x18);
    local_20.cChannels = 1;
    local_20.cbDetails = 4;
    local_8 = param_2;
    MVar1 = mixerSetControlDetails(DAT_0043a014,&local_20,0);
    if (MVar1 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

