/* Ghidra address: 00423a98; FUN_00423a98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00423a98(DWORD_PTR param_1)

{
  UINT UVar1;
  MMRESULT MVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  tagMIXERCONTROLA local_200;
  tagMIXERLINECONTROLSA local_16c;
  tagMIXERLINEA local_154;
  tagMIXERLINEA local_ac;
  
  FUN_00429fc4((undefined4 *)&DAT_0053c87c,0,0x60);
  UVar1 = mixerGetNumDevs();
  if (UVar1 != 0) {
    DAT_0043a018 = 0;
    MVar2 = mixerGetDevCapsA(0,(LPMIXERCAPSA)&DAT_0053c8dc,0x30);
    if ((MVar2 == 0) &&
       (MVar2 = mixerOpen((LPHMIXER)&DAT_0043a014,DAT_0043a018,param_1,0,0x10000), MVar2 == 0)) {
      for (uVar3 = 0; uVar3 < DAT_0053c908; uVar3 = uVar3 + 1) {
        FUN_00429fc4(&local_ac.cbStruct,0,0xa8);
        local_ac.cbStruct = 0xa8;
        local_ac.dwDestination = uVar3;
        mixerGetLineInfoA(DAT_0043a014,&local_ac,0);
        if (local_ac.dwComponentType == 4) break;
      }
      if (uVar3 != DAT_0053c908) {
        FUN_00429fc4(&local_16c.cbStruct,0,0x18);
        local_16c.cbStruct = 0x18;
        local_16c.dwLineID = local_ac.dwLineID;
        local_16c.pamxctrl = &local_200;
        local_16c.u.dwControlID = 0x50030001;
        local_16c.cControls = 1;
        local_16c.cbmxctrl = 0x94;
        FUN_00429fc4(&local_200.cbStruct,0,0x94);
        MVar2 = mixerGetLineControlsA(DAT_0043a014,&local_16c,2);
        if (MVar2 == 0) {
          _DAT_0053c87c = _DAT_0053c87c | 1;
          _DAT_0053c880 = local_200.dwControlID;
          _DAT_0053c888 = local_ac.cChannels;
          _DAT_0053c88c = local_200.Bounds.s.lMinimum;
          _DAT_0053c890 = local_200.Bounds.s.lMaximum;
        }
        FUN_00429fc4(&local_16c.cbStruct,0,0x18);
        local_16c.cbStruct = 0x18;
        local_16c.dwLineID = local_ac.dwLineID;
        local_16c.pamxctrl = &local_200;
        local_16c.u.dwControlID = 0x20010002;
        local_16c.cControls = 1;
        local_16c.cbmxctrl = 0x94;
        FUN_00429fc4(&local_200.cbStruct,0,0x94);
        MVar2 = mixerGetLineControlsA(DAT_0043a014,&local_16c,2);
        if (MVar2 == 0) {
          _DAT_0053c87c = _DAT_0053c87c | 2;
          _DAT_0053c884 = local_200.dwControlID;
        }
        uVar5 = 0;
        while( true ) {
          if (local_ac.cConnections <= uVar5) {
            return 0;
          }
          FUN_00429fc4(&local_154.cbStruct,0,0xa8);
          local_154.cbStruct = 0xa8;
          local_154.dwDestination = uVar3;
          local_154.dwSource = uVar5;
          MVar2 = mixerGetLineInfoA(DAT_0043a014,&local_154,1);
          if (MVar2 != 0) break;
          iVar4 = -1;
          if (local_154.dwComponentType == 0x1004) {
            iVar4 = 2;
          }
          else if (local_154.dwComponentType == 0x1005) {
            iVar4 = 3;
          }
          else if (local_154.dwComponentType == 0x1008) {
            iVar4 = 1;
          }
          if (0 < iVar4) {
            FUN_00429fc4(&local_16c.cbStruct,0,0x18);
            local_16c.cbStruct = 0x18;
            local_16c.dwLineID = local_154.dwLineID;
            local_16c.pamxctrl = &local_200;
            local_16c.u.dwControlID = 0x50030001;
            local_16c.cControls = 1;
            local_16c.cbmxctrl = 0x94;
            FUN_00429fc4(&local_200.cbStruct,0,0x94);
            MVar2 = mixerGetLineControlsA(DAT_0043a014,&local_16c,2);
            if (MVar2 == 0) {
              *(uint *)(&DAT_0053c87c + iVar4 * 0x18) = *(uint *)(&DAT_0053c87c + iVar4 * 0x18) | 1;
              *(DWORD *)(&DAT_0053c880 + iVar4 * 0x18) = local_200.dwControlID;
              *(DWORD *)(&DAT_0053c888 + iVar4 * 0x18) = local_154.cChannels;
              *(LONG *)(&DAT_0053c88c + iVar4 * 0x18) = local_200.Bounds.s.lMinimum;
              *(LONG *)(&DAT_0053c890 + iVar4 * 0x18) = local_200.Bounds.s.lMaximum;
            }
            FUN_00429fc4(&local_16c.cbStruct,0,0x18);
            local_16c.cbStruct = 0x18;
            local_16c.dwLineID = local_154.dwLineID;
            local_16c.pamxctrl = &local_200;
            local_16c.u.dwControlID = 0x20010002;
            local_16c.cControls = 1;
            local_16c.cbmxctrl = 0x94;
            FUN_00429fc4(&local_200.cbStruct,0,0x94);
            MVar2 = mixerGetLineControlsA(DAT_0043a014,&local_16c,2);
            if (MVar2 == 0) {
              *(uint *)(&DAT_0053c87c + iVar4 * 0x18) = *(uint *)(&DAT_0053c87c + iVar4 * 0x18) | 2;
              *(DWORD *)(&DAT_0053c884 + iVar4 * 0x18) = local_200.dwControlID;
            }
          }
          uVar5 = uVar5 + 1;
        }
      }
    }
    if (DAT_0043a014 != (HMIXEROBJ)0x0) {
      mixerClose((HMIXER)DAT_0043a014);
      DAT_0043a014 = (HMIXEROBJ)0x0;
    }
  }
  return 0xffffffff;
}

