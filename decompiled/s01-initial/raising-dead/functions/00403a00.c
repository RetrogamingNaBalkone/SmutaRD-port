/* Ghidra address: 00403a00; FUN_00403a00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00403a00(void)

{
  DAT_0043f788 = GetPrivateProfileIntA(PTR_DAT_00438320,s_Debug_0043843a,0,(LPCSTR)&DAT_0043f350);
  _DAT_00438340 =
       GetPrivateProfileIntA(PTR_DAT_00438320,s_VolumeAll_00438440,0,(LPCSTR)&DAT_0043f350);
  DAT_00438350 = GetPrivateProfileIntA(PTR_DAT_00438320,&DAT_0043844a,0,(LPCSTR)&DAT_0043f350);
  _DAT_00438338 =
       GetPrivateProfileIntA(PTR_DAT_00438320,s_VolumeSoundEffects_0043844f,0,(LPCSTR)&DAT_0043f350)
  ;
  _DAT_0043f46c = _DAT_00438338;
  _DAT_00438348 =
       GetPrivateProfileIntA(PTR_DAT_00438320,s_MuteSoundEffects_00438462,0,(LPCSTR)&DAT_0043f350);
  DAT_0043833c = GetPrivateProfileIntA
                           (PTR_DAT_00438320,s_VolumeMusic_00438473,0,(LPCSTR)&DAT_0043f350);
  _DAT_0043834c =
       GetPrivateProfileIntA(PTR_DAT_00438320,s_MuteMusic_0043847f,0,(LPCSTR)&DAT_0043f350);
  if (DAT_0043833c == 0) {
    DAT_00439f60 = 1;
  }
  return;
}

