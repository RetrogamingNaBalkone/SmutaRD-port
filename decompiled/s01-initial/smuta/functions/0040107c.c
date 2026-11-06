/* Ghidra address: 0040107c; FUN_0040107c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040107c(void)

{
  UINT UVar1;
  MMRESULT MVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  DWORD_PTR in_stack_00000004;
  tagMIXERCONTROLA local_200;
  tagMIXERLINECONTROLSA local_16c;
  tagMIXERLINEA local_154;
  tagMIXERLINEA local_ac;
  
  FUN_00429054();
  UVar1 = mixerGetNumDevs();
  if (UVar1 != 0) {
    DAT_00434078 = 0;
    MVar2 = mixerGetDevCapsA(0,(LPMIXERCAPSA)&DAT_004390a0,0x30);
    if ((MVar2 == 0) &&
       (MVar2 = mixerOpen((LPHMIXER)&DAT_00434074,DAT_00434078,in_stack_00000004,0,0x10000),
       MVar2 == 0)) {
      for (uVar3 = 0; uVar3 < DAT_004390cc; uVar3 = uVar3 + 1) {
        FUN_00429054();
        local_ac.cbStruct = 0xa8;
        local_ac.dwDestination = uVar3;
        mixerGetLineInfoA(DAT_00434074,&local_ac,0);
        if (local_ac.dwComponentType == 4) break;
      }
      if (uVar3 != DAT_004390cc) {
        FUN_00429054();
        local_16c.cbStruct = 0x18;
        local_16c.dwLineID = local_ac.dwLineID;
        local_16c.pamxctrl = &local_200;
        local_16c.u.dwControlID = 0x50030001;
        local_16c.cControls = 1;
        local_16c.cbmxctrl = 0x94;
        FUN_00429054();
        MVar2 = mixerGetLineControlsA(DAT_00434074,&local_16c,2);
        if (MVar2 == 0) {
          DAT_00439040 = DAT_00439040 | 1;
          _DAT_00439044 = local_200.dwControlID;
          _DAT_0043904c = local_ac.cChannels;
          _DAT_00439050 = local_200.Bounds.s.lMinimum;
          _DAT_00439054 = local_200.Bounds.s.lMaximum;
        }
        FUN_00429054();
        local_16c.cbStruct = 0x18;
        local_16c.dwLineID = local_ac.dwLineID;
        local_16c.pamxctrl = &local_200;
        local_16c.u.dwControlID = 0x20010002;
        local_16c.cControls = 1;
        local_16c.cbmxctrl = 0x94;
        FUN_00429054();
        MVar2 = mixerGetLineControlsA(DAT_00434074,&local_16c,2);
        if (MVar2 == 0) {
          DAT_00439040 = DAT_00439040 | 2;
          _DAT_00439048 = local_200.dwControlID;
        }
        uVar5 = 0;
        while( true ) {
          if (local_ac.cConnections <= uVar5) {
            return 0;
          }
          FUN_00429054();
          local_154.cbStruct = 0xa8;
          local_154.dwDestination = uVar3;
          local_154.dwSource = uVar5;
          MVar2 = mixerGetLineInfoA(DAT_00434074,&local_154,1);
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
            FUN_00429054();
            local_16c.cbStruct = 0x18;
            local_16c.dwLineID = local_154.dwLineID;
            local_16c.pamxctrl = &local_200;
            local_16c.u.dwControlID = 0x50030001;
            local_16c.cControls = 1;
            local_16c.cbmxctrl = 0x94;
            FUN_00429054();
            MVar2 = mixerGetLineControlsA(DAT_00434074,&local_16c,2);
            if (MVar2 == 0) {
              (&DAT_00439040)[iVar4 * 6] = (&DAT_00439040)[iVar4 * 6] | 1;
              *(DWORD *)(&DAT_00439044 + iVar4 * 0x18) = local_200.dwControlID;
              *(DWORD *)(&DAT_0043904c + iVar4 * 0x18) = local_154.cChannels;
              *(LONG *)(&DAT_00439050 + iVar4 * 0x18) = local_200.Bounds.s.lMinimum;
              *(LONG *)(&DAT_00439054 + iVar4 * 0x18) = local_200.Bounds.s.lMaximum;
            }
            FUN_00429054();
            local_16c.cbStruct = 0x18;
            local_16c.dwLineID = local_154.dwLineID;
            local_16c.pamxctrl = &local_200;
            local_16c.u.dwControlID = 0x20010002;
            local_16c.cControls = 1;
            local_16c.cbmxctrl = 0x94;
            FUN_00429054();
            MVar2 = mixerGetLineControlsA(DAT_00434074,&local_16c,2);
            if (MVar2 == 0) {
              (&DAT_00439040)[iVar4 * 6] = (&DAT_00439040)[iVar4 * 6] | 2;
              *(DWORD *)(&DAT_00439048 + iVar4 * 0x18) = local_200.dwControlID;
            }
          }
          uVar5 = uVar5 + 1;
        }
      }
    }
    if (DAT_00434074 != (HMIXEROBJ)0x0) {
      mixerClose((HMIXER)DAT_00434074);
      DAT_00434074 = (HMIXEROBJ)0x0;
    }
  }
  return 0xffffffff;
}

