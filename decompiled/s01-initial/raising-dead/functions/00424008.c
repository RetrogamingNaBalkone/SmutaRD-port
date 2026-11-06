/* Ghidra address: 00424008; FUN_00424008 */

undefined4 __cdecl FUN_00424008(uint param_1,undefined4 *param_2)

{
  MMRESULT MVar1;
  tMIXERCONTROLDETAILS local_20;
  undefined4 local_8;
  
  *param_2 = 0;
  if (((DAT_0043a014 != (HMIXEROBJ)0x0) && (((&DAT_0053c87c)[(param_1 & 0xff) * 0x18] & 2) != 0)) &&
     (param_2 != (undefined4 *)0x0)) {
    FUN_00429fc4(&local_20.cbStruct,0,0x18);
    local_20.cbStruct = 0x18;
    local_20.paDetails = &local_8;
    local_20.dwControlID = *(DWORD *)(&DAT_0053c884 + (param_1 & 0xff) * 0x18);
    local_20.cChannels = 1;
    local_20.cbDetails = 4;
    MVar1 = mixerGetControlDetailsA(DAT_0043a014,&local_20,0);
    if (MVar1 != 0) {
      return 0xffffffff;
    }
    *param_2 = local_8;
  }
  return 0;
}

