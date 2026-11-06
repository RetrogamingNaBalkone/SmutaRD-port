/* Ghidra address: 00405d78; FUN_00405d78 */

void FUN_00405d78(void)

{
  DAT_00443d90 = GetPrivateProfileIntA(s_Smuta_00434bb8,s_Debug_00434bbe,0,".\\smuta.ini");
  DAT_00434a84 = GetPrivateProfileIntA(s_Smuta_00434bce,s_VolumeAll_00434bd4,0,".\\smuta.ini");
  DAT_00434a94 = GetPrivateProfileIntA(s_Smuta_00434be8,s_MuteAll_00434bee,0,".\\smuta.ini");
  DAT_00434a7c = GetPrivateProfileIntA
                           (s_Smuta_00434c00,s_VolumeSoundEffects_00434c06,0,".\\smuta.ini");
  DAT_00443d54 = DAT_00434a7c;
  DAT_00434a8c = GetPrivateProfileIntA
                           (s_Smuta_00434c23,s_MuteSoundEffects_00434c29,0,".\\smuta.ini");
  DAT_00434a80 = GetPrivateProfileIntA(s_Smuta_00434c44,s_VolumeMusic_00434c4a,0,".\\smuta.ini");
  DAT_00434a90 = GetPrivateProfileIntA(s_Smuta_00434c60,s_MuteMusic_00434c66,0,".\\smuta.ini");
  if (DAT_00434a80 == 0) {
    DAT_00434e34 = 1;
  }
  return;
}

