/* Automatic Ghidra research pseudocode. Not compilable or behavior-verified source. */
/* Ghidra address: 00401000; entry */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 in_FS;
  
  _DAT_0043405e = DAT_0043405a << 2;
  puVar3 = &DAT_00439040;
  for (iVar2 = 0x61c98; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  piVar1 = (int *)segment(in_FS,4);
  _DAT_0043406e = *piVar1;
  _DAT_00434066 = *(undefined4 *)(_DAT_0043406e + -8);
  _DAT_0043406a = *(undefined4 *)(_DAT_0043406e + -4);
  DAT_0049aa2c = _DAT_0043406e + -4;
  FUN_0042b696();
  _DAT_00434062 = GetModuleHandleA((LPCSTR)0x0);
  FUN_004323d8();
  return;
}


/* Ghidra address: 00401074; __GetExceptDLLinfo */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __GetExceptDLLinfo(void)

{
  int in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  
                    /* 0x1074  1  __GetExceptDLLinfo */
  _DAT_00437914 = *(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x30;
  _DAT_004378f8 = &DAT_004379e4;
  _DAT_004378fc = &__DebuggerHookData;
  *in_stack_00000004 = 0x82727349;
  in_stack_00000004[1] = &DAT_004378ec;
  return;
}


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


/* Ghidra address: 004014ac; thunk_FUN_004a6220 */

void thunk_FUN_004a6220(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 3) {
    FUN_004a6210();
    return;
  }
  FUN_004a6000();
  return;
}


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


/* Ghidra address: 00401558; thunk_FUN_004a6260 */

void thunk_FUN_004a6260(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 == 3) {
    FUN_004a6000();
    return;
  }
  if (in_stack_00000004 != 0) {
    FUN_004a6250();
    return;
  }
  FUN_004a6250();
  FUN_004a6000();
  FUN_004a6000();
  return;
}


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


/* Ghidra address: 004015ec; thunk_FUN_004a62f0 */

void thunk_FUN_004a62f0(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 3) {
    FUN_004a62e0();
    return;
  }
  FUN_004a6000();
  return;
}


/* Ghidra address: 004015f2; FUN_004015f2 */

undefined4 FUN_004015f2(void)

{
  undefined4 *puVar1;
  uint uVar2;
  HMIXEROBJ hmxobj;
  MMRESULT MVar3;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  uVar2 = *(uint *)(unaff_EBP + 8);
  *puVar1 = 0;
  if (((DAT_00434074 != (HMIXEROBJ)0x0) &&
      ((*(byte *)(&DAT_00439040 + (uVar2 & 0xff) * 6) & 2) != 0)) && (puVar1 != (undefined4 *)0x0))
  {
    FUN_00429054();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x18;
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(&DAT_00439048 + (uVar2 & 0xff) * 0x18);
    hmxobj = DAT_00434074;
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined4 *)(unaff_EBP + -0xc) = 4;
    *(int *)(unaff_EBP + -8) = unaff_EBP + -4;
    MVar3 = mixerGetControlDetailsA(hmxobj,(LPMIXERCONTROLDETAILS)(unaff_EBP + -0x1c),0);
    if (MVar3 != 0) {
      return 0xffffffff;
    }
    *puVar1 = *(undefined4 *)(unaff_EBP + -4);
  }
  return 0;
}


/* Ghidra address: 00401684; thunk_FUN_004a6330 */

void thunk_FUN_004a6330(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 == 3) {
    FUN_004a6000();
    return;
  }
  if (in_stack_00000004 != 0) {
    FUN_004a6320();
    return;
  }
  FUN_004a6320();
  FUN_004a6000();
  FUN_004a6000();
  return;
}


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


/* Ghidra address: 0040170c; FUN_0040170c */

void FUN_0040170c(void)

{
  if (DAT_00434074 != (HMIXER)0x0) {
    mixerClose(DAT_00434074);
    DAT_00434074 = (HMIXER)0x0;
  }
  return;
}


/* Ghidra address: 00401724; FUN_00401724 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401724(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short in_stack_00000008;
  short in_stack_0000000c;
  
  FUN_00406b50();
  iVar3 = DAT_004390e8;
  piVar1 = &DAT_004390f0;
  _DAT_00443fa0 = (int)in_stack_00000008;
  for (iVar2 = 0; iVar2 < in_stack_0000000c; iVar2 = iVar2 + 1) {
    if (DAT_00435924 == 0) {
      *piVar1 = in_stack_00000008 * iVar2 + iVar3;
    }
    else {
      *piVar1 = in_stack_00000008 * iVar2 * 2 + iVar3;
    }
    piVar1 = piVar1 + 1;
  }
  for (iVar3 = 0; iVar3 < in_stack_0000000c; iVar3 = iVar3 + 1) {
    if (DAT_00435924 == 0) {
      FUN_00429054();
    }
    else {
      FUN_00429054();
    }
  }
  _DAT_00439cf0 = 1;
  return;
}


/* Ghidra address: 004017e4; FUN_004017e4 */

void FUN_004017e4(void)

{
  FUN_0040af18();
  FUN_00401724();
  return;
}


/* Ghidra address: 004018e4; FUN_004018e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004018e4(void)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  FUN_0040ae78();
  *in_stack_00000004 = &PTR_FUN_004340d0;
  DAT_004390e8 = in_stack_00000008;
  *(int *)((int)in_stack_00000004 + 0x32) = DAT_00443c34;
  *(int *)((int)in_stack_00000004 + 0x36) = _DAT_00443c38;
  _DAT_004390d8 = *(undefined2 *)((int)in_stack_00000004 + 0x32);
  if (DAT_00443c34 == 0x140) {
    _DAT_004390dc = 1.0;
  }
  else {
    _DAT_004390dc = (float)(_DAT_004019e8 * (float10)DAT_00443c34);
  }
  if ((_DAT_00443c38 == 200) || (_DAT_00443c38 == 0xf0)) {
    _DAT_004390e0 = 1.0;
  }
  else if ((_DAT_00443c38 == 400) || (_DAT_00443c38 == 0x1e0)) {
    _DAT_004390e0 = 2.0;
  }
  else {
    _DAT_004390e0 = (float)(_DAT_004019f4 * (float10)_DAT_00443c38);
  }
  uVar1 = FUN_0042fc2c();
  DAT_004356e4 = (undefined2)uVar1;
  FUN_0040af18();
  FUN_00401724();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00401ae4; FUN_00401ae4 */

void FUN_00401ae4(void)

{
  return;
}


/* Ghidra address: 00401aec; FUN_00401aec */

int FUN_00401aec(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  
  if (in_stack_00000004[1] == 0) {
    return 0;
  }
  if ((*(int *)(in_stack_00000004[1] + 0xe) == 0) && (*(int *)(in_stack_00000004[1] + 0x12) == 0)) {
    *in_stack_00000004 = 0;
    in_stack_00000004[1] = 0;
  }
  else {
    iVar1 = *(int *)(in_stack_00000004[1] + 0xe);
    if (iVar1 == 0) {
      iVar1 = *(int *)(in_stack_00000004[1] + 0x12);
      *in_stack_00000004 = iVar1;
      *(undefined4 *)(iVar1 + 0xe) = 0;
      in_stack_00000004[1] = iVar1;
    }
    else {
      iVar2 = in_stack_00000004[1];
      *(undefined4 *)(iVar1 + 0x12) = *(undefined4 *)(in_stack_00000004[1] + 0x12);
      if (*(int *)(iVar2 + 0x12) != 0) {
        *(int *)(*(int *)(iVar2 + 0x12) + 0xe) = iVar1;
      }
      in_stack_00000004[1] = *(int *)(in_stack_00000004[1] + 0x12);
    }
  }
  return in_stack_00000004[1];
}


/* Ghidra address: 00401b58; FUN_00401b58 */

undefined4 FUN_00401b58(void)

{
  undefined4 *in_stack_00000004;
  
  in_stack_00000004[1] = *in_stack_00000004;
  return *in_stack_00000004;
}


/* Ghidra address: 00401b68; FUN_00401b68 */

undefined4 FUN_00401b68(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 4) != 0) {
    *(undefined4 *)(in_stack_00000004 + 4) = *(undefined4 *)(*(int *)(in_stack_00000004 + 4) + 0x12)
    ;
  }
  return *(undefined4 *)(in_stack_00000004 + 4);
}


/* Ghidra address: 00401b80; FUN_00401b80 */

undefined1 FUN_00401b80(void)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  
  return *(undefined1 *)((&DAT_004390f0)[in_stack_0000000c] + in_stack_00000008);
}


/* Ghidra address: 00401b98; FUN_00401b98 */

void FUN_00401b98(void)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  byte in_stack_00000010;
  
  if (DAT_00435924 != 0) {
    *(undefined2 *)((&DAT_004390f0)[in_stack_0000000c] + in_stack_00000008 * 2) =
         *(undefined2 *)(DAT_00434094 + 8 + (uint)in_stack_00000010 * 2);
    return;
  }
  *(byte *)((&DAT_004390f0)[in_stack_0000000c] + in_stack_00000008) = in_stack_00000010;
  return;
}


/* Ghidra address: 00401bdc; FUN_00401bdc */

void FUN_00401bdc(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  
  if (DAT_00435924 == 0) {
    FUN_00429054();
  }
  else {
    uVar1 = *(undefined2 *)(DAT_00434094 + 8 + (in_stack_00000014 & 0xff) * 2);
    puVar2 = (undefined2 *)((&DAT_004390f0)[in_stack_0000000c] + in_stack_00000008 * 2);
    *puVar2 = uVar1;
    puVar3 = puVar2 + (in_stack_00000010 - in_stack_00000008) + 1;
    while (puVar3 != puVar2) {
      puVar2 = puVar2 + 1;
      *puVar2 = uVar1;
    }
  }
  return;
}


/* Ghidra address: 00401c54; FUN_00401c54 */

void FUN_00401c54(void)

{
  int iVar1;
  int *piVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined1 in_stack_00000014;
  
  piVar2 = &DAT_004390f0 + in_stack_0000000c;
  for (; in_stack_0000000c <= in_stack_00000010; in_stack_0000000c = in_stack_0000000c + 1) {
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
    *(undefined1 *)(iVar1 + in_stack_00000008) = in_stack_00000014;
  }
  return;
}


/* Ghidra address: 00401c88; FUN_00401c88 */

void FUN_00401c88(void)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  byte *in_stack_00000014;
  
  pbVar1 = (byte *)((&DAT_004390f0)[in_stack_0000000c] + in_stack_00000008);
  for (sVar3 = 0; sVar3 < in_stack_00000010; sVar3 = sVar3 + 1) {
    bVar2 = *pbVar1;
    if ((ushort)bVar2 == *(ushort *)(in_stack_00000004 + 0x14)) {
      bVar2 = 0xff;
    }
    *in_stack_00000014 = bVar2;
    in_stack_00000014 = in_stack_00000014 + 1;
    pbVar1 = pbVar1 + 1;
  }
  return;
}


/* Ghidra address: 00401cd0; FUN_00401cd0 */

void FUN_00401cd0(void)

{
  short sVar1;
  char *pcVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  char *in_stack_00000014;
  
  pcVar2 = (char *)((&DAT_004390f0)[in_stack_0000000c] + in_stack_00000008);
  for (sVar1 = 0; sVar1 < in_stack_00000010; sVar1 = sVar1 + 1) {
    if (*in_stack_00000014 != -1) {
      *pcVar2 = *in_stack_00000014;
    }
    in_stack_00000014 = in_stack_00000014 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return;
}


/* Ghidra address: 00401d04; FUN_00401d04 */

void FUN_00401d04(void)

{
  FUN_00429008();
  return;
}


/* Ghidra address: 00401d2c; FUN_00401d2c */

void FUN_00401d2c(void)

{
  return;
}


/* Ghidra address: 00401d34; FUN_00401d34 */

void FUN_00401d34(void)

{
  int in_stack_00000004;
  undefined2 local_6;
  
  for (local_6 = *(short *)(in_stack_00000004 + 0x3e);
      (int)local_6 <= *(int *)(in_stack_00000004 + 0x46); local_6 = local_6 + 1) {
    FUN_00428fe4();
  }
  return;
}


/* Ghidra address: 00401d8c; FUN_00401d8c */

void FUN_00401d8c(void)

{
  int iVar1;
  
  iVar1 = FUN_00401b58();
  while (iVar1 != 0) {
    if (*(short *)(iVar1 + 0xc) < 0) {
      *(short *)(iVar1 + 0xc) = -*(short *)(iVar1 + 0xc);
      iVar1 = FUN_00401b68();
    }
    else {
      *(short *)(iVar1 + 0xc) = *(short *)(iVar1 + 0xc) + -1;
      if (*(short *)(iVar1 + 0xc) == 0) {
        iVar1 = FUN_00401aec();
      }
      else {
        iVar1 = FUN_00401b68();
      }
    }
  }
  return;
}


/* Ghidra address: 00401e64; FUN_00401e64 */

void FUN_00401e64(void)

{
  return;
}


/* Ghidra address: 00401e6c; FUN_00401e6c */

void FUN_00401e6c(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  short sVar5;
  short sVar6;
  char *pcVar7;
  int in_stack_00000004;
  short sStack00000008;
  short sStack0000000c;
  short *in_stack_00000010;
  short in_stack_00000014;
  short in_stack_00000018;
  int *local_34;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  short local_14;
  char *local_8;
  
  local_8 = *(char **)(in_stack_00000010 + 7);
  sVar1 = *in_stack_00000010;
  sVar2 = in_stack_00000010[1];
  if (in_stack_00000014 < 1) {
    in_stack_00000014 = 1;
  }
  if (in_stack_00000018 < 1) {
    in_stack_00000018 = 1;
  }
  if (*(int *)(in_stack_00000004 + 0x32) - _sStack00000008 < (int)in_stack_00000014) {
    in_stack_00000014 = *(short *)(in_stack_00000004 + 0x32) - sStack00000008;
  }
  if (*(int *)(in_stack_00000004 + 0x36) - _sStack0000000c < (int)in_stack_00000018) {
    in_stack_00000018 = *(short *)(in_stack_00000004 + 0x36) - sStack0000000c;
  }
  sVar3 = in_stack_00000010[2];
  local_14 = in_stack_00000018;
  if (sVar1 < in_stack_00000014) {
    for (local_1a = 0; (int)(uint)local_1a < (int)sVar2; local_1a = local_1a + 1) {
      piVar4 = &DAT_004390f0 + _sStack0000000c;
      for (; sVar2 <= local_14; local_14 = local_14 + -sVar2) {
        pcVar7 = local_8;
        sVar5 = in_stack_00000014;
        sVar6 = sStack00000008;
        for (local_1c = 0; (int)(uint)local_1c < (int)sVar1; local_1c = local_1c + 1) {
          for (; sVar1 <= sVar5; sVar5 = sVar5 + -sVar1) {
            if ((sVar3 != 8) || (*pcVar7 != '\0')) {
              *(char *)(*piVar4 + (int)sVar6) = *pcVar7;
            }
            sVar6 = sVar6 + 1;
          }
          sVar5 = sVar5 + in_stack_00000014;
          pcVar7 = pcVar7 + 1;
        }
        _sStack0000000c = _sStack0000000c + 1;
        piVar4 = piVar4 + 1;
      }
      local_14 = local_14 + in_stack_00000018;
      local_8 = local_8 + sVar1;
    }
  }
  else {
    local_34 = &DAT_004390f0 + _sStack0000000c;
    for (local_1e = 0; (int)(uint)local_1e < (int)in_stack_00000018; local_1e = local_1e + 1) {
      for (; local_14 < sVar2; local_14 = local_14 + in_stack_00000018) {
        local_8 = local_8 + sVar1;
      }
      pcVar7 = local_8;
      sVar5 = in_stack_00000014;
      sVar6 = sStack00000008;
      for (local_20 = 0; (int)(uint)local_20 < (int)in_stack_00000014; local_20 = local_20 + 1) {
        for (; sVar5 < sVar1; sVar5 = sVar5 + in_stack_00000014) {
          pcVar7 = pcVar7 + 1;
        }
        if ((sVar3 != 8) || (*pcVar7 != '\0')) {
          *(char *)(*local_34 + (int)sVar6) = *pcVar7;
        }
        sVar6 = sVar6 + 1;
        sVar5 = sVar5 + -sVar1;
      }
      local_14 = local_14 + -sVar2;
      local_34 = local_34 + 1;
    }
  }
  return;
}


/* Ghidra address: 004020bc; FUN_004020bc */

void FUN_004020bc(void)

{
  int *in_stack_00000004;
  
  FUN_00431b68();
  DAT_00439da8 = 1;
  (**(code **)(*in_stack_00000004 + 0x50))();
  return;
}


/* Ghidra address: 0040215c; FUN_0040215c */

void FUN_0040215c(void)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  short *in_stack_00000008;
  short *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  short in_stack_00000014;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  short local_3c;
  short local_3a;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  short local_20;
  short local_1e;
  int local_14;
  int local_c;
  short local_8;
  short local_6;
  
  if (2 < in_stack_00000014) {
    if (0x10 < in_stack_00000014) {
      in_stack_00000014 = 0x10;
    }
    DAT_00439cf8 = in_stack_00000014;
    DAT_00439d04 = in_stack_00000008;
    if (in_stack_00000010 == (undefined4 *)0x0) {
      DAT_00439d08 = &DAT_00439d0c;
      DAT_00439d18 = 0;
      DAT_00439d10 = 0;
      DAT_00439d24 = 0;
      DAT_00439d0c = 0;
      DAT_00439d14 = *in_stack_0000000c + -1;
      DAT_00439d20 = in_stack_0000000c[1] + -1;
      DAT_00439cf8 = 4;
      DAT_00439d1c = DAT_00439d14;
      DAT_00439d28 = DAT_00439d20;
    }
    else {
      DAT_00439d08 = in_stack_00000010;
    }
    sVar1 = *in_stack_00000008;
    local_8 = 0;
    local_6 = sVar1;
    for (sVar2 = 1; sVar2 < DAT_00439cf8; sVar2 = sVar2 + 1) {
      if (*(int *)(in_stack_00000008 + sVar2 * 6) < (int)sVar1) {
        sVar1 = in_stack_00000008[sVar2 * 6];
        local_8 = sVar2;
      }
      if ((int)local_6 < *(int *)(in_stack_00000008 + sVar2 * 6)) {
        local_6 = in_stack_00000008[sVar2 * 6];
        DAT_00439cf4 = sVar2;
      }
    }
    if (DAT_0043409a < local_6) {
      local_6 = DAT_0043409a;
    }
    if (sVar1 < local_6) {
      DAT_00439da4 = (ushort)((*(byte *)(in_stack_0000000c + 2) & 1) != 0);
      DAT_00439da6 = (ushort)((*(byte *)(in_stack_0000000c + 2) & 8) != 0);
      DAT_00439cfa = *in_stack_0000000c;
      DAT_00439cfc = in_stack_0000000c[1];
      DAT_00439d00 = FUN_00409f70();
      if ((*(byte *)(in_stack_0000000c + 2) & 0x20) == 0) {
        local_1e = 1;
        local_3a = -1;
      }
      else {
        local_1e = -1;
        local_3a = 1;
      }
      local_20 = 0;
      local_3c = 0;
      sVar2 = local_8;
      for (DAT_00439d8e = sVar1; DAT_00439d8e <= local_6; DAT_00439d8e = DAT_00439d8e + 1) {
        if ((local_20 == 0) && (DAT_00439d8e < local_6)) {
          do {
            sVar1 = local_8;
            local_8 = sVar1 + local_1e;
            if (local_8 < DAT_00439cf8) {
              if (local_8 < 0) {
                local_8 = DAT_00439cf8 + -1;
              }
            }
            else {
              local_8 = 0;
            }
            local_20 = DAT_00439d04[local_8 * 6] - DAT_00439d04[sVar1 * 6];
          } while (local_20 == 0);
          local_24 = DAT_00439d08[sVar1 * 2] * 0x10000;
          local_28 = DAT_00439d08[sVar1 * 2 + 1] * 0x10000;
          local_34 = *(int *)(DAT_00439d04 + sVar1 * 6 + 2) * 0x10000;
          local_2c = (DAT_00439d08[local_8 * 2] * 0x10000 + DAT_00439d08[sVar1 * 2] * -0x10000) /
                     (int)local_20;
          local_30 = (DAT_00439d08[local_8 * 2 + 1] * 0x10000 +
                     DAT_00439d08[sVar1 * 2 + 1] * -0x10000) / (int)local_20;
          local_38 = (*(int *)(DAT_00439d04 + local_8 * 6 + 2) * 0x10000 +
                     *(int *)(DAT_00439d04 + sVar1 * 6 + 2) * -0x10000) / (int)local_20;
          local_c = *(int *)(DAT_00439d04 + sVar1 * 6 + 4);
        }
        if ((local_3c == 0) && (DAT_00439d8e < local_6)) {
          do {
            sVar1 = sVar2;
            sVar2 = sVar1 + local_3a;
            if (sVar2 < DAT_00439cf8) {
              if (sVar2 < 0) {
                sVar2 = DAT_00439cf8 + -1;
              }
            }
            else {
              sVar2 = 0;
            }
            local_3c = DAT_00439d04[sVar2 * 6] - DAT_00439d04[sVar1 * 6];
          } while (local_3c == 0);
          local_40 = DAT_00439d08[sVar1 * 2 + 1] * 0x10000;
          local_4c = *(int *)(DAT_00439d04 + sVar1 * 6 + 2) * 0x10000;
          local_48 = (DAT_00439d08[sVar2 * 2 + 1] * 0x10000 + DAT_00439d08[sVar1 * 2 + 1] * -0x10000
                     ) / (int)local_3c;
          local_50 = (*(int *)(DAT_00439d04 + sVar2 * 6 + 2) * 0x10000 +
                     *(int *)(DAT_00439d04 + sVar1 * 6 + 2) * -0x10000) / (int)local_3c;
          local_14 = ((*(int *)(DAT_00439d04 + sVar2 * 6 + 4) - local_c) * 0x10000) / (int)local_3c;
          local_c = local_c << 0x10;
        }
        if (DAT_00434098 <= DAT_00439d8e) {
          sVar1 = (short)((uint)local_c >> 0x10);
          DAT_004449b4 = (int)sVar1;
          sVar1 = sVar1 - (short)DAT_0043408c;
          if (sVar1 < 0) {
            sVar1 = 0;
          }
          uVar3 = (ushort)(char)((ushort)sVar1 >> 8);
          if (uVar3 < 0x20) {
            uVar4 = (uint)uVar3;
          }
          else {
            uVar4 = 0x1f;
          }
          DAT_004390d0 = *(int *)(DAT_00434094 + 4) + uVar4 * 0x100;
          DAT_00439d8c = (short)((uint)local_34 >> 0x10);
          DAT_00439d92 = (short)((uint)local_4c >> 0x10);
          if (((DAT_0043409c <= DAT_00439d92) && (DAT_00439d8c <= DAT_0043409e)) &&
             (DAT_00439d8c < DAT_00439d92)) {
            DAT_00439d94 = local_24;
            DAT_00439d98 = local_28;
            DAT_00439da0 = (local_40 - local_28) / ((int)DAT_00439d92 - (int)DAT_00439d8c);
            if (DAT_0043409e < DAT_00439d92) {
              DAT_00439d92 = DAT_0043409e;
            }
            if (DAT_00439d8c < DAT_0043409c) {
              DAT_00439d98 = local_28 + ((int)DAT_0043409c - (int)DAT_00439d8c) * DAT_00439da0;
              DAT_00439d8c = DAT_0043409c;
            }
            FUN_00407180();
          }
        }
        local_20 = local_20 + -1;
        local_3c = local_3c + -1;
        local_c = local_c + local_14;
        local_24 = local_24 + local_2c;
        local_28 = local_28 + local_30;
        local_34 = local_34 + local_38;
        local_40 = local_40 + local_48;
        local_4c = local_4c + local_50;
      }
    }
  }
  return;
}


/* Ghidra address: 004026e4; FUN_004026e4 */

void FUN_004026e4(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  short *in_stack_00000008;
  short *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  short in_stack_00000014;
  int local_54;
  int local_50;
  int local_4c;
  int local_44;
  short local_40;
  short local_3e;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  short local_24;
  short local_22;
  int local_18;
  int local_10;
  short local_a;
  short local_8;
  short local_6;
  
  if (2 < in_stack_00000014) {
    if (0x10 < in_stack_00000014) {
      in_stack_00000014 = 0x10;
    }
    DAT_00439cf8 = in_stack_00000014;
    DAT_00439d04 = in_stack_00000008;
    sVar2 = *in_stack_00000008;
    sVar3 = *in_stack_00000008;
    local_a = 0;
    local_8 = sVar2;
    local_6 = sVar2;
    for (sVar1 = 1; sVar1 < in_stack_00000014; sVar1 = sVar1 + 1) {
      iVar4 = (int)sVar1;
      if (*(int *)(in_stack_00000008 + iVar4 * 6) < (int)local_6) {
        local_6 = in_stack_00000008[iVar4 * 6];
        local_a = sVar1;
      }
      if ((int)local_8 < *(int *)(in_stack_00000008 + sVar1 * 6)) {
        local_8 = in_stack_00000008[iVar4 * 6];
        DAT_00439cf4 = sVar1;
      }
      if (*(int *)(in_stack_00000008 + iVar4 * 6 + 2) < (int)sVar3) {
        sVar3 = in_stack_00000008[iVar4 * 6 + 2];
      }
      if ((int)sVar2 < *(int *)(in_stack_00000008 + sVar1 * 6 + 2)) {
        sVar2 = in_stack_00000008[iVar4 * 6 + 2];
      }
    }
    if ((((DAT_00434098 <= local_8) && (local_6 <= DAT_0043409a)) && (DAT_0043409c <= sVar2)) &&
       (sVar3 <= DAT_0043409e)) {
      if (DAT_0043409a < local_8) {
        local_8 = DAT_0043409a;
      }
      if (local_6 < local_8) {
        if (in_stack_00000010 == (undefined4 *)0x0) {
          DAT_00439d08 = &DAT_00439d0c;
          DAT_00439d18 = 0;
          DAT_00439d10 = 0;
          DAT_00439d24 = 0;
          DAT_00439d0c = 0;
          DAT_00439d14 = *in_stack_0000000c + -1;
          DAT_00439d20 = in_stack_0000000c[1] + -1;
          DAT_00439cf8 = 4;
          DAT_00439d1c = DAT_00439d14;
          DAT_00439d28 = DAT_00439d20;
        }
        else {
          DAT_00439d08 = in_stack_00000010;
        }
        DAT_00439da4 = (ushort)((*(byte *)(in_stack_0000000c + 2) & 1) != 0);
        DAT_00439da6 = (ushort)((*(byte *)(in_stack_0000000c + 2) & 8) != 0);
        DAT_00439cfa = *in_stack_0000000c;
        DAT_00439cfc = in_stack_0000000c[1];
        DAT_00439d00 = FUN_00409f70();
        if ((*(byte *)(in_stack_0000000c + 2) & 0x20) == 0) {
          local_22 = 1;
          local_3e = -1;
        }
        else {
          local_22 = -1;
          local_3e = 1;
        }
        local_24 = 0;
        local_40 = 0;
        sVar2 = local_a;
        for (DAT_00439d8e = local_6; DAT_00439d8e <= local_8; DAT_00439d8e = DAT_00439d8e + 1) {
          if ((local_24 == 0) && (DAT_00439d8e < local_8)) {
            do {
              sVar3 = local_a;
              local_a = sVar3 + local_22;
              if (local_a < DAT_00439cf8) {
                if (local_a < 0) {
                  local_a = DAT_00439cf8 + -1;
                }
              }
              else {
                local_a = 0;
              }
              local_24 = DAT_00439d04[local_a * 6] - DAT_00439d04[sVar3 * 6];
            } while (local_24 == 0);
            local_28 = DAT_00439d08[sVar3 * 2] * 0x10000;
            local_2c = DAT_00439d08[sVar3 * 2 + 1] * 0x10000;
            local_38 = *(int *)(DAT_00439d04 + sVar3 * 6 + 2) * 0x10000;
            local_30 = (DAT_00439d08[local_a * 2] * 0x10000 + DAT_00439d08[sVar3 * 2] * -0x10000) /
                       (int)local_24;
            local_34 = (DAT_00439d08[local_a * 2 + 1] * 0x10000 +
                       DAT_00439d08[sVar3 * 2 + 1] * -0x10000) / (int)local_24;
            local_3c = (*(int *)(DAT_00439d04 + local_a * 6 + 2) * 0x10000 +
                       *(int *)(DAT_00439d04 + sVar3 * 6 + 2) * -0x10000) / (int)local_24;
            local_10 = *(int *)(DAT_00439d04 + sVar3 * 6 + 4);
          }
          if ((local_40 == 0) && (DAT_00439d8e < local_8)) {
            do {
              sVar3 = sVar2;
              sVar2 = sVar3 + local_3e;
              if (sVar2 < DAT_00439cf8) {
                if (sVar2 < 0) {
                  sVar2 = DAT_00439cf8 + -1;
                }
              }
              else {
                sVar2 = 0;
              }
              local_40 = DAT_00439d04[sVar2 * 6] - DAT_00439d04[sVar3 * 6];
            } while (local_40 == 0);
            local_44 = DAT_00439d08[sVar3 * 2 + 1] * 0x10000;
            local_50 = *(int *)(DAT_00439d04 + sVar3 * 6 + 2) * 0x10000;
            local_4c = (DAT_00439d08[sVar2 * 2 + 1] * 0x10000 +
                       DAT_00439d08[sVar3 * 2 + 1] * -0x10000) / (int)local_40;
            local_54 = (*(int *)(DAT_00439d04 + sVar2 * 6 + 2) * 0x10000 +
                       *(int *)(DAT_00439d04 + sVar3 * 6 + 2) * -0x10000) / (int)local_40;
            local_18 = ((*(int *)(DAT_00439d04 + sVar2 * 6 + 4) - local_10) * 0x10000) /
                       (int)local_40;
            local_10 = local_10 << 0x10;
          }
          if (DAT_00434098 <= DAT_00439d8e) {
            sVar3 = (short)((uint)local_10 >> 0x10);
            DAT_004449b4 = (int)sVar3;
            sVar3 = sVar3 - (short)DAT_0043408c;
            if (sVar3 < 0) {
              sVar3 = 0;
            }
            if (DAT_00435924 == 0) {
              if ((ushort)((int)sVar3 / DAT_00434090) < 0x20) {
                uVar5 = (int)sVar3 / DAT_00434090 & 0xffff;
              }
              else {
                uVar5 = 0x1f;
              }
              DAT_004390d0 = *(int *)(DAT_00434094 + 4) + uVar5 * 0x100;
            }
            else {
              if ((ushort)((int)sVar3 / DAT_00434090) < 0x20) {
                uVar5 = (int)sVar3 / DAT_00434090 & 0xffff;
              }
              else {
                uVar5 = 0x1f;
              }
              DAT_004390d0 = uVar5 * 0x200 + DAT_00434094 + 8;
            }
            DAT_00439d8c = (short)((uint)local_38 >> 0x10) + -1;
            DAT_00439d92 = (short)((uint)local_50 >> 0x10) + 1;
            if (((DAT_0043409c <= DAT_00439d92) && (DAT_00439d8c <= DAT_0043409e)) &&
               (DAT_00439d8c < DAT_00439d92)) {
              DAT_00439d98 = local_2c;
              DAT_00439da0 = (local_44 - local_2c) / ((int)DAT_00439d92 - (int)DAT_00439d8c);
              if (DAT_0043409e < DAT_00439d92) {
                DAT_00439d92 = DAT_0043409e;
              }
              if (DAT_00439d8c < DAT_0043409c) {
                DAT_00439d98 = local_2c + ((int)DAT_0043409c - (int)DAT_00439d8c) * DAT_00439da0;
                DAT_00439d8c = DAT_0043409c;
              }
              DAT_00439d94 = local_28 + 0x8000;
              DAT_00439d98 = DAT_00439d98 + 0x8000;
              FUN_00406e38();
            }
          }
          local_24 = local_24 + -1;
          local_40 = local_40 + -1;
          local_10 = local_10 + local_18;
          local_28 = local_28 + local_30;
          local_2c = local_2c + local_34;
          local_38 = local_38 + local_3c;
          local_44 = local_44 + local_4c;
          local_50 = local_50 + local_54;
        }
      }
    }
  }
  return;
}


/* Ghidra address: 00402d64; FUN_00402d64 */

void FUN_00402d64(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int in_stack_00000004;
  short in_stack_00000008;
  short local_32;
  undefined2 *local_30;
  int local_28;
  int local_10;
  short local_8;
  short local_6;
  
  iVar3 = DAT_00439cfa + -1;
  DAT_004435e8 = 0;
  sVar2 = DAT_00439cf4;
  while( true ) {
    if (sVar2 == DAT_00439cf6) {
      return;
    }
    local_6 = in_stack_00000008 + sVar2;
    if (local_6 < DAT_00439cf8) {
      if (local_6 < 0) {
        local_6 = DAT_00439cf8 + -1;
      }
    }
    else {
      local_6 = 0;
    }
    local_10 = *(int *)(DAT_00439d04 + sVar2 * 0xc);
    iVar1 = *(int *)(DAT_00439d04 + 8 + sVar2 * 0xc);
    iVar10 = *(int *)(DAT_00439d04 + local_6 * 0xc);
    iVar7 = *(int *)(DAT_00439d04 + 8 + local_6 * 0xc);
    if (iVar1 <= DAT_004435b8) break;
    if (iVar7 < DAT_004435b8) {
      DAT_004435b0 = DAT_004435b8;
      iVar10 = iVar10 + ((DAT_004435b8 - iVar7) * (local_10 - iVar10)) / (iVar1 - iVar7);
      iVar7 = DAT_004435b8;
    }
    uVar4 = DAT_004435e0 / iVar1;
    local_8 = (short)(DAT_004435e0 / iVar7) - (short)uVar4;
    sVar2 = local_6;
    if (local_8 != 0) {
      if (local_8 < 0) {
        local_8 = -local_8;
      }
      local_10 = (DAT_0044f6cc / iVar1) * local_10;
      iVar10 = (DAT_0044f6cc / iVar7) * iVar10 - local_10;
      if (DAT_004435e8 == 0) {
        DAT_004435ea = DAT_0044ebd2 + (short)uVar4;
      }
      local_28 = iVar1 << 0x10;
      local_30 = &DAT_00443fb4 + DAT_004435e8;
      psVar9 = (short *)(DAT_004435e8 * 10 + in_stack_00000004);
      DAT_004435e8 = DAT_004435e8 + local_8;
      local_32 = 0;
      if (0 < local_8) {
        do {
          *local_30 = (short)((uint)local_28 >> 0x10);
          local_30 = local_30 + 1;
          local_28 = local_28 + ((iVar7 - iVar1) * 0x10000) / (int)local_8;
          iVar11 = local_10 >> 0xf;
          *psVar9 = (short)iVar11 + DAT_0044ebd0;
          sVar6 = (short)uVar4;
          if (sVar6 == 0) {
            sVar6 = 1;
          }
          iVar8 = (DAT_004435c0 * iVar11 + DAT_004435bc) / (int)sVar6 + DAT_004435c4;
          iVar5 = (DAT_004435cc * iVar11 + DAT_004435c8) / (int)sVar6 + DAT_004435d0;
          iVar11 = iVar3;
          if ((iVar8 <= iVar3) && (iVar11 = iVar8, iVar8 < 0)) {
            iVar11 = 0;
          }
          iVar8 = iVar3;
          if ((iVar5 <= iVar3) && (iVar8 = iVar5, iVar5 < 0)) {
            iVar8 = 0;
          }
          *(int *)(psVar9 + 1) = iVar11;
          *(int *)(psVar9 + 3) = iVar8;
          local_10 = local_10 + iVar10 / (int)local_8;
          uVar4 = (uint)(ushort)(sVar6 + DAT_004435ec);
          local_32 = local_32 + 1;
          psVar9 = psVar9 + 5;
        } while (local_32 < local_8);
      }
    }
  }
  return;
}


/* Ghidra address: 00402fc8; FUN_00402fc8 */

void FUN_00402fc8(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  int in_stack_00000004;
  short local_10;
  short local_c;
  
  iVar1 = (DAT_004435b0 << 0x10) / DAT_00434090;
  iVar2 = (((DAT_004435b4 - DAT_004435b0) * 0x10000) / (int)DAT_004435e8) / DAT_00434090;
  if (DAT_0043408c < DAT_004435b4) {
    if (DAT_004435b0 < DAT_0043408c) {
      iVar4 = DAT_0043408c / DAT_00434090;
      sVar5 = DAT_004435e8 + -1;
      piVar3 = (int *)(in_stack_00000004 + sVar5 * 4);
      for (; -1 < sVar5; sVar5 = sVar5 + -1) {
        local_10 = (short)iVar4;
        uVar7 = (short)((uint)iVar1 >> 0x10) - local_10;
        if ((short)uVar7 < 0) {
          if (DAT_00435924 == 0) {
            *piVar3 = *(int *)(DAT_00434094 + 4);
          }
          else {
            *piVar3 = DAT_00434094 + 8;
          }
        }
        else if (DAT_00435924 == 0) {
          if (uVar7 < 0x20) {
            uVar8 = (uint)uVar7;
          }
          else {
            uVar8 = 0x1f;
          }
          *piVar3 = *(int *)(DAT_00434094 + 4) + uVar8 * 0x100;
        }
        else {
          if (uVar7 < 0x20) {
            uVar8 = (uint)uVar7;
          }
          else {
            uVar8 = 0x1f;
          }
          *piVar3 = uVar8 * 0x200 + DAT_00434094 + 8;
        }
        iVar1 = iVar1 + iVar2;
        piVar3 = piVar3 + -1;
      }
    }
    else {
      iVar4 = DAT_0043408c / DAT_00434090;
      sVar5 = DAT_004435e8 + -1;
      piVar3 = (int *)(in_stack_00000004 + sVar5 * 4);
      for (; -1 < sVar5; sVar5 = sVar5 + -1) {
        sVar6 = (short)((uint)iVar1 >> 0x10);
        local_c = (short)iVar4;
        if (DAT_00435924 == 0) {
          uVar7 = sVar6 - local_c;
          if (uVar7 < 0x20) {
            uVar8 = (uint)uVar7;
          }
          else {
            uVar8 = 0x1f;
          }
          *piVar3 = *(int *)(DAT_00434094 + 4) + uVar8 * 0x100;
        }
        else {
          uVar7 = sVar6 - local_c;
          if (uVar7 < 0x20) {
            uVar8 = (uint)uVar7;
          }
          else {
            uVar8 = 0x1f;
          }
          *piVar3 = uVar8 * 0x200 + DAT_00434094 + 8;
        }
        iVar1 = iVar1 + iVar2;
        piVar3 = piVar3 + -1;
      }
    }
  }
  else {
    sVar5 = DAT_004435e8 + -1;
    piVar3 = (int *)(in_stack_00000004 + sVar5 * 4);
    for (; -1 < sVar5; sVar5 = sVar5 + -1) {
      if (DAT_00435924 == 0) {
        *piVar3 = *(int *)(DAT_00434094 + 4);
      }
      else {
        *piVar3 = DAT_00434094 + 8;
      }
      piVar3 = piVar3 + -1;
    }
  }
  return;
}


/* Ghidra address: 004031bc; FUN_004031bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004031bc(void)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *in_stack_00000008;
  short *in_stack_0000000c;
  short in_stack_00000014;
  
  DAT_00439cf8 = in_stack_00000014;
  DAT_00439d04 = in_stack_00000008;
  if ((uint)((uint)(in_stack_00000008[1] == in_stack_00000008[4]) == in_stack_00000008[7]) !=
      in_stack_00000008[10]) {
    DAT_004435b0 = in_stack_00000008[2];
    DAT_00439cf6 = 0;
    DAT_00439cf4 = 0;
    piVar1 = in_stack_00000008 + 5;
    DAT_004435b4 = DAT_004435b0;
    for (sVar3 = 1; sVar3 < in_stack_00000014; sVar3 = sVar3 + 1) {
      if (*piVar1 < DAT_004435b0) {
        DAT_004435b0 = in_stack_00000008[sVar3 * 3 + 2];
        DAT_00439cf6 = sVar3;
      }
      if (DAT_004435b4 < *piVar1) {
        DAT_004435b4 = in_stack_00000008[sVar3 * 3 + 2];
        DAT_00439cf4 = sVar3;
      }
      piVar1 = piVar1 + 3;
    }
    DAT_004435e0 = in_stack_00000008[1] * (DAT_0044f6cc >> 0xf);
    DAT_00439da4 = (ushort)((in_stack_0000000c[2] & 1U) != 0);
    DAT_00439da6 = (ushort)((in_stack_0000000c[2] & 8U) != 0);
    DAT_00439cfa = *in_stack_0000000c;
    DAT_00439d00 = FUN_00409f70();
    iVar2 = DAT_00439d04[1];
    iVar5 = DAT_00439d04[3] - *DAT_00439d04;
    iVar6 = DAT_00439d04[5] - DAT_00439d04[2];
    iVar4 = DAT_00439d04[9] - *DAT_00439d04;
    iVar7 = DAT_00439d04[0xb] - DAT_00439d04[2];
    DAT_004435dc = (iVar5 * iVar7 - iVar6 * iVar4) / (DAT_00439cfa + -1);
    DAT_004435bc = (-iVar4 * iVar2 * DAT_0044f6d0) / DAT_004435dc;
    DAT_004435c0 = (iVar7 * iVar2) / DAT_004435dc;
    DAT_004435c4 = (iVar4 * DAT_00439d04[2] - iVar7 * *DAT_00439d04) / DAT_004435dc;
    DAT_004435c8 = (iVar5 * iVar2 * DAT_0044f6d0) / DAT_004435dc;
    DAT_004435cc = (-iVar6 * iVar2) / DAT_004435dc;
    DAT_004435d0 = (iVar6 * *DAT_00439d04 - iVar5 * DAT_00439d04[2]) / DAT_004435dc;
    if (DAT_004435e0 < 0) {
      iVar2 = (int)DAT_0043409c - (int)DAT_0044ebd2;
      DAT_004435ec = -1;
    }
    else {
      iVar2 = (int)DAT_0043409e - (int)DAT_0044ebd2;
      DAT_004435ec = 1;
    }
    DAT_004435b8 = DAT_004435e0 / iVar2;
    if ((DAT_004435b8 < DAT_004435b4) && (DAT_004435b8 != 0)) {
      FUN_00402d64();
      if (0 < DAT_004435e8) {
        FUN_00402d64();
        FUN_00402fc8();
        if (DAT_004435ec < 1) {
          if ((int)DAT_004435ea - (int)DAT_004435e8 < 0) {
            DAT_004435e8 = DAT_004435e8 + (short)((int)DAT_004435ea - (int)DAT_004435e8);
          }
        }
        else if (_DAT_00443c38 <= (int)DAT_004435ea + (int)DAT_004435e8) {
          DAT_004435e8 = (DAT_00443c38 + -1) - DAT_004435ea;
        }
        FUN_00406c1c();
      }
    }
  }
  return;
}


/* Ghidra address: 004034cc; FUN_004034cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004034cc(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *in_stack_00000004;
  short in_stack_00000008;
  short in_stack_0000000c;
  short local_32;
  short local_16;
  short local_6;
  
  iVar4 = DAT_00439cfa + -1;
  if ((float)DAT_004435b8 < (float)*(int *)(DAT_00439d04 + 8 + in_stack_0000000c * 0xc)) {
    if ((float)*(int *)(DAT_00439d04 + 8 + in_stack_00000008 * 0xc) < (float)DAT_004435b8) {
      DAT_004435b0 = FUN_0042fc2c();
    }
    uVar1 = FUN_0042fc2c();
    local_16 = (short)uVar1;
    uVar1 = FUN_0042fc2c();
    DAT_004435f0 = (short)uVar1;
    local_6 = DAT_004435f0 - local_16;
    if (local_6 != 0) {
      if (local_6 < 0) {
        local_6 = -local_6;
      }
      if (local_16 < DAT_00434098) {
        local_16 = DAT_00434098;
      }
      else if (DAT_0043409a < local_16) {
        local_16 = DAT_0043409a;
      }
      if (DAT_004435f0 < DAT_00434098) {
        DAT_004435f0 = DAT_00434098;
      }
      else if (DAT_0043409a < DAT_004435f0) {
        DAT_004435f0 = DAT_0043409a;
      }
      _DAT_004435ee = local_16 + DAT_0044ebd0;
      DAT_004435e8 = local_6;
      local_32 = 0;
      if (0 < local_6) {
        do {
          uVar1 = FUN_0042fc2c();
          *in_stack_00000004 = (short)uVar1;
          iVar2 = FUN_0042fc2c();
          iVar3 = FUN_0042fc2c();
          iVar5 = iVar4;
          if ((iVar2 <= iVar4) && (iVar5 = iVar2, iVar2 < 0)) {
            iVar5 = 0;
          }
          iVar2 = iVar4;
          if ((iVar3 <= iVar4) && (iVar2 = iVar3, iVar3 < 0)) {
            iVar2 = 0;
          }
          *(int *)(in_stack_00000004 + 1) = iVar5;
          *(int *)(in_stack_00000004 + 3) = iVar2;
          local_32 = local_32 + 1;
          in_stack_00000004 = in_stack_00000004 + 5;
        } while (local_32 < local_6);
      }
    }
  }
  return;
}


/* Ghidra address: 004037f0; FUN_004037f0 */

void FUN_004037f0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_24;
  
  FUN_0042b4b4(0x4340b0);
  FUN_0040777c();
  DAT_00434094 = DAT_00450aa0;
  FUN_00431b68();
  *in_FS_OFFSET = local_24;
  return;
}


/* Ghidra address: 0040396c; FUN_0040396c */

void FUN_0040396c(void)

{
  int iVar1;
  undefined4 in_stack_00000008;
  
  iVar1 = DirectDrawCreate();
  if (iVar1 != 0) {
    FUN_0042a068();
  }
  iVar1 = (**(code **)(*DAT_00434128 + 0x50))();
  if (iVar1 != 0) {
    FUN_0042a068();
  }
  DAT_0043413c = in_stack_00000008;
  return;
}


/* Ghidra address: 004039f0; FUN_004039f0 */

void FUN_004039f0(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_00434128 + 0x54))();
  if (iVar1 != 0) {
    FUN_0042a068();
  }
  if (DAT_0043412c != (int *)0x0) {
    (**(code **)(*DAT_0043412c + 8))();
    DAT_0043412c = (int *)0x0;
  }
  if (DAT_00434138 != (int *)0x0) {
    (**(code **)(*DAT_00434138 + 8))();
    DAT_00434138 = (int *)0x0;
  }
  FUN_00429054();
  iVar1 = (**(code **)(*DAT_00434128 + 0x18))();
  if (iVar1 != 0) {
    FUN_0042a068();
  }
  FUN_00429054();
  iVar1 = (**(code **)(*DAT_0043412c + 0x30))();
  if (iVar1 != 0) {
    FUN_0042a068();
  }
  if (DAT_0043413c == 0) {
    DAT_00434134 = DAT_0043412c;
  }
  else {
    DAT_00434134 = DAT_00434130;
  }
  return;
}


/* Ghidra address: 00403b48; FUN_00403b48 */

undefined4 FUN_00403b48(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_0043412c + 0x60))();
  if (iVar1 == -0x7789fe3e) {
    (**(code **)(*DAT_0043412c + 0x6c))();
  }
  (**(code **)(*DAT_0043412c + 0x44))();
  return DAT_0044361c;
}


/* Ghidra address: 00403b80; FUN_00403b80 */

undefined4 FUN_00403b80(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (in_stack_00000004 == -0x7789fe3e) {
    iVar1 = (**(code **)(*DAT_0043412c + 0x6c))();
    if (iVar1 == 0) {
      FUN_00403d8c();
    }
    else {
      FUN_0042a068();
    }
  }
  else {
    if (in_stack_00000004 == 0) {
      return 0;
    }
    if (in_stack_00000004 != -0x7789fde4) {
      FUN_0042a068();
    }
  }
  return 1;
}


/* Ghidra address: 00403c10; FUN_00403c10 */

void FUN_00403c10(void)

{
  (**(code **)(*DAT_0043412c + 0x2c))();
  FUN_00403b80();
  return;
}


/* Ghidra address: 00403c28; FUN_00403c28 */

void FUN_00403c28(void)

{
  int iVar1;
  int *in_stack_00000004;
  undefined4 local_70;
  
  FUN_00429054();
  (**(code **)(*in_stack_00000004 + 0x58))();
  FUN_00429054();
  do {
    (**(code **)(*in_stack_00000004 + 100))();
    iVar1 = FUN_00403b80();
  } while (iVar1 != 0);
  iVar1 = 0;
  if (0 < local_70) {
    do {
      FUN_00429054();
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_70);
  }
  (**(code **)(*in_stack_00000004 + 0x80))();
  return;
}


/* Ghidra address: 00403cd4; FUN_00403cd4 */

void FUN_00403cd4(void)

{
  FUN_00403c28();
  if (DAT_0043413c != 0) {
    FUN_00403c28();
  }
  return;
}


/* Ghidra address: 00403cf8; FUN_00403cf8 */

void FUN_00403cf8(void)

{
  int iVar1;
  
  FUN_00429054();
  do {
    (**(code **)(*DAT_00434134 + 100))();
    iVar1 = FUN_00403b80();
  } while (iVar1 != 0);
  FUN_00403ed8();
  (**(code **)(*DAT_00434134 + 0x80))();
  if (DAT_0043413c != 0) {
    FUN_00403c10();
  }
  return;
}


/* Ghidra address: 00403d78; FUN_00403d78 */

void FUN_00403d78(void)

{
  (**(code **)(*DAT_0043412c + 0x68))();
  return;
}


/* Ghidra address: 00403d8c; FUN_00403d8c */

void FUN_00403d8c(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 local_400 [1024];
  
  puVar1 = local_400;
  DAT_00434140 = 0;
  iVar2 = 0;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 0x100);
  (**(code **)(*DAT_00434138 + 0x18))();
  return;
}


/* Ghidra address: 00403dd8; FUN_00403dd8 */

void FUN_00403dd8(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_stack_00000004;
  undefined1 local_404 [1024];
  
  if (in_stack_00000004 != DAT_00434140) {
    FUN_00403cd4();
  }
  DAT_00434140 = in_stack_00000004;
  iVar3 = 0;
  puVar2 = local_404;
  puVar4 = (undefined1 *)(in_stack_00000004 + 0x2a);
  do {
    iVar3 = iVar3 + 1;
    *puVar2 = *puVar4;
    puVar2[1] = puVar4[-1];
    puVar1 = puVar4 + -2;
    puVar4 = puVar4 + 4;
    puVar2[2] = *puVar1;
    puVar2[3] = 1;
    puVar2 = puVar2 + 4;
  } while (iVar3 < 0x100);
  if (DAT_00434138 == (int *)0x0) {
    iVar3 = (**(code **)(*DAT_00434128 + 0x14))();
    if (iVar3 == 0) {
      (**(code **)(*DAT_0043412c + 0x7c))();
    }
  }
  (**(code **)(*DAT_00434138 + 0x18))();
  return;
}


/* Ghidra address: 00403e90; FUN_00403e90 */

void FUN_00403e90(void)

{
  if (DAT_00434138 != (int *)0x0) {
    (**(code **)(*DAT_00434138 + 8))();
    DAT_00434138 = (int *)0x0;
  }
  if (DAT_0043412c != (int *)0x0) {
    (**(code **)(*DAT_0043412c + 8))();
    DAT_0043412c = (int *)0x0;
  }
  if (DAT_00434128 != (int *)0x0) {
    (**(code **)(*DAT_00434128 + 8))();
    DAT_00434128 = (int *)0x0;
  }
  return;
}


/* Ghidra address: 00403ed8; FUN_00403ed8 */

void FUN_00403ed8(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  uVar1 = in_stack_0000000c >> 2;
  puVar2 = in_stack_00000004;
  do {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *in_stack_00000004 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 1;
      in_stack_00000004 = in_stack_00000004 + 1;
    }
    in_stack_00000004 = (undefined4 *)((int)puVar2 + in_stack_00000014);
    in_stack_00000010 = in_stack_00000010 + -1;
    uVar1 = in_stack_0000000c >> 2;
    puVar2 = in_stack_00000004;
  } while (in_stack_00000010 != 0);
  return;
}


/* Ghidra address: 00403f04; FUN_00403f04 */

void FUN_00403f04(void)

{
  FUN_00403dd8();
  FUN_00403cf8();
  return;
}


/* Ghidra address: 00403f2c; FUN_00403f2c */

int FUN_00403f2c(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x20);
  if ((iVar1 == 0) && (*(short *)(in_stack_00000004 + 0xe) == 8)) {
    iVar1 = 0x100;
  }
  return in_stack_00000004 + iVar1 * 4 + 0x28;
}


/* Ghidra address: 00403f54; FUN_00403f54 */

void FUN_00403f54(void)

{
  HDC hdc;
  void *lpBits;
  BITMAPINFO *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  BITMAPINFO *lpbmi;
  UINT iUsage;
  DWORD rop;
  
  FUN_00403dd8();
  hdc = (HDC)FUN_00403b48();
  rop = 0xcc0020;
  iUsage = 0;
  lpbmi = in_stack_00000004;
  lpBits = (void *)FUN_00403f2c();
  StretchDIBits(hdc,in_stack_00000008,in_stack_0000000c,in_stack_00000010,in_stack_00000014,0,0,
                (in_stack_00000004->bmiHeader).biWidth,(in_stack_00000004->bmiHeader).biHeight,
                lpBits,lpbmi,iUsage,rop);
  FUN_00403d78();
  return;
}


/* Ghidra address: 00403fc8; FUN_00403fc8 */

void FUN_00403fc8(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *in_stack_00000004 = &PTR_FUN_00434264;
  in_stack_00000004[10] = in_stack_00000008;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return;
}


/* Ghidra address: 00404070; FUN_00404070 */

undefined4
FUN_00404070(undefined4 param_1,ATOM param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  LPCSTR lpIconName;
  undefined4 uVar2;
  int nHeight;
  int nWidth;
  HWND pHVar3;
  HMENU hMenu;
  HINSTANCE hInstance;
  int *lpParam;
  WNDCLASSA local_2c;
  
  if (DAT_0043422c == 0) {
    FUN_00429054();
    local_2c.style = 0x1003;
    local_2c.lpfnWndProc = _WndProc_qqspvuiuil;
    local_2c.cbClsExtra = 0;
    local_2c.cbWndExtra = 4;
    local_2c.hInstance = DAT_00434228;
    lpIconName = (LPCSTR)(**(code **)(*param_4 + 4))();
    local_2c.hIcon = LoadIconA(DAT_00434228,lpIconName);
    local_2c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_2c.hbrBackground = GetStockObject(4);
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.lpszClassName = s_TWindow_3D_GAME_00434248;
    param_2 = RegisterClassA(&local_2c);
  }
  param_4[0x13] = param_7 + -1;
  uVar1 = param_8 - 1;
  param_4[0x14] = uVar1;
  DAT_00434230 = param_4[0x13] >> 1;
  if (DAT_00434230 < 0) {
    DAT_00434230 = DAT_00434230 + (uint)((param_4[0x13] & 1U) != 0);
  }
  DAT_00434234 = (int)uVar1 >> 1;
  if (DAT_00434234 < 0) {
    DAT_00434234 = DAT_00434234 + (uint)((uVar1 & 1) != 0);
  }
  param_4[0xb] = 0;
  param_4[0xc] = 0;
  param_4[0xd] = param_7;
  param_4[0xe] = param_8;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    hMenu = (HMENU)0x0;
    pHVar3 = (HWND)0x0;
    hInstance = DAT_00434228;
    lpParam = param_4;
    nHeight = GetSystemMetrics(1);
    nWidth = GetSystemMetrics(0);
    pHVar3 = CreateWindowExA(8,local_2c.lpszClassName,(LPCSTR)param_4[10],0x80000000,0,0,nWidth,
                             nHeight,pHVar3,hMenu,hInstance,lpParam);
    param_4[1] = (int)pHVar3;
    if (pHVar3 == (HWND)0x0) {
      uVar2 = 0;
    }
    else {
      ShowWindow(pHVar3,param_9);
      UpdateWindow((HWND)param_4[1]);
      (**(code **)(*param_4 + 0x10))();
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* Ghidra address: 004041ac; FUN_004041ac */

void FUN_004041ac(void)

{
  HWND in_stack_00000008;
  UINT in_stack_0000000c;
  WPARAM in_stack_00000010;
  LPARAM in_stack_00000014;
  
  DefWindowProcA(in_stack_00000008,in_stack_0000000c,in_stack_00000010,in_stack_00000014);
  return;
}


/* Ghidra address: 004041c8; @WndProc$qqspvuiuil */

void _WndProc_qqspvuiuil(void)

{
  undefined4 *puVar1;
  HWND in_stack_00000004;
  UINT in_stack_00000008;
  WPARAM in_stack_0000000c;
  LONG *in_stack_00000010;
  
                    /* 0x41c8  2  @WndProc$qqspvuiuil */
  puVar1 = (undefined4 *)GetWindowLongA(in_stack_00000004,0);
  if (puVar1 == (undefined4 *)0x0) {
    if (in_stack_00000008 == 1) {
      puVar1 = (undefined4 *)*in_stack_00000010;
      SetWindowLongA(in_stack_00000004,0,(LONG)puVar1);
      (**(code **)*puVar1)();
    }
    else {
      DefWindowProcA(in_stack_00000004,in_stack_00000008,in_stack_0000000c,(LPARAM)in_stack_00000010
                    );
    }
  }
  else {
    (**(code **)*puVar1)();
  }
  return;
}


/* Ghidra address: 004042c0; FUN_004042c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004042c0(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int in_stack_00000004;
  byte *in_stack_00000008;
  
  iVar3 = 0;
  puVar2 = &DAT_00443634;
  do {
    if ((float)(int)((uint)*in_stack_00000008 * in_stack_00000004) * _DAT_00404394 <= _DAT_00404398)
    {
      uVar1 = FUN_0042fc2c();
      *puVar2 = (char)uVar1;
      if ((float)(int)((uint)in_stack_00000008[1] * in_stack_00000004) * _DAT_00404394 <=
          _DAT_00404398) {
        uVar1 = FUN_0042fc2c();
        puVar2[1] = (char)uVar1;
        if ((float)(int)((uint)in_stack_00000008[2] * in_stack_00000004) * _DAT_00404394 <=
            _DAT_00404398) {
          uVar1 = FUN_0042fc2c();
          puVar2[2] = (char)uVar1;
        }
      }
    }
    iVar3 = iVar3 + 3;
    puVar2 = puVar2 + 3;
    in_stack_00000008 = in_stack_00000008 + 3;
  } while (iVar3 < 0x300);
  return &DAT_00443634;
}


/* Ghidra address: 0040439c; FUN_0040439c */

undefined1 * FUN_0040439c(void)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  byte *in_stack_00000004;
  
  iVar2 = 0;
  puVar3 = &DAT_00443934;
  do {
    uVar1 = (uint)*in_stack_00000004 + ((int)(uint)*in_stack_00000004 >> 1);
    if (0x3f < uVar1) {
      uVar1 = 0x3f;
    }
    *puVar3 = (char)uVar1;
    puVar3[1] = in_stack_00000004[1] - (char)((int)(uint)in_stack_00000004[1] >> 2);
    iVar2 = iVar2 + 3;
    puVar3[2] = in_stack_00000004[2] - (char)((int)(uint)in_stack_00000004[2] >> 2);
    puVar3 = puVar3 + 3;
    in_stack_00000004 = in_stack_00000004 + 3;
  } while (iVar2 < 0x300);
  return &DAT_00443934;
}


/* Ghidra address: 00404410; FUN_00404410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00404410(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  FUN_00403fc8();
  *in_stack_00000004 = &PTR_FUN_0043475c;
  FUN_004288be();
  DAT_00434228 = in_stack_0000000c;
  _DAT_00443c40 = in_stack_0000000c;
  DAT_0043422c = in_stack_00000010;
  DAT_004346f4 = 0;
  in_stack_00000004[0x17] = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x82) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x8e) = 0;
  in_stack_00000004[0x19] = 1;
  in_stack_00000004[0x1a] = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00404484; FUN_00404484 */

void FUN_00404484(void)

{
  int *in_stack_00000004;
  
  FUN_004044e8();
  SetCursorPos(DAT_00434230,DAT_00434234);
  DAT_0044362c = DAT_00434230;
  DAT_00443630 = DAT_00434234;
  *(undefined4 *)((int)in_stack_00000004 + 0x8a) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x86) = 0;
  (**(code **)(*in_stack_00000004 + 0x1c))();
  return;
}


/* Ghidra address: 004044e8; FUN_004044e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004044e8(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  
  if (*(int *)(in_stack_00000004 + 0x5c) == 0) {
    *(undefined4 *)(in_stack_00000004 + 0x54) = in_stack_00000010;
    DAT_00443c34 = in_stack_00000010;
    *(int *)(in_stack_00000004 + 0x58) = in_stack_00000014;
    _DAT_00443c38 = in_stack_00000014;
    *(int *)(in_stack_00000004 + 0x5c) = *(int *)(in_stack_00000004 + 0x54) * in_stack_00000014;
    DAT_00443c3c = FUN_00410304();
    *(LPVOID *)(in_stack_00000004 + 0x8e) = DAT_00443c3c;
    _DAT_0043428c = *(undefined4 *)(in_stack_00000004 + 0x54);
    _DAT_00434290 = *(undefined4 *)(in_stack_00000004 + 0x58);
    FUN_0040396c();
    FUN_004039f0();
  }
  return;
}


/* Ghidra address: 00404578; FUN_00404578 */

void FUN_00404578(void)

{
  FUN_0041034c();
  DAT_00443c3c = 0;
  FUN_00403e90();
  return;
}


/* Ghidra address: 00404598; FUN_00404598 */

void FUN_00404598(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_0043475c;
    FUN_00428949();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 004045d8; FUN_004045d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004045d8(void)

{
  int iVar1;
  int in_stack_00000004;
  tagPOINT local_c;
  
  GetCursorPos(&local_c);
  if ((DAT_0044362c == 0) || (*(int *)(in_stack_00000004 + 0x4c) <= DAT_0044362c)) {
    SetCursorPos(DAT_00434230,DAT_00443630);
  }
  else {
    iVar1 = DAT_0044362c - local_c.x;
    *(int *)(in_stack_00000004 + 0x86) = iVar1;
    if (iVar1 < 0) {
      _DAT_004346b4 = FUN_0042fc2c();
    }
    else if (iVar1 < 1) {
      _DAT_004346b4 = 0;
    }
    else {
      _DAT_004346b4 = FUN_0042fc2c();
    }
  }
  if ((DAT_00443630 == 0) || (*(int *)(in_stack_00000004 + 0x50) <= DAT_00443630)) {
    SetCursorPos(DAT_0044362c,DAT_00434234);
  }
  else {
    iVar1 = DAT_00443630 - local_c.y;
    *(int *)(in_stack_00000004 + 0x8a) = iVar1;
    if (iVar1 < 0) {
      _DAT_004346b8 = FUN_004a3250();
    }
    else if (iVar1 < 1) {
      _DAT_004346b8 = 0;
    }
    else {
      _DAT_004346b8 = FUN_004a3250();
    }
  }
  GetCursorPos(&local_c);
  DAT_0044362c = local_c.x;
  DAT_00443630 = local_c.y;
  return;
}


/* Ghidra address: 0040477c; FUN_0040477c */

void FUN_0040477c(void)

{
  FUN_00404c24();
  return;
}


/* Ghidra address: 0040478c; FUN_0040478c */

bool FUN_0040478c(void)

{
  HBITMAP hbm;
  HDC in_stack_00000004;
  BITMAPINFO local_7c;
  undefined1 local_50;
  char local_4f;
  undefined2 local_4c;
  undefined1 local_4a;
  
  local_4c = DAT_004346c0;
  local_4a = DAT_004346c2;
  local_7c.bmiHeader.biSize = 0x28;
  local_7c.bmiHeader.biWidth = 1;
  local_7c.bmiHeader.biHeight = 1;
  local_7c.bmiHeader.biPlanes = 1;
  local_7c.bmiHeader.biBitCount = 0x18;
  local_7c.bmiHeader.biCompression = 0;
  local_7c.bmiHeader.biSizeImage = 0;
  local_7c.bmiHeader.biXPelsPerMeter = 0;
  local_7c.bmiHeader.biYPelsPerMeter = 0;
  local_7c.bmiHeader.biClrUsed = 0;
  local_7c.bmiHeader.biClrImportant = 0;
  hbm = CreateCompatibleBitmap(in_stack_00000004,1,1);
  SetDIBits(in_stack_00000004,hbm,0,1,&local_4c,&local_7c,0);
  GetBitmapBits(hbm,3,&local_50);
  DeleteObject(hbm);
  return local_4f == -1;
}


/* Ghidra address: 00404830; FUN_00404830 */

LRESULT FUN_00404830(void)

{
  undefined4 *puVar1;
  HDC pHVar2;
  int iVar3;
  LRESULT LVar4;
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  HWND in_stack_00000008;
  UINT in_stack_0000000c;
  WPARAM in_stack_00000010;
  LPARAM in_stack_00000014;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4346d3);
  if ((int)in_stack_0000000c < 0x102) {
    if (in_stack_0000000c == 0x101) {
      (&DAT_00443c48)[in_stack_00000010] = (&DAT_00443c48)[in_stack_00000010] & 1;
      if (in_stack_00000010 == 0x2c) {
        FUN_0040a600();
      }
      if (in_stack_00000010 == 8) {
        DAT_0043427c = (uint)(DAT_0043427c == 0);
      }
      if (in_stack_00000010 == 0x7b) {
        PostMessageA((HWND)in_stack_00000004[1],0x111,1,0);
      }
      if (in_stack_00000010 == 0x7a) {
        DAT_00434284 = DAT_00434284 + 1;
        if (8 < DAT_00434284) {
          DAT_00434284 = 1;
        }
        FUN_00404bb8();
      }
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 1) {
      in_stack_00000004[1] = (int)in_stack_00000008;
      DAT_00443c44 = in_stack_00000008;
      pHVar2 = GetDC(in_stack_00000008);
      in_stack_00000004[2] = (int)pHVar2;
      ShowCursor(0);
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 2) {
      (**(code **)(*in_stack_00000004 + 0x20))();
      FUN_00404578();
      PostQuitMessage(0);
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0x100) {
      (&DAT_00443c48)[in_stack_00000010] = 3;
      *in_FS_OFFSET = local_28;
      return 0;
    }
  }
  else {
    if (in_stack_0000000c == 0x104) {
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0x105) {
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0x111) {
      (**(code **)(*in_stack_00000004 + 0x24))();
      puVar1 = DAT_004346f4;
      if (in_stack_00000010 == 1) {
        if ((DAT_004346f4 != (undefined4 *)0x0) && (DAT_004346f4 != (undefined4 *)0x0)) {
          iVar3 = FUN_0042b677();
          *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
          (**(code **)*puVar1)();
        }
        DestroyWindow((HWND)in_stack_00000004[1]);
        SetCursorPos(DAT_00434230,DAT_00434234);
        ShowCursor(0);
        ShowCursor(1);
        ShowCursor(1);
        ShowCursor(1);
        ShowCursor(1);
      }
      *in_FS_OFFSET = local_28;
      return 0;
    }
  }
  if ((int)in_stack_0000000c < 0x204) {
    if (in_stack_0000000c == 0x203) {
      (**(code **)(*in_stack_00000004 + 0x44))();
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0xa6) {
LAB_00404b0b:
      DAT_00434278 = 1;
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c - 0x200 < 2) {
      (**(code **)(*in_stack_00000004 + 0x34))();
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0x202) {
      (**(code **)(*in_stack_00000004 + 0x3c))();
      *in_FS_OFFSET = local_28;
      return 0;
    }
  }
  else {
    if (in_stack_0000000c == 0x204) {
      (**(code **)(*in_stack_00000004 + 0x38))();
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0x205) {
      (**(code **)(*in_stack_00000004 + 0x40))();
      *in_FS_OFFSET = local_28;
      return 0;
    }
    if (in_stack_0000000c == 0x206) goto LAB_00404b0b;
  }
  LVar4 = DefWindowProcA((HWND)in_stack_00000004[1],in_stack_0000000c,in_stack_00000010,
                         in_stack_00000014);
  *in_FS_OFFSET = local_28;
  return LVar4;
}


/* Ghidra address: 00404b44; FUN_00404b44 */

void FUN_00404b44(void)

{
  return;
}


/* Ghidra address: 00404b4c; FUN_00404b4c */

void FUN_00404b4c(void)

{
  return;
}


/* Ghidra address: 00404b54; FUN_00404b54 */

int FUN_00404b54(void)

{
  LPMSG lpMsg;
  BOOL BVar1;
  int *in_stack_00000004;
  int *piVar2;
  
  while( true ) {
    while( true ) {
      lpMsg = (LPMSG)(in_stack_00000004 + 3);
      BVar1 = PeekMessageA(lpMsg,(HWND)0x0,0,0,0);
      if (BVar1 != 0) break;
      piVar2 = in_stack_00000004;
      (**(code **)(*in_stack_00000004 + 0x18))();
      if (DAT_004346f4 != (int *)0x0) {
        (**(code **)(*DAT_004346f4 + 4))(DAT_004346f4,*DAT_004346f4,piVar2,DAT_004346f4);
      }
      FUN_0040477c();
    }
    BVar1 = GetMessageA(lpMsg,(HWND)0x0,0,0);
    if (BVar1 == 0) break;
    TranslateMessage(lpMsg);
    DispatchMessageA(lpMsg);
  }
  return in_stack_00000004[5];
}


/* Ghidra address: 00404bb8; FUN_00404bb8 */

void FUN_00404bb8(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar1 = FUN_004042c0();
  iVar3 = 0;
  puVar2 = &DAT_004342b3;
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + 1;
    puVar2[-1] = *pcVar1 << 2;
    pcVar4 = pcVar1 + 2;
    puVar2[-2] = pcVar1[1] << 2;
    pcVar1 = pcVar1 + 3;
    puVar2[-3] = *pcVar4 << 2;
    puVar2 = puVar2 + 4;
  } while (iVar3 < 0x100);
  return;
}


/* Ghidra address: 00404c04; FUN_00404c04 */

void FUN_00404c04(void)

{
  FUN_00429054();
  return;
}


/* Ghidra address: 00404c24; FUN_00404c24 */

void FUN_00404c24(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x8e) != 0) {
    FUN_00409a20();
    FUN_00409a38();
    FUN_00403f04();
    FUN_00409a8c();
    iVar1 = FUN_00409a58();
    DAT_0049a324 = iVar1 + DAT_0049a324 >> 1;
  }
  return;
}


/* Ghidra address: 00404c88; FUN_00404c88 */

undefined4 * FUN_00404c88(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x434708);
  *in_stack_00000004 = &PTR_FUN_00434748;
  in_stack_00000004[1] = in_stack_00000008;
  puVar1 = DAT_004346f4;
  if ((DAT_004346f4 != (undefined4 *)0x0) && (DAT_004346f4 != (undefined4 *)0x0)) {
    iVar2 = FUN_0042b677();
    *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
    (**(code **)*puVar1)();
  }
  DAT_004346f4 = in_stack_00000004;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_28;
  return in_stack_00000004;
}


/* Ghidra address: 00404d08; FUN_00404d08 */

void FUN_00404d08(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00434748;
    DAT_004346f4 = 0;
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 00404d38; FUN_00404d38 */

void FUN_00404d38(void)

{
  return;
}


/* Ghidra address: 00404d40; FUN_00404d40 */

void FUN_00404d40(void)

{
  int in_stack_00000004;
  tagRECT local_28;
  float local_18;
  int local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  
  GetClientRect(DAT_00443c44,&local_28);
  local_8 = (float)local_28.right;
  local_c = (float)local_28.bottom;
  local_14 = *(int *)(in_stack_00000004 + 0x16);
  if (local_c < ((float)local_14 * local_8) / (float)*(int *)(in_stack_00000004 + 0x12)) {
    local_18 = local_c / (float)local_14;
    FUN_0042fc2c();
    local_10 = FUN_0042fc2c();
    FUN_0042fc2c();
  }
  else {
    local_18 = local_8 / (float)*(int *)(in_stack_00000004 + 0x12);
    FUN_0042fc2c();
    local_10 = FUN_0042fc2c();
    FUN_0042fc2c();
  }
  FUN_00403f54();
  return;
}


/* Ghidra address: 00404fd6; FUN_00404fd6 */

void FUN_00404fd6(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if ((in_stack_00000004 != (undefined4 *)0x0) &&
     (*in_stack_00000004 = &PTR_FUN_004347b4, (in_stack_00000008 & 1) != 0)) {
    FUN_00431954();
  }
  return;
}


/* Ghidra address: 00404ffd; FUN_00404ffd */

undefined4 FUN_00404ffd(void)

{
  return 0;
}


/* Ghidra address: 00405068; FUN_00405068 */

void FUN_00405068(void)

{
  FUN_00404c24();
  return;
}


/* Ghidra address: 00405078; FUN_00405078 */

void FUN_00405078(void)

{
  FUN_00404bb8();
  return;
}


/* Ghidra address: 00405090; FUN_00405090 */

undefined * FUN_00405090(void)

{
  FUN_0042cfc4();
  return &DAT_00443d58;
}


/* Ghidra address: 004050b8; FUN_004050b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004050b8(void)

{
  DAT_004347f8 = (DAT_004347f8 + 1) % (DAT_004347f4 + 1);
  if (DAT_004347f8 == 0) {
    DAT_004347f8 = 1;
  }
  _DAT_00443d4c = DAT_004347f8;
  FUN_0042cfc4();
  return &DAT_00443d68;
}


/* Ghidra address: 00405104; FUN_00405104 */

undefined4 * FUN_00405104(void)

{
  undefined4 *in_stack_00000004;
  
  FUN_00404c88();
  *in_stack_00000004 = &PTR_FUN_00434e28;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0040512c; FUN_0040512c */

void FUN_0040512c(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00434e28;
    FUN_00404d08();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 00405160; FUN_00405160 */

void FUN_00405160(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x43480c);
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_00405090();
    FUN_004051d4();
    *DAT_0049aa2c = *DAT_0049aa2c + -2;
  }
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 004051d4; FUN_004051d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004051d4(void)

{
  undefined4 *in_stack_00000004;
  int in_stack_00000010;
  
  FUN_00404c88();
  *in_stack_00000004 = &PTR_FUN_00434e14;
  FUN_00424fc0();
  FUN_00404c04();
  FUN_00404bb8();
  FUN_004281c6();
  if ((1 < _DAT_00443d4c) && (in_stack_00000010 == 0)) {
    FUN_00426100();
  }
  thunk_FUN_004a6160();
  FUN_00406a20();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00405284; FUN_00405284 */

void FUN_00405284(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00434e14;
    thunk_FUN_004a6190();
    FUN_004281c6();
    FUN_00425f44();
    FUN_00404d08();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 004052c8; FUN_004052c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004052c8(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  FUN_0042b4b4(0x43487c);
  iVar1 = FUN_004253bc();
  if (iVar1 == 0xb) {
    if (DAT_00436c18 == 0) {
      puVar2 = FUN_00431988();
      if (puVar2 != (uint *)0x0) {
        FUN_00405570();
        *DAT_0049aa2c = *DAT_0049aa2c + -2;
      }
      *in_FS_OFFSET = local_38;
    }
    else {
      if (_DAT_00443d4c < 10) {
        _DAT_00443d4c = _DAT_00443d4c + 1;
        FUN_004261c8();
        puVar2 = FUN_00431988();
        if (puVar2 != (uint *)0x0) {
          FUN_00405104();
          *DAT_0049aa2c = *DAT_0049aa2c + -2;
        }
      }
      else {
        puVar2 = FUN_00431988();
        if (puVar2 != (uint *)0x0) {
          FUN_00405570();
          *DAT_0049aa2c = *DAT_0049aa2c + -2;
        }
      }
      *in_FS_OFFSET = local_38;
    }
  }
  else if (iVar1 == 10) {
    puVar2 = FUN_00431988();
    if (puVar2 != (uint *)0x0) {
      FUN_00405570();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
    *in_FS_OFFSET = local_38;
  }
  else if (iVar1 == 2) {
    puVar2 = FUN_00431988();
    if (puVar2 != (uint *)0x0) {
      FUN_00405570();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
    *in_FS_OFFSET = local_38;
  }
  else {
    *in_FS_OFFSET = local_38;
  }
  return;
}


/* Ghidra address: 00405474; FUN_00405474 */

undefined4 * FUN_00405474(void)

{
  undefined4 *in_stack_00000004;
  
  FUN_00404c88();
  *in_stack_00000004 = &PTR_FUN_00434e00;
  FUN_00424fc0();
  FUN_00404c04();
  FUN_00404bb8();
  FUN_004281c6();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 004054cc; FUN_004054cc */

void FUN_004054cc(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00434e00;
    FUN_004281c6();
    FUN_00425f44();
    FUN_00404d08();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 0040550c; FUN_0040550c */

void FUN_0040550c(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x43490c);
  iVar1 = FUN_00425c0c();
  if (iVar1 == 10) {
    puVar2 = FUN_00431988();
    if (puVar2 != (uint *)0x0) {
      FUN_00405570();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 00405570; FUN_00405570 */

undefined4 * FUN_00405570(void)

{
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  
  FUN_00404c88();
  *in_stack_00000004 = &PTR_FUN_00434dec;
  FUN_00409a20();
  FUN_00424b24();
  FUN_00404bb8();
  in_stack_00000004[3] = in_stack_0000000c;
  if (in_stack_0000000c != 0) {
    FUN_0040ff18();
  }
  FUN_004281c6();
  thunk_FUN_004a6160();
  FUN_00406a20();
  FUN_00409a38();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 004055f0; FUN_004055f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004055f0(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 local_40;
  
  FUN_0042b4b4(0x43499c);
  if (*(int *)(in_stack_00000004 + 0xc) == 0) {
    uVar1 = FUN_00427f4c();
    if ((((uVar1 & 0x800) == 0) && ((uVar1 & 0x200) == 0)) && ((uVar1 & 0x4000) == 0)) {
      uVar1 = FUN_00409a58();
      if (5000 < uVar1) {
        FUN_00409a8c();
        puVar2 = FUN_00431988();
        if (puVar2 != (uint *)0x0) {
          FUN_004050b8();
          FUN_004051d4();
          *DAT_0049aa2c = *DAT_0049aa2c + -2;
        }
        *in_FS_OFFSET = local_40;
        return;
      }
    }
    else {
      *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
      FUN_0040ff18();
    }
    goto switchD_0040575e_caseD_0;
  }
  FUN_00424b00();
  if (*(int *)(in_stack_00000004 + 0xc) == 2) {
    iVar3 = FUN_00410054();
    if (0 < iVar3) {
      _DAT_00443d4c = 1;
      _DAT_00443d50 = iVar3;
      puVar2 = FUN_00431988();
      if (puVar2 != (uint *)0x0) {
        FUN_00405090();
        FUN_004051d4();
        *DAT_0049aa2c = *DAT_0049aa2c + -2;
      }
    }
    if (iVar3 < 0) {
      *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
      FUN_0040ff18();
    }
    *in_FS_OFFSET = local_40;
    return;
  }
  iVar3 = FUN_00410054();
  switch(iVar3) {
  case 1:
    uVar1 = FUN_00427f4c();
    if ((uVar1 & 0x2000) == 0) {
      *(undefined4 *)(in_stack_00000004 + 0xc) = 2;
      FUN_00424b00();
      FUN_0040ff18();
    }
    else {
      puVar2 = FUN_00431988();
      if (puVar2 != (uint *)0x0) {
        FUN_004050b8();
        FUN_004051d4();
        *DAT_0049aa2c = *DAT_0049aa2c + -2;
      }
    }
    *in_FS_OFFSET = local_40;
    break;
  case 2:
    iVar3 = FUN_00426100();
    if ((iVar3 != 0) && (puVar2 = FUN_00431988(), puVar2 != (uint *)0x0)) {
      FUN_00405090();
      FUN_004051d4();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
    *in_FS_OFFSET = local_40;
    break;
  case 3:
    puVar2 = FUN_00431988();
    if (puVar2 != (uint *)0x0) {
      FUN_004050b8();
      FUN_004051d4();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
    *in_FS_OFFSET = local_40;
    break;
  case 4:
    puVar2 = FUN_00431988();
    if (puVar2 != (uint *)0x0) {
      FUN_0040599c();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
    *in_FS_OFFSET = local_40;
    break;
  case 5:
    puVar2 = FUN_00431988();
    if (puVar2 != (uint *)0x0) {
      FUN_00405474();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
    *in_FS_OFFSET = local_40;
    break;
  case 6:
    PostMessageA(*(HWND *)(*(int *)(in_stack_00000004 + 4) + 4),0x111,1,0);
  default:
switchD_0040575e_caseD_0:
    *in_FS_OFFSET = local_40;
  }
  return;
}


/* Ghidra address: 0040595c; FUN_0040595c */

void FUN_0040595c(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00434dec;
    thunk_FUN_004a6190();
    FUN_00424b90();
    FUN_00404d08();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 0040599c; FUN_0040599c */

undefined4 * FUN_0040599c(void)

{
  undefined4 *in_stack_00000004;
  
  FUN_00404c88();
  *in_stack_00000004 = &PTR_FUN_00434dd8;
  FUN_00410208();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 004059c8; FUN_004059c8 */

void FUN_004059c8(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00434dd8;
    FUN_004102d4();
    FUN_00404d08();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 00405a64; FUN_00405a64 */

undefined4 * FUN_00405a64(void)

{
  undefined4 *in_stack_00000004;
  
  FUN_00404410();
  *in_stack_00000004 = &PTR_FUN_00434d80;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00405a94; FUN_00405a94 */

void FUN_00405a94(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00434d80;
    FUN_00405cb4();
    FUN_0040170c();
    FUN_00425e98();
    FUN_00404598();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 00405ad8; FUN_00405ad8 */

void FUN_00405ad8(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 local_28;
  
  FUN_0042b4b4(0x434aa8);
  FUN_0040107c();
  FUN_00405c48();
  if ((DAT_00434a84 == 0) || (DAT_00434a94 != 0)) {
    thunk_FUN_004a6330();
    DAT_00443d54 = 0;
    DAT_00434a80 = 0;
  }
  else {
    thunk_FUN_004a6330();
    thunk_FUN_004a6260();
  }
  if ((DAT_00443d54 == 0) || (DAT_00434a8c != 0)) {
    thunk_FUN_004a6330();
    (**(code **)(*(int *)(in_stack_00000004 + 0x6c) + 0x28))();
  }
  else {
    thunk_FUN_004a6330();
    thunk_FUN_004a6260();
  }
  if ((DAT_00434a80 == 0) || (DAT_00434a90 != 0)) {
    thunk_FUN_004a6330();
    DAT_00434e34 = 1;
  }
  else {
    thunk_FUN_004a6330();
    thunk_FUN_004a6260();
    DAT_00434e34 = 0;
  }
  FUN_00424e20();
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_00405570();
    *DAT_0049aa2c = *DAT_0049aa2c + -2;
  }
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 00405c48; FUN_00405c48 */

void FUN_00405c48(void)

{
  thunk_FUN_004a6220();
  thunk_FUN_004a6220();
  thunk_FUN_004a6220();
  thunk_FUN_004a62f0();
  thunk_FUN_004a62f0();
  thunk_FUN_004a62f0();
  return;
}


/* Ghidra address: 00405cb4; FUN_00405cb4 */

void FUN_00405cb4(void)

{
  thunk_FUN_004a6260();
  thunk_FUN_004a6260();
  thunk_FUN_004a6260();
  thunk_FUN_004a6330();
  thunk_FUN_004a6330();
  thunk_FUN_004a6330();
  return;
}


/* Ghidra address: 00405d48; FUN_00405d48 */

void FUN_00405d48(void)

{
  GetPrivateProfileIntA(s_Smuta_00434b88,s_Install_00434b8e,0,".\\smuta.ini");
  return;
}


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


/* Ghidra address: 00405e50; FUN_00405e50 */

void FUN_00405e50(void)

{
  UINT UVar1;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  
  UVar1 = GetPrivateProfileIntA(s_Smuta_00434c7a,s_Video_00434c80,0,".\\smuta.ini");
  switch(UVar1) {
  case 0:
    *in_stack_00000004 = 1;
    *in_stack_00000008 = 0x140;
    *in_stack_0000000c = 200;
    break;
  case 1:
    *in_stack_00000004 = 1;
    *in_stack_00000008 = 0x140;
    *in_stack_0000000c = 0xf0;
    break;
  case 2:
    *in_stack_00000004 = 1;
    *in_stack_00000008 = 0x280;
    *in_stack_0000000c = 400;
    break;
  case 3:
    *in_stack_00000004 = 1;
    *in_stack_00000008 = 0x280;
    *in_stack_0000000c = 0x1e0;
    break;
  case 4:
    *in_stack_00000004 = 1;
    *in_stack_00000008 = 800;
    *in_stack_0000000c = 600;
    break;
  case 5:
    *in_stack_00000004 = 1;
    *in_stack_00000008 = 0x400;
    *in_stack_0000000c = 0x300;
    break;
  default:
    *in_stack_00000004 = 1;
    *in_stack_00000008 = 0x140;
    *in_stack_0000000c = 0xf0;
  }
  return;
}


/* Ghidra address: 00405f2c; FUN_00405f2c */

undefined4 * FUN_00405f2c(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char local_40c [1028];
  
  bVar6 = 0;
  GetPrivateProfileStringA
            (s_Smuta_00434c90,s_CDPath_00434c96,&DAT_00434c9d,&DAT_00443e94,0x50,".\\smuta.ini");
  thunk_FUN_0042cddc();
  uVar2 = 0xffffffff;
  pcVar4 = local_40c;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_00443ee4;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  }
  return &DAT_00443ee4;
}


/* Ghidra address: 00405fb4; FUN_00405fb4 */

void FUN_00405fb4(void)

{
  GetPrivateProfileStringA
            (s_Smuta_00434ca9,&DAT_00434caf,&DAT_00434cb4,&DAT_00443d94,0x100,".\\smuta.ini");
  FUN_0040f9c0();
  return;
}


/* Ghidra address: 00405fe4; FUN_00405fe4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00405fe4(void)

{
  int iVar1;
  HWND pHVar2;
  undefined4 *in_FS_OFFSET;
  char *in_stack_0000000c;
  undefined4 local_d8;
  int local_b8 [45];
  
  FUN_0042b4b4(0x434b10);
  iVar1 = FUN_00405d48();
  if (iVar1 == 0xc) {
    _DAT_00434ac8 = 1;
    pHVar2 = FindWindowA(s_TWindow_3D_GAME_00434cff,(LPCSTR)0x0);
    if (pHVar2 == (HWND)0x0) {
      FUN_00405f2c();
      FUN_00405fb4();
      FUN_00405e50();
      FUN_00405d78();
      FUN_004065e8();
      if ((*in_stack_0000000c == '/') &&
         ((in_stack_0000000c[1] == 'W' || (in_stack_0000000c[1] == 'w')))) {
        switch(in_stack_0000000c[2]) {
        case '0':
          _DAT_00434ac8 = 1;
          break;
        case '1':
          _DAT_00434ac8 = 1;
          break;
        case '2':
          _DAT_00434ac8 = 1;
          break;
        case '3':
          _DAT_00434ac8 = 1;
          break;
        case '4':
          _DAT_00434ac8 = 1;
          break;
        case '5':
          _DAT_00434ac8 = 1;
          break;
        default:
          _DAT_00434ac8 = 1;
        }
      }
      FUN_0040f9d0();
      FUN_00405a64();
      DAT_00443d48 = local_b8;
      iVar1 = (**(code **)(local_b8[0] + 0xc))();
      if (iVar1 == 0) {
        iVar1 = 0;
        FUN_00405a94();
        *in_FS_OFFSET = local_d8;
      }
      else {
        iVar1 = FUN_00404b54();
        FUN_00405a94();
        *in_FS_OFFSET = local_d8;
      }
    }
    else {
      iVar1 = 0;
      *in_FS_OFFSET = local_d8;
    }
  }
  else {
    MessageBoxA((HWND)0x0,&DAT_00434cc0,&DAT_00434cf4,0x10);
    iVar1 = 0;
    *in_FS_OFFSET = local_d8;
  }
  return iVar1;
}


/* Ghidra address: 004065e8; FUN_004065e8 */

void FUN_004065e8(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_00434e34 == 0) {
    psVar1 = &DAT_00443f1c;
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      *psVar1 = (short)iVar2 + 1;
      psVar1[1] = 0;
      psVar1[2] = 0;
      psVar1[3] = (short)iVar2 + 2;
      psVar1[4] = 0;
      psVar1[5] = 0;
      psVar1 = psVar1 + 6;
      iVar2 = iVar3;
    } while (iVar3 < 0xb);
    FUN_0042cfc4();
    iVar2 = FUN_0042bebc();
    if (iVar2 != 0) {
      iVar2 = 0;
      do {
        FUN_0042c024();
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xb);
      FUN_0042ba40();
    }
  }
  return;
}


/* Ghidra address: 004066e0; FUN_004066e0 */

void FUN_004066e0(void)

{
  BOOL BVar1;
  MCIERROR in_stack_00000004;
  LPCSTR in_stack_00000008;
  CHAR local_104 [256];
  
  if (DAT_00443d90 != 0) {
    BVar1 = mciGetErrorStringA(in_stack_00000004,local_104,0x100);
    if (BVar1 == 0) {
      MessageBoxA((HWND)0x0,&DAT_00434e5a,s_MCI_ERROR_00434e6d,0x30);
    }
    else {
      MessageBoxA((HWND)0x0,local_104,in_stack_00000008,0x30);
    }
  }
  return;
}


/* Ghidra address: 00406738; thunk_FUN_004a6160 */

void thunk_FUN_004a6160(void)

{
  FUN_004a6000();
  return;
}


/* Ghidra address: 00406808; thunk_FUN_004a6190 */

void thunk_FUN_004a6190(void)

{
  FUN_004a6000();
  return;
}


/* Ghidra address: 00406854; thunk_FUN_004a61b0 */

void thunk_FUN_004a61b0(void)

{
  FUN_004a6000();
  return;
}


/* Ghidra address: 004068d4; thunk_FUN_004a61d0 */

void thunk_FUN_004a61d0(void)

{
  FUN_004a6000();
  return;
}


/* Ghidra address: 00406968; thunk_FUN_004a61f0 */

void thunk_FUN_004a61f0(void)

{
  FUN_004a6000();
  return;
}


/* Ghidra address: 00406a20; FUN_00406a20 */

void FUN_00406a20(void)

{
  undefined4 in_stack_00000004;
  
  DAT_00434e30 = in_stack_00000004;
  thunk_FUN_004a61f0();
  return;
}


/* Ghidra address: 00406a34; FUN_00406a34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406a34(void)

{
  undefined1 local_38 [12];
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined1 local_20 [4];
  MCIDEVICEID local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  thunk_FUN_004a61b0();
  FUN_00429054();
  local_c = 0x40000000;
  local_8 = DAT_00443c44;
  _DAT_00434e38 = mciSendCommandA(0,0x803,0x30202,(DWORD_PTR)local_20);
  if (_DAT_00434e38 == 0) {
    local_28 = 0x1b;
    _DAT_00434e38 = mciSendCommandA(local_1c,0x811,0x100,(DWORD_PTR)local_2c);
    FUN_00429054();
    _DAT_00434e38 = mciSendCommandA(local_1c,0x806,0x2000002,(DWORD_PTR)local_38);
    if (_DAT_00434e38 == 0) {
      _DAT_00443f18 = 0;
      _DAT_00434e38 = mciSendCommandA(local_1c,0x808,2,0x443f18);
      _DAT_00434e38 = mciSendCommandA(local_1c,0x804,2,0x443f18);
      FUN_004281c6();
      thunk_FUN_004a61d0();
    }
    else {
      FUN_004066e0();
    }
  }
  else {
    FUN_004066e0();
  }
  return;
}


/* Ghidra address: 00406b50; FUN_00406b50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406b50(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  _DAT_00443fa0 = in_stack_00000004;
  FUN_00406be4();
  DAT_00443fa4 = in_stack_00000004;
  DAT_00443fb0 = in_stack_00000004 * in_stack_00000008 * 2;
  DAT_00443fa8 = in_stack_00000008;
  puVar1 = FUN_00410304();
  iVar3 = 0;
  puVar2 = &DAT_004449b8;
  DAT_00434ed4 = puVar1;
  if (0 < in_stack_00000008) {
    do {
      *puVar2 = puVar1;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + in_stack_00000004;
    } while (iVar3 < in_stack_00000008);
  }
  DAT_00443fac = DAT_00443fa4 * 2;
  puVar1 = DAT_00434ed4;
  iVar3 = DAT_00443fa4 * DAT_00443fa8;
  while (0 < iVar3) {
    *puVar1 = 0xffff;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  }
  return;
}


/* Ghidra address: 00406be4; FUN_00406be4 */

void FUN_00406be4(void)

{
  if (DAT_00434ed4 != 0) {
    FUN_0041034c();
    DAT_00434ed4 = 0;
  }
  return;
}


/* Ghidra address: 00406c00; FUN_00406c00 */

void FUN_00406c00(void)

{
  FUN_00429054();
  return;
}


/* Ghidra address: 00406c1c; FUN_00406c1c */

void FUN_00406c1c(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined3 uVar11;
  undefined1 *puVar10;
  short sVar12;
  uint uVar13;
  uint uVar14;
  undefined2 uVar15;
  short sVar16;
  undefined2 *puVar17;
  int iVar18;
  short local_40;
  int local_34;
  int local_30;
  undefined2 local_28;
  undefined4 *local_18;
  ushort *local_14;
  
  local_40 = DAT_004435ea;
  local_14 = &DAT_00443fb4;
  local_18 = &DAT_004429ac;
  for (sVar16 = 0; iVar3 = DAT_00439d00, sVar16 < DAT_004435e8; sVar16 = sVar16 + 1) {
    puVar10 = (undefined1 *)*local_18;
    iVar5 = sVar16 * 10;
    iVar18 = sVar16 * 10;
    sVar6 = (&DAT_00439daa)[sVar16 * 5];
    sVar12 = (&DAT_0043bbaa)[sVar16 * 5];
    if (((DAT_00434098 <= sVar12) && (sVar6 <= DAT_0043409a)) && (sVar6 < sVar12)) {
      iVar4 = (int)(0x10000 / (longlong)((int)sVar12 - (int)sVar6));
      local_34 = *(int *)((int)&DAT_00439dac + iVar18);
      iVar8 = (*(int *)((int)&DAT_0043bbac + iVar5) - local_34) * iVar4;
      local_30 = *(int *)((int)&DAT_00439db0 + iVar18);
      iVar4 = (*(int *)((int)&DAT_0043bbb0 + iVar5) - local_30) * iVar4;
      local_34 = local_34 * 0x10000;
      local_30 = local_30 * 0x10000;
      if (DAT_0043409a < sVar12) {
        sVar12 = DAT_0043409a;
      }
      if (sVar6 < DAT_00434098) {
        local_34 = local_34 + ((int)DAT_00434098 - (int)sVar6) * iVar8;
        local_30 = local_30 + ((int)DAT_00434098 - (int)sVar6) * iVar4;
        sVar6 = DAT_00434098;
      }
      iVar5 = (int)sVar6;
      puVar17 = (undefined2 *)((&DAT_004390f0)[local_40] + iVar5);
      DAT_004449b4 = (uint)*local_14;
      puVar9 = (undefined4 *)((&DAT_004449b8)[(int)local_40 >> 1] + (iVar5 >> 1) * 2);
      local_30._0_2_ = (undefined2)(local_30 >> 6);
      uVar14 = CONCAT22((short)(local_34 >> 6),(undefined2)local_30);
      local_28 = (undefined2)(iVar4 >> 6);
      iVar18 = CONCAT22((short)(iVar8 >> 6),local_28);
      uVar7 = sVar12 - iVar5;
      do {
        uVar1 = uVar14 >> 10;
        uVar2 = uVar14 >> 0x1a;
        uVar13 = uVar14 + iVar18;
        uVar11 = (undefined3)((uint)puVar10 >> 8);
        uVar14 = uVar13 + iVar18;
        puVar10 = (undefined1 *)
                  CONCAT31(uVar11,*(undefined1 *)
                                   (((uVar13 >> 10 & 0x3f) << 6 | uVar13 >> 0x1a) + iVar3));
        *puVar17 = CONCAT11(*puVar10,*(undefined1 *)
                                      CONCAT31(uVar11,*(undefined1 *)
                                                       (((uVar1 & 0x3f) << 6 | uVar2) + iVar3)));
        puVar17 = puVar17 + 1;
        uVar7 = uVar7 - 2;
      } while (-1 < (int)uVar7);
      uVar15 = (undefined2)DAT_004449b4;
      uVar7 = (uint)(sVar12 - iVar5) >> 2;
      do {
        *puVar9 = CONCAT22(uVar15,uVar15);
        puVar9 = puVar9 + 1;
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
    }
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
    local_40 = local_40 + DAT_004435ec;
  }
  return;
}


/* Ghidra address: 00406e38; FUN_00406e38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406e38(void)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined3 uVar17;
  bool bVar18;
  int local_34;
  
  iVar7 = DAT_00439da0;
  puVar12 = (ushort *)((&DAT_004449b8)[(int)DAT_00439d8c >> 1] + ((int)DAT_00439d8e >> 1) * 2);
  if ((((DAT_00439cfc == 0x40) && (DAT_00439da6 == 0)) && (DAT_00439da4 == 0)) &&
     (DAT_00439da8 == 0)) {
    iVar9 = (DAT_00439d94 >> 0x10) + DAT_00439d00;
    puVar8 = (undefined1 *)((&DAT_004390f0)[DAT_00439d8c] + (int)DAT_00439d8e);
    uVar15 = (int)DAT_00439d92 - (int)DAT_00439d8c;
    uVar14 = uVar15;
    puVar16 = DAT_004390d0;
    uVar13 = DAT_00439d98;
    DAT_00445db8 = iVar9;
    do {
      uVar3 = uVar13 >> 10;
      uVar13 = uVar13 + iVar7;
      puVar16 = (undefined1 *)
                CONCAT31((int3)((uint)puVar16 >> 8),*(undefined1 *)((uVar3 & 0xfc0) + iVar9));
      *puVar8 = *puVar16;
      iVar4 = DAT_004449b4;
      iVar10 = DAT_00443fac;
      puVar8 = puVar8 + _DAT_00443fa0;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
    uVar15 = uVar15 >> 1;
    do {
      *puVar12 = (ushort)iVar4;
      puVar12 = (ushort *)((int)puVar12 + iVar10);
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  else {
    iVar7 = (int)DAT_00439cfa;
    iVar10 = (DAT_00439da0 >> 0x10) * iVar7;
    pcVar11 = (char *)(((int)DAT_00439d98 >> 0x10) * iVar7 + DAT_00439d00 + (DAT_00439d94 >> 0x10));
    uVar13 = DAT_00439da0 * 0x10000;
    puVar8 = (undefined1 *)((&DAT_004390f0)[DAT_00439d8c] + (int)DAT_00439d8e);
    iVar9 = DAT_00450aa0 + 0xa008;
    uVar14 = (int)DAT_00439d92 - (int)DAT_00439d8c;
    local_34 = uVar14 + 2;
    _DAT_00445dbc = 0;
    uVar15 = DAT_00439d98 << 0x10;
    uVar6 = (ushort)DAT_004449b4;
    puVar16 = DAT_004390d0;
    if (DAT_00439da8 == 0) {
      if (DAT_00439da4 == 0) {
        if (DAT_00439da6 == 0) {
          iVar9 = uVar14 + 1;
          do {
            cVar1 = *pcVar11;
            uVar17 = (undefined3)((uint)puVar16 >> 8);
            pcVar11 = pcVar11 + iVar10;
            uVar2 = *(undefined1 *)CONCAT31(uVar17,cVar1);
            puVar16 = (undefined1 *)CONCAT31(uVar17,uVar2);
            bVar18 = CARRY4(uVar15,uVar13);
            uVar15 = uVar15 + uVar13;
            if (bVar18) {
              pcVar11 = pcVar11 + iVar7;
            }
            *puVar8 = uVar2;
            iVar5 = DAT_004449b4;
            iVar4 = DAT_00443fac;
            puVar8 = puVar8 + _DAT_00443fa0;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          uVar14 = uVar14 >> 1;
          do {
            *puVar12 = (ushort)iVar5;
            puVar12 = (ushort *)((int)puVar12 + iVar4);
            uVar14 = uVar14 - 1;
          } while (-1 < (int)uVar14);
        }
        else {
          while (local_34 != 1) {
            uVar17 = (undefined3)((uint)puVar16 >> 8);
            puVar16 = (undefined1 *)CONCAT31(uVar17,*pcVar11);
            if ((*pcVar11 != '\0') && ((short)uVar6 <= (short)*puVar12)) {
              uVar2 = *puVar16;
              puVar16 = (undefined1 *)CONCAT31(uVar17,uVar2);
              *puVar12 = uVar6;
              *puVar8 = uVar2;
            }
            puVar8 = puVar8 + _DAT_00443fa0;
            pcVar11 = pcVar11 + iVar10;
            uVar14 = uVar15 + uVar13;
            if (CARRY4(uVar15,uVar13)) {
              pcVar11 = pcVar11 + iVar7;
            }
            local_34 = local_34 + -2;
            if (local_34 == 0) {
              return;
            }
            uVar17 = (undefined3)((uint)puVar16 >> 8);
            puVar16 = (undefined1 *)CONCAT31(uVar17,*pcVar11);
            if ((*pcVar11 != '\0') && ((short)uVar6 <= (short)*puVar12)) {
              uVar2 = *puVar16;
              puVar16 = (undefined1 *)CONCAT31(uVar17,uVar2);
              *puVar12 = uVar6;
              *puVar8 = uVar2;
            }
            puVar12 = (ushort *)((int)puVar12 + DAT_00443fac);
            puVar8 = puVar8 + _DAT_00443fa0;
            pcVar11 = pcVar11 + iVar10;
            uVar15 = uVar14 + uVar13;
            if (CARRY4(uVar14,uVar13)) {
              pcVar11 = pcVar11 + iVar7;
            }
          }
        }
      }
      else {
        while (local_34 = local_34 + -1, local_34 != 0) {
          if ((DAT_004449b4 <= (int)(uint)*puVar12) && (*pcVar11 != '\0')) {
            *puVar8 = *(undefined1 *)((uint)CONCAT11(*pcVar11,*puVar8) + iVar9);
            *puVar12 = (ushort)DAT_004449b4;
          }
          if ((_DAT_00445dbc & 1) != 0) {
            puVar12 = (ushort *)((int)puVar12 + DAT_00443fac);
          }
          _DAT_00445dbc = _DAT_00445dbc ^ 1;
          puVar8 = puVar8 + _DAT_00443fa0;
          pcVar11 = pcVar11 + iVar10;
          bVar18 = CARRY4(uVar15,uVar13);
          uVar15 = uVar15 + uVar13;
          if (bVar18) {
            pcVar11 = pcVar11 + iVar7;
          }
        }
      }
    }
    else {
      while (local_34 != 1) {
        uVar17 = (undefined3)((uint)puVar16 >> 8);
        puVar16 = (undefined1 *)CONCAT31(uVar17,*pcVar11);
        if (*pcVar11 != '\0') {
          uVar2 = *puVar16;
          puVar16 = (undefined1 *)CONCAT31(uVar17,uVar2);
          *puVar12 = uVar6;
          *puVar8 = uVar2;
        }
        puVar8 = puVar8 + _DAT_00443fa0;
        pcVar11 = pcVar11 + iVar10;
        uVar14 = uVar15 + uVar13;
        if (CARRY4(uVar15,uVar13)) {
          pcVar11 = pcVar11 + iVar7;
        }
        local_34 = local_34 + -2;
        if (local_34 == 0) {
          return;
        }
        uVar17 = (undefined3)((uint)puVar16 >> 8);
        puVar16 = (undefined1 *)CONCAT31(uVar17,*pcVar11);
        if (*pcVar11 != '\0') {
          uVar2 = *puVar16;
          puVar16 = (undefined1 *)CONCAT31(uVar17,uVar2);
          *puVar12 = uVar6;
          *puVar8 = uVar2;
        }
        puVar12 = (ushort *)((int)puVar12 + DAT_00443fac);
        puVar8 = puVar8 + _DAT_00443fa0;
        pcVar11 = pcVar11 + iVar10;
        uVar15 = uVar14 + uVar13;
        if (CARRY4(uVar14,uVar13)) {
          pcVar11 = pcVar11 + iVar7;
        }
      }
    }
  }
  return;
}


/* Ghidra address: 00407180; FUN_00407180 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00407180(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  
  iVar1 = (int)DAT_00439cfa;
  iVar5 = DAT_00439da0 >> 0x10;
  pcVar8 = (char *)((DAT_00439d98 >> 0x10) * iVar1 + DAT_00439d00 + (DAT_00439d94 >> 0x10));
  puVar2 = (undefined1 *)((&DAT_004390f0)[DAT_00439d8c] + (int)DAT_00439d8e);
  uVar7 = DAT_00439da0 * 0x10000;
  uVar6 = DAT_00439d98 << 0x10;
  iVar3 = ((int)DAT_00439d92 - (int)DAT_00439d8c) + 2;
  puVar4 = DAT_004390d0;
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    puVar4 = (undefined1 *)CONCAT31((int3)((uint)puVar4 >> 8),*pcVar8);
    if (*pcVar8 != '\0') {
      uVar6 = CONCAT31((int3)(uVar6 >> 8),*puVar4);
      *puVar2 = *puVar4;
    }
    puVar2 = puVar2 + _DAT_00443fa0;
    pcVar8 = pcVar8 + iVar5 * iVar1;
    bVar9 = CARRY4(uVar6,uVar7);
    uVar6 = uVar6 + uVar7;
    if (bVar9) {
      pcVar8 = pcVar8 + iVar1;
    }
  }
  return puVar4;
}


/* Ghidra address: 00407358; FUN_00407358 */

bool FUN_00407358(undefined4 param_1,undefined4 param_2,DWORD param_3)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = thunk_FUN_0042e284();
  if ((short)iVar1 < 0) {
    FUN_00427b9f();
  }
  DVar2 = FUN_0042dce8();
  thunk_FUN_0042e20c();
  thunk_FUN_0042da20();
  thunk_FUN_0042e178();
  return DVar2 == param_3;
}


/* Ghidra address: 004073c8; FUN_004073c8 */

undefined2 * FUN_004073c8(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined2 *in_stack_00000004;
  ushort *in_stack_00000008;
  ushort *in_stack_0000000c;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x434f94);
  uVar1 = *in_stack_00000008;
  uVar2 = in_stack_00000008[1];
  uVar3 = in_stack_00000008[2];
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  if ((uint)uVar3 + (uint)in_stack_0000000c[2] < 0xffff) {
    uVar4 = (undefined2)((uint)uVar3 + (uint)in_stack_0000000c[2]);
  }
  else {
    uVar4 = 0xfffe;
  }
  if ((uint)uVar2 + (uint)in_stack_0000000c[1] < 0xffff) {
    uVar6 = (undefined2)((uint)uVar2 + (uint)in_stack_0000000c[1]);
  }
  else {
    uVar6 = 0xfffe;
  }
  if ((uint)uVar1 + (uint)*in_stack_0000000c < 0xffff) {
    uVar5 = (undefined2)((uint)uVar1 + (uint)*in_stack_0000000c);
  }
  else {
    uVar5 = 0xfffe;
  }
  *in_stack_00000004 = uVar5;
  in_stack_00000004[1] = uVar6;
  in_stack_00000004[2] = uVar4;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return in_stack_00000004;
}


/* Ghidra address: 00407588; FUN_00407588 */

undefined2 * FUN_00407588(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 *in_FS_OFFSET;
  undefined2 *in_stack_00000004;
  ushort *in_stack_00000008;
  ushort *in_stack_0000000c;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x43504c);
  uVar1 = *in_stack_00000008;
  uVar2 = in_stack_00000008[1];
  uVar3 = in_stack_00000008[2];
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  uVar4 = in_stack_0000000c[2];
  uVar5 = in_stack_0000000c[1];
  *in_stack_00000004 = (short)((uint)uVar1 * (uint)*in_stack_0000000c >> 8);
  in_stack_00000004[1] = (short)((uint)uVar2 * (uint)uVar5 >> 8);
  in_stack_00000004[2] = (short)((uint)uVar3 * (uint)uVar4 >> 8);
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return in_stack_00000004;
}


/* Ghidra address: 0040764c; FUN_0040764c */

undefined2 * FUN_0040764c(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined2 *in_stack_00000004;
  ushort *in_stack_00000008;
  ushort *in_stack_0000000c;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x4350a8);
  uVar1 = *in_stack_00000008;
  uVar2 = in_stack_00000008[1];
  uVar3 = in_stack_00000008[2];
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  if (in_stack_0000000c[2] == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = (uint)in_stack_0000000c[2];
  }
  if (in_stack_0000000c[1] == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = (uint)in_stack_0000000c[1];
  }
  if (*in_stack_0000000c == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = (uint)*in_stack_0000000c;
  }
  *in_stack_00000004 = (short)(((ulonglong)uVar1 << 8) / (ulonglong)uVar6);
  in_stack_00000004[1] = (short)(((ulonglong)uVar2 << 8) / (ulonglong)uVar5);
  in_stack_00000004[2] = (short)(((ulonglong)uVar3 << 8) / (ulonglong)uVar4);
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return in_stack_00000004;
}


/* Ghidra address: 0040777c; FUN_0040777c */

void FUN_0040777c(void)

{
  short *in_stack_00000004;
  short in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  
  in_stack_00000004[2] = in_stack_00000008 << 8;
  in_stack_00000004[1] = in_stack_0000000c << 8;
  *in_stack_00000004 = in_stack_00000010 << 8;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return;
}


/* Ghidra address: 004077e0; FUN_004077e0 */

void FUN_004077e0(void)

{
  short *in_stack_00000004;
  byte *in_stack_00000008;
  
  in_stack_00000004[2] = (ushort)in_stack_00000008[2] << 10;
  in_stack_00000004[1] = (ushort)in_stack_00000008[1] << 10;
  *in_stack_00000004 = (ushort)*in_stack_00000008 << 10;
  return;
}


/* Ghidra address: 00407840; FUN_00407840 */

undefined1 * FUN_00407840(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 *in_stack_00000004;
  ushort *in_stack_00000008;
  undefined1 local_7;
  
  uVar1 = in_stack_00000008[1];
  uVar2 = in_stack_00000008[2];
  local_7 = (undefined1)((int)(uint)*in_stack_00000008 >> 10);
  *in_stack_00000004 = local_7;
  in_stack_00000004[1] = (char)((int)(uint)uVar1 >> 10);
  in_stack_00000004[2] = (char)((int)(uint)uVar2 >> 10);
  return in_stack_00000004;
}


/* Ghidra address: 0040788c; FUN_0040788c */

undefined1 * FUN_0040788c(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 *in_stack_00000004;
  undefined2 *in_stack_00000008;
  
  uVar1 = in_stack_00000008[1];
  uVar2 = in_stack_00000008[2];
  *in_stack_00000004 = (char)((ushort)*in_stack_00000008 >> 8);
  in_stack_00000004[1] = (char)((ushort)uVar1 >> 8);
  in_stack_00000004[2] = (char)((ushort)uVar2 >> 8);
  return in_stack_00000004;
}


/* Ghidra address: 004078d0; FUN_004078d0 */

undefined4 FUN_004078d0(void)

{
  return 0;
}


/* Ghidra address: 004078d8; FUN_004078d8 */

undefined4 FUN_004078d8(void)

{
  return 0;
}


/* Ghidra address: 004078e0; FUN_004078e0 */

undefined4 FUN_004078e0(void)

{
  undefined4 uVar1;
  short *in_stack_00000004;
  short *in_stack_00000008;
  
  if (((in_stack_00000004[2] == in_stack_00000008[2]) &&
      (in_stack_00000004[1] == in_stack_00000008[1])) && (*in_stack_00000004 == *in_stack_00000008))
  {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* Ghidra address: 00407914; FUN_00407914 */

undefined4 FUN_00407914(void)

{
  undefined4 uVar1;
  short *in_stack_00000004;
  short *in_stack_00000008;
  
  if (((in_stack_00000004[2] == in_stack_00000008[2]) &&
      (in_stack_00000004[1] == in_stack_00000008[1])) && (*in_stack_00000004 == *in_stack_00000008))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* Ghidra address: 00407948; FUN_00407948 */

undefined4 FUN_00407948(void)

{
  undefined4 uVar1;
  ushort *in_stack_00000004;
  ushort *in_stack_00000008;
  
  if (((in_stack_00000004[2] < in_stack_00000008[2]) ||
      (in_stack_00000004[1] < in_stack_00000008[1])) || (*in_stack_00000004 < *in_stack_00000008)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* Ghidra address: 0040797c; FUN_0040797c */

undefined4 FUN_0040797c(void)

{
  undefined4 uVar1;
  ushort *in_stack_00000004;
  ushort *in_stack_00000008;
  
  if (((in_stack_00000008[2] < in_stack_00000004[2]) ||
      (in_stack_00000008[1] < in_stack_00000004[1])) || (*in_stack_00000008 < *in_stack_00000004)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* Ghidra address: 004079b0; FUN_004079b0 */

undefined4 FUN_004079b0(void)

{
  undefined4 uVar1;
  ushort *in_stack_00000004;
  ushort *in_stack_00000008;
  
  if (((in_stack_00000008[2] < in_stack_00000004[2]) &&
      (in_stack_00000008[1] < in_stack_00000004[1])) && (*in_stack_00000008 < *in_stack_00000004)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* Ghidra address: 004079e4; FUN_004079e4 */

undefined4 FUN_004079e4(void)

{
  undefined4 uVar1;
  ushort *in_stack_00000004;
  ushort *in_stack_00000008;
  
  if (((in_stack_00000004[2] < in_stack_00000008[2]) &&
      (in_stack_00000004[1] < in_stack_00000008[1])) && (*in_stack_00000004 < *in_stack_00000008)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* Ghidra address: 00407a18; FUN_00407a18 */

undefined4 FUN_00407a18(void)

{
  undefined4 uVar1;
  short *in_stack_00000004;
  
  if (((in_stack_00000004[2] == 0) && (in_stack_00000004[1] == 0)) && (*in_stack_00000004 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* Ghidra address: 00407a40; FUN_00407a40 */

undefined4 FUN_00407a40(void)

{
  undefined4 uVar1;
  short *in_stack_00000004;
  
  if (((in_stack_00000004[2] == 0) && (in_stack_00000004[1] == 0)) && (*in_stack_00000004 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* Ghidra address: 00407a68; FUN_00407a68 */

int FUN_00407a68(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *in_stack_00000004;
  ushort *in_stack_00000008;
  
  iVar2 = ((int)(uint)in_stack_00000004[2] >> 2) - ((int)(uint)in_stack_00000008[2] >> 2);
  iVar3 = ((int)(uint)in_stack_00000004[1] >> 2) - ((int)(uint)in_stack_00000008[1] >> 2);
  iVar1 = ((int)(uint)*in_stack_00000004 >> 2) - ((int)(uint)*in_stack_00000008 >> 2);
  return iVar2 * iVar2 + iVar3 * iVar3 + iVar1 * iVar1;
}


/* Ghidra address: 00407abc; FUN_00407abc */

undefined4 FUN_00407abc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 local_44;
  
  FUN_0042b4b4(0x435128);
  FUN_0040777c();
  FUN_0040777c();
  FUN_00407588();
  FUN_00407588();
  FUN_004073c8();
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_44;
  return in_stack_00000004;
}


/* Ghidra address: 00407ca4; FUN_00407ca4 */

undefined2 * FUN_00407ca4(void)

{
  undefined2 *puVar1;
  short sVar2;
  undefined2 *in_stack_00000004;
  undefined2 *in_stack_00000008;
  
  FUN_00431b68();
  sVar2 = 0;
  puVar1 = in_stack_00000004;
  do {
    *puVar1 = *in_stack_00000008;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(in_stack_00000008 + 1);
    sVar2 = sVar2 + 1;
    puVar1 = (undefined2 *)((int)puVar1 + 3);
    in_stack_00000008 = (undefined2 *)((int)in_stack_00000008 + 3);
  } while (sVar2 < 0x100);
  return in_stack_00000004;
}


/* Ghidra address: 00407cf0; FUN_00407cf0 */

undefined2 *
FUN_00407cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 local_7;
  undefined1 local_5;
  
  FUN_00431b68();
  sVar1 = 0;
  puVar2 = param_4;
  do {
    FUN_00407840();
    local_7 = (undefined2)((uint)param_3 >> 8);
    *puVar2 = local_7;
    local_5 = (undefined1)((uint)param_3 >> 0x18);
    *(undefined1 *)(puVar2 + 1) = local_5;
    sVar1 = sVar1 + 1;
    puVar2 = (undefined2 *)((int)puVar2 + 3);
  } while (sVar1 < 0x100);
  return param_4;
}


/* Ghidra address: 00407d54; FUN_00407d54 */

undefined2 *
FUN_00407d54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 local_7;
  undefined1 local_5;
  
  FUN_00431b68();
  sVar1 = 0;
  puVar2 = param_4;
  do {
    FUN_00407840();
    local_7 = (undefined2)((uint)param_3 >> 8);
    *puVar2 = local_7;
    local_5 = (undefined1)((uint)param_3 >> 0x18);
    *(undefined1 *)(puVar2 + 1) = local_5;
    sVar1 = sVar1 + 1;
    puVar2 = (undefined2 *)((int)puVar2 + 3);
  } while (sVar1 < 0x100);
  return param_4;
}


/* Ghidra address: 00407db8; FUN_00407db8 */

undefined2 * FUN_00407db8(void)

{
  undefined2 *puVar1;
  short sVar2;
  undefined2 *in_stack_00000004;
  undefined2 *in_stack_00000008;
  
  sVar2 = 0;
  puVar1 = in_stack_00000004;
  do {
    *puVar1 = *in_stack_00000008;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(in_stack_00000008 + 1);
    sVar2 = sVar2 + 1;
    puVar1 = (undefined2 *)((int)puVar1 + 3);
    in_stack_00000008 = (undefined2 *)((int)in_stack_00000008 + 3);
  } while (sVar2 < 0x100);
  return in_stack_00000004;
}


/* Ghidra address: 00407e34; FUN_00407e34 */

void FUN_00407e34(void)

{
  byte *pbVar1;
  short sVar2;
  undefined1 *puVar3;
  byte *in_stack_00000004;
  undefined1 *in_stack_00000008;
  short in_stack_0000000c;
  
  puVar3 = &DAT_00445e8c;
  sVar2 = 0;
  do {
    *puVar3 = (char)(((longlong)(int)sVar2 * (longlong)((int)in_stack_0000000c << 8) & 0xffffffffU)
                    / 0x6400);
    sVar2 = sVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar2 < 0x100);
  sVar2 = 0;
  do {
    sVar2 = sVar2 + 1;
    *in_stack_00000008 = (&DAT_00445e8c)[*in_stack_00000004];
    pbVar1 = in_stack_00000004 + 2;
    in_stack_00000008[1] = (&DAT_00445e8c)[in_stack_00000004[1]];
    in_stack_00000004 = in_stack_00000004 + 3;
    in_stack_00000008[2] = (&DAT_00445e8c)[*pbVar1];
    in_stack_00000008 = in_stack_00000008 + 3;
  } while (sVar2 < 0x100);
  return;
}


/* Ghidra address: 00407eac; FUN_00407eac */

void FUN_00407eac(void)

{
  short sVar1;
  
  sVar1 = 0;
  do {
    FUN_004077e0();
    sVar1 = sVar1 + 1;
  } while (sVar1 < 0x100);
  return;
}


/* Ghidra address: 00407ee8; FUN_00407ee8 */

short FUN_00407ee8(void)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined2 local_6;
  
  local_6 = 0;
  iVar1 = FUN_00407a68();
  sVar3 = 1;
  do {
    iVar2 = FUN_00407a68();
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      local_6 = sVar3;
    }
    sVar3 = sVar3 + 1;
  } while (sVar3 < 0x100);
  return local_6;
}


/* Ghidra address: 00408088; FUN_00408088 */

void FUN_00408088(void)

{
  if (DAT_0043518c != 0) {
    FUN_004089cc();
  }
  return;
}


/* Ghidra address: 0040809c; FUN_0040809c */

int FUN_0040809c(void)

{
  undefined2 uVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x4351b0);
  FUN_00427be8();
  *(undefined2 *)(in_stack_00000004 + 0x2a) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x28) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x26) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x1e) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x1a) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x16) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x14) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x91) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x95) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x2c) = 0;
  *(undefined1 *)(in_stack_00000004 + 0x30) = 0;
  *(undefined1 *)(in_stack_00000004 + 0x5a) = 0;
  pvVar2 = FUN_0041d904();
  *(LPVOID *)(in_stack_00000004 + 0x65) = pvVar2;
  pvVar2 = FUN_0041d904();
  *(LPVOID *)(in_stack_00000004 + 0x61) = pvVar2;
  uVar3 = FUN_00409ad0();
  *(undefined4 *)(in_stack_00000004 + 0x69) = uVar3;
  uVar3 = FUN_00409ad0();
  *(undefined4 *)(in_stack_00000004 + 0x71) = uVar3;
  pvVar2 = FUN_0041d904();
  *(LPVOID *)(in_stack_00000004 + 0x6d) = pvVar2;
  *(undefined2 *)((int)pvVar2 + 4) = 1;
  pvVar2 = FUN_0041d904();
  *(LPVOID *)(in_stack_00000004 + 0x79) = pvVar2;
  *(undefined2 *)((int)pvVar2 + 4) = 1;
  FUN_0040d43c();
  puVar4 = FUN_00431988();
  if (puVar4 != (uint *)0x0) {
    FUN_0042e498();
    *DAT_0049aa2c = *DAT_0049aa2c + -6;
  }
  puVar8 = &DAT_00445f8e;
  puVar7 = (undefined2 *)&DAT_00445f8c;
  if (puVar4 == (uint *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)((int)puVar4 + 0x3e);
  }
  piVar5 = FUN_0042ec88(puVar4,in_stack_00000004 + 0x5f,(short)piVar5,piVar5,
                        (undefined2 *)(in_stack_00000004 + 0x5f));
  piVar5 = FUN_0042ec88(piVar5,extraout_EDX,extraout_CX,piVar5,puVar7);
  FUN_0042ec88(piVar5,extraout_EDX_00,extraout_CX_00,piVar5,puVar8);
  iVar6 = DAT_0044f640;
  uVar1 = DAT_00445f8e;
  *(undefined2 *)(DAT_0044f640 + 0x20) = 0x28;
  *(undefined2 *)(iVar6 + 0x22) = uVar1;
  *(undefined2 *)(in_stack_00000004 + 0x5f) =
       *(undefined2 *)(*(int *)(in_stack_00000004 + 0x61) + 2);
  if (puVar4 != (uint *)0x0) {
    iVar6 = FUN_0042b677();
    *DAT_0049aa2c = *DAT_0049aa2c + iVar6;
    (**(code **)puVar4[1])();
  }
  *(undefined2 *)(in_stack_00000004 + 0x22) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x24) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x93) = 0;
  DAT_00445f90 = 0;
  DAT_00445f94 = 0;
  DAT_00445f98 = 0;
  DAT_00445f9c = 0;
  DAT_00445fa0 = 0;
  DAT_00445fa4 = 0;
  DAT_00445fa8 = 0;
  uVar3 = FUN_00409ad0();
  *(undefined4 *)(in_stack_00000004 + 0x99) = uVar3;
  FUN_004083cc();
  DAT_0043518c = in_stack_00000004;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_2c;
  return in_stack_00000004;
}


/* Ghidra address: 004082d0; FUN_004082d0 */

void FUN_004082d0(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    DAT_0043518c = 0;
    FUN_00431954();
    FUN_00431954();
    FUN_00431954();
    FUN_00431954();
    FUN_00431954();
    FUN_00431954();
    FUN_00431954();
    FUN_00409b1c();
    FUN_00409b1c();
    FUN_00409b1c();
    FUN_00427c1e();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 00408384; FUN_00408384 */

int FUN_00408384(void)

{
  undefined1 uVar1;
  int in_stack_00000004;
  
  uVar1 = 0xcc;
  if ((*(byte *)(in_stack_00000004 + 0x1e) & 1) == 0) {
    uVar1 = 0x20;
  }
  *(undefined1 *)(in_stack_00000004 + 0x57) = uVar1;
  uVar1 = 0xc6;
  if ((*(byte *)(in_stack_00000004 + 0x1e) & 2) == 0) {
    uVar1 = 0x20;
  }
  *(undefined1 *)(in_stack_00000004 + 0x58) = uVar1;
  uVar1 = 199;
  if ((*(byte *)(in_stack_00000004 + 0x1e) & 4) == 0) {
    uVar1 = 0x20;
  }
  *(undefined1 *)(in_stack_00000004 + 0x59) = uVar1;
  return in_stack_00000004 + 0x57;
}


/* Ghidra address: 004083bc; FUN_004083bc */

void FUN_004083bc(void)

{
  int in_stack_00000004;
  
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 0x6de;
  return;
}


/* Ghidra address: 004083cc; FUN_004083cc */

void FUN_004083cc(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000004;
  
  FUN_004083bc();
  uVar1 = *(int *)(DAT_0044f640 + 0x32) - (int)**(short **)(in_stack_00000004 + 0x99);
  iVar2 = (int)uVar1 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
  }
  *(short *)(in_stack_00000004 + 0x5b) = (short)iVar2;
  *(undefined2 *)(in_stack_00000004 + 0x5d) = *(undefined2 *)(DAT_0044f640 + 0x26);
  return;
}


/* Ghidra address: 0040840c; FUN_0040840c */

void FUN_0040840c(void)

{
  int iVar1;
  short sVar2;
  short in_stack_00000010;
  short in_stack_00000014;
  short in_stack_00000018;
  
  *(undefined2 *)(DAT_0044f640 + 4) = DAT_00445f8e;
  (**(code **)(*DAT_0044f640 + 0x3c))();
  FUN_0042fc2c();
  if (in_stack_00000014 != 0) {
    iVar1 = ((int)in_stack_00000014 * (int)in_stack_00000018) / (int)in_stack_00000010;
    if ((short)iVar1 == 0) {
      iVar1 = 1;
    }
    sVar2 = (short)iVar1;
    while (0 < sVar2) {
      (**(code **)(*DAT_0044f640 + 0x40))();
      iVar1 = iVar1 + -1;
      sVar2 = (short)iVar1;
    }
  }
  return;
}


/* Ghidra address: 0040852c; FUN_0040852c */

void FUN_0040852c(void)

{
  return;
}


/* Ghidra address: 00408534; FUN_00408534 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408534(void)

{
  short *psVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  int in_stack_00000004;
  _MEMORYSTATUS local_24;
  
  piVar3 = DAT_0044f640;
  uVar2 = DAT_00445f8e;
  *(undefined2 *)(DAT_0044f640 + 8) = 0x28;
  *(undefined2 *)((int)piVar3 + 0x22) = uVar2;
  if ((*(byte *)(in_stack_00000004 + 0x14) & 4) != 0) {
    FUN_004267f4();
  }
  if ((*(byte *)(in_stack_00000004 + 0x14) & 8) != 0) {
    FUN_004267f4();
  }
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  (**(code **)(*DAT_0044f640 + 0x44))();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  (**(code **)(*DAT_0044f640 + 0x44))();
  if ((*(byte *)(in_stack_00000004 + 0x14) & 0x20) != 0) {
    *(undefined4 *)(in_stack_00000004 + 0x95) = 0x60;
    if ((*(byte *)(in_stack_00000004 + 0x15) & 1) == 0) {
      iVar4 = FUN_00429114();
      psVar1 = *(short **)(in_stack_00000004 + 0x99);
      *psVar1 = (short)DAT_0044f640[9] * ((short)iVar4 + 1);
      psVar1[1] = *(short *)((int)DAT_0044f640 + 0x26) + 2;
      FUN_004267f4();
    }
    else {
      GlobalMemoryStatus(&local_24);
      psVar1 = *(short **)(in_stack_00000004 + 0x99);
      *psVar1 = (short)DAT_0044f640[9] << 5;
      psVar1[1] = *(short *)((int)DAT_0044f640 + 0x26) + 2;
      FUN_004267f4();
    }
  }
  if (*(int *)(in_stack_00000004 + 0x95) != 0) {
    FUN_0042fc2c();
    FUN_0042fc2c();
    FUN_0042fc2c();
    FUN_0042fc2c();
    (**(code **)(*DAT_0044f640 + 0x44))();
    *(undefined2 *)(in_stack_00000004 + 0x14) = 0;
    *(int *)(in_stack_00000004 + 0x95) = *(int *)(in_stack_00000004 + 0x95) + -1;
  }
  return;
}


/* Ghidra address: 0040886c; FUN_0040886c */

char * FUN_0040886c(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 0x22;
  uVar2 = 0xffffffff;
  do {
    pcVar4 = in_stack_00000008;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = in_stack_00000008 + 1;
    cVar1 = *in_stack_00000008;
    in_stack_00000008 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)(in_stack_00000004 + 0x30);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return (char *)(in_stack_00000004 + 0x30);
}


/* Ghidra address: 004088a8; FUN_004088a8 */

void FUN_004088a8(void)

{
  undefined2 uVar1;
  int *piVar2;
  int in_stack_00000004;
  
  if ((-1 < *(int *)(in_stack_00000004 + 0x95)) &&
     (*(int *)(in_stack_00000004 + 0x95) = *(int *)(in_stack_00000004 + 0x95) + -1,
     *(int *)(in_stack_00000004 + 0x95) == 0)) {
    FUN_0040afbc();
    piVar2 = DAT_0044f640;
    uVar1 = DAT_00445f8e;
    *(undefined2 *)(DAT_0044f640 + 8) = 0x28;
    *(undefined2 *)((int)piVar2 + 0x22) = uVar1;
    *(undefined2 *)(piVar2 + 4) = DAT_00445f8e;
    (**(code **)(*piVar2 + 0x3c))();
    FUN_00401ae4();
  }
  return;
}


/* Ghidra address: 00408944; FUN_00408944 */

void FUN_00408944(void)

{
  int in_stack_00000004;
  undefined2 in_stack_00000008;
  
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 6;
  *(undefined2 *)(in_stack_00000004 + 0x16) = in_stack_00000008;
  return;
}


/* Ghidra address: 0040895c; FUN_0040895c */

void FUN_0040895c(void)

{
  int in_stack_00000004;
  undefined2 in_stack_00000008;
  
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 10;
  *(undefined2 *)(in_stack_00000004 + 0x1a) = in_stack_00000008;
  return;
}


/* Ghidra address: 00408974; FUN_00408974 */

void FUN_00408974(void)

{
  int in_stack_00000004;
  undefined2 in_stack_00000008;
  
  *(undefined2 *)(in_stack_00000004 + 0x28) = in_stack_00000008;
  return;
}


/* Ghidra address: 00408984; FUN_00408984 */

void FUN_00408984(void)

{
  int in_stack_00000004;
  undefined2 in_stack_00000008;
  
  *(undefined2 *)(in_stack_00000004 + 0x18) = in_stack_00000008;
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 6;
  return;
}


/* Ghidra address: 0040899c; FUN_0040899c */

void FUN_0040899c(void)

{
  int in_stack_00000004;
  undefined2 in_stack_00000008;
  
  *(undefined2 *)(in_stack_00000004 + 0x1c) = in_stack_00000008;
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 10;
  return;
}


/* Ghidra address: 004089b4; FUN_004089b4 */

void FUN_004089b4(void)

{
  int in_stack_00000004;
  undefined2 in_stack_00000008;
  
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 0x402;
  *(undefined2 *)(in_stack_00000004 + 0x26) = in_stack_00000008;
  return;
}


/* Ghidra address: 004089cc; FUN_004089cc */

void FUN_004089cc(void)

{
  int in_stack_00000004;
  
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 0x122;
  return;
}


/* Ghidra address: 004089dc; FUN_004089dc */

void FUN_004089dc(void)

{
  int in_stack_00000004;
  short in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 0x12;
    *(short *)(in_stack_00000004 + 0x1e) = in_stack_00000008;
  }
  return;
}


/* Ghidra address: 004089f8; FUN_004089f8 */

void FUN_004089f8(void)

{
  int in_stack_00000004;
  short in_stack_00000008;
  
  if (0 < in_stack_00000008) {
    *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 0x202;
    *(short *)(in_stack_00000004 + 0x2a) = in_stack_00000008;
  }
  return;
}


/* Ghidra address: 00408a14; FUN_00408a14 */

int FUN_00408a14(void)

{
  int in_stack_00000004;
  
  FUN_00408c98();
  return in_stack_00000004 + 0x2c;
}


/* Ghidra address: 00408a28; FUN_00408a28 */

void FUN_00408a28(void)

{
  char cVar1;
  int iVar2;
  char *in_stack_00000004;
  short *in_stack_00000008;
  short *in_stack_0000000c;
  
  iVar2 = 0;
  *in_stack_00000008 = 0;
  *in_stack_0000000c = 1;
  while( true ) {
    cVar1 = *in_stack_00000004;
    if ((cVar1 == '\0') || (cVar1 == '$')) break;
    if (cVar1 == '\n') {
      if (*in_stack_00000008 < iVar2) {
        *in_stack_00000008 = (short)iVar2;
      }
      iVar2 = 0;
      *in_stack_0000000c = *in_stack_0000000c + 1;
    }
    else if (*in_stack_00000004 != '\r') {
      iVar2 = iVar2 + 1;
    }
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  if (*in_stack_00000008 < iVar2) {
    *in_stack_00000008 = (short)iVar2;
  }
  return;
}


/* Ghidra address: 00408a88; FUN_00408a88 */

void FUN_00408a88(void)

{
  FUN_0040886c();
  return;
}


/* Ghidra address: 00408aa0; FUN_00408aa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00408aa0(void)

{
  short *psVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  short local_20;
  short local_1e;
  
  if (DAT_004351f0 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_00427f4c();
    FUN_004281c6();
    if ((((uVar3 == 0x200) || (uVar3 == 0x800)) || (uVar3 == 0x4000)) || ((uVar3 & 0x400000) != 0))
    {
      FUN_004267f4();
      _DAT_004351f4 = 0;
      DAT_004351f0 = 0;
      FUN_004281c6();
      DAT_0049a178 = 1;
      uVar4 = 0;
      if ((uVar3 & 0x400000) != 0) {
        uVar4 = uVar3 & 0xf;
      }
      if ((uVar3 == 0x800) || (uVar4 != 0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      FUN_00408a28();
      psVar1 = *(short **)(DAT_0043518c + 0x99);
      *psVar1 = (local_20 + 1) * (short)DAT_0044f640[9];
      psVar1[1] = (local_1e + 1) * *(short *)((int)DAT_0044f640 + 0x26);
      FUN_004267f4();
      FUN_0042fc2c();
      FUN_0042fc2c();
      FUN_0042fc2c();
      FUN_0042fc2c();
      (**(code **)(*DAT_0044f640 + 0x44))();
      _DAT_004351f4 = _DAT_004351f4 + 1;
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* Ghidra address: 00408c74; FUN_00408c74 */

void FUN_00408c74(void)

{
  undefined4 in_stack_00000004;
  
  DAT_004351f0 = 1;
  DAT_00445fac = in_stack_00000004;
  DAT_0049a178 = 0;
  FUN_004281c6();
  return;
}


/* Ghidra address: 00408c98; FUN_00408c98 */

void FUN_00408c98(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x2c) = 0;
  return;
}


/* Ghidra address: 00409020; FUN_00409020 */

short FUN_00409020(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = FUN_0042fe18();
  iVar3 = FUN_0042fe18();
  if (iVar3 < iVar2) {
    sVar1 = *(short *)(&DAT_00446af8 + ((iVar3 * 100) / iVar2) * 2);
    if ((0 < in_stack_00000004) && (-1 < in_stack_00000008)) {
      return sVar1;
    }
    if ((in_stack_00000004 < 0) && (-1 < in_stack_00000008)) {
      return 0xb4 - sVar1;
    }
    if ((0 < in_stack_00000004) && (in_stack_00000008 < 0)) {
      return 0x168 - sVar1;
    }
    if ((in_stack_00000004 < 0) && (in_stack_00000008 < 0)) {
      return sVar1 + 0xb4;
    }
  }
  else {
    if (iVar3 == 0) {
      return 0;
    }
    sVar1 = *(short *)(&DAT_00446af8 + ((iVar2 * 100) / iVar3) * 2);
    if ((0 < in_stack_00000008) && (-1 < in_stack_00000004)) {
      return 0x5a - sVar1;
    }
    if ((in_stack_00000008 < 0) && (-1 < in_stack_00000004)) {
      return sVar1 + 0x10e;
    }
    if ((0 < in_stack_00000008) && (in_stack_00000004 < 0)) {
      return sVar1 + 0x5a;
    }
    if ((in_stack_00000008 < 0) && (in_stack_00000004 < 0)) {
      return 0x10e - sVar1;
    }
  }
  return 0;
}


/* Ghidra address: 00409104; FUN_00409104 */

void FUN_00409104(void)

{
  short in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  for (; in_stack_00000004 != 0; in_stack_00000004 = in_stack_00000004 + -1) {
    *in_stack_00000008 = *in_stack_00000008 + in_stack_0000000c;
    in_stack_00000008[1] = in_stack_00000008[1] + in_stack_00000010;
    in_stack_00000008 = in_stack_00000008 + 2;
  }
  return;
}


/* Ghidra address: 0040917c; FUN_0040917c */

void FUN_0040917c(void)

{
  int *piVar1;
  short in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  for (; in_stack_00000004 != 0; in_stack_00000004 = in_stack_00000004 + -1) {
    *in_stack_00000008 = (*in_stack_00000008 * in_stack_0000000c) / in_stack_00000010;
    piVar1 = in_stack_00000008 + 2;
    in_stack_00000008[1] = (in_stack_00000008[1] * in_stack_0000000c) / in_stack_00000010;
    in_stack_00000008 = in_stack_00000008 + 3;
    *piVar1 = (*piVar1 * in_stack_0000000c) / in_stack_00000010;
  }
  return;
}


/* Ghidra address: 004091ec; FUN_004091ec */

void FUN_004091ec(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short in_stack_00000004;
  int *in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  short in_stack_00000014;
  
  if (0x167 < in_stack_0000000c) {
    in_stack_0000000c = in_stack_0000000c + -0x168;
  }
  if (in_stack_0000000c < 0) {
    in_stack_0000000c = in_stack_0000000c + 0x168;
  }
  if (0x167 < in_stack_00000010) {
    in_stack_00000010 = in_stack_00000010 + -0x168;
  }
  if (in_stack_00000010 < 0) {
    in_stack_00000010 = in_stack_00000010 + 0x168;
  }
  if (0x167 < in_stack_00000014) {
    in_stack_00000014 = in_stack_00000014 + -0x168;
  }
  if (in_stack_00000014 < 0) {
    in_stack_00000014 = in_stack_00000014 + 0x168;
  }
  for (; in_stack_00000004 != 0; in_stack_00000004 = in_stack_00000004 + -1) {
    piVar1 = in_stack_00000008 + 2;
    iVar2 = in_stack_00000008[1];
    iVar3 = (int)in_stack_0000000c;
    in_stack_00000008[1] =
         *(int *)(&DAT_00446554 + iVar3 * 4) * iVar2 - *piVar1 * *(int *)(&DAT_00445fb0 + iVar3 * 4)
         >> 0xf;
    *piVar1 = *piVar1 * *(int *)(&DAT_00446554 + iVar3 * 4) +
              *(int *)(&DAT_00445fb0 + iVar3 * 4) * iVar2 >> 0xf;
    iVar2 = in_stack_00000008[2];
    iVar3 = (int)in_stack_00000010;
    in_stack_00000008[2] =
         *(int *)(&DAT_00446554 + iVar3 * 4) * iVar2 -
         *in_stack_00000008 * *(int *)(&DAT_00445fb0 + iVar3 * 4) >> 0xf;
    *in_stack_00000008 =
         *in_stack_00000008 * *(int *)(&DAT_00446554 + iVar3 * 4) +
         *(int *)(&DAT_00445fb0 + iVar3 * 4) * iVar2 >> 0xf;
    piVar1 = in_stack_00000008 + 1;
    iVar2 = *in_stack_00000008;
    iVar3 = (int)in_stack_00000014;
    *in_stack_00000008 =
         *(int *)(&DAT_00446554 + iVar3 * 4) * iVar2 - *piVar1 * *(int *)(&DAT_00445fb0 + iVar3 * 4)
         >> 0xf;
    *piVar1 = *piVar1 * *(int *)(&DAT_00446554 + iVar3 * 4) +
              *(int *)(&DAT_00445fb0 + iVar3 * 4) * iVar2 >> 0xf;
    in_stack_00000008 = in_stack_00000008 + 3;
  }
  return;
}


/* Ghidra address: 004093b0; FUN_004093b0 */

void FUN_004093b0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short in_stack_00000004;
  int *in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  
  if (0x167 < in_stack_0000000c) {
    in_stack_0000000c = in_stack_0000000c + -0x168;
  }
  if (in_stack_0000000c < 0) {
    in_stack_0000000c = in_stack_0000000c + 0x168;
  }
  if (0x167 < in_stack_00000010) {
    in_stack_00000010 = in_stack_00000010 + -0x168;
  }
  if (in_stack_00000010 < 0) {
    in_stack_00000010 = in_stack_00000010 + 0x168;
  }
  for (; in_stack_00000004 != 0; in_stack_00000004 = in_stack_00000004 + -1) {
    iVar3 = in_stack_00000008[2];
    iVar4 = (int)in_stack_00000010;
    in_stack_00000008[2] =
         *(int *)(&DAT_00446554 + iVar4 * 4) * iVar3 -
         *in_stack_00000008 * *(int *)(&DAT_00445fb0 + iVar4 * 4) >> 0xf;
    piVar1 = in_stack_00000008 + 1;
    *in_stack_00000008 =
         *in_stack_00000008 * *(int *)(&DAT_00446554 + iVar4 * 4) +
         *(int *)(&DAT_00445fb0 + iVar4 * 4) * iVar3 >> 0xf;
    piVar2 = in_stack_00000008 + 2;
    in_stack_00000008 = in_stack_00000008 + 3;
    iVar3 = *piVar1;
    iVar4 = (int)in_stack_0000000c;
    *piVar1 = *(int *)(&DAT_00446554 + iVar4 * 4) * iVar3 -
              *piVar2 * *(int *)(&DAT_00445fb0 + iVar4 * 4) >> 0xf;
    *piVar2 = *piVar2 * *(int *)(&DAT_00446554 + iVar4 * 4) +
              *(int *)(&DAT_00445fb0 + iVar4 * 4) * iVar3 >> 0xf;
  }
  return;
}


/* Ghidra address: 004094f0; FUN_004094f0 */

void FUN_004094f0(void)

{
  short sVar1;
  uint in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  for (sVar1 = 0; (int)sVar1 < (int)(in_stack_00000004 & 0xffff); sVar1 = sVar1 + 1) {
    *in_stack_00000008 = *in_stack_00000008 + in_stack_0000000c;
    in_stack_00000008[1] = in_stack_00000008[1] + in_stack_00000010;
    in_stack_00000008[2] = in_stack_00000008[2] + in_stack_00000014;
    in_stack_00000008 = in_stack_00000008 + 3;
  }
  return;
}


/* Ghidra address: 00409554; FUN_00409554 */

void FUN_00409554(void)

{
  int iVar1;
  ushort uVar2;
  ushort in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  uVar2 = 0;
  if (in_stack_00000004 != 0) {
    do {
      iVar1 = in_stack_00000008[2];
      if (in_stack_00000008[2] < in_stack_00000010) {
        iVar1 = in_stack_00000010;
      }
      if (0 < iVar1) {
        *in_stack_00000008 = (*in_stack_00000008 * in_stack_0000000c) / (iVar1 + 1);
        in_stack_00000008[1] = (in_stack_00000008[1] * in_stack_0000000c) / (iVar1 + 1);
        in_stack_00000008 = in_stack_00000008 + 3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < in_stack_00000004);
  }
  return;
}


/* Ghidra address: 004095a0; FUN_004095a0 */

undefined4 FUN_004095a0(void)

{
  int *piVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort in_stack_00000004;
  int in_stack_00000008;
  short *in_stack_0000000c;
  
  *in_stack_0000000c = *(short *)(in_stack_00000008 + 8);
  uVar3 = 1;
  piVar1 = (int *)(in_stack_00000008 + 0x14);
  if (1 < in_stack_00000004) {
    do {
      if ((int)*in_stack_0000000c < *piVar1) {
        *in_stack_0000000c = (short)*piVar1;
      }
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 3;
    } while (uVar3 < in_stack_00000004);
  }
  if (*in_stack_0000000c < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT22((short)((uint)piVar1 >> 0x10),1);
  }
  return uVar2;
}


/* Ghidra address: 004095ec; FUN_004095ec */

undefined4 FUN_004095ec(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  ushort local_8;
  ushort local_6;
  
  local_8 = 0;
  local_6 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar4 = 0;
  uVar1 = 0;
  uVar2 = 0;
  if (in_stack_00000004 != 0) {
    do {
      uVar6 = uVar2;
      uVar5 = uVar1;
      if (*in_stack_00000008 < in_stack_0000000c) {
        uVar5 = uVar5 + 1;
      }
      if (in_stack_00000014 < *in_stack_00000008) {
        uVar6 = uVar6 + 1;
      }
      if (in_stack_00000008[1] < in_stack_00000010) {
        local_6 = local_6 + 1;
      }
      if (in_stack_00000018 < in_stack_00000008[1]) {
        local_8 = local_8 + 1;
      }
      in_stack_00000008 = in_stack_00000008 + 3;
      uVar4 = uVar4 + 1;
      uVar1 = uVar5;
      uVar2 = uVar6;
    } while (uVar4 < in_stack_00000004);
  }
  if ((((in_stack_00000004 == uVar5) || (in_stack_00000004 == uVar6)) ||
      (in_stack_00000004 == local_6)) || (in_stack_00000004 == local_8)) {
    uVar3 = CONCAT22((short)((uint)in_stack_00000008 >> 0x10),1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* Ghidra address: 00409678; FUN_00409678 */

void FUN_00409678(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = &PTR_LAB_0043535c;
  *(undefined2 *)(in_stack_00000004 + 1) = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_stack_00000004 = &PTR_LAB_00435330;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return;
}


/* Ghidra address: 004096a4; FUN_004096a4 */

int * FUN_004096a4(void)

{
  int *in_stack_00000004;
  
  *in_stack_00000004 = (int)&PTR_LAB_0043535c;
  *(undefined2 *)(in_stack_00000004 + 1) = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_stack_00000004 = (int)&PTR_LAB_00435330;
  (**(code **)(*in_stack_00000004 + 4))();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 004096e4; FUN_004096e4 */

undefined4 FUN_004096e4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_0042e284();
  if ((short)iVar1 == -1) {
    return 0;
  }
  uVar2 = thunk_FUN_0042e178();
  return CONCAT22((short)((uint)uVar2 >> 0x10),1);
}


/* Ghidra address: 0040971c; FUN_0040971c */

void FUN_0040971c(void)

{
  int iVar1;
  int in_stack_00000004;
  undefined2 in_stack_0000000c;
  
  if (*(short *)(in_stack_00000004 + 4) != 0) {
    FUN_00427b9f();
  }
  iVar1 = thunk_FUN_0042e284();
  *(short *)(in_stack_00000004 + 6) = (short)iVar1;
  if ((short)iVar1 == -1) {
    FUN_00427b9f();
  }
  *(undefined2 *)(in_stack_00000004 + 4) = in_stack_0000000c;
  return;
}


/* Ghidra address: 0040978c; FUN_0040978c */

int FUN_0040978c(void)

{
  char *pcVar1;
  short sVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if (*(short *)(in_stack_00000004 + 4) != 1) {
    FUN_00427b9f();
  }
  if (in_stack_0000000c < 0) {
    in_stack_0000000c = in_stack_0000000c + 0x3fff;
  }
  iVar3 = in_stack_0000000c >> 0xe;
  sVar2 = (short)iVar3;
  while (0 < sVar2) {
    pcVar1 = thunk_FUN_0042da20();
    if (pcVar1 == (char *)0xffffffff) {
      FUN_00427b9f();
    }
    iVar3 = iVar3 + -1;
    sVar2 = (short)iVar3;
  }
  pcVar1 = thunk_FUN_0042da20();
  if (pcVar1 == (char *)0xffffffff) {
    FUN_00427b9f();
  }
  return (int)*(short *)(in_stack_00000004 + 6);
}


/* Ghidra address: 00409828; FUN_00409828 */

int FUN_00409828(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if (*(short *)(in_stack_00000004 + 4) != 2) {
    FUN_00427b9f();
  }
  if (in_stack_0000000c < 0) {
    in_stack_0000000c = in_stack_0000000c + 0x3fff;
  }
  iVar3 = in_stack_0000000c >> 0xe;
  sVar2 = (short)iVar3;
  while (0 < sVar2) {
    iVar1 = thunk_FUN_0042dc08();
    if (iVar1 == -1) {
      FUN_00427b9f();
    }
    iVar3 = iVar3 + -1;
    sVar2 = (short)iVar3;
  }
  iVar3 = thunk_FUN_0042dc08();
  if (iVar3 == -1) {
    FUN_00427b9f();
  }
  return (int)*(short *)(in_stack_00000004 + 6);
}


/* Ghidra address: 0040994f; FUN_0040994f */

void FUN_0040994f(void)

{
  int in_stack_00000004;
  
  thunk_FUN_0042e178();
  *(undefined2 *)(in_stack_00000004 + 4) = 0;
  return;
}


/* Ghidra address: 0040996a; FUN_0040996a */

void FUN_0040996a(void)

{
  thunk_FUN_0042e20c();
  return;
}


/* Ghidra address: 00409a20; FUN_00409a20 */

void FUN_00409a20(void)

{
  undefined2 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 3) = 0;
  *(undefined4 *)(in_stack_00000004 + 1) = 0;
  return;
}


/* Ghidra address: 00409a38; FUN_00409a38 */

void FUN_00409a38(void)

{
  DWORD DVar1;
  short *in_stack_00000004;
  
  if (*in_stack_00000004 == 0) {
    DVar1 = timeGetTime();
    *(DWORD *)(in_stack_00000004 + 1) = DVar1;
    *in_stack_00000004 = 1;
  }
  return;
}


/* Ghidra address: 00409a58; FUN_00409a58 */

undefined4 FUN_00409a58(void)

{
  DWORD DVar1;
  short *in_stack_00000004;
  
  if (*in_stack_00000004 != 0) {
    DVar1 = timeGetTime();
    *(DWORD *)(in_stack_00000004 + 3) = DVar1 - *(int *)(in_stack_00000004 + 1);
  }
  return *(undefined4 *)(in_stack_00000004 + 3);
}


/* Ghidra address: 00409a78; FUN_00409a78 */

uint FUN_00409a78(void)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 / 0x37;
}


/* Ghidra address: 00409a8c; FUN_00409a8c */

void FUN_00409a8c(void)

{
  short *in_stack_00000004;
  
  if (*in_stack_00000004 != 0) {
    FUN_00409a58();
    *in_stack_00000004 = 0;
  }
  return;
}


/* Ghidra address: 00409ad0; FUN_00409ad0 */

void FUN_00409ad0(void)

{
  short *psVar1;
  short in_stack_00000004;
  short in_stack_00000008;
  short in_stack_0000000c;
  
  psVar1 = FUN_00410304();
  *psVar1 = in_stack_00000004;
  psVar1[1] = in_stack_00000008;
  psVar1[2] = in_stack_0000000c;
  *(int *)(psVar1 + 5) = (int)in_stack_00000004 * (int)in_stack_00000008;
  *(short **)(psVar1 + 7) = psVar1 + 9;
  psVar1[4] = 0;
  psVar1[3] = 1;
  return;
}


/* Ghidra address: 00409b1c; FUN_00409b1c */

void FUN_00409b1c(void)

{
  FUN_0041034c();
  return;
}


/* Ghidra address: 00409b2c; FUN_00409b2c */

void FUN_00409b2c(void)

{
  int *in_stack_00000004;
  
  (**(code **)(*in_stack_00000004 + 0x10))();
  return;
}


/* Ghidra address: 00409c0c; FUN_00409c0c */

LPVOID FUN_00409c0c(void)

{
  LPVOID pvVar1;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  pvVar1 = FUN_00410304();
  (**(code **)(*in_stack_00000004 + 0xc))
            (in_stack_00000004,*in_stack_00000004,in_stack_00000008,in_stack_00000004,pvVar1);
  *(int *)((int)pvVar1 + 0xe) = (int)pvVar1 + 0x12;
  *(undefined2 *)((int)pvVar1 + 8) = 0;
  *(undefined2 *)((int)pvVar1 + 6) = 1;
  return pvVar1;
}


/* Ghidra address: 00409c44; FUN_00409c44 */

LPVOID FUN_00409c44(void)

{
  LPVOID pvVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined2 local_8;
  
  FUN_0042b4b4(0x4353b0);
  thunk_FUN_0042cddc();
  FUN_0042bcf8();
  FUN_004096a4();
  FUN_0042dce8();
  pvVar1 = FUN_00409c0c();
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (local_8 != 0) {
    (*(code *)PTR_FUN_00435338)();
  }
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return pvVar1;
}


/* Ghidra address: 00409d14; FUN_00409d14 */

/* WARNING: Removing unreachable block (ram,0x00409e32) */

LPVOID FUN_00409d14(void)

{
  LPVOID pvVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x4353d4);
  thunk_FUN_0042cddc();
  FUN_0042bcf8();
  FUN_004096a4();
  FUN_00410304();
  FUN_0040978c();
  pvVar1 = FUN_00410304();
  FUN_00428fe4();
  FUN_0041034c();
  FUN_0040978c();
  thunk_FUN_0042e178();
  FUN_00428fe4();
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return pvVar1;
}


/* Ghidra address: 00409e58; FUN_00409e58 */

void FUN_00409e58(void)

{
  FUN_00409d14();
  return;
}


/* Ghidra address: 00409f40; FUN_00409f40 */

void FUN_00409f40(void)

{
  int in_stack_00000004;
  ushort in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  
  if (in_stack_0000000c == 0) {
    in_stack_0000000c = 1;
  }
  if (in_stack_0000000c < in_stack_00000010) {
    in_stack_00000010 = in_stack_0000000c;
  }
  *(ushort *)(in_stack_00000004 + 4) = *(ushort *)(in_stack_00000004 + 4) | in_stack_00000008;
  *(short *)(in_stack_00000004 + 6) = in_stack_0000000c;
  *(short *)(in_stack_00000004 + 8) = in_stack_00000010;
  return;
}


/* Ghidra address: 00409f70; FUN_00409f70 */

undefined1 * FUN_00409f70(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint unaff_ESI;
  short sVar4;
  short *in_stack_00000004;
  undefined1 *local_8;
  
  if (((in_stack_00000004[2] & 0x40U) == 0) && ((in_stack_00000004[2] & 0x400U) == 0)) {
    if (((in_stack_00000004[2] & 0x80U) == 0) && ((in_stack_00000004[2] & 0x800U) == 0)) {
      if (((in_stack_00000004[2] & 0x100U) == 0) && ((in_stack_00000004[2] & 0x1000U) == 0)) {
        if (((in_stack_00000004[2] & 0x200U) == 0) && ((in_stack_00000004[2] & 0x2000U) == 0)) {
          if ((*(byte *)((int)in_stack_00000004 + 5) & 0x40) == 0) {
            puVar1 = *(undefined1 **)(in_stack_00000004 + 7);
          }
          else {
            if (in_stack_00000004[4] != 0) {
              unaff_ESI = ((int)*in_stack_00000004 / (int)in_stack_00000004[3]) *
                          (int)in_stack_00000004[4];
            }
            uVar2 = 0;
            puVar1 = &DAT_00446bc8;
            local_8 = *(undefined1 **)(in_stack_00000004 + 7);
            for (iVar3 = 0; iVar3 < *(int *)(in_stack_00000004 + 5); iVar3 = iVar3 + 1) {
              if (uVar2 == (unaff_ESI & 0xffff)) {
                *puVar1 = *local_8;
                uVar2 = 0;
              }
              else {
                *puVar1 = 0;
                uVar2 = uVar2 + 1;
              }
              puVar1 = puVar1 + 1;
              local_8 = local_8 + 1;
            }
            puVar1 = &DAT_00446bc8;
          }
        }
        else {
          FUN_00428fe4();
          if ((*(byte *)((int)in_stack_00000004 + 5) & 0x20) == 0) {
            FUN_00429054();
          }
          else {
            FUN_00428fe4();
          }
          puVar1 = &DAT_00446bc8;
        }
      }
      else {
        FUN_00428fe4();
        if ((*(byte *)((int)in_stack_00000004 + 5) & 0x10) == 0) {
          FUN_00429054();
        }
        else {
          FUN_00428fe4();
        }
        puVar1 = &DAT_00446bc8;
      }
    }
    else {
      FUN_00428fe4();
      if ((*(byte *)((int)in_stack_00000004 + 5) & 8) == 0) {
        for (sVar4 = 0; sVar4 < in_stack_00000004[1]; sVar4 = sVar4 + 1) {
          FUN_00429054();
        }
      }
      else {
        for (sVar4 = 0; sVar4 < in_stack_00000004[1]; sVar4 = sVar4 + 1) {
          FUN_00428fe4();
        }
      }
      puVar1 = &DAT_00446bc8;
    }
  }
  else {
    FUN_00428fe4();
    if ((*(byte *)((int)in_stack_00000004 + 5) & 4) == 0) {
      for (sVar4 = 0; sVar4 < in_stack_00000004[1]; sVar4 = sVar4 + 1) {
        FUN_00429054();
      }
    }
    else {
      for (sVar4 = 0; sVar4 < in_stack_00000004[1]; sVar4 = sVar4 + 1) {
        FUN_00428fe4();
      }
    }
    puVar1 = &DAT_00446bc8;
  }
  return puVar1;
}


/* Ghidra address: 0040a29c; FUN_0040a29c */

/* WARNING: Removing unreachable block (ram,0x0040a464) */

uint * FUN_0040a29c(void)

{
  int iVar1;
  LPVOID pvVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000008;
  int local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x43541c);
  FUN_004096a4();
  FUN_0042dce8();
  pvVar2 = FUN_00410304();
  FUN_0042dce8();
  FUN_0040978c();
  thunk_FUN_0042e178();
  iVar8 = *(int *)((int)pvVar2 + 0x12);
  iVar1 = *(int *)((int)pvVar2 + 0x16);
  puVar3 = FUN_00410304();
  *puVar3 = *(uint *)((int)pvVar2 + 0x12);
  puVar3[1] = *(uint *)((int)pvVar2 + 0x16);
  puVar3[2] = iVar8 * iVar1;
  puVar3[3] = (uint)(puVar3 + 4);
  uVar5 = *puVar3 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  if (uVar5 == 0) {
    uVar5 = *puVar3;
  }
  else {
    uVar5 = *puVar3;
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + 3;
    }
    uVar5 = ((int)uVar5 >> 2) * 4 + 4;
  }
  local_38 = (undefined1 *)((puVar3[1] - 1) * *puVar3 + puVar3[3]);
  local_3c = (undefined1 *)(*(int *)((int)pvVar2 + 10) + (int)pvVar2);
  for (local_40 = 0; local_40 < (int)puVar3[1]; local_40 = local_40 + 1) {
    puVar7 = local_3c;
    puVar6 = local_38;
    for (iVar8 = 0; iVar8 < (int)*puVar3; iVar8 = iVar8 + 1) {
      *puVar6 = *puVar7;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_3c = local_3c + uVar5;
    local_38 = local_38 + -*puVar3;
  }
  local_40 = 0;
  puVar7 = (undefined1 *)(in_stack_00000008 + 2);
  pbVar4 = (byte *)((int)pvVar2 + 0x36);
  do {
    if ((*pbVar4 == 0 && pbVar4[1] == 0) && pbVar4[2] == 0) {
      *puVar7 = 0;
      puVar7[-1] = 0;
      puVar7[-2] = 0;
    }
    else {
      *puVar7 = (char)((int)(uint)*pbVar4 >> 2);
      puVar7[-1] = (char)((int)(uint)pbVar4[1] >> 2);
      puVar7[-2] = (char)((int)(uint)pbVar4[2] >> 2);
    }
    local_40 = local_40 + 1;
    puVar7 = puVar7 + 3;
    pbVar4 = pbVar4 + 4;
  } while (local_40 < 0x100);
  FUN_0041034c();
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return puVar3;
}


/* Ghidra address: 0040a488; FUN_0040a488 */

/* WARNING: Removing unreachable block (ram,0x0040a5df) */

void FUN_0040a488(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 *in_stack_00000008;
  undefined4 local_464;
  int local_460;
  int local_45c;
  undefined2 local_3c;
  int local_3a;
  undefined2 local_36;
  undefined2 local_34;
  undefined4 local_32;
  undefined4 local_2c;
  undefined2 local_1c;
  
  bVar3 = 0;
  FUN_0042b4b4(0x435440);
  puVar2 = &local_464;
  for (iVar1 = 0x10a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  if (local_45c < 0) {
    local_45c = -local_45c;
  }
  local_3c = 0x4d42;
  local_36 = 0;
  local_34 = 0;
  local_32 = 0x436;
  local_3a = local_460 * local_45c + 0x436;
  thunk_FUN_0042cddc();
  local_1c = 8;
  FUN_0042bcf8();
  FUN_004096a4();
  FUN_00409828();
  FUN_00409828();
  for (iVar1 = 0; iVar1 < local_45c; iVar1 = iVar1 + 1) {
    FUN_00409828();
  }
  thunk_FUN_0042e178();
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return;
}


/* Ghidra address: 0040a600; FUN_0040a600 */

void FUN_0040a600(void)

{
  DAT_00435454 = DAT_00435454 + 1;
  FUN_0040fbe8();
  FUN_0042cfc4();
  FUN_0040a488();
  return;
}


/* Ghidra address: 0040a644; FUN_0040a644 */

int FUN_0040a644(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_00409ad0();
  FUN_00429008();
  *(undefined4 *)(iVar1 + 10) = *(undefined4 *)(in_stack_00000004 + 8);
  FUN_0041034c();
  return iVar1;
}


/* Ghidra address: 0040a6d0; FUN_0040a6d0 */

undefined4 FUN_0040a6d0(void)

{
  return DAT_0043547c;
}


/* Ghidra address: 0040a6d8; FUN_0040a6d8 */

void FUN_0040a6d8(void)

{
  undefined4 in_stack_00000004;
  
  DAT_0043547c = in_stack_00000004;
  return;
}


/* Ghidra address: 0040a6e8; FUN_0040a6e8 */

void FUN_0040a6e8(void)

{
  undefined4 in_stack_00000004;
  
  DAT_0043547c = in_stack_00000004;
  return;
}


/* Ghidra address: 0040a6f8; FUN_0040a6f8 */

void FUN_0040a6f8(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = &PTR_FUN_0043548c;
  *(undefined2 *)(in_stack_00000004 + 1) = 1;
  *(undefined2 *)((int)in_stack_00000004 + 6) = 8;
  in_stack_00000004[2] = 0x5622;
  in_stack_00000004[3] = 0;
  in_stack_00000004[5] = 0;
  in_stack_00000004[4] = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return;
}


/* Ghidra address: 0040a730; FUN_0040a730 */

void FUN_0040a730(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_0043548c;
    FUN_0040a7fc();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 0040a760; FUN_0040a760 */

void FUN_0040a760(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  *(undefined2 *)(in_stack_00000004 + 4) = *(undefined2 *)(in_stack_00000008 + 4);
  *(undefined2 *)(in_stack_00000004 + 6) = *(undefined2 *)(in_stack_00000008 + 6);
  *(undefined4 *)(in_stack_00000004 + 8) = *(undefined4 *)(in_stack_00000008 + 8);
  *(undefined4 *)(in_stack_00000004 + 0xc) = *(undefined4 *)(in_stack_00000008 + 0xc);
  if ((*(int *)(in_stack_00000008 + 0x10) != 0) && (*(int *)(in_stack_00000004 + 0xc) != 0)) {
    *(int *)(in_stack_00000004 + 0x10) = *(int *)(in_stack_00000008 + 0x10);
  }
  if (*(int *)(in_stack_00000008 + 0x14) != 0) {
    *(int *)(in_stack_00000004 + 0x14) = *(int *)(in_stack_00000008 + 0x14);
  }
  return;
}


/* Ghidra address: 0040a7a4; FUN_0040a7a4 */

undefined4
FUN_0040a7a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            short param_5)

{
  undefined4 uVar1;
  
  if (DAT_0043547c != (int *)0x0) {
    if (param_5 != 0) {
      param_3 = param_4;
      FUN_0040a7fc();
    }
    uVar1 = (**(code **)(*DAT_0043547c + 0x10))
                      (DAT_0043547c,*DAT_0043547c,param_3,DAT_0043547c,param_4);
    return uVar1;
  }
  return 0;
}


/* Ghidra address: 0040a7dc; FUN_0040a7dc */

undefined4 FUN_0040a7dc(void)

{
  undefined4 uVar1;
  
  if (DAT_0043547c != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_0043547c + 0x14))();
    return uVar1;
  }
  return 0;
}


/* Ghidra address: 0040a7fc; FUN_0040a7fc */

void FUN_0040a7fc(void)

{
  if (DAT_0043547c != (int *)0x0) {
    (**(code **)(*DAT_0043547c + 0x20))();
  }
  return;
}


/* Ghidra address: 0040a818; FUN_0040a818 */

void FUN_0040a818(void)

{
  if (DAT_0043547c != (int *)0x0) {
    (**(code **)(*DAT_0043547c + 0x1c))();
  }
  return;
}


/* Ghidra address: 0040a830; FUN_0040a830 */

undefined4 FUN_0040a830(void)

{
  undefined4 uVar1;
  
  if (DAT_0043547c != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_0043547c + 0x30))();
    return uVar1;
  }
  return 0;
}


/* Ghidra address: 0040a858; FUN_0040a858 */

void FUN_0040a858(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x14) = in_stack_00000008;
  return;
}


/* Ghidra address: 0040a8ac; FUN_0040a8ac */

void FUN_0040a8ac(void)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int in_stack_00000004;
  short in_stack_00000008;
  
  uVar6 = (int)in_stack_00000008 >> 1;
  uVar5 = (ushort)uVar6;
  while (0 < (short)uVar5) {
    sVar4 = (short)uVar6;
    for (sVar1 = sVar4; sVar1 < in_stack_00000008; sVar1 = sVar1 + 1) {
      sVar3 = sVar1 - sVar4;
      while ((-1 < sVar3 &&
             (*(short *)(*(int *)(in_stack_00000004 + sVar3 * 4) + 0x17) <
              *(short *)(*(int *)(in_stack_00000004 + ((int)sVar3 + (int)sVar4) * 4) + 0x17)))) {
        iVar7 = (int)sVar3;
        uVar2 = *(undefined4 *)(in_stack_00000004 + iVar7 * 4);
        *(undefined4 *)(in_stack_00000004 + iVar7 * 4) =
             *(undefined4 *)(in_stack_00000004 + (iVar7 + sVar4) * 4);
        *(undefined4 *)(in_stack_00000004 + ((int)sVar3 + (int)sVar4) * 4) = uVar2;
        sVar3 = sVar3 - sVar4;
      }
    }
    uVar5 = sVar4 >> 1;
    uVar6 = (uint)uVar5;
  }
  return;
}


/* Ghidra address: 0040a940; FUN_0040a940 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a940(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_0000000e;
  short in_stack_00000020;
  short in_stack_00000022;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  short in_stack_00000030;
  undefined2 in_stack_00000032;
  undefined2 in_stack_00000034;
  int in_stack_00000036;
  undefined2 in_stack_0000003a;
  
  DAT_0044ebc8 = in_stack_00000008;
  _DAT_0044ebcc = in_stack_0000000c;
  _DAT_0044ebce = in_stack_0000000e;
  iVar1 = (int)in_stack_0000000e >> 1;
  DAT_0044ebe4 = in_stack_00000020;
  iVar3 = (int)in_stack_0000000c >> 1;
  _DAT_0044ebe6 = in_stack_0000003a;
  iVar2 = in_stack_00000020 * iVar3 >> 3;
  DAT_0044ebd4 = iVar3 - iVar2;
  DAT_0044ebdc = iVar2 + -1 + iVar3;
  iVar2 = in_stack_00000020 * iVar1 >> 3;
  DAT_0044ebd8 = iVar1 - iVar2;
  DAT_0044ebe0 = iVar2 + -1 + iVar1;
  DAT_0044ebd0 = (short)(DAT_0044ebd4 >> 1) + (short)(DAT_0044ebdc >> 1);
  DAT_0044ebd2 = (short)(DAT_0044ebd8 >> 1) + (short)(DAT_0044ebe0 >> 1) +
                 (short)((int)DAT_00435498 * (int)in_stack_00000020 >> 3);
  DAT_0044ebe8 = in_stack_00000022;
  DAT_0044ebea = 0;
  DAT_0044ebf8 = in_stack_00000024;
  DAT_0044ebfc = in_stack_00000028;
  DAT_0044ec00 = in_stack_0000002c;
  DAT_0044ebf4 = *(undefined4 *)(&DAT_00446554 + in_stack_00000030 * 4);
  DAT_0044ebf0 = *(undefined4 *)(&DAT_00445fb0 + in_stack_00000030 * 4);
  _DAT_0044ec04 = in_stack_00000032;
  _DAT_0044ec06 = in_stack_00000034;
  DAT_0044ec08 = in_stack_00000036;
  if (in_stack_00000036 != 0) {
    FUN_0040afbc();
  }
  if (0 < DAT_0044ebe8) {
    DAT_0044ebec = FUN_004319bc();
    return;
  }
  DAT_0044ebec = 0;
  return;
}


/* Ghidra address: 0040aad4; FUN_0040aad4 */

void FUN_0040aad4(void)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4354de);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    while (0 < DAT_0044ebea) {
      DAT_0044ebea = DAT_0044ebea + -1;
      sVar2 = (**(code **)(**(int **)(DAT_0044ebea * 4 + DAT_0044ebec) + 0x10))();
      if ((sVar2 != 0) &&
         (puVar1 = *(undefined4 **)(DAT_0044ebec + DAT_0044ebea * 4), puVar1 != (undefined4 *)0x0))
      {
        iVar3 = FUN_0042b677();
        *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
        (**(code **)*puVar1)();
      }
    }
    if (0 < DAT_0044ebe8) {
      FUN_00431964();
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 0040abac; FUN_0040abac */

void FUN_0040abac(void)

{
  byte *pbVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined2 *puVar5;
  short sVar6;
  short *psVar7;
  short sVar8;
  short local_e;
  short local_c;
  short local_6;
  
  FUN_0040a8ac();
  local_6 = ((short)DAT_0044ebdc - (short)DAT_0044ebd4) + 1;
  sVar6 = (short)DAT_0044ebd4;
  if ((short)DAT_0044ebd4 < 0) {
    sVar6 = 0;
  }
  sVar4 = (short)DAT_0044ebdc;
  if (0x513 < (short)DAT_0044ebdc) {
    sVar4 = 0x513;
  }
  puVar5 = (undefined2 *)(&DAT_0044ec0c + sVar6 * 2);
  for (sVar8 = sVar6; sVar3 = DAT_0044ebea, sVar8 <= sVar4; sVar8 = sVar8 + 1) {
    *puVar5 = 1;
    puVar5 = puVar5 + 1;
  }
  do {
    do {
      while( true ) {
        while( true ) {
          sVar3 = sVar3 + -1;
          if (sVar3 < 0) {
            return;
          }
          if (0 < local_6) break;
          iVar2 = *(int *)(DAT_0044ebec + sVar3 * 4);
          pbVar1 = (byte *)(iVar2 + 0x16);
          *pbVar1 = *pbVar1 & 0xfe;
          *(undefined2 *)(iVar2 + 0x17) = 0;
        }
        (**(code **)(**(int **)(DAT_0044ebec + sVar3 * 4) + 4))();
        if (local_c < sVar6) {
          local_c = sVar6;
        }
        if (sVar4 < local_e) {
          local_e = sVar4;
        }
        if ((*(byte *)(*(int *)(DAT_0044ebec + sVar3 * 4) + 0x16) & 2) == 0) break;
        iVar2 = *(int *)(DAT_0044ebec + sVar3 * 4);
        pbVar1 = (byte *)(iVar2 + 0x16);
        *pbVar1 = *pbVar1 & 0xfe;
        *(undefined2 *)(iVar2 + 0x17) = 0;
        psVar7 = (short *)(&DAT_0044ec0c + local_c * 2);
        for (sVar8 = local_c; sVar8 <= local_e; sVar8 = sVar8 + 1) {
          if (*psVar7 == 1) {
            pbVar1 = (byte *)(*(int *)(DAT_0044ebec + sVar3 * 4) + 0x16);
            *pbVar1 = *pbVar1 | 1;
            local_6 = local_6 + -1;
            *psVar7 = 0;
          }
          psVar7 = psVar7 + 1;
        }
      }
      iVar2 = *(int *)(DAT_0044ebec + sVar3 * 4);
      pbVar1 = (byte *)(iVar2 + 0x16);
      *pbVar1 = *pbVar1 & 0xfe;
      *(undefined2 *)(iVar2 + 0x17) = 0;
      psVar7 = (short *)(&DAT_0044ec0c + local_c * 2);
      sVar8 = local_c;
    } while (local_e < local_c);
    do {
      if (*psVar7 == 1) {
        pbVar1 = (byte *)(*(int *)(DAT_0044ebec + sVar3 * 4) + 0x16);
        *pbVar1 = *pbVar1 | 1;
        break;
      }
      sVar8 = sVar8 + 1;
      psVar7 = psVar7 + 1;
    } while (sVar8 <= local_e);
  } while( true );
}


/* Ghidra address: 0040ad74; FUN_0040ad74 */

void FUN_0040ad74(void)

{
  int *piVar1;
  short sVar2;
  
  FUN_0040afbc();
  for (sVar2 = 0; sVar2 < DAT_0044ebea; sVar2 = sVar2 + 1) {
    piVar1 = *(int **)(DAT_0044ebec + sVar2 * 4);
    if ((*(byte *)((int)piVar1 + 0x16) & 1) != 0) {
      (**(code **)(*piVar1 + 8))(*piVar1,DAT_0044ebec,(int)sVar2,piVar1);
    }
  }
  return;
}


/* Ghidra address: 0040ae78; FUN_0040ae78 */

undefined4 * FUN_0040ae78(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = &PTR_LAB_004355f0;
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  FUN_00431b68();
  *(undefined2 *)(in_stack_00000004 + 8) = 0xf;
  *(undefined2 *)(in_stack_00000004 + 4) = 0xf;
  *(undefined2 *)((int)in_stack_00000004 + 0x22) = 0;
  *(undefined2 *)(in_stack_00000004 + 6) = 0;
  *(undefined2 *)((int)in_stack_00000004 + 0x16) = 0;
  *(undefined2 *)(in_stack_00000004 + 5) = 0;
  *(undefined2 *)((int)in_stack_00000004 + 0x12) = 0;
  *(undefined2 *)((int)in_stack_00000004 + 0x1a) = 1;
  *(undefined2 *)((int)in_stack_00000004 + 0xe) = 0;
  *(undefined1 *)((int)in_stack_00000004 + 0x34a) = 1;
  *(undefined1 *)((int)in_stack_00000004 + 0x34b) = 0;
  FUN_0040af18();
  FUN_0042649c();
  DAT_0044f640 = in_stack_00000004;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0040af18; FUN_0040af18 */

void FUN_0040af18(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000010;
  
  *(undefined4 *)(in_stack_00000004 + 0x32) = in_stack_00000008;
  *(undefined4 *)(in_stack_00000004 + 0x36) = in_stack_0000000c;
  *(undefined4 *)(in_stack_00000004 + 0x3e) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x3a) = 0;
  *(int *)(in_stack_00000004 + 0x42) = *(int *)(in_stack_00000004 + 0x32) + -1;
  *(int *)(in_stack_00000004 + 0x46) = *(int *)(in_stack_00000004 + 0x36) + -1;
  *(undefined1 *)(in_stack_00000004 + 0x34c) = in_stack_00000010;
  return;
}


/* Ghidra address: 0040af4c; FUN_0040af4c */

void FUN_0040af4c(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_LAB_004355f0;
    FUN_0041034c();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 0040af80; FUN_0040af80 */

void FUN_0040af80(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  iVar1 = in_stack_00000004[4];
  *(short *)(in_stack_00000004 + 4) = (short)in_stack_00000004[5];
  (**(code **)(*in_stack_00000004 + 0x3c))();
  *(short *)(in_stack_00000004 + 4) = (short)iVar1;
  return;
}


/* Ghidra address: 0040afb4; FUN_0040afb4 */

void FUN_0040afb4(void)

{
  return;
}


/* Ghidra address: 0040afbc; FUN_0040afbc */

undefined4 FUN_0040afbc(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  iVar1 = in_stack_00000010;
  iVar2 = in_stack_00000014;
  if (in_stack_00000010 < in_stack_00000008) {
    iVar1 = (int)(short)in_stack_00000008;
    iVar2 = (int)(short)in_stack_0000000c;
    in_stack_00000008 = in_stack_00000010;
    in_stack_0000000c = in_stack_00000014;
  }
  if ((in_stack_00000008 < 0) || (*(int *)(in_stack_00000004 + 0x32) <= in_stack_00000008)) {
    in_stack_00000008 = 0;
  }
  *(int *)(in_stack_00000004 + 0x3a) = in_stack_00000008;
  if ((iVar1 < 2) || (*(int *)(in_stack_00000004 + 0x32) <= iVar1)) {
    iVar1 = *(int *)(in_stack_00000004 + 0x32) + -1;
  }
  *(int *)(in_stack_00000004 + 0x42) = iVar1;
  if ((in_stack_0000000c < 0) || (*(int *)(in_stack_00000004 + 0x36) <= in_stack_0000000c)) {
    in_stack_0000000c = 0;
  }
  *(int *)(in_stack_00000004 + 0x3e) = in_stack_0000000c;
  if ((iVar2 < 2) || (*(int *)(in_stack_00000004 + 0x36) <= iVar2)) {
    iVar2 = *(int *)(in_stack_00000004 + 0x36) + -1;
  }
  *(int *)(in_stack_00000004 + 0x46) = iVar2;
  DAT_00434098 = *(undefined2 *)(in_stack_00000004 + 0x3a);
  DAT_0043409a = *(undefined2 *)(in_stack_00000004 + 0x42);
  DAT_0043409c = *(undefined2 *)(in_stack_00000004 + 0x3e);
  DAT_0043409e = *(undefined2 *)(in_stack_00000004 + 0x46);
  return CONCAT22((short)((uint)in_stack_00000004 >> 0x10),1);
}


/* Ghidra address: 0040b074; FUN_0040b074 */

void FUN_0040b074(void)

{
  int *in_stack_00000004;
  
  *(bool *)((int)in_stack_00000004 + 0x34a) = *(char *)((int)in_stack_00000004 + 0x34a) == '\0';
  (**(code **)(*in_stack_00000004 + 0x2c))();
  *(bool *)((int)in_stack_00000004 + 0x34b) = *(char *)((int)in_stack_00000004 + 0x34b) == '\0';
  (**(code **)(*in_stack_00000004 + 0x30))();
  return;
}


/* Ghidra address: 0040b0bc; FUN_0040b0bc */

void FUN_0040b0bc(void)

{
  return;
}


/* Ghidra address: 0040b0c0; FUN_0040b0c0 */

void FUN_0040b0c0(void)

{
  FUN_0040b0bc();
  return;
}


/* Ghidra address: 0040b0d0; FUN_0040b0d0 */

void FUN_0040b0d0(void)

{
  return;
}


/* Ghidra address: 0040b0d8; FUN_0040b0d8 */

void FUN_0040b0d8(void)

{
  FUN_00407db8();
  return;
}


/* Ghidra address: 0040b104; FUN_0040b104 */

void FUN_0040b104(void)

{
  return;
}


/* Ghidra address: 0040b10c; FUN_0040b10c */

void FUN_0040b10c(void)

{
  FUN_0040b104();
  return;
}


/* Ghidra address: 0040b11c; FUN_0040b11c */

void FUN_0040b11c(void)

{
  int iVar1;
  
  iVar1 = thunk_FUN_0042e284();
  if ((short)iVar1 == -1) {
    FUN_0042c50c();
  }
  else {
    thunk_FUN_0042da20();
    thunk_FUN_0042e178();
  }
  return;
}


/* Ghidra address: 0040b168; FUN_0040b168 */

void FUN_0040b168(void)

{
  int iVar1;
  
  iVar1 = thunk_FUN_0042e284();
  if ((short)iVar1 == -1) {
    FUN_0042c50c();
    return;
  }
  thunk_FUN_0042e178();
  return;
}


/* Ghidra address: 0040b1a8; FUN_0040b1a8 */

void FUN_0040b1a8(void)

{
  uint *puVar1;
  short sVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x435538);
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_00431b68();
  }
  sVar2 = 0;
  do {
    FUN_00407e34();
    FUN_0040b0d0();
    sVar2 = sVar2 + 3;
  } while (sVar2 < 0x65);
  FUN_00431954();
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 0040b238; FUN_0040b238 */

void FUN_0040b238(void)

{
  uint *puVar1;
  short sVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x435568);
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_00431b68();
  }
  sVar2 = 100;
  do {
    FUN_00407e34();
    FUN_0040b0d0();
    sVar2 = sVar2 + -3;
  } while (-1 < sVar2);
  FUN_00431954();
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 0040b2c8; FUN_0040b2c8 */

void FUN_0040b2c8(void)

{
  byte bVar1;
  short sVar2;
  undefined4 *in_stack_00000004;
  int in_stack_00000010;
  byte *in_stack_00000014;
  
  for (sVar2 = 0; sVar2 < in_stack_00000010; sVar2 = sVar2 + 1) {
    bVar1 = (**(code **)*in_stack_00000004)();
    if ((ushort)bVar1 == *(ushort *)(in_stack_00000004 + 5)) {
      bVar1 = 0xff;
    }
    *in_stack_00000014 = bVar1;
    in_stack_00000014 = in_stack_00000014 + 1;
  }
  return;
}


/* Ghidra address: 0040b34c; FUN_0040b34c */

void FUN_0040b34c(void)

{
  short sVar1;
  int *in_stack_00000004;
  int in_stack_00000010;
  
  for (sVar1 = 0; sVar1 < in_stack_00000010; sVar1 = sVar1 + 1) {
    (**(code **)(*in_stack_00000004 + 4))();
  }
  return;
}


/* Ghidra address: 0040b384; FUN_0040b384 */

void FUN_0040b384(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  
  for (; in_stack_00000008 <= in_stack_00000010; in_stack_00000008 = in_stack_00000008 + 1) {
    (**(code **)(*in_stack_00000004 + 4))();
  }
  return;
}


/* Ghidra address: 0040b3b4; FUN_0040b3b4 */

void FUN_0040b3b4(void)

{
  int *in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  for (; in_stack_0000000c <= in_stack_00000010; in_stack_0000000c = in_stack_0000000c + 1) {
    (**(code **)(*in_stack_00000004 + 4))();
  }
  return;
}


/* Ghidra address: 0040b7d8; FUN_0040b7d8 */

void FUN_0040b7d8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if (in_stack_00000010 < in_stack_00000008) {
    iVar2 = in_stack_00000010;
    iVar3 = in_stack_00000008;
    if (in_stack_00000008 < in_stack_00000010) {
      iVar2 = in_stack_00000008;
      iVar3 = in_stack_00000010;
    }
    if (((in_stack_0000000c < *(int *)((int)in_stack_00000004 + 0x3e)) ||
        (*(int *)((int)in_stack_00000004 + 0x46) < in_stack_0000000c)) ||
       ((iVar3 < *(int *)((int)in_stack_00000004 + 0x3a) ||
        (*(int *)((int)in_stack_00000004 + 0x42) < iVar2)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*in_stack_00000004 + 0x14))();
    }
  }
  else {
    iVar2 = in_stack_00000010;
    iVar3 = in_stack_00000008;
    if (in_stack_00000010 < in_stack_00000008) {
      iVar2 = in_stack_00000008;
      iVar3 = in_stack_00000010;
    }
    if ((((in_stack_0000000c < *(int *)((int)in_stack_00000004 + 0x3e)) ||
         (*(int *)((int)in_stack_00000004 + 0x46) < in_stack_0000000c)) ||
        (iVar2 < *(int *)((int)in_stack_00000004 + 0x3a))) ||
       (*(int *)((int)in_stack_00000004 + 0x42) < iVar3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*in_stack_00000004 + 0x14))();
    }
  }
  if (in_stack_00000010 < in_stack_00000008) {
    iVar2 = in_stack_00000010;
    iVar3 = in_stack_00000008;
    if (in_stack_00000008 < in_stack_00000010) {
      iVar2 = in_stack_00000008;
      iVar3 = in_stack_00000010;
    }
    if ((((in_stack_00000014 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
         (*(int *)((int)in_stack_00000004 + 0x46) < in_stack_00000014)) ||
        (iVar3 < *(int *)((int)in_stack_00000004 + 0x3a))) ||
       (*(int *)((int)in_stack_00000004 + 0x42) < iVar2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*in_stack_00000004 + 0x14))();
    }
  }
  else {
    iVar2 = in_stack_00000010;
    iVar3 = in_stack_00000008;
    if (in_stack_00000010 < in_stack_00000008) {
      iVar2 = in_stack_00000008;
      iVar3 = in_stack_00000010;
    }
    if (((in_stack_00000014 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
        (*(int *)((int)in_stack_00000004 + 0x46) < in_stack_00000014)) ||
       ((iVar2 < *(int *)((int)in_stack_00000004 + 0x3a) ||
        (*(int *)((int)in_stack_00000004 + 0x42) < iVar3)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*in_stack_00000004 + 0x14))();
    }
  }
  if (in_stack_00000014 < in_stack_0000000c) {
    iVar2 = in_stack_00000014;
    iVar3 = in_stack_0000000c;
    if (in_stack_0000000c < in_stack_00000014) {
      iVar2 = in_stack_0000000c;
      iVar3 = in_stack_00000014;
    }
    if (((in_stack_00000008 < *(int *)((int)in_stack_00000004 + 0x3a)) ||
        (*(int *)((int)in_stack_00000004 + 0x42) < in_stack_00000008)) ||
       ((iVar3 < *(int *)((int)in_stack_00000004 + 0x3e) ||
        (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*in_stack_00000004 + 0x18))();
    }
  }
  else {
    iVar2 = in_stack_00000014;
    iVar3 = in_stack_0000000c;
    if (in_stack_00000014 < in_stack_0000000c) {
      iVar2 = in_stack_0000000c;
      iVar3 = in_stack_00000014;
    }
    if (((in_stack_00000008 < *(int *)((int)in_stack_00000004 + 0x3a)) ||
        (*(int *)((int)in_stack_00000004 + 0x42) < in_stack_00000008)) ||
       ((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e) ||
        (*(int *)((int)in_stack_00000004 + 0x46) < iVar3)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*in_stack_00000004 + 0x18))();
    }
  }
  if (in_stack_00000014 < in_stack_0000000c) {
    iVar2 = in_stack_00000014;
    if (in_stack_0000000c < in_stack_00000014) {
      iVar2 = in_stack_0000000c;
      in_stack_0000000c = in_stack_00000014;
    }
    if (((in_stack_00000010 < *(int *)((int)in_stack_00000004 + 0x3a)) ||
        (*(int *)((int)in_stack_00000004 + 0x42) < in_stack_00000010)) ||
       ((in_stack_0000000c < *(int *)((int)in_stack_00000004 + 0x3e) ||
        (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*in_stack_00000004 + 0x18))();
    }
  }
  else {
    iVar2 = in_stack_00000014;
    if (in_stack_00000014 < in_stack_0000000c) {
      iVar2 = in_stack_0000000c;
      in_stack_0000000c = in_stack_00000014;
    }
    if ((((in_stack_00000010 < *(int *)((int)in_stack_00000004 + 0x3a)) ||
         (*(int *)((int)in_stack_00000004 + 0x42) < in_stack_00000010)) ||
        (iVar2 < *(int *)((int)in_stack_00000004 + 0x3e))) ||
       (*(int *)((int)in_stack_00000004 + 0x46) < in_stack_0000000c)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*in_stack_00000004 + 0x18))();
    }
  }
  return;
}


/* Ghidra address: 0040bcec; FUN_0040bcec */

void FUN_0040bcec(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  iVar3 = *(int *)((int)in_stack_00000004 + 0x46);
  iVar1 = *(int *)((int)in_stack_00000004 + 0x3e);
  if ((((in_stack_00000010 < *(int *)((int)in_stack_00000004 + 0x3a)) ||
       (*(int *)((int)in_stack_00000004 + 0x42) < in_stack_00000008)) || (in_stack_00000014 < iVar1)
      ) || (iVar3 < in_stack_0000000c)) {
    bVar2 = false;
  }
  else {
    if (in_stack_0000000c < iVar1) {
      in_stack_0000000c = iVar1;
    }
    if (in_stack_00000014 <= iVar3) {
      iVar3 = in_stack_00000014;
    }
    bVar2 = true;
    in_stack_00000014 = iVar3;
  }
  if (bVar2) {
    for (; in_stack_0000000c <= in_stack_00000014; in_stack_0000000c = in_stack_0000000c + 1) {
      (**(code **)(*in_stack_00000004 + 0x14))();
    }
  }
  return;
}


/* Ghidra address: 0040bd98; FUN_0040bd98 */

void FUN_0040bd98(void)

{
  short sVar1;
  undefined2 uVar2;
  bool bVar3;
  short sVar4;
  short *psVar5;
  short sVar6;
  int *piVar7;
  short sVar8;
  ushort uVar9;
  short *psVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *in_stack_00000004;
  int *in_stack_00000008;
  short *local_4c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  
  local_1a = (short)*in_stack_00000008;
  sVar6 = local_1a + -1;
  sVar1 = local_1a * 2;
  if (0x14 < local_1a) {
    local_1a = 0x14;
  }
  local_a = (short)in_stack_00000008[2];
  local_14 = 1;
  local_8 = local_a;
  piVar7 = in_stack_00000008;
  if (1 < sVar1) {
    do {
      piVar7 = piVar7 + 2;
      if (*piVar7 < (int)local_8) {
        local_8 = (short)*piVar7;
      }
      if ((int)local_a < *piVar7) {
        local_a = (short)*piVar7;
      }
      local_14 = local_14 + 2;
    } while (local_14 < sVar1);
  }
  for (; local_8 <= local_a; local_8 = local_8 + 1) {
    local_18 = -1;
    local_16 = 0;
    local_4c = (short *)((int)&DAT_0044f640 + 2);
    piVar7 = in_stack_00000008 + 1;
    if (0 < local_1a) {
      do {
        sVar1 = (short)piVar7[1];
        if (local_16 == sVar6) {
          local_10 = (short)in_stack_00000008[1];
          local_12 = (short)in_stack_00000008[2];
        }
        else {
          local_10 = (short)piVar7[2];
          local_12 = (short)piVar7[3];
        }
        local_e = sVar1;
        local_c = (short)*piVar7;
        if (local_12 < sVar1) {
          local_c = local_10;
          local_e = local_12;
          local_12 = sVar1;
          local_10 = (short)*piVar7;
        }
        psVar10 = (short *)(&DAT_0044f66e + local_16 * 2);
        psVar5 = (short *)(&DAT_0044f698 + local_16 * 2);
        if (local_8 == local_e) {
          *psVar5 = 0;
          *psVar10 = local_c;
        }
        else if ((local_e <= local_8) && (local_8 <= local_12)) {
          local_12 = local_12 - local_e;
          if (local_10 < local_c) {
            *psVar5 = *psVar5 + (local_c - local_10) * 2;
            while (local_12 < *psVar5) {
              *psVar5 = *psVar5 + local_12 * -2;
              *psVar10 = *psVar10 + -1;
            }
          }
          else {
            *psVar5 = *psVar5 + (local_10 - local_c) * 2;
            while (local_12 < *psVar5) {
              *psVar5 = *psVar5 + local_12 * -2;
              *psVar10 = *psVar10 + 1;
            }
          }
          local_18 = local_18 + 1;
          local_4c = local_4c + 1;
          *local_4c = local_16;
        }
        local_16 = local_16 + 1;
        piVar7 = piVar7 + 2;
      } while (local_16 < local_1a);
    }
    uVar11 = (int)local_18 >> 1;
    uVar9 = (ushort)uVar11;
    while (0 < (short)uVar9) {
      sVar8 = (short)uVar11;
      for (sVar1 = sVar8; sVar1 < local_18; sVar1 = sVar1 + 1) {
        for (sVar4 = sVar1 - sVar8;
            (-1 < sVar4 &&
            ((short)(&DAT_0044f644)[(int)sVar4 + (int)sVar8] < (short)(&DAT_0044f644)[sVar4]));
            sVar4 = sVar4 - sVar8) {
          uVar2 = (&DAT_0044f644)[sVar4];
          (&DAT_0044f644)[sVar4] = (&DAT_0044f644)[(int)sVar4 + (int)sVar8];
          (&DAT_0044f644)[(int)sVar4 + (int)sVar8] = uVar2;
        }
      }
      uVar9 = sVar8 >> 1;
      uVar11 = (uint)uVar9;
    }
    local_14 = 0;
    local_4c = &DAT_0044f646;
    if (0 < local_18) {
      do {
        iVar15 = (int)local_8;
        iVar12 = (int)*(short *)(&DAT_0044f66e + *local_4c * 2);
        iVar14 = (int)*(short *)(&DAT_0044f66e + local_4c[-1] * 2);
        if (iVar12 < iVar14) {
          iVar13 = iVar12;
          if (iVar14 < iVar12) {
            iVar13 = iVar14;
            iVar14 = iVar12;
          }
          if (((iVar15 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
              (*(int *)((int)in_stack_00000004 + 0x46) < iVar15)) ||
             ((iVar14 < *(int *)((int)in_stack_00000004 + 0x3a) ||
              (*(int *)((int)in_stack_00000004 + 0x42) < iVar13)))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            (**(code **)(*in_stack_00000004 + 0x14))();
          }
        }
        else {
          iVar13 = iVar12;
          if (iVar12 < iVar14) {
            iVar13 = iVar14;
            iVar14 = iVar12;
          }
          if ((((iVar15 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
               (*(int *)((int)in_stack_00000004 + 0x46) < iVar15)) ||
              (iVar13 < *(int *)((int)in_stack_00000004 + 0x3a))) ||
             (*(int *)((int)in_stack_00000004 + 0x42) < iVar14)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            (**(code **)(*in_stack_00000004 + 0x14))();
          }
        }
        local_14 = local_14 + 2;
        local_4c = local_4c + 2;
      } while (local_14 < local_18);
    }
  }
  return;
}


/* Ghidra address: 0040c1b8; FUN_0040c1b8 */

void FUN_0040c1b8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_28 [9];
  
  puVar2 = &DAT_00435588;
  puVar3 = local_28;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0040bd98();
  return;
}


/* Ghidra address: 0040c218; FUN_0040c218 */

void FUN_0040c218(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = in_stack_00000008;
  local_18 = in_stack_0000001c;
  if (in_stack_00000008 == in_stack_00000010) {
    local_c = in_stack_00000010;
    local_10 = in_stack_00000014;
    local_1c = in_stack_00000024;
  }
  else {
    local_c = in_stack_00000020;
    local_10 = in_stack_00000024;
    local_1c = in_stack_00000014;
    in_stack_00000020 = in_stack_00000010;
  }
  iVar2 = local_10;
  iVar4 = local_1c;
  if (local_10 < in_stack_0000000c) {
    local_8 = local_c;
    local_10 = in_stack_0000000c;
    in_stack_0000000c = iVar2;
  }
  iVar2 = local_10;
  if (in_stack_0000001c < local_1c) {
    local_1c = in_stack_0000001c;
    local_18 = iVar4;
    in_stack_00000020 = in_stack_00000018;
  }
  iVar4 = in_stack_0000000c;
  iVar3 = in_stack_00000020;
  if (in_stack_00000020 < local_8) {
    local_10 = local_18;
    local_18 = iVar2;
    iVar4 = local_1c;
    iVar3 = local_8;
    local_1c = in_stack_0000000c;
    local_8 = in_stack_00000020;
  }
  if (iVar4 == local_1c) {
    (**(code **)(*in_stack_00000004 + 0x3c))();
  }
  else {
    iVar3 = (iVar3 - local_8) / (local_1c - iVar4);
    iVar2 = local_8;
    for (; iVar2 = iVar2 + iVar3, iVar4 < local_1c; iVar4 = iVar4 + 1) {
      if (iVar2 < local_8) {
        iVar5 = iVar2;
        iVar6 = local_8;
        if (local_8 < iVar2) {
          iVar5 = local_8;
          iVar6 = iVar2;
        }
        if (((iVar4 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
            (*(int *)((int)in_stack_00000004 + 0x46) < iVar4)) ||
           ((iVar6 < *(int *)((int)in_stack_00000004 + 0x3a) ||
            (*(int *)((int)in_stack_00000004 + 0x42) < iVar5)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*in_stack_00000004 + 0x14))();
        }
      }
      else {
        iVar5 = iVar2;
        iVar6 = local_8;
        if (iVar2 < local_8) {
          iVar5 = local_8;
          iVar6 = iVar2;
        }
        if ((((iVar4 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
             (*(int *)((int)in_stack_00000004 + 0x46) < iVar4)) ||
            (iVar5 < *(int *)((int)in_stack_00000004 + 0x3a))) ||
           (*(int *)((int)in_stack_00000004 + 0x42) < iVar6)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*in_stack_00000004 + 0x14))();
        }
      }
    }
    (**(code **)(*in_stack_00000004 + 0x3c))();
    iVar2 = iVar2 - iVar3;
    for (; local_18 < local_10; local_18 = local_18 + 1) {
      if (iVar2 < local_8) {
        iVar4 = iVar2;
        iVar5 = local_8;
        if (local_8 < iVar2) {
          iVar4 = local_8;
          iVar5 = iVar2;
        }
        if ((((local_18 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
             (*(int *)((int)in_stack_00000004 + 0x46) < local_18)) ||
            (iVar5 < *(int *)((int)in_stack_00000004 + 0x3a))) ||
           (*(int *)((int)in_stack_00000004 + 0x42) < iVar4)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*in_stack_00000004 + 0x14))();
        }
      }
      else {
        iVar4 = iVar2;
        iVar5 = local_8;
        if (iVar2 < local_8) {
          iVar4 = local_8;
          iVar5 = iVar2;
        }
        if (((local_18 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
            (*(int *)((int)in_stack_00000004 + 0x46) < local_18)) ||
           ((iVar4 < *(int *)((int)in_stack_00000004 + 0x3a) ||
            (*(int *)((int)in_stack_00000004 + 0x42) < iVar5)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*in_stack_00000004 + 0x14))();
        }
      }
      iVar2 = iVar2 - iVar3;
    }
  }
  return;
}


/* Ghidra address: 0040c5f0; FUN_0040c5f0 */

void FUN_0040c5f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_20 [7];
  
  puVar2 = &DAT_004355ac;
  puVar3 = local_20;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0040bd98();
  return;
}


/* Ghidra address: 0040c644; FUN_0040c644 */

void FUN_0040c644(void)

{
  short sVar1;
  short sVar2;
  int *in_stack_00000004;
  short *in_stack_00000008;
  
  sVar2 = 1;
  sVar1 = *in_stack_00000008 * 2 + -1;
  if (1 < sVar1) {
    do {
      (**(code **)(*in_stack_00000004 + 0x1c))();
      sVar2 = sVar2 + 2;
    } while (sVar2 < sVar1);
  }
  return;
}


/* Ghidra address: 0040c6a8; FUN_0040c6a8 */

void FUN_0040c6a8(void)

{
  uint *puVar1;
  undefined2 in_stack_00000008;
  undefined2 in_stack_0000000c;
  
  puVar1 = FUN_00430cec();
  *(undefined2 *)puVar1 = in_stack_00000008;
  *(undefined2 *)((int)puVar1 + 2) = in_stack_0000000c;
  return;
}


/* Ghidra address: 0040c6d8; FUN_0040c6d8 */

void FUN_0040c6d8(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  short *in_stack_00000010;
  int local_8;
  
  iVar3 = in_stack_00000010[1] + in_stack_0000000c + -1;
  local_8 = *(int *)((int)in_stack_00000004 + 0x46);
  iVar1 = *(int *)((int)in_stack_00000004 + 0x3e);
  if ((((*in_stack_00000010 + in_stack_00000008 + -1 < *(int *)((int)in_stack_00000004 + 0x3a)) ||
       (*(int *)((int)in_stack_00000004 + 0x42) < in_stack_00000008)) || (iVar3 < iVar1)) ||
     (local_8 < in_stack_0000000c)) {
    bVar2 = false;
    local_8 = iVar3;
  }
  else {
    if (in_stack_0000000c < iVar1) {
      in_stack_0000000c = iVar1;
    }
    if (iVar3 <= local_8) {
      local_8 = iVar3;
    }
    bVar2 = true;
  }
  if (bVar2) {
    for (; in_stack_0000000c <= local_8; in_stack_0000000c = in_stack_0000000c + 1) {
      (**(code **)(*in_stack_00000004 + 8))();
    }
  }
  return;
}


/* Ghidra address: 0040c7c0; FUN_0040c7c0 */

void FUN_0040c7c0(void)

{
  int iVar1;
  
  iVar1 = thunk_FUN_0042e284();
  if ((short)iVar1 == -1) {
    FUN_0042c50c();
  }
  else {
    thunk_FUN_0042dc08();
    thunk_FUN_0042e178();
  }
  return;
}


/* Ghidra address: 0040c884; FUN_0040c884 */

void FUN_0040c884(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  short *in_stack_00000010;
  int local_8;
  
  iVar3 = in_stack_00000010[1] + in_stack_0000000c + -1;
  local_8 = *(int *)((int)in_stack_00000004 + 0x46);
  iVar1 = *(int *)((int)in_stack_00000004 + 0x3e);
  if ((((*in_stack_00000010 + in_stack_00000008 + -1 < *(int *)((int)in_stack_00000004 + 0x3a)) ||
       (*(int *)((int)in_stack_00000004 + 0x42) < in_stack_00000008)) || (iVar3 < iVar1)) ||
     (local_8 < in_stack_0000000c)) {
    bVar2 = false;
    local_8 = iVar3;
  }
  else {
    if (in_stack_0000000c < iVar1) {
      in_stack_0000000c = iVar1;
    }
    if (iVar3 <= local_8) {
      local_8 = iVar3;
    }
    bVar2 = true;
  }
  if (bVar2) {
    for (; in_stack_0000000c <= local_8; in_stack_0000000c = in_stack_0000000c + 1) {
      (**(code **)(*in_stack_00000004 + 0xc))();
    }
  }
  return;
}


/* Ghidra address: 0040c984; FUN_0040c984 */

void FUN_0040c984(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  short *in_stack_00000010;
  int local_8;
  
  iVar3 = in_stack_00000010[1] + in_stack_0000000c + -1;
  local_8 = *(int *)((int)in_stack_00000004 + 0x46);
  iVar1 = *(int *)((int)in_stack_00000004 + 0x3e);
  if ((((*in_stack_00000010 + in_stack_00000008 + -1 < *(int *)((int)in_stack_00000004 + 0x3a)) ||
       (*(int *)((int)in_stack_00000004 + 0x42) < in_stack_00000008)) || (iVar3 < iVar1)) ||
     (local_8 < in_stack_0000000c)) {
    bVar2 = false;
    local_8 = iVar3;
  }
  else {
    if (in_stack_0000000c < iVar1) {
      in_stack_0000000c = iVar1;
    }
    if (iVar3 <= local_8) {
      local_8 = iVar3;
    }
    bVar2 = true;
  }
  if (bVar2) {
    for (; in_stack_0000000c <= local_8; in_stack_0000000c = in_stack_0000000c + 1) {
      (**(code **)(*in_stack_00000004 + 0x10))();
    }
  }
  return;
}


/* Ghidra address: 0040ca84; FUN_0040ca84 */

void FUN_0040ca84(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  int *in_stack_00000004;
  short sStack00000008;
  short sStack0000000c;
  short in_stack_00000010;
  short in_stack_00000014;
  short *in_stack_00000018;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  short local_16;
  short *local_8;
  
  local_8 = in_stack_00000018 + 2;
  sVar1 = *in_stack_00000018;
  sVar2 = in_stack_00000018[1];
  if (in_stack_00000010 < 1) {
    in_stack_00000010 = 1;
  }
  if (in_stack_00000014 < 1) {
    in_stack_00000014 = 1;
  }
  if (*(int *)((int)in_stack_00000004 + 0x32) - _sStack00000008 < (int)in_stack_00000010) {
    in_stack_00000010 = *(short *)((int)in_stack_00000004 + 0x32) - sStack00000008;
  }
  if (*(int *)((int)in_stack_00000004 + 0x36) - _sStack0000000c < (int)in_stack_00000014) {
    in_stack_00000014 = *(short *)((int)in_stack_00000004 + 0x36) - sStack0000000c;
  }
  local_16 = in_stack_00000014;
  if (sVar1 < in_stack_00000010) {
    for (local_18 = 0; (int)(uint)local_18 < (int)sVar2; local_18 = local_18 + 1) {
      for (; sVar2 <= local_16; local_16 = local_16 + -sVar2) {
        psVar4 = local_8;
        sVar3 = in_stack_00000010;
        for (local_1a = 0; (int)(uint)local_1a < (int)sVar1; local_1a = local_1a + 1) {
          for (; sVar1 <= sVar3; sVar3 = sVar3 + -sVar1) {
            if ((char)*psVar4 != -1) {
              (**(code **)(*in_stack_00000004 + 4))();
            }
          }
          sVar3 = sVar3 + in_stack_00000010;
          psVar4 = (short *)((int)psVar4 + 1);
        }
      }
      local_16 = local_16 + in_stack_00000014;
      local_8 = (short *)((int)local_8 + (int)sVar1);
    }
  }
  else {
    for (local_1c = 0; (int)(uint)local_1c < (int)in_stack_00000014; local_1c = local_1c + 1) {
      for (; local_16 < sVar2; local_16 = local_16 + in_stack_00000014) {
        local_8 = (short *)((int)local_8 + (int)sVar1);
      }
      psVar4 = local_8;
      sVar3 = in_stack_00000010;
      for (local_1e = 0; (int)(uint)local_1e < (int)in_stack_00000010; local_1e = local_1e + 1) {
        for (; sVar3 < sVar1; sVar3 = sVar3 + in_stack_00000010) {
          psVar4 = (short *)((int)psVar4 + 1);
        }
        if ((char)*psVar4 != -1) {
          (**(code **)(*in_stack_00000004 + 4))();
        }
        sVar3 = sVar3 + -sVar1;
      }
      local_16 = local_16 + -sVar2;
    }
  }
  return;
}


/* Ghidra address: 0040ccac; FUN_0040ccac */

void FUN_0040ccac(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  short in_stack_00000010;
  short local_a;
  short local_8;
  short local_6;
  
  local_8 = in_stack_00000010;
  local_6 = 0;
  local_a = 0;
  if (-1 < in_stack_00000010) {
    do {
      iVar3 = local_8 + in_stack_00000008;
      iVar2 = local_a + in_stack_0000000c;
      iVar5 = in_stack_00000008 - local_8;
      if (iVar3 < iVar5) {
        iVar4 = iVar3;
        if (iVar5 < iVar3) {
          iVar4 = iVar5;
          iVar5 = iVar3;
        }
        if (((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
            (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
           ((iVar5 < *(int *)((int)in_stack_00000004 + 0x3a) ||
            (*(int *)((int)in_stack_00000004 + 0x42) < iVar4)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*in_stack_00000004 + 0x14))();
        }
      }
      else {
        iVar4 = iVar3;
        if (iVar3 < iVar5) {
          iVar4 = iVar5;
          iVar5 = iVar3;
        }
        if ((((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
             (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
            (iVar4 < *(int *)((int)in_stack_00000004 + 0x3a))) ||
           (*(int *)((int)in_stack_00000004 + 0x42) < iVar5)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*in_stack_00000004 + 0x14))();
        }
      }
      iVar3 = local_8 + in_stack_00000008;
      iVar2 = in_stack_0000000c - local_a;
      iVar5 = in_stack_00000008 - local_8;
      if (iVar3 < iVar5) {
        iVar4 = iVar3;
        if (iVar5 < iVar3) {
          iVar4 = iVar5;
          iVar5 = iVar3;
        }
        if ((((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
             (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
            (iVar5 < *(int *)((int)in_stack_00000004 + 0x3a))) ||
           (*(int *)((int)in_stack_00000004 + 0x42) < iVar4)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*in_stack_00000004 + 0x14))();
        }
      }
      else {
        iVar4 = iVar3;
        if (iVar3 < iVar5) {
          iVar4 = iVar5;
          iVar5 = iVar3;
        }
        if (((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
            (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
           ((iVar4 < *(int *)((int)in_stack_00000004 + 0x3a) ||
            (*(int *)((int)in_stack_00000004 + 0x42) < iVar5)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*in_stack_00000004 + 0x14))();
        }
      }
      local_a = local_a + 1;
      local_6 = local_a * 4 + local_6 + -1;
      if (local_8 < local_6) {
        local_8 = local_8 + -1;
        local_6 = local_6 - (local_8 * 4 + 1);
        iVar2 = local_8 + in_stack_0000000c;
        iVar3 = local_a + in_stack_00000008;
        iVar5 = in_stack_00000008 - local_a;
        if (iVar3 < iVar5) {
          iVar4 = iVar3;
          if (iVar5 < iVar3) {
            iVar4 = iVar5;
            iVar5 = iVar3;
          }
          if (((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
              (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
             ((iVar5 < *(int *)((int)in_stack_00000004 + 0x3a) ||
              (*(int *)((int)in_stack_00000004 + 0x42) < iVar4)))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            (**(code **)(*in_stack_00000004 + 0x14))();
          }
        }
        else {
          iVar4 = iVar3;
          if (iVar3 < iVar5) {
            iVar4 = iVar5;
            iVar5 = iVar3;
          }
          if (((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
              (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
             ((iVar4 < *(int *)((int)in_stack_00000004 + 0x3a) ||
              (*(int *)((int)in_stack_00000004 + 0x42) < iVar5)))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            (**(code **)(*in_stack_00000004 + 0x14))();
          }
        }
        iVar2 = in_stack_0000000c - local_8;
        iVar3 = local_a + in_stack_00000008;
        iVar5 = in_stack_00000008 - local_a;
        if (iVar3 < iVar5) {
          iVar4 = iVar3;
          if (iVar5 < iVar3) {
            iVar4 = iVar5;
            iVar5 = iVar3;
          }
          if (((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
              (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
             ((iVar5 < *(int *)((int)in_stack_00000004 + 0x3a) ||
              (*(int *)((int)in_stack_00000004 + 0x42) < iVar4)))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            (**(code **)(*in_stack_00000004 + 0x14))();
          }
        }
        else {
          iVar4 = iVar3;
          if (iVar3 < iVar5) {
            iVar4 = iVar5;
            iVar5 = iVar3;
          }
          if ((((iVar2 < *(int *)((int)in_stack_00000004 + 0x3e)) ||
               (*(int *)((int)in_stack_00000004 + 0x46) < iVar2)) ||
              (iVar4 < *(int *)((int)in_stack_00000004 + 0x3a))) ||
             (*(int *)((int)in_stack_00000004 + 0x42) < iVar5)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            (**(code **)(*in_stack_00000004 + 0x14))();
          }
        }
      }
    } while (local_a <= local_8);
  }
  return;
}


/* Ghidra address: 0040d2f4; FUN_0040d2f4 */

short * FUN_0040d2f4(void)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  short *in_stack_00000004;
  
  FUN_004096a4();
  (**(code **)(*(int *)(in_stack_00000004 + 3) + 0xc))();
  pvVar2 = FUN_00410304();
  *(LPVOID *)(in_stack_00000004 + 1) = pvVar2;
  (**(code **)(*(int *)(in_stack_00000004 + 3) + 0xc))();
  for (iVar3 = 0; iVar3 < *in_stack_00000004; iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(in_stack_00000004 + 1);
    *(undefined4 *)(iVar1 + 0x1a + iVar3 * 0x1e) = 0;
    *(undefined2 *)(iVar1 + 0x18 + iVar3 * 0x1e) = 0;
  }
  DAT_0044f6c4 = in_stack_00000004;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0040d388; FUN_0040d388 */

void FUN_0040d388(void)

{
  int iVar1;
  short *in_stack_00000004;
  
  for (iVar1 = 0; iVar1 < *in_stack_00000004; iVar1 = iVar1 + 1) {
    if ((*(byte *)(*(int *)(in_stack_00000004 + 1) + 0x18 + iVar1 * 0x1e) & 2) != 0) {
      *(undefined2 *)(*(int *)(in_stack_00000004 + 1) + 0x18 + iVar1 * 0x1e) = 0;
      FUN_0041034c();
      *(undefined4 *)(*(int *)(in_stack_00000004 + 1) + 0x1a + iVar1 * 0x1e) = 0;
    }
  }
  return;
}


/* Ghidra address: 0040d3d4; FUN_0040d3d4 */

void FUN_0040d3d4(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    FUN_0040d388();
    FUN_0041034c();
    (**(code **)(*(int *)(in_stack_00000004 + 6) + 8))();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    *(int *)(in_stack_00000004 + 6) = (int)&PTR_LAB_00435330;
    if (*(short *)(in_stack_00000004 + 10) != 0) {
      (**(code **)(*(int *)(in_stack_00000004 + 6) + 8))();
    }
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 0040d43c; FUN_0040d43c */

void FUN_0040d43c(void)

{
  FUN_0040d618();
  return;
}


/* Ghidra address: 0040d45c; FUN_0040d45c */

void FUN_0040d45c(void)

{
  FUN_0040d618();
  return;
}


/* Ghidra address: 0040d47c; FUN_0040d47c */

int FUN_0040d47c(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  short *in_stack_00000004;
  char *in_stack_00000008;
  
  iVar4 = 0;
  do {
    if (*in_stack_00000004 <= iVar4) {
      FUN_00427b9f();
      return 0;
    }
    pcVar2 = (char *)(iVar4 * 0x1e + *(int *)(in_stack_00000004 + 1));
    pcVar3 = in_stack_00000008;
    do {
      if (*pcVar2 != *pcVar3) goto LAB_0040d4bd;
      bVar5 = true;
      if (*pcVar2 == '\0') break;
      pcVar1 = pcVar2 + 1;
      if (*pcVar1 != pcVar3[1]) goto LAB_0040d4bd;
      pcVar2 = pcVar2 + 2;
      pcVar3 = pcVar3 + 2;
      bVar5 = *pcVar1 == '\0';
    } while (!bVar5);
    if (bVar5) {
      return iVar4;
    }
LAB_0040d4bd:
    iVar4 = iVar4 + 1;
  } while( true );
}


/* Ghidra address: 0040d4dc; FUN_0040d4dc */

int FUN_0040d4dc(void)

{
  int iVar1;
  int *piVar2;
  short *in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = 0;
  piVar2 = (int *)(*(int *)(in_stack_00000004 + 1) + 0x1a);
  while( true ) {
    if (*in_stack_00000004 <= iVar1) {
      FUN_00427b9f();
      return 0;
    }
    if (in_stack_00000008 == *piVar2) break;
    iVar1 = iVar1 + 1;
    piVar2 = (int *)((int)piVar2 + 0x1e);
  }
  return *(int *)(in_stack_00000004 + 1) + iVar1 * 0x1e;
}


/* Ghidra address: 0040d524; FUN_0040d524 */

void FUN_0040d524(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_0040d47c();
  *(undefined2 *)(*(int *)(in_stack_00000004 + 2) + 0x18 + iVar1 * 0x1e) = 0;
  FUN_0041034c();
  *(undefined4 *)(*(int *)(in_stack_00000004 + 2) + 0x1a + iVar1 * 0x1e) = 0;
  return;
}


/* Ghidra address: 0040d56c; FUN_0040d56c */

void FUN_0040d56c(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  undefined4 in_stack_0000000c;
  
  iVar2 = FUN_0040d47c();
  iVar1 = *(int *)(in_stack_00000004 + 2);
  *(undefined2 *)(iVar1 + 0x18 + iVar2 * 0x1e) = 2;
  *(undefined4 *)(iVar1 + 0x1a + iVar2 * 0x1e) = in_stack_0000000c;
  return;
}


/* Ghidra address: 0040d59c; FUN_0040d59c */

undefined4 FUN_0040d59c(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_0040d47c();
  if ((*(byte *)(*(int *)(in_stack_00000004 + 2) + 0x18 + iVar1 * 0x1e) & 2) != 0) {
    return *(undefined4 *)(*(int *)(in_stack_00000004 + 2) + 0x1a + iVar1 * 0x1e);
  }
  return 0;
}


/* Ghidra address: 0040d5d0; FUN_0040d5d0 */

int FUN_0040d5d0(void)

{
  int iVar1;
  int in_stack_00000004;
  undefined4 *in_stack_0000000c;
  
  iVar1 = FUN_0040d47c();
  (**(code **)(*(int *)(in_stack_00000004 + 6) + 0x14))();
  *in_stack_0000000c = *(undefined4 *)(*(int *)(in_stack_00000004 + 2) + 0x10 + iVar1 * 0x1e);
  return in_stack_00000004 + 6;
}


/* Ghidra address: 0040d618; FUN_0040d618 */

undefined4 FUN_0040d618(void)

{
  int iVar1;
  LPVOID pvVar2;
  int in_stack_00000004;
  undefined2 *in_stack_0000000c;
  int in_stack_00000010;
  
  iVar1 = FUN_0040d47c();
  if ((*(byte *)(*(int *)(in_stack_00000004 + 2) + 0x18 + iVar1 * 0x1e) & 2) == 0) {
    if (in_stack_00000010 == 0) {
      pvVar2 = FUN_00410304();
      *(LPVOID *)(*(int *)(in_stack_00000004 + 2) + 0x1a + iVar1 * 0x1e) = pvVar2;
    }
    else {
      *(int *)(*(int *)(in_stack_00000004 + 2) + 0x1a + iVar1 * 0x1e) = in_stack_00000010;
    }
    (**(code **)(*(int *)(in_stack_00000004 + 6) + 0x14))();
    (**(code **)(*(int *)(in_stack_00000004 + 6) + 0xc))();
    *(undefined2 *)(*(int *)(in_stack_00000004 + 2) + 0x18 + iVar1 * 0x1e) = 2;
  }
  *in_stack_0000000c = *(undefined2 *)(*(int *)(in_stack_00000004 + 2) + 0x10 + iVar1 * 0x1e);
  return *(undefined4 *)(*(int *)(in_stack_00000004 + 2) + 0x1a + iVar1 * 0x1e);
}


/* Ghidra address: 0040d6d0; FUN_0040d6d0 */

int * FUN_0040d6d0(void)

{
  LPVOID pvVar1;
  int iVar2;
  int *in_stack_00000004;
  
  in_stack_00000004[1] = 0;
  pvVar1 = FUN_00410304();
  *in_stack_00000004 = (int)pvVar1;
  iVar2 = 0;
  do {
    *(undefined4 *)(*in_stack_00000004 + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 16000);
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0040d708; FUN_0040d708 */

undefined4 * FUN_0040d708(void)

{
  LPVOID pvVar1;
  undefined4 *in_stack_00000004;
  
  in_stack_00000004[1] = 0;
  pvVar1 = FUN_00410304();
  *in_stack_00000004 = pvVar1;
  FUN_0040d79c();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0040d73c; FUN_0040d73c */

void FUN_0040d73c(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    FUN_0041034c();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 0040d768; FUN_0040d768 */

undefined4 FUN_0040d768(void)

{
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(*in_stack_00000004 + in_stack_00000004[1] * 4) = in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000004[1] + 1;
  return 0;
}


/* Ghidra address: 0040d784; FUN_0040d784 */

undefined4 FUN_0040d784(void)

{
  undefined4 uVar1;
  int *in_stack_00000004;
  
  uVar1 = *(undefined4 *)(*in_stack_00000004 + in_stack_00000004[1] * 4);
  in_stack_00000004[1] = in_stack_00000004[1] + 1;
  return uVar1;
}


/* Ghidra address: 0040d79c; FUN_0040d79c */

/* WARNING: Removing unreachable block (ram,0x0040d809) */

void FUN_0040d79c(void)

{
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x4356a4);
  FUN_004096a4();
  FUN_0040978c();
  thunk_FUN_0042e178();
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return;
}


/* Ghidra address: 0040d828; FUN_0040d828 */

/* WARNING: Removing unreachable block (ram,0x0040d88f) */

void FUN_0040d828(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x4356c8);
  FUN_004096a4();
  FUN_00409828();
  thunk_FUN_0042e178();
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return;
}


/* Ghidra address: 0040d8b0; FUN_0040d8b0 */

void FUN_0040d8b0(void)

{
  DAT_0044f6cc = DAT_0044ebe4 * DAT_0044ebc8 * (int)DAT_004356e4;
  DAT_0044f6d0 = DAT_0044f6cc >> 0xf;
  return;
}


/* Ghidra address: 0040d8d4; FUN_0040d8d4 */

undefined4 * FUN_0040d8d4(void)

{
  undefined4 *in_stack_00000004;
  short *in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  short in_stack_00000014;
  byte in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000024;
  
  *in_stack_00000004 = &PTR_LAB_0043550a;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_stack_00000004 = &PTR_LAB_00435792;
  FUN_00431b68();
  DAT_0044f6c8 = in_stack_00000010;
  *(undefined2 *)((int)in_stack_00000004 + 0x5d) = in_stack_00000024;
  if (in_stack_00000014 == 0) {
    *(short *)((int)in_stack_00000004 + 0x51) = *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x53) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x55) = (DAT_0044f6c8 >> 1) + in_stack_00000008[4];
    *(short *)((int)in_stack_00000004 + 0x57) =
         *(short *)((int)in_stack_00000004 + 0x51) + DAT_0044f6c8;
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[2];
    *(undefined2 *)((int)in_stack_00000004 + 0x5b) = *(undefined2 *)((int)in_stack_00000004 + 0x55);
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 1;
    *(int *)((int)in_stack_00000004 + 6) =
         (int)*(short *)((int)in_stack_00000004 + 0x51) +
         (int)*(short *)((int)in_stack_00000004 + 0x57) >> 1;
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x53);
    *(int *)((int)in_stack_00000004 + 0xe) = (int)*(short *)((int)in_stack_00000004 + 0x55);
  }
  else if (in_stack_00000014 == 0x5a) {
    *(short *)((int)in_stack_00000004 + 0x51) = (DAT_0044f6c8 >> 1) + *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x53) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x55) = in_stack_00000008[4];
    *(undefined2 *)((int)in_stack_00000004 + 0x57) = *(undefined2 *)((int)in_stack_00000004 + 0x51);
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[2];
    *(short *)((int)in_stack_00000004 + 0x5b) =
         *(short *)((int)in_stack_00000004 + 0x55) + DAT_0044f6c8;
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 0;
    *(int *)((int)in_stack_00000004 + 6) = (int)*(short *)((int)in_stack_00000004 + 0x51);
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x53);
    *(int *)((int)in_stack_00000004 + 0xe) =
         (int)*(short *)((int)in_stack_00000004 + 0x55) +
         (int)*(short *)((int)in_stack_00000004 + 0x5b) >> 1;
  }
  else if (in_stack_00000014 == 0xb4) {
    *(short *)((int)in_stack_00000004 + 0x51) = *in_stack_00000008 + DAT_0044f6c8;
    *(short *)((int)in_stack_00000004 + 0x53) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x55) = (DAT_0044f6c8 >> 1) + in_stack_00000008[4];
    *(short *)((int)in_stack_00000004 + 0x57) = *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[2];
    *(undefined2 *)((int)in_stack_00000004 + 0x5b) = *(undefined2 *)((int)in_stack_00000004 + 0x55);
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 1;
    *(int *)((int)in_stack_00000004 + 6) =
         (int)*(short *)((int)in_stack_00000004 + 0x51) +
         (int)*(short *)((int)in_stack_00000004 + 0x57) >> 1;
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x53);
    *(int *)((int)in_stack_00000004 + 0xe) = (int)*(short *)((int)in_stack_00000004 + 0x55);
  }
  else if (in_stack_00000014 == 0x10e) {
    *(short *)((int)in_stack_00000004 + 0x51) = (DAT_0044f6c8 >> 1) + *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x53) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x55) = in_stack_00000008[4] + DAT_0044f6c8;
    *(undefined2 *)((int)in_stack_00000004 + 0x57) = *(undefined2 *)((int)in_stack_00000004 + 0x51);
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[2];
    *(short *)((int)in_stack_00000004 + 0x5b) = in_stack_00000008[4];
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 0;
    *(int *)((int)in_stack_00000004 + 6) = (int)*(short *)((int)in_stack_00000004 + 0x51);
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x53);
    *(int *)((int)in_stack_00000004 + 0xe) =
         (int)*(short *)((int)in_stack_00000004 + 0x55) +
         (int)*(short *)((int)in_stack_00000004 + 0x5b) >> 1;
  }
  *(undefined4 *)((int)in_stack_00000004 + 0x12) = 3;
  *(undefined4 *)((int)in_stack_00000004 + 0x19) = in_stack_0000001c;
  *(byte *)((int)in_stack_00000004 + 0x16) = in_stack_00000018 & 0xfd;
  *(undefined2 *)(in_stack_00000004 + 1) = in_stack_00000020;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0040db84; FUN_0040db84 */

void FUN_0040db84(void)

{
  int in_stack_00000004;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  
  if (*(int *)(in_stack_00000004 + 0x29) < *(int *)(in_stack_00000004 + 0x1d)) {
    *in_stack_00000008 = *(undefined2 *)(in_stack_00000004 + 0x1d);
    *in_stack_0000000c = *(undefined2 *)(in_stack_00000004 + 0x29);
    return;
  }
  *in_stack_00000008 = *(undefined2 *)(in_stack_00000004 + 0x29);
  *in_stack_0000000c = *(undefined2 *)(in_stack_00000004 + 0x1d);
  return;
}


/* Ghidra address: 0040dbbc; FUN_0040dbbc */

void FUN_0040dbbc(void)

{
  ushort *puVar1;
  int in_stack_00000004;
  
  if ((*(byte *)(in_stack_00000004 + 0x16) & 1) != 0) {
    if (*(int *)(in_stack_00000004 + 0x29) < *(int *)(in_stack_00000004 + 0x1d)) {
      puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 0x19) + 4);
      *puVar1 = *puVar1 | 0x20;
    }
    else {
      puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 0x19) + 4);
      *puVar1 = *puVar1 & 0xffdf;
    }
    DAT_00439da8 = 1;
    (**(code **)(*DAT_0044ec08 + 0x54))();
  }
  return;
}


/* Ghidra address: 0040dc54; FUN_0040dc54 */

undefined4 * FUN_0040dc54(void)

{
  undefined4 *in_stack_00000004;
  short *in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  short in_stack_00000014;
  undefined1 in_stack_00000018;
  int in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000024;
  short in_stack_00000028;
  undefined4 in_stack_0000002c;
  
  *in_stack_00000004 = &PTR_LAB_0043550a;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_stack_00000004 = &PTR_LAB_00435772;
  *(int *)((int)in_stack_00000004 + 0x19) = in_stack_0000001c;
  FUN_00431b68();
  DAT_0044f6c8 = in_stack_00000010;
  if (in_stack_00000014 == 0) {
    *(short *)((int)in_stack_00000004 + 0x55) = *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x57) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[4];
    *(short *)((int)in_stack_00000004 + 0x5b) =
         *(short *)((int)in_stack_00000004 + 0x55) + DAT_0044f6c8;
    *(short *)((int)in_stack_00000004 + 0x5d) = in_stack_00000008[2];
    *(undefined2 *)((int)in_stack_00000004 + 0x5f) = *(undefined2 *)((int)in_stack_00000004 + 0x59);
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 1;
    *(int *)((int)in_stack_00000004 + 6) =
         (int)*(short *)((int)in_stack_00000004 + 0x55) +
         (int)*(short *)((int)in_stack_00000004 + 0x5b) >> 1;
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x57);
    *(int *)((int)in_stack_00000004 + 0xe) = (int)*(short *)((int)in_stack_00000004 + 0x59);
  }
  else if (in_stack_00000014 == 0x5a) {
    *(short *)((int)in_stack_00000004 + 0x55) = *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x57) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[4] + DAT_0044f6c8;
    *(undefined2 *)((int)in_stack_00000004 + 0x5b) = *(undefined2 *)((int)in_stack_00000004 + 0x55);
    *(short *)((int)in_stack_00000004 + 0x5d) = in_stack_00000008[2];
    *(short *)((int)in_stack_00000004 + 0x5f) = in_stack_00000008[4];
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 0;
    *(int *)((int)in_stack_00000004 + 6) = (int)*(short *)((int)in_stack_00000004 + 0x55);
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x57);
    *(int *)((int)in_stack_00000004 + 0xe) =
         (int)*(short *)((int)in_stack_00000004 + 0x59) +
         (int)*(short *)((int)in_stack_00000004 + 0x5f) >> 1;
  }
  else if (in_stack_00000014 == 0xb4) {
    *(short *)((int)in_stack_00000004 + 0x55) = *in_stack_00000008 + in_stack_00000010;
    *(short *)((int)in_stack_00000004 + 0x57) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[4] + DAT_0044f6c8;
    *(short *)((int)in_stack_00000004 + 0x5b) = *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x5d) = in_stack_00000008[2];
    *(undefined2 *)((int)in_stack_00000004 + 0x5f) = *(undefined2 *)((int)in_stack_00000004 + 0x59);
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 1;
    *(int *)((int)in_stack_00000004 + 6) =
         (int)*(short *)((int)in_stack_00000004 + 0x55) +
         (int)*(short *)((int)in_stack_00000004 + 0x5b) >> 1;
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x57);
    *(int *)((int)in_stack_00000004 + 0xe) = (int)*(short *)((int)in_stack_00000004 + 0x59);
  }
  else if (in_stack_00000014 == 0x10e) {
    *(short *)((int)in_stack_00000004 + 0x55) = *in_stack_00000008 + in_stack_00000010;
    *(short *)((int)in_stack_00000004 + 0x57) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[4];
    *(undefined2 *)((int)in_stack_00000004 + 0x5b) = *(undefined2 *)((int)in_stack_00000004 + 0x55);
    *(short *)((int)in_stack_00000004 + 0x5d) = in_stack_00000008[2];
    *(short *)((int)in_stack_00000004 + 0x5f) =
         *(short *)((int)in_stack_00000004 + 0x59) + DAT_0044f6c8;
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 0;
    *(int *)((int)in_stack_00000004 + 6) = (int)*(short *)((int)in_stack_00000004 + 0x55);
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x57);
    *(int *)((int)in_stack_00000004 + 0xe) =
         (int)*(short *)((int)in_stack_00000004 + 0x59) +
         (int)*(short *)((int)in_stack_00000004 + 0x5f) >> 1;
  }
  *(undefined2 *)((int)in_stack_00000004 + 0x61) = in_stack_00000024;
  if (in_stack_00000028 == 0) {
    *(short *)((int)in_stack_00000004 + 99) = *(short *)(in_stack_0000001c + 2) + -1;
  }
  else {
    *(short *)((int)in_stack_00000004 + 99) = in_stack_00000028;
  }
  *(undefined4 *)((int)in_stack_00000004 + 0x1d) = in_stack_0000002c;
  *(undefined2 *)(in_stack_00000004 + 1) = in_stack_00000020;
  *(undefined1 *)((int)in_stack_00000004 + 0x16) = in_stack_00000018;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0040df00; FUN_0040df00 */

void FUN_0040df00(void)

{
  int in_stack_00000004;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  
  *in_stack_00000008 = *(undefined2 *)(in_stack_00000004 + 0x67);
  *in_stack_0000000c = *(undefined2 *)(in_stack_00000004 + 0x65);
  return;
}


/* Ghidra address: 0040df1c; FUN_0040df1c */

void FUN_0040df1c(void)

{
  int in_stack_00000004;
  
  if ((*(byte *)(in_stack_00000004 + 0x16) & 1) != 0) {
    DAT_00439da8 = 0;
    (**(code **)(*DAT_0044ec08 + 0x54))();
  }
  return;
}


/* Ghidra address: 0040df9c; FUN_0040df9c */

undefined4 * FUN_0040df9c(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_stack_00000004;
  int *in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  undefined1 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined2 in_stack_0000001c;
  
  *in_stack_00000004 = &PTR_LAB_0043550a;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_stack_00000004 = &PTR_LAB_00435752;
  FUN_00431b68();
  iVar3 = *in_stack_00000008;
  iVar2 = in_stack_00000008[1];
  iVar5 = in_stack_00000008[2];
  *(int *)((int)in_stack_00000004 + 6) = iVar3;
  *(int *)((int)in_stack_00000004 + 10) = iVar2 - ((int)in_stack_0000000c >> 1);
  *(int *)((int)in_stack_00000004 + 0xe) = iVar5;
  *(undefined4 *)((int)in_stack_00000004 + 0x12) = 3;
  iVar5 = iVar5 - DAT_0044ec00;
  iVar3 = iVar3 - DAT_0044ebf8;
  iVar6 = iVar5 * DAT_0044ebf4 - iVar3 * DAT_0044ebf0 >> 0xf;
  if (DAT_0044ebc8 < iVar6) {
    iVar5 = iVar3 * DAT_0044ebf4 + iVar5 * DAT_0044ebf0 >> 0xf;
    iVar3 = DAT_0044f6cc / iVar6;
    iVar4 = ((iVar5 - ((int)in_stack_00000010 >> 1)) * iVar3 >> 0xf) + (int)DAT_0044ebd0;
    iVar5 = ((((int)in_stack_00000010 >> 1) + iVar5) * iVar3 >> 0xf) + (int)DAT_0044ebd0;
    if (iVar4 < iVar5) {
      if ((DAT_0044ebdc < iVar4) || (iVar5 < DAT_0044ebd4)) {
        *(byte *)((int)in_stack_00000004 + 0x16) = *(byte *)((int)in_stack_00000004 + 0x16) & 0xfe;
        *(undefined2 *)((int)in_stack_00000004 + 0x17) = 0;
        goto LAB_0040e1b6;
      }
    }
    else if ((DAT_0044ebdc < iVar5) || (iVar4 < DAT_0044ebd4)) {
      *(byte *)((int)in_stack_00000004 + 0x16) = *(byte *)((int)in_stack_00000004 + 0x16) & 0xfe;
      *(undefined2 *)((int)in_stack_00000004 + 0x17) = 0;
      goto LAB_0040e1b6;
    }
    *(int *)((int)in_stack_00000004 + 0x3d) = iVar4;
    *(int *)((int)in_stack_00000004 + 0x19) = iVar4;
    *(int *)((int)in_stack_00000004 + 0x31) = iVar5;
    *(int *)((int)in_stack_00000004 + 0x25) = iVar5;
    iVar2 = iVar2 - DAT_0044ebfc;
    iVar5 = ((iVar2 - in_stack_0000000c) * iVar3 >> 0xf) + (int)DAT_0044ebd2;
    *(int *)((int)in_stack_00000004 + 0x29) = iVar5;
    *(int *)((int)in_stack_00000004 + 0x1d) = iVar5;
    iVar5 = iVar6 + -0x32;
    iVar2 = (iVar3 * iVar2 >> 0xf) + (int)DAT_0044ebd2;
    *(int *)((int)in_stack_00000004 + 0x41) = iVar2;
    *(int *)((int)in_stack_00000004 + 0x35) = iVar2;
    *(int *)((int)in_stack_00000004 + 0x45) = iVar5;
    *(int *)((int)in_stack_00000004 + 0x39) = iVar5;
    *(int *)((int)in_stack_00000004 + 0x2d) = iVar5;
    *(int *)((int)in_stack_00000004 + 0x21) = iVar5;
    if ((DAT_0044ebd8 < *(int *)((int)in_stack_00000004 + 0x35)) &&
       (*(int *)((int)in_stack_00000004 + 0x1d) < DAT_0044ebe0)) {
      *(undefined1 *)((int)in_stack_00000004 + 0x16) = in_stack_00000014;
      *(undefined4 *)((int)in_stack_00000004 + 0x49) = in_stack_00000018;
      *(byte *)((int)in_stack_00000004 + 0x16) = *(byte *)((int)in_stack_00000004 + 0x16) | 1;
      sVar1 = (short)iVar6 - (in_stack_00000010 >> 2);
      *(short *)((int)in_stack_00000004 + 0x17) = sVar1;
      if (sVar1 < 0) {
        *(undefined2 *)((int)in_stack_00000004 + 0x17) = 0;
      }
      *(undefined2 *)(in_stack_00000004 + 1) = in_stack_0000001c;
    }
    else {
      *(byte *)((int)in_stack_00000004 + 0x16) = *(byte *)((int)in_stack_00000004 + 0x16) & 0xfe;
      *(undefined2 *)((int)in_stack_00000004 + 0x17) = 0;
    }
  }
  else {
    *(byte *)((int)in_stack_00000004 + 0x16) = *(byte *)((int)in_stack_00000004 + 0x16) & 0xfe;
    *(undefined2 *)((int)in_stack_00000004 + 0x17) = 0;
  }
LAB_0040e1b6:
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0040e1c8; FUN_0040e1c8 */

void FUN_0040e1c8(void)

{
  int in_stack_00000004;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  
  if (*(int *)(in_stack_00000004 + 0x25) < *(int *)(in_stack_00000004 + 0x19)) {
    *in_stack_00000008 = *(undefined2 *)(in_stack_00000004 + 0x19);
    *in_stack_0000000c = *(undefined2 *)(in_stack_00000004 + 0x25);
    return;
  }
  *in_stack_00000008 = *(undefined2 *)(in_stack_00000004 + 0x25);
  *in_stack_0000000c = *(undefined2 *)(in_stack_00000004 + 0x19);
  return;
}


/* Ghidra address: 0040e200; FUN_0040e200 */

void FUN_0040e200(void)

{
  ushort *puVar1;
  int in_stack_00000004;
  
  if ((*(byte *)(in_stack_00000004 + 0x16) & 1) != 0) {
    DAT_00439da8 = 0;
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 0x49) + 4);
    *puVar1 = *puVar1 | 8;
    (**(code **)(*DAT_0044ec08 + 0x54))();
  }
  return;
}


/* Ghidra address: 0040e244; FUN_0040e244 */

undefined4 * FUN_0040e244(void)

{
  undefined4 *in_stack_00000004;
  undefined2 *in_stack_00000008;
  undefined2 in_stack_0000000c;
  short in_stack_00000010;
  undefined1 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined2 in_stack_00000020;
  
  *in_stack_00000004 = &PTR_LAB_0043550a;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_stack_00000004 = &PTR_LAB_00435732;
  FUN_00431b68();
  FUN_00431b68();
  DAT_0044f6c8 = in_stack_00000010;
  *(undefined2 *)((int)in_stack_00000004 + 0x85) = *in_stack_00000008;
  *(undefined2 *)((int)in_stack_00000004 + 0x87) = in_stack_00000008[2];
  *(undefined2 *)((int)in_stack_00000004 + 0x89) = in_stack_00000008[4];
  *(undefined4 *)((int)in_stack_00000004 + 0x12) = 2;
  *(int *)((int)in_stack_00000004 + 6) =
       (int)*(short *)((int)in_stack_00000004 + 0x85) + ((int)in_stack_00000010 >> 1);
  *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x87);
  *(int *)((int)in_stack_00000004 + 0xe) =
       (int)*(short *)((int)in_stack_00000004 + 0x89) + ((int)in_stack_00000010 >> 1);
  *(undefined2 *)((int)in_stack_00000004 + 0x8b) = in_stack_0000000c;
  *(undefined1 *)((int)in_stack_00000004 + 0x16) = in_stack_00000014;
  *(undefined4 *)((int)in_stack_00000004 + 0x79) = in_stack_00000018;
  *(undefined4 *)((int)in_stack_00000004 + 0x7d) = in_stack_0000001c;
  *(undefined2 *)(in_stack_00000004 + 1) = in_stack_00000020;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0040e348; FUN_0040e348 */

void FUN_0040e348(void)

{
  int in_stack_00000004;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  
  *in_stack_00000008 = *(undefined2 *)(in_stack_00000004 + 0x83);
  *in_stack_0000000c = *(undefined2 *)(in_stack_00000004 + 0x81);
  return;
}


/* Ghidra address: 0040e36c; FUN_0040e36c */

void FUN_0040e36c(void)

{
  int in_stack_00000004;
  
  if ((*(byte *)(in_stack_00000004 + 0x16) & 1) != 0) {
    DAT_00439da8 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x4d)) {
      (**(code **)(*DAT_0044ec08 + 0x4c))();
    }
    if (*(int *)(in_stack_00000004 + 0x1d) < 0) {
      (**(code **)(*DAT_0044ec08 + 0x4c))();
    }
  }
  return;
}


/* Ghidra address: 0040e3d4; FUN_0040e3d4 */

undefined4 * FUN_0040e3d4(void)

{
  undefined4 *in_stack_00000004;
  undefined2 *in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  undefined1 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined2 in_stack_0000001c;
  
  *in_stack_00000004 = &PTR_LAB_0043550a;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_stack_00000004 = &PTR_LAB_00435712;
  FUN_00431b68();
  DAT_0044f6c8 = in_stack_00000010;
  *(undefined2 *)((int)in_stack_00000004 + 0x51) = *in_stack_00000008;
  *(undefined2 *)((int)in_stack_00000004 + 0x53) = in_stack_00000008[2];
  *(undefined2 *)((int)in_stack_00000004 + 0x55) = in_stack_00000008[4];
  *(undefined4 *)((int)in_stack_00000004 + 0x12) = 2;
  *(int *)((int)in_stack_00000004 + 6) =
       (int)*(short *)((int)in_stack_00000004 + 0x51) + ((int)in_stack_00000010 >> 1);
  *(int *)((int)in_stack_00000004 + 10) =
       (int)*(short *)((int)in_stack_00000004 + 0x53) - (int)in_stack_0000000c;
  *(int *)((int)in_stack_00000004 + 0xe) =
       (int)*(short *)((int)in_stack_00000004 + 0x55) + ((int)in_stack_00000010 >> 1);
  *(short *)((int)in_stack_00000004 + 0x57) = in_stack_0000000c;
  *(undefined1 *)((int)in_stack_00000004 + 0x16) = in_stack_00000014;
  *(undefined4 *)((int)in_stack_00000004 + 0x49) = in_stack_00000018;
  *(undefined2 *)(in_stack_00000004 + 1) = in_stack_0000001c;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0040e4ac; FUN_0040e4ac */

void FUN_0040e4ac(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000004;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar7 = *(short *)(in_stack_00000004 + 0x51) - DAT_0044ebf8;
  iVar5 = DAT_0044f6c8 + iVar7;
  iVar1 = *(short *)(in_stack_00000004 + 0x55) - DAT_0044ec00;
  iVar2 = DAT_0044f6c8 + iVar1;
  local_c = iVar2 * DAT_0044ebf4 - iVar7 * DAT_0044ebf0 >> 0xf;
  local_10 = iVar2 * DAT_0044ebf4 - iVar5 * DAT_0044ebf0 >> 0xf;
  local_18 = iVar1 * DAT_0044ebf4 - iVar5 * DAT_0044ebf0 >> 0xf;
  local_20 = iVar1 * DAT_0044ebf4 - iVar7 * DAT_0044ebf0 >> 0xf;
  if ((((DAT_0044ebc8 < local_c) || (DAT_0044ebc8 < local_10)) || (DAT_0044ebc8 < local_18)) ||
     (DAT_0044ebc8 < local_20)) {
    iVar3 = iVar2 * DAT_0044ebf0;
    iVar6 = iVar5 * DAT_0044ebf4;
    iVar5 = iVar5 * DAT_0044ebf4 + iVar1 * DAT_0044ebf0 >> 0xf;
    iVar4 = iVar7 * DAT_0044ebf4 + iVar1 * DAT_0044ebf0 >> 0xf;
    iVar1 = ((int)*(short *)(in_stack_00000004 + 0x53) - (int)*(short *)(in_stack_00000004 + 0x57))
            - DAT_0044ebfc;
    iVar7 = iVar7 * DAT_0044ebf4 + iVar2 * DAT_0044ebf0 >> 0xf;
    *(int *)(in_stack_00000004 + 0x19) = iVar7;
    *(int *)(in_stack_00000004 + 0x1d) = iVar1;
    *(int *)(in_stack_00000004 + 0x21) = local_c;
    iVar2 = iVar6 + iVar3 >> 0xf;
    *(int *)(in_stack_00000004 + 0x25) = iVar2;
    *(int *)(in_stack_00000004 + 0x29) = iVar1;
    *(int *)(in_stack_00000004 + 0x2d) = local_10;
    *(int *)(in_stack_00000004 + 0x31) = iVar5;
    *(int *)(in_stack_00000004 + 0x35) = iVar1;
    *(int *)(in_stack_00000004 + 0x39) = local_18;
    *(int *)(in_stack_00000004 + 0x3d) = iVar4;
    *(int *)(in_stack_00000004 + 0x41) = iVar1;
    *(int *)(in_stack_00000004 + 0x45) = local_20;
    if (local_c < DAT_0044ebc8) {
      local_c = DAT_0044ebc8;
    }
    if (local_10 < DAT_0044ebc8) {
      local_10 = DAT_0044ebc8;
    }
    if (local_18 < DAT_0044ebc8) {
      local_18 = DAT_0044ebc8;
    }
    if (local_20 < DAT_0044ebc8) {
      local_20 = DAT_0044ebc8;
    }
    iVar7 = ((DAT_0044f6cc / local_c) * iVar7 >> 0xf) + (int)DAT_0044ebd0;
    iVar2 = ((DAT_0044f6cc / local_10) * iVar2 >> 0xf) + (int)DAT_0044ebd0;
    iVar5 = ((DAT_0044f6cc / local_18) * iVar5 >> 0xf) + (int)DAT_0044ebd0;
    iVar3 = ((DAT_0044f6cc / local_20) * iVar4 >> 0xf) + (int)DAT_0044ebd0;
    iVar1 = iVar7;
    if (iVar2 < iVar7) {
      iVar1 = iVar2;
    }
    if (iVar5 < iVar1) {
      iVar1 = iVar5;
    }
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    if (iVar7 < iVar2) {
      iVar7 = iVar2;
    }
    if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    if (iVar7 < iVar3) {
      iVar7 = iVar3;
    }
    *(byte *)(in_stack_00000004 + 0x16) = *(byte *)(in_stack_00000004 + 0x16) | 1;
    *(short *)(in_stack_00000004 + 0x4d) = (short)iVar1;
    *(short *)(in_stack_00000004 + 0x4f) = (short)iVar7;
    *(short *)(in_stack_00000004 + 0x17) = (short)(local_c + local_10 + local_18 + local_20 >> 2);
    if (*(short *)(in_stack_00000004 + 0x17) < 0) {
      *(undefined2 *)(in_stack_00000004 + 0x17) = 0;
    }
  }
  else {
    *(byte *)(in_stack_00000004 + 0x16) = *(byte *)(in_stack_00000004 + 0x16) & 0xfe;
    *(undefined2 *)(in_stack_00000004 + 0x17) = 0;
  }
  return;
}


/* Ghidra address: 0040e808; FUN_0040e808 */

void FUN_0040e808(void)

{
  int in_stack_00000004;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  
  *in_stack_00000008 = *(undefined2 *)(in_stack_00000004 + 0x4f);
  *in_stack_0000000c = *(undefined2 *)(in_stack_00000004 + 0x4d);
  return;
}


/* Ghidra address: 0040e868; FUN_0040e868 */

undefined4 * FUN_0040e868(void)

{
  undefined4 *in_stack_00000004;
  undefined2 *in_stack_00000008;
  short in_stack_0000000c;
  undefined1 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined2 in_stack_00000018;
  
  *in_stack_00000004 = &PTR_LAB_0043550a;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_stack_00000004 = &PTR_LAB_004356f2;
  FUN_00431b68();
  DAT_0044f6c8 = in_stack_0000000c;
  *(undefined2 *)((int)in_stack_00000004 + 0x51) = *in_stack_00000008;
  *(undefined2 *)((int)in_stack_00000004 + 0x53) = in_stack_00000008[2];
  *(undefined2 *)((int)in_stack_00000004 + 0x55) = in_stack_00000008[4];
  *(undefined4 *)((int)in_stack_00000004 + 0x12) = 2;
  *(int *)((int)in_stack_00000004 + 6) =
       (int)*(short *)((int)in_stack_00000004 + 0x51) + ((int)in_stack_0000000c >> 1);
  *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x53);
  *(int *)((int)in_stack_00000004 + 0xe) =
       (int)*(short *)((int)in_stack_00000004 + 0x55) + ((int)in_stack_0000000c >> 1);
  *(undefined1 *)((int)in_stack_00000004 + 0x16) = in_stack_00000010;
  *(undefined4 *)((int)in_stack_00000004 + 0x49) = in_stack_00000014;
  *(undefined2 *)(in_stack_00000004 + 1) = in_stack_00000018;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0040e934; FUN_0040e934 */

void FUN_0040e934(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000004;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar7 = *(short *)(in_stack_00000004 + 0x51) - DAT_0044ebf8;
  iVar5 = DAT_0044f6c8 + iVar7;
  iVar1 = *(short *)(in_stack_00000004 + 0x55) - DAT_0044ec00;
  iVar2 = DAT_0044f6c8 + iVar1;
  local_c = iVar2 * DAT_0044ebf4 - iVar7 * DAT_0044ebf0 >> 0xf;
  local_10 = iVar2 * DAT_0044ebf4 - iVar5 * DAT_0044ebf0 >> 0xf;
  local_18 = iVar1 * DAT_0044ebf4 - iVar5 * DAT_0044ebf0 >> 0xf;
  local_20 = iVar1 * DAT_0044ebf4 - iVar7 * DAT_0044ebf0 >> 0xf;
  if ((((DAT_0044ebc8 < local_c) || (DAT_0044ebc8 < local_10)) || (DAT_0044ebc8 < local_18)) ||
     (DAT_0044ebc8 < local_20)) {
    iVar3 = iVar2 * DAT_0044ebf0;
    iVar6 = iVar5 * DAT_0044ebf4;
    iVar5 = iVar5 * DAT_0044ebf4 + iVar1 * DAT_0044ebf0 >> 0xf;
    iVar4 = iVar7 * DAT_0044ebf4 + iVar1 * DAT_0044ebf0 >> 0xf;
    iVar1 = *(short *)(in_stack_00000004 + 0x53) - DAT_0044ebfc;
    iVar7 = iVar7 * DAT_0044ebf4 + iVar2 * DAT_0044ebf0 >> 0xf;
    *(int *)(in_stack_00000004 + 0x19) = iVar7;
    *(int *)(in_stack_00000004 + 0x1d) = iVar1;
    *(int *)(in_stack_00000004 + 0x21) = local_c;
    iVar2 = iVar6 + iVar3 >> 0xf;
    *(int *)(in_stack_00000004 + 0x25) = iVar2;
    *(int *)(in_stack_00000004 + 0x29) = iVar1;
    *(int *)(in_stack_00000004 + 0x2d) = local_10;
    *(int *)(in_stack_00000004 + 0x31) = iVar5;
    *(int *)(in_stack_00000004 + 0x35) = iVar1;
    *(int *)(in_stack_00000004 + 0x39) = local_18;
    *(int *)(in_stack_00000004 + 0x3d) = iVar4;
    *(int *)(in_stack_00000004 + 0x41) = iVar1;
    *(int *)(in_stack_00000004 + 0x45) = local_20;
    if (local_c < DAT_0044ebc8) {
      local_c = DAT_0044ebc8;
    }
    if (local_10 < DAT_0044ebc8) {
      local_10 = DAT_0044ebc8;
    }
    if (local_18 < DAT_0044ebc8) {
      local_18 = DAT_0044ebc8;
    }
    if (local_20 < DAT_0044ebc8) {
      local_20 = DAT_0044ebc8;
    }
    iVar7 = ((DAT_0044f6cc / local_c) * iVar7 >> 0xf) + (int)DAT_0044ebd0;
    iVar2 = ((DAT_0044f6cc / local_10) * iVar2 >> 0xf) + (int)DAT_0044ebd0;
    iVar5 = ((DAT_0044f6cc / local_18) * iVar5 >> 0xf) + (int)DAT_0044ebd0;
    iVar3 = ((DAT_0044f6cc / local_20) * iVar4 >> 0xf) + (int)DAT_0044ebd0;
    iVar1 = iVar7;
    if (iVar2 < iVar7) {
      iVar1 = iVar2;
    }
    if (iVar5 < iVar1) {
      iVar1 = iVar5;
    }
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    if (iVar7 < iVar2) {
      iVar7 = iVar2;
    }
    if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    if (iVar7 < iVar3) {
      iVar7 = iVar3;
    }
    *(byte *)(in_stack_00000004 + 0x16) = *(byte *)(in_stack_00000004 + 0x16) | 1;
    *(short *)(in_stack_00000004 + 0x4d) = (short)iVar1;
    *(short *)(in_stack_00000004 + 0x4f) = (short)iVar7;
    *(short *)(in_stack_00000004 + 0x17) = (short)(local_c + local_10 + local_18 + local_20 >> 2);
    if (*(short *)(in_stack_00000004 + 0x17) < 0) {
      *(undefined2 *)(in_stack_00000004 + 0x17) = 0;
    }
  }
  else {
    *(byte *)(in_stack_00000004 + 0x16) = *(byte *)(in_stack_00000004 + 0x16) & 0xfe;
    *(undefined2 *)(in_stack_00000004 + 0x17) = 0;
  }
  return;
}


/* Ghidra address: 0040ec8c; FUN_0040ec8c */

void FUN_0040ec8c(void)

{
  int in_stack_00000004;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  
  *in_stack_00000008 = *(undefined2 *)(in_stack_00000004 + 0x4f);
  *in_stack_0000000c = *(undefined2 *)(in_stack_00000004 + 0x4d);
  return;
}


/* Ghidra address: 0040eca8; FUN_0040eca8 */

void FUN_0040eca8(void)

{
  int in_stack_00000004;
  
  if (((*(byte *)(in_stack_00000004 + 0x16) & 1) != 0) &&
     (DAT_00439da8 = 0, 0 < *(int *)(in_stack_00000004 + 0x1d))) {
    (**(code **)(*DAT_0044ec08 + 0x4c))();
  }
  return;
}


/* Ghidra address: 0040f9c0; FUN_0040f9c0 */

void FUN_0040f9c0(void)

{
  undefined *in_stack_00000004;
  
  PTR_DAT_004357a8 = in_stack_00000004;
  return;
}


/* Ghidra address: 0040f9d0; FUN_0040f9d0 */

void FUN_0040f9d0(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  FUN_0042e040();
  uVar2 = 0xffffffff;
  pcVar4 = PTR_DAT_004357a8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0044f6d4;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  }
  FUN_00429084();
  FUN_0042e040();
  uVar2 = 0xffffffff;
  pcVar4 = PTR_DAT_004357a8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0044f724;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  }
  FUN_00429084();
  FUN_0042e040();
  uVar2 = 0xffffffff;
  pcVar4 = PTR_DAT_004357a8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0044f774;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  }
  FUN_00429084();
  FUN_0042e040();
  uVar2 = 0xffffffff;
  pcVar4 = PTR_DAT_004357a8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0044f7c4;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  }
  FUN_00429084();
  FUN_0042e040();
  uVar2 = 0xffffffff;
  pcVar4 = PTR_DAT_004357a8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0044f814;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  }
  FUN_00429084();
  uVar2 = 0xffffffff;
  pcVar4 = PTR_DAT_004357a8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0044f864;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  }
  FUN_00429084();
  uVar2 = 0xffffffff;
  pcVar4 = PTR_DAT_004357a8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0044f8b4;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  }
  FUN_00429084();
  uVar2 = 0xffffffff;
  pcVar4 = PTR_DAT_004357a8;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_0044f904;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  }
  FUN_00429084();
  return;
}


/* Ghidra address: 0040fbe8; FUN_0040fbe8 */

undefined4 * FUN_0040fbe8(void)

{
  return &DAT_0044f814;
}


/* Ghidra address: 0040fbf0; FUN_0040fbf0 */

undefined4 * FUN_0040fbf0(void)

{
  return &DAT_0044f864;
}


/* Ghidra address: 0040fbf8; FUN_0040fbf8 */

undefined4 * FUN_0040fbf8(void)

{
  return &DAT_0044f8b4;
}


/* Ghidra address: 0040fc00; FUN_0040fc00 */

undefined4 * FUN_0040fc00(void)

{
  return &DAT_0044f904;
}


/* Ghidra address: 0040fc08; FUN_0040fc08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040fc08(void)

{
  SHORT SVar1;
  SHORT SVar2;
  SHORT SVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  short sVar7;
  short sVar8;
  bool bVar9;
  
  DAT_0044f954 = 0;
  if (DAT_004346b4 < 0x101) {
    sVar5 = DAT_004346b4;
    if (DAT_004346b4 < -0x100) {
      sVar5 = -0x100;
    }
  }
  else {
    sVar5 = 0x100;
  }
  if (DAT_004346b8 < 0x101) {
    sVar8 = DAT_004346b8;
    if (DAT_004346b8 < -0x100) {
      sVar8 = -0x100;
    }
  }
  else {
    sVar8 = 0x100;
  }
  SVar1 = GetAsyncKeyState(1);
  SVar2 = GetAsyncKeyState(2);
  SVar3 = GetAsyncKeyState(0x12);
  if ((SVar3 == 0) && ((DAT_0043764c != 0 || (SVar2 == 0)))) {
    if (sVar5 < 1) {
      if (sVar5 < 0) {
        DAT_0044f954 = DAT_0044f954 | 8;
      }
    }
    else {
      DAT_0044f954 = DAT_0044f954 | 4;
    }
    if (sVar5 < 1) {
      sVar5 = -sVar5;
    }
    bVar9 = sVar5 != 0;
    sVar5 = 0;
    if (bVar9) {
      uVar6 = FUN_0042fc2c();
      sVar5 = (short)uVar6;
    }
    if (0x12 < sVar5) {
      sVar5 = 0x12;
    }
    if (sVar8 < 1) {
      if (sVar8 < 0) {
        DAT_0044f954 = DAT_0044f954 | 0x20;
      }
    }
    else {
      DAT_0044f954 = DAT_0044f954 | 0x10;
    }
    DAT_00435808 = sVar5;
    uVar6 = FUN_0042fc2c();
    sVar8 = (short)uVar6;
    _DAT_0043580a = sVar8;
    if (0x1d6 < sVar8) {
      sVar8 = 0x1d6;
      _DAT_0043580a = sVar8;
    }
  }
  else {
    sVar7 = sVar5;
    if (sVar5 < 1) {
      sVar7 = -sVar5;
    }
    sVar4 = sVar8;
    if (sVar8 < 1) {
      sVar4 = -sVar8;
    }
    if (((sVar7 < sVar4) && (DAT_0043764c == 0)) && (SVar2 != 0)) {
      if (0 < sVar8) {
        FUN_00424d90();
      }
      if (sVar8 < 0) {
        FUN_00424d20();
      }
      sVar8 = 0;
      sVar5 = 0;
    }
    else {
      SVar3 = GetAsyncKeyState(0x12);
      if (SVar3 != 0) {
        if (0 < sVar5) {
          DAT_0044f954 = DAT_0044f954 | 0x80000;
        }
        if (sVar5 < 0) {
          DAT_0044f954 = DAT_0044f954 | 0x100000;
        }
        uVar6 = FUN_0042fc2c();
        sVar5 = (short)uVar6;
        _DAT_0043580a = sVar5;
        if (0x10e < sVar5) {
          sVar5 = 0x10e;
          _DAT_0043580a = sVar5;
        }
      }
    }
  }
  if (SVar1 != 0) {
    DAT_0044f954 = DAT_0044f954 | 0x200;
  }
  if ((SVar2 != 0) && (DAT_0043764c != 0)) {
    DAT_0044f954 = DAT_0044f954 | 0x10;
    _DAT_0043580a = 0x96;
  }
  if (((sVar5 != 0) || (sVar8 != 0)) || (SVar2 != 0)) {
    DAT_0044f954 = DAT_0044f954 | 0x40000000;
  }
  if (DAT_00434278 == 1) {
    DAT_00434278 = 0;
    DAT_0044f954 = DAT_0044f954 | 0x20000000;
  }
  return DAT_0044f954;
}


/* Ghidra address: 0040fe78; FUN_0040fe78 */

void FUN_0040fe78(void)

{
  int iVar1;
  
  (**(code **)(*DAT_0044f640 + 0x40))();
  FUN_0042fc2c();
  for (iVar1 = 0; iVar1 < DAT_00435814; iVar1 = iVar1 + 1) {
    if (iVar1 == DAT_0044f958) {
      (**(code **)(*DAT_0044f640 + 0x40))();
    }
  }
  return;
}


/* Ghidra address: 0040ff18; FUN_0040ff18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ff18(void)

{
  undefined4 in_stack_00000008;
  
  DAT_0044f974 = FUN_0041d904();
  DAT_0044f978 = FUN_0041d904();
  *(undefined2 *)((int)DAT_0044f974 + 4) = 8;
  *(undefined2 *)((int)DAT_0044f978 + 4) = 8;
  _DAT_0044f96c = FUN_0042fc2c();
  _DAT_0044f970 = FUN_0042fc2c();
  _DAT_0044f964 = FUN_0042fc2c();
  _DAT_0044f968 = FUN_0042fc2c();
  DAT_0044f958 = 0;
  DAT_00435814 = in_stack_00000008;
  DAT_00435818 = FUN_0042fc2c();
  DAT_0043581c = FUN_0042fc2c();
  DAT_0044f95c = FUN_0042fc2c();
  DAT_0044f960 = FUN_0042fc2c();
  FUN_00409a38();
  FUN_0040fe78();
  FUN_004281c6();
  return;
}


/* Ghidra address: 00410054; FUN_00410054 */

int FUN_00410054(void)

{
  uint uVar1;
  int iVar2;
  
  FUN_0040fe78();
  uVar1 = FUN_00427f4c();
  FUN_004281c6();
  iVar2 = FUN_00409a58();
  if ((((uVar1 & 0x40000000) != 0) && (iVar2 < 500)) || (uVar1 == 0)) {
    return 0;
  }
  FUN_00409a8c();
  FUN_00409a38();
  if ((((uVar1 & 4) == 0) && ((uVar1 & 0x10) == 0)) && ((uVar1 & 0x400) == 0)) {
    if (((uVar1 & 8) != 0) || ((uVar1 & 0x20) != 0)) {
      DAT_0044f958 = DAT_0044f958 + 1;
      DAT_0044f958 = DAT_0044f958 % DAT_00435814;
    }
  }
  else if (DAT_0044f958 < 1) {
    DAT_0044f958 = DAT_00435814 + -1;
  }
  else {
    DAT_0044f958 = DAT_0044f958 + -1;
  }
  if (((uVar1 & 0x800) == 0) && ((uVar1 & 0x200) == 0)) {
    if ((uVar1 & 0x4000) != 0) {
      return -1;
    }
    return 0;
  }
  return DAT_0044f958 + 1;
}


/* Ghidra address: 00410114; FUN_00410114 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410114(void)

{
  int *piVar1;
  int iVar2;
  
  FUN_00424c98();
  piVar1 = DAT_0044f640;
  *(undefined2 *)(DAT_0044f640 + 8) = 0x30;
  *(undefined2 *)((int)piVar1 + 0x22) = 0x28;
  FUN_004267f4();
  iVar2 = 0;
  do {
    FUN_0042bb58();
    if ((*(byte *)(DAT_0044f9b8 + 0x12) & 0x20) != 0) break;
    FUN_00426799();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x12);
  FUN_0042fc2c();
  FUN_0042fc2c();
  (**(code **)(*DAT_0044f640 + 0x40))();
  return;
}


/* Ghidra address: 00410208; FUN_00410208 */

void FUN_00410208(void)

{
  FUN_0042cfc4();
  DAT_0044f9b8 = FUN_0042bebc();
  if (DAT_0044f9b8 != 0) {
    FUN_00424c6c();
  }
  DAT_0044f9bc = FUN_00409ad0();
  FUN_00410114();
  FUN_004281c6();
  return;
}


/* Ghidra address: 00410270; FUN_00410270 */

undefined4 FUN_00410270(void)

{
  uint uVar1;
  
  if (DAT_0044f9b8 == 0) {
    return 0;
  }
  uVar1 = FUN_00427f4c();
  if (((uVar1 != 0x800) && (uVar1 != 0x200)) && (uVar1 != 0x4000)) {
    return 1;
  }
  FUN_004281c6();
  if (uVar1 == 0x4000) {
    return 0;
  }
  if ((*(byte *)(DAT_0044f9b8 + 0x12) & 0x20) != 0) {
    return 0;
  }
  FUN_00410114();
  return 1;
}


/* Ghidra address: 004102d4; FUN_004102d4 */

void FUN_004102d4(void)

{
  if (DAT_0044f9b8 != 0) {
    FUN_0042ba40();
    FUN_00424cbc();
  }
  FUN_00409b1c();
  return;
}


/* Ghidra address: 00410304; FUN_00410304 */

LPVOID FUN_00410304(void)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  SIZE_T in_stack_00000004;
  
  DAT_004358a0 = DAT_004358a0 + 1;
  hMem = GlobalAlloc(2,in_stack_00000004);
  pvVar1 = GlobalLock(hMem);
  if ((pvVar1 == (LPVOID)0x0) || (1000 < DAT_004358a0)) {
    FUN_00427b9f();
  }
  return pvVar1;
}


/* Ghidra address: 0041034c; FUN_0041034c */

void FUN_0041034c(void)

{
  HGLOBAL pvVar1;
  LPCVOID in_stack_00000004;
  
  DAT_004358a0 = DAT_004358a0 + -1;
  if ((in_stack_00000004 == (LPCVOID)0x0) || (DAT_004358a0 < 0)) {
    FUN_00427b9f();
  }
  pvVar1 = GlobalHandle(in_stack_00000004);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(in_stack_00000004);
  GlobalFree(pvVar1);
  return;
}


/* Ghidra address: 0041038c; FUN_0041038c */

void FUN_0041038c(void)

{
  int *in_stack_00000004;
  
  in_stack_00000004[6] = (&DAT_0044f9c0)[in_stack_00000004[8]];
  in_stack_00000004[7] = (&DAT_0044ff60)[in_stack_00000004[8]];
  in_stack_00000004[2] = *in_stack_00000004;
  in_stack_00000004[3] = in_stack_00000004[1];
  in_stack_00000004[4] = *in_stack_00000004 << 0x10;
  in_stack_00000004[5] = in_stack_00000004[1] << 0x10;
  return;
}


/* Ghidra address: 004103cc; FUN_004103cc */

void FUN_004103cc(void)

{
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 0x10) =
       *(int *)(in_stack_00000004 + 0x10) + *(int *)(in_stack_00000004 + 0x18);
  *(int *)(in_stack_00000004 + 0x14) =
       *(int *)(in_stack_00000004 + 0x14) + *(int *)(in_stack_00000004 + 0x1c);
  *(int *)(in_stack_00000004 + 8) = *(int *)(in_stack_00000004 + 0x10) >> 0x10;
  *(int *)(in_stack_00000004 + 0xc) = *(int *)(in_stack_00000004 + 0x14) >> 0x10;
  return;
}


/* Ghidra address: 004103f4; FUN_004103f4 */

void FUN_004103f4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int in_stack_00000004;
  int *local_20;
  int local_14;
  
  local_14 = 0;
  piVar5 = &DAT_0044ff60;
  local_20 = &DAT_0044f9c0;
  do {
    FUN_0042fd14();
    uVar1 = FUN_0042fc2c();
    FUN_0042fa9c();
    uVar2 = FUN_0042fc2c();
    uVar3 = (int)uVar1 >> 0x1f;
    uVar4 = (int)uVar2 >> 0x1f;
    if ((int)((uVar2 ^ uVar4) - uVar4) < (int)((uVar1 ^ uVar3) - uVar3)) {
      *local_20 = in_stack_00000004 * 0x10000;
      if ((int)uVar1 < 0) {
        *local_20 = in_stack_00000004 * -0x10000;
      }
      *piVar5 = ((int)uVar2 / (int)(((int)uVar1 >> 0x10 ^ uVar3) - uVar3)) * in_stack_00000004;
    }
    else {
      *piVar5 = in_stack_00000004 * 0x10000;
      if ((int)uVar2 < 0) {
        *piVar5 = in_stack_00000004 * -0x10000;
      }
      *local_20 = ((int)uVar1 / (int)(((int)uVar2 >> 0x10 ^ uVar4) - uVar4)) * in_stack_00000004;
    }
    local_14 = local_14 + 1;
    piVar5 = piVar5 + 1;
    local_20 = local_20 + 1;
  } while (local_14 < 0x168);
  return;
}


/* Ghidra address: 0041050c; FUN_0041050c */

void FUN_0041050c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *in_stack_00000004;
  
  uVar2 = *in_stack_00000004 - in_stack_00000004[2] >> 0x1f;
  uVar3 = in_stack_00000004[1] - in_stack_00000004[3] >> 0x1f;
  iVar1 = ((in_stack_00000004[1] - in_stack_00000004[3] ^ uVar3) - uVar3) * 0x10000;
  iVar4 = ((*in_stack_00000004 - in_stack_00000004[2] ^ uVar2) - uVar2) * 0x10000;
  if (iVar1 < iVar4) {
    in_stack_00000004[8] = 0x10000;
    iVar4 = iVar4 >> 0x10;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    in_stack_00000004[9] = iVar1 / iVar4;
  }
  else {
    iVar1 = iVar1 >> 0x10;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    in_stack_00000004[8] = iVar4 / iVar1;
    in_stack_00000004[9] = 0x10000;
  }
  if (in_stack_00000004[2] < *in_stack_00000004) {
    in_stack_00000004[8] = -in_stack_00000004[8];
  }
  if (in_stack_00000004[3] < in_stack_00000004[1]) {
    in_stack_00000004[9] = -in_stack_00000004[9];
  }
  in_stack_00000004[6] = *in_stack_00000004 << 0x10;
  in_stack_00000004[7] = in_stack_00000004[1] << 0x10;
  return;
}


/* Ghidra address: 004105a8; FUN_004105a8 */

void FUN_004105a8(void)

{
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 0x10) = *(int *)(in_stack_00000004 + 0x18) + 0x7fff >> 0x10;
  *(int *)(in_stack_00000004 + 0x14) = *(int *)(in_stack_00000004 + 0x1c) + 0x7fff >> 0x10;
  *(int *)(in_stack_00000004 + 0x18) =
       *(int *)(in_stack_00000004 + 0x18) + *(int *)(in_stack_00000004 + 0x20);
  *(int *)(in_stack_00000004 + 0x1c) =
       *(int *)(in_stack_00000004 + 0x1c) + *(int *)(in_stack_00000004 + 0x24);
  return;
}


/* Ghidra address: 004106c8; FUN_004106c8 */

int * FUN_004106c8(void)

{
  int *in_stack_00000004;
  
  (**(code **)(*in_stack_00000004 + 0x10))();
  (**(code **)(*in_stack_00000004 + 0x10))();
  (**(code **)(*in_stack_00000004 + 0x10))();
  return in_stack_00000004;
}


/* Ghidra address: 00410714; FUN_00410714 */

void FUN_00410714(void)

{
  LPVOID pvVar1;
  uint *in_stack_00000004;
  
  pvVar1 = FUN_00410304();
  *in_stack_00000004 = (uint)pvVar1;
  in_stack_00000004[1] = (*in_stack_00000004 & 0xffffff00) + 0x100;
  return;
}


/* Ghidra address: 0041073c; FUN_0041073c */

void FUN_0041073c(void)

{
  undefined4 *in_stack_00000004;
  
  FUN_0041034c();
  *in_stack_00000004 = 0;
  return;
}


/* Ghidra address: 00410754; FUN_00410754 */

int FUN_00410754(void)

{
  short sVar1;
  int in_stack_00000004;
  
  DAT_00450aa0 = in_stack_00000004;
  FUN_00410714();
  sVar1 = 0;
  do {
    *(char *)(*(int *)(in_stack_00000004 + 4) + (int)sVar1) = (char)sVar1;
    sVar1 = sVar1 + 1;
  } while (sVar1 < 0x100);
  sVar1 = 1;
  do {
    FUN_00428fe4();
    sVar1 = sVar1 + 1;
  } while (sVar1 < 0x20);
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 004107b4; FUN_004107b4 */

void FUN_004107b4(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    FUN_0041073c();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 004107e0; FUN_004107e0 */

undefined4 FUN_004107e0(void)

{
  undefined4 in_stack_00000004;
  
  FUN_00410714();
  FUN_00410810();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00410810; FUN_00410810 */

void FUN_00410810(void)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte *in_stack_00000008;
  undefined1 *local_648;
  ushort *local_644;
  ushort *local_640;
  undefined4 local_634;
  
  FUN_0042b4b4(0x435954);
  FUN_00431b68();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  FUN_00407eac();
  DAT_00450aa0 = in_stack_00000004;
  sVar5 = 0;
  do {
    iVar2 = (int)sVar5;
    sVar5 = sVar5 + 1;
    *(undefined1 *)(*(int *)(in_stack_00000004 + 4) + iVar2) = 0;
  } while (sVar5 < 10);
  sVar5 = 10;
  do {
    *(char *)(*(int *)(in_stack_00000004 + 4) + (int)sVar5) = (char)sVar5;
    sVar5 = sVar5 + 1;
  } while (sVar5 < 0x100);
  sVar5 = 0xf6;
  do {
    iVar2 = (int)sVar5;
    sVar5 = sVar5 + 1;
    *(undefined1 *)(*(int *)(in_stack_00000004 + 4) + iVar2) = 0;
  } while (sVar5 < 0xff);
  sVar5 = 0;
  do {
    sVar6 = 1;
    do {
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      FUN_00407abc();
      sVar1 = FUN_00407ee8();
      *(char *)(*(int *)(in_stack_00000004 + 4) + sVar6 * 0x100 + (int)sVar5) = (char)sVar1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
      sVar6 = sVar6 + 1;
    } while (sVar6 < 0x20);
    sVar5 = sVar5 + 1;
  } while (sVar5 < 0x100);
  sVar5 = 0;
  local_644 = (ushort *)(in_stack_00000004 + 8);
  do {
    sVar6 = 0;
    local_640 = local_644;
    pbVar3 = in_stack_00000008;
    do {
      iVar2 = (0x20 - sVar5) * (uint)*pbVar3;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      iVar7 = (0x20 - sVar5) * (uint)pbVar3[1];
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x1f;
      }
      iVar8 = (0x20 - sVar5) * (uint)pbVar3[2];
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x1f;
      }
      sVar6 = sVar6 + 1;
      pbVar3 = pbVar3 + 3;
      *local_640 = (ushort)((iVar2 >> 6) << 10) | (ushort)((iVar7 >> 6) << 5) | (ushort)(iVar8 >> 6)
      ;
      local_640 = local_640 + 1;
    } while (sVar6 < 0x100);
    sVar5 = sVar5 + 1;
    local_644 = local_644 + 0x100;
  } while (sVar5 < 0x20);
  sVar5 = 0;
  local_648 = (undefined1 *)(in_stack_00000004 + 0x4008);
  do {
    sVar6 = 0;
    pbVar3 = in_stack_00000008;
    puVar4 = local_648;
    do {
      iVar2 = (0x20 - sVar5) * (uint)*pbVar3;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      *puVar4 = (char)((iVar2 >> 5) << 2);
      iVar2 = (0x20 - sVar5) * (uint)pbVar3[1];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      puVar4[1] = (char)((iVar2 >> 5) << 2);
      iVar2 = (0x20 - sVar5) * (uint)pbVar3[2];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      sVar6 = sVar6 + 1;
      pbVar3 = pbVar3 + 3;
      puVar4[2] = (char)((iVar2 >> 5) << 2);
      puVar4 = puVar4 + 3;
    } while (sVar6 < 0x100);
    sVar5 = sVar5 + 1;
    local_648 = local_648 + 0x300;
  } while (sVar5 < 0x20);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  FUN_00431aa4();
  *in_FS_OFFSET = local_634;
  return;
}


/* Ghidra address: 00410b64; FUN_00410b64 */

void FUN_00410b64(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  byte *in_stack_00000008;
  ushort *local_1c;
  ushort *local_18;
  ushort *local_14;
  ushort *local_10;
  int local_c;
  int local_8;
  
  if (DAT_00435924 == 2) {
    iVar3 = 0;
    local_14 = (ushort *)(in_stack_00000004 + 8);
    do {
      local_8 = 0;
      local_10 = local_14;
      pbVar1 = in_stack_00000008;
      do {
        iVar2 = 0x20 - iVar3;
        iVar4 = (uint)*pbVar1 * iVar2;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0x1f;
        }
        iVar5 = (uint)pbVar1[1] * iVar2;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0x1f;
        }
        iVar2 = (uint)pbVar1[2] * iVar2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0x1f;
        }
        *local_10 = (ushort)((iVar4 >> 6) << 0xb) | (ushort)((iVar5 >> 5) << 5) |
                    (ushort)(iVar2 >> 6);
        local_8 = local_8 + 1;
        local_10 = local_10 + 1;
        pbVar1 = pbVar1 + 3;
      } while (local_8 < 0x100);
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0x100;
    } while (iVar3 < 0x20);
  }
  else {
    iVar3 = 0;
    local_1c = (ushort *)(in_stack_00000004 + 8);
    do {
      local_c = 0;
      local_18 = local_1c;
      pbVar1 = in_stack_00000008;
      do {
        iVar2 = 0x20 - iVar3;
        iVar4 = (uint)*pbVar1 * iVar2;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0x1f;
        }
        iVar5 = (uint)pbVar1[1] * iVar2;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0x1f;
        }
        iVar2 = (uint)pbVar1[2] * iVar2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0x1f;
        }
        *local_18 = (ushort)((iVar4 >> 6) << 10) | (ushort)((iVar5 >> 6) << 5) |
                    (ushort)(iVar2 >> 6);
        local_c = local_c + 1;
        local_18 = local_18 + 1;
        pbVar1 = pbVar1 + 3;
      } while (local_c < 0x100);
      iVar3 = iVar3 + 1;
      local_1c = local_1c + 0x100;
    } while (iVar3 < 0x20);
  }
  return;
}


/* Ghidra address: 00410cac; FUN_00410cac */

void FUN_00410cac(void)

{
  short sVar1;
  short sVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined1 *local_64c;
  undefined1 *local_648;
  short local_63e;
  undefined4 local_63c;
  
  FUN_0042b4b4(0x4359ac);
  FUN_00431b68();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  FUN_00407eac();
  local_63e = 0;
  local_64c = (undefined1 *)(in_stack_00000004 + 0xa008);
  do {
    sVar2 = 0;
    local_648 = local_64c;
    do {
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      FUN_00407abc();
      sVar1 = FUN_00407ee8();
      *local_648 = (char)sVar1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
      sVar2 = sVar2 + 1;
      local_648 = local_648 + 1;
    } while (sVar2 < 0x100);
    local_63e = local_63e + 1;
    local_64c = local_64c + 0x100;
  } while (local_63e < 0x100);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  FUN_00431aa4();
  *in_FS_OFFSET = local_63c;
  return;
}


/* Ghidra address: 00410ea8; FUN_00410ea8 */

void FUN_00410ea8(void)

{
  undefined4 in_stack_00000004;
  
  DAT_00450aa0 = in_stack_00000004;
  FUN_00428fe4();
  FUN_00428fe4();
  FUN_00428fe4();
  return;
}


/* Ghidra address: 00410f60; FUN_00410f60 */

void FUN_00410f60(void)

{
  FUN_0040777c();
  return;
}


/* Ghidra address: 00411064; FUN_00411064 */

void FUN_00411064(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x435a18);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    sVar4 = 0;
    do {
      FUN_00411394();
      sVar4 = sVar4 + 1;
    } while (sVar4 < 0x100);
    piVar5 = (int *)(in_stack_00000004 + 0x758);
    for (sVar4 = 0; sVar4 < *(short *)(in_stack_00000004 + 0x70e); sVar4 = sVar4 + 1) {
      puVar3 = (undefined4 *)*piVar5;
      if (puVar3 != (undefined4 *)0x0) {
        for (; puVar1 = (undefined4 *)*puVar3, puVar1 != (undefined4 *)0x0; puVar3 = puVar3 + 1) {
          if (puVar1 != (undefined4 *)0x0) {
            iVar2 = FUN_0042b677();
            *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
            (**(code **)*puVar1)();
          }
        }
        FUN_00431964();
      }
      piVar5 = piVar5 + 1;
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 00411138; FUN_00411138 */

void FUN_00411138(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  short *in_stack_00000004;
  undefined4 local_28;
  
  FUN_0042b4b4(0x435a48);
  DAT_00436378 = 0;
  DAT_0043637c = 0;
  DAT_0048aaac = 0x40;
  DAT_0043408c = 0x200;
  DAT_00434090 = 0x180;
  DAT_0048e514 = 0;
  DAT_0048aab4 = in_stack_00000004;
  in_stack_00000004[0x3aa] = 0;
  in_stack_00000004[0x3ab] = 0;
  in_stack_00000004[6] = 0;
  in_stack_00000004[0x25b9] = 0;
  in_stack_00000004[0x388] = 0;
  FUN_00429054();
  FUN_00429054();
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_00426e8c();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  *in_stack_00000004 = DAT_0048aab8;
  in_stack_00000004[1] = DAT_0048aaba;
  in_stack_00000004[2] = DAT_0048aabc;
  in_stack_00000004[0x3a7] = DAT_0048aabe;
  in_stack_00000004[0x3a8] = DAT_0048aac0;
  in_stack_00000004[5] = DAT_0048aac6;
  in_stack_00000004[3] = DAT_0048aac2;
  in_stack_00000004[4] = DAT_0048aac4;
  FUN_00407db8();
  FUN_00428fe4();
  FUN_00428fe4();
  FUN_00428fe4();
  in_stack_00000004[0x25b4] = 1;
  in_stack_00000004[0x25b5] = 0;
  *(int *)(in_stack_00000004 + 0x25b6) = (int)*in_stack_00000004;
  in_stack_00000004[0x387] = *in_stack_00000004 * in_stack_00000004[2];
  FUN_00428fe4();
  in_stack_00000004[0x3a9] = 0;
  FUN_00412b74();
  if (puVar1 != (uint *)0x0) {
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_00426cf8();
  }
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 0041133c; FUN_0041133c */

int FUN_0041133c(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = 0;
  piVar1 = (int *)(in_stack_00000004 + 0x30e);
  while( true ) {
    if (*piVar1 == 0) {
      *(short *)(in_stack_00000004 + 0x752) = *(short *)(in_stack_00000004 + 0x752) + 1;
      return iVar2;
    }
    if ((*(byte *)(*piVar1 + 0x1c) & 4) != 0) break;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
    if (0xff < (short)iVar2) {
      return -1;
    }
  }
  FUN_00411394();
  *(short *)(in_stack_00000004 + 0x752) = *(short *)(in_stack_00000004 + 0x752) + 1;
  return iVar2;
}


/* Ghidra address: 00411394; FUN_00411394 */

void FUN_00411394(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  uint in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x435a78);
  iVar1 = *(int *)(in_stack_00000004 + 0x30e + (in_stack_00000008 & 0xff) * 4);
  if (iVar1 != 0) {
    if (iVar1 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar1 + 0x14))();
    }
    *(undefined4 *)(in_stack_00000004 + 0x30e + (in_stack_00000008 & 0xff) * 4) = 0;
  }
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 00411418; FUN_00411418 */

void FUN_00411418(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  *(undefined4 *)(in_stack_00000004 + 0x30e + (uint)in_stack_00000008 * 4) = in_stack_0000000c;
  return;
}


/* Ghidra address: 00411430; FUN_00411430 */

undefined4 FUN_00411430(void)

{
  undefined4 in_stack_00000004;
  
  FUN_00431b68();
  FUN_00411138();
  FUN_004103f4();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00411480; FUN_00411480 */

undefined4 FUN_00411480(void)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000004;
  int *in_stack_00000008;
  short in_stack_0000000c;
  int in_stack_00000010;
  short local_74;
  short local_72;
  int local_8;
  
  iVar7 = *in_stack_00000008;
  local_8 = in_stack_00000008[2];
  FUN_0041da64();
  if (in_stack_00000010 == 0) {
    iVar6 = *(int *)(&DAT_00445fb0 + local_72 * 4) * in_stack_00000008[6];
    iVar5 = *(int *)(&DAT_00446554 + local_72 * 4) * in_stack_00000008[6];
  }
  else {
    FUN_0041da64();
    iVar1 = in_stack_00000008[6];
    iVar5 = (*(int *)(&DAT_00446554 + local_72 * 4) * *(int *)(&DAT_00446554 + local_74 * 4) >> 0xf)
            * iVar1;
    iVar6 = (*(int *)(&DAT_00445fb0 + local_72 * 4) * *(int *)(&DAT_00446554 + local_74 * 4) >> 0xf)
            * iVar1;
    in_stack_00000008[1] =
         in_stack_00000008[1] + (*(int *)(&DAT_00445fb0 + local_74 * 4) * iVar1 >> 0xf);
  }
  local_8 = local_8 - (iVar5 >> 0xf);
  iVar7 = (iVar6 >> 0xf) + iVar7;
  sVar4 = (short)(local_8 / (int)DAT_0048aab4[0x3a7]);
  sVar2 = (short)(iVar7 / (int)DAT_0048aab4[0x3a7]);
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar2) {
    sVar2 = *DAT_0048aab4 + -1;
  }
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar4) {
    sVar4 = DAT_0048aab4[2] + -1;
  }
  sVar2 = sVar4 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6) + sVar2;
  *in_stack_00000008 = iVar7;
  in_stack_00000008[2] = local_8;
  if (in_stack_0000000c == 0) {
    uVar3 = *(undefined4 *)(in_stack_00000004 + 0x30e + (uint)(byte)(&DAT_0048e518)[sVar2] * 4);
  }
  else if (in_stack_0000000c == 1) {
    uVar3 = *(undefined4 *)(in_stack_00000004 + 0x30e + (uint)(byte)(&DAT_0048f61c)[sVar2] * 4);
  }
  else {
    uVar3 = *(undefined4 *)(in_stack_00000004 + 0x30e + (uint)(byte)(&DAT_00490720)[sVar2] * 4);
  }
  return uVar3;
}


/* Ghidra address: 00411634; FUN_00411634 */

undefined4 FUN_00411634(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  short in_stack_00000010;
  short local_6;
  
  sVar1 = (short)((in_stack_0000000c - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
  sVar3 = (short)((in_stack_00000008 - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (*in_stack_00000004 + -1 < (int)sVar3) {
    sVar3 = *in_stack_00000004 + -1;
  }
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (in_stack_00000004[2] + -1 < (int)sVar1) {
    sVar1 = in_stack_00000004[2] + -1;
  }
  sVar2 = (short)((in_stack_00000010 + in_stack_0000000c) / (int)in_stack_00000004[0x3a7]);
  sVar4 = (short)((in_stack_00000008 - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  if (*in_stack_00000004 + -1 < (int)sVar4) {
    sVar4 = *in_stack_00000004 + -1;
  }
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (in_stack_00000004[2] + -1 < (int)sVar2) {
    sVar2 = in_stack_00000004[2] + -1;
  }
  local_6 = *(short *)(*(int *)(in_stack_00000004 +
                               (uint)(byte)(&DAT_00490720)
                                           [(short)(sVar3 + sVar1 * (short)*(undefined4 *)
                                                                            (in_stack_00000004 +
                                                                            0x25b6))] * 2 + 0x187) +
                      0x1f);
  if (*(short *)(*(int *)(in_stack_00000004 +
                         (uint)(byte)(&DAT_00490720)
                                     [(short)(sVar3 + sVar1 * (short)*(undefined4 *)
                                                                      (in_stack_00000004 + 0x25b6))]
                         * 2 + 0x187) + 0x1f) <
      *(short *)(*(int *)(in_stack_00000004 +
                         (uint)(byte)(&DAT_00490720)
                                     [(short)(sVar4 + sVar2 * (short)*(undefined4 *)
                                                                      (in_stack_00000004 + 0x25b6))]
                         * 2 + 0x187) + 0x1f)) {
    local_6 = *(short *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_00490720)
                                             [(short)(sVar4 + sVar2 * (short)*(undefined4 *)
                                                                              (in_stack_00000004 +
                                                                              0x25b6))] * 2 + 0x187)
                        + 0x1f);
  }
  sVar1 = (short)((in_stack_0000000c - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
  sVar3 = (short)((in_stack_00000010 + in_stack_00000008) / (int)in_stack_00000004[0x3a7]);
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (*in_stack_00000004 + -1 < (int)sVar3) {
    sVar3 = *in_stack_00000004 + -1;
  }
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (in_stack_00000004[2] + -1 < (int)sVar1) {
    sVar1 = in_stack_00000004[2] + -1;
  }
  if (local_6 < *(short *)(*(int *)(in_stack_00000004 +
                                   (uint)(byte)(&DAT_00490720)
                                               [(short)(sVar3 + (short)((int)sVar1 *
                                                                       *(int *)(in_stack_00000004 +
                                                                               0x25b6)))] * 2 +
                                   0x187) + 0x1f)) {
    local_6 = *(short *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_00490720)
                                             [(short)(sVar3 + (short)((int)sVar1 *
                                                                     *(int *)(in_stack_00000004 +
                                                                             0x25b6)))] * 2 + 0x187)
                        + 0x1f);
  }
  return CONCAT22((short)((uint)((int)sVar1 * *(int *)(in_stack_00000004 + 0x25b6)) >> 0x10),local_6
                 );
}


/* Ghidra address: 0041181c; FUN_0041181c */

undefined4 FUN_0041181c(void)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  short *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  short in_stack_00000010;
  short *in_stack_00000014;
  int in_stack_00000018;
  short local_100;
  short local_fe;
  short local_ec;
  short local_ea;
  short local_d8;
  short local_d6;
  short local_c4;
  short local_c2;
  short local_b0;
  short local_ae;
  short local_98;
  short local_96;
  short local_80;
  short local_7e;
  short local_68;
  short local_66;
  short local_50;
  short local_4e;
  short local_3c;
  short local_3a;
  short local_28;
  short local_26;
  short local_14;
  short local_12;
  
  sVar1 = *in_stack_00000014;
  local_12 = (short)((in_stack_0000000c - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
  local_14 = (short)((in_stack_00000008 - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (*in_stack_00000004 + -1 < (int)local_14) {
    local_14 = *in_stack_00000004 + -1;
  }
  if (local_12 < 0) {
    local_12 = 0;
  }
  if (in_stack_00000004[2] + -1 < (int)local_12) {
    local_12 = in_stack_00000004[2] + -1;
  }
  iVar3 = *(int *)(in_stack_00000004 +
                  (uint)(byte)(&DAT_0048e518)
                              [(short)(local_12 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6)
                                      + local_14)] * 2 + 0x187);
  if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
      (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 || -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f)))
     || (iVar3 = *(short *)(iVar3 + 0x1f) + 20000, -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    sVar1 = *in_stack_00000014;
    local_26 = (short)((in_stack_00000010 + in_stack_0000000c) / (int)in_stack_00000004[0x3a7]);
    local_28 = (short)((in_stack_00000008 - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
    if (local_28 < 0) {
      local_28 = 0;
    }
    if (*in_stack_00000004 + -1 < (int)local_28) {
      local_28 = *in_stack_00000004 + -1;
    }
    if (local_26 < 0) {
      local_26 = 0;
    }
    if (in_stack_00000004[2] + -1 < (int)local_26) {
      local_26 = in_stack_00000004[2] + -1;
    }
    iVar3 = *(int *)(in_stack_00000004 +
                    (uint)(byte)(&DAT_0048e518)
                                [(short)(local_26 *
                                         (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                        local_28)] * 2 + 0x187);
    if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
        (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 || -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f)
        )) || (iVar3 = *(short *)(iVar3 + 0x1f) + 20000,
              -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      sVar1 = *in_stack_00000014;
      local_3a = (short)((in_stack_0000000c - in_stack_00000010) / (int)in_stack_00000004[0x3a7]);
      local_3c = (short)((in_stack_00000010 + in_stack_00000008) / (int)in_stack_00000004[0x3a7]);
      if (local_3c < 0) {
        local_3c = 0;
      }
      if (*in_stack_00000004 + -1 < (int)local_3c) {
        local_3c = *in_stack_00000004 + -1;
      }
      if (local_3a < 0) {
        local_3a = 0;
      }
      if (in_stack_00000004[2] + -1 < (int)local_3a) {
        local_3a = in_stack_00000004[2] + -1;
      }
      iVar3 = *(int *)(in_stack_00000004 +
                      (uint)(byte)(&DAT_0048e518)
                                  [(short)(local_3a *
                                           (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                          local_3c)] * 2 + 0x187);
      if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
          (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
           -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
         (iVar3 = *(short *)(iVar3 + 0x1f) + 20000, -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        sVar1 = *in_stack_00000014;
        local_4e = (short)((in_stack_00000010 + in_stack_0000000c) / (int)in_stack_00000004[0x3a7]);
        local_50 = (short)((in_stack_00000010 + in_stack_00000008) / (int)in_stack_00000004[0x3a7]);
        if (local_50 < 0) {
          local_50 = 0;
        }
        if (*in_stack_00000004 + -1 < (int)local_50) {
          local_50 = *in_stack_00000004 + -1;
        }
        if (local_4e < 0) {
          local_4e = 0;
        }
        if (in_stack_00000004[2] + -1 < (int)local_4e) {
          local_4e = in_stack_00000004[2] + -1;
        }
        iVar3 = *(int *)(in_stack_00000004 +
                        (uint)(byte)(&DAT_0048e518)
                                    [(short)(local_4e *
                                             (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                            local_50)] * 2 + 0x187);
        if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
            (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
             -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
           (iVar3 = *(short *)(iVar3 + 0x1f) + 20000, -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1))
        {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          sVar1 = *in_stack_00000014;
          local_66 = (short)((in_stack_0000000c - in_stack_00000010) / (int)in_stack_00000004[0x3a7]
                            );
          local_68 = (short)((in_stack_00000008 - in_stack_00000010) / (int)in_stack_00000004[0x3a7]
                            );
          if (local_68 < 0) {
            local_68 = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_68) {
            local_68 = *in_stack_00000004 + -1;
          }
          if (local_66 < 0) {
            local_66 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)local_66) {
            local_66 = in_stack_00000004[2] + -1;
          }
          iVar3 = *(int *)(in_stack_00000004 +
                          (uint)(byte)(&DAT_00490720)
                                      [(short)(local_66 *
                                               (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                              local_68)] * 2 + 0x187);
          if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
              (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
               -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
             ((int)*(short *)(iVar3 + 0x1f) + in_stack_00000018 * 2 < -(int)sVar1)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            sVar1 = *in_stack_00000014;
            local_7e = (short)((in_stack_00000010 + in_stack_0000000c) /
                              (int)in_stack_00000004[0x3a7]);
            local_80 = (short)((in_stack_00000008 - in_stack_00000010) /
                              (int)in_stack_00000004[0x3a7]);
            if (local_80 < 0) {
              local_80 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_80) {
              local_80 = *in_stack_00000004 + -1;
            }
            if (local_7e < 0) {
              local_7e = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_7e) {
              local_7e = in_stack_00000004[2] + -1;
            }
            iVar3 = *(int *)(in_stack_00000004 +
                            (uint)(byte)(&DAT_00490720)
                                        [(short)(local_7e *
                                                 (short)*(undefined4 *)(in_stack_00000004 + 0x25b6)
                                                + local_80)] * 2 + 0x187);
            if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                 -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
               ((int)*(short *)(iVar3 + 0x1f) + in_stack_00000018 * 2 < -(int)sVar1)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              sVar1 = *in_stack_00000014;
              local_96 = (short)((in_stack_0000000c - in_stack_00000010) /
                                (int)in_stack_00000004[0x3a7]);
              local_98 = (short)((in_stack_00000010 + in_stack_00000008) /
                                (int)in_stack_00000004[0x3a7]);
              if (local_98 < 0) {
                local_98 = 0;
              }
              if (*in_stack_00000004 + -1 < (int)local_98) {
                local_98 = *in_stack_00000004 + -1;
              }
              if (local_96 < 0) {
                local_96 = 0;
              }
              if (in_stack_00000004[2] + -1 < (int)local_96) {
                local_96 = in_stack_00000004[2] + -1;
              }
              iVar3 = *(int *)(in_stack_00000004 +
                              (uint)(byte)(&DAT_00490720)
                                          [(short)(local_96 *
                                                   (short)*(undefined4 *)
                                                           (in_stack_00000004 + 0x25b6) + local_98)]
                              * 2 + 0x187);
              if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                  (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                   -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                 ((int)*(short *)(iVar3 + 0x1f) + in_stack_00000018 * 2 < -(int)sVar1)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                sVar1 = *in_stack_00000014;
                local_ae = (short)((in_stack_00000010 + in_stack_0000000c) /
                                  (int)in_stack_00000004[0x3a7]);
                local_b0 = (short)((in_stack_00000010 + in_stack_00000008) /
                                  (int)in_stack_00000004[0x3a7]);
                if (local_b0 < 0) {
                  local_b0 = 0;
                }
                if (*in_stack_00000004 + -1 < (int)local_b0) {
                  local_b0 = *in_stack_00000004 + -1;
                }
                if (local_ae < 0) {
                  local_ae = 0;
                }
                if (in_stack_00000004[2] + -1 < (int)local_ae) {
                  local_ae = in_stack_00000004[2] + -1;
                }
                iVar3 = *(int *)(in_stack_00000004 +
                                (uint)(byte)(&DAT_00490720)
                                            [(short)(local_ae *
                                                     (short)*(undefined4 *)
                                                             (in_stack_00000004 + 0x25b6) + local_b0
                                                    )] * 2 + 0x187);
                if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                    (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                     -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                   ((int)*(short *)(iVar3 + 0x1f) + in_stack_00000018 * 2 < -(int)sVar1)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  sVar1 = *in_stack_00000014;
                  local_c2 = (short)((in_stack_0000000c - in_stack_00000010) /
                                    (int)in_stack_00000004[0x3a7]);
                  local_c4 = (short)((in_stack_00000008 - in_stack_00000010) /
                                    (int)in_stack_00000004[0x3a7]);
                  if (local_c4 < 0) {
                    local_c4 = 0;
                  }
                  if (*in_stack_00000004 + -1 < (int)local_c4) {
                    local_c4 = *in_stack_00000004 + -1;
                  }
                  if (local_c2 < 0) {
                    local_c2 = 0;
                  }
                  if (in_stack_00000004[2] + -1 < (int)local_c2) {
                    local_c2 = in_stack_00000004[2] + -1;
                  }
                  iVar3 = *(int *)(in_stack_00000004 +
                                  (uint)(byte)(&DAT_0048f61c)
                                              [(short)(local_c2 *
                                                       (short)*(undefined4 *)
                                                               (in_stack_00000004 + 0x25b6) +
                                                      local_c4)] * 2 + 0x187);
                  if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                      (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                       -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                     (iVar3 = *(short *)(iVar3 + 0x1f) + 20000,
                     -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    sVar1 = *in_stack_00000014;
                    local_d6 = (short)((in_stack_00000010 + in_stack_0000000c) /
                                      (int)in_stack_00000004[0x3a7]);
                    local_d8 = (short)((in_stack_00000008 - in_stack_00000010) /
                                      (int)in_stack_00000004[0x3a7]);
                    if (local_d8 < 0) {
                      local_d8 = 0;
                    }
                    if (*in_stack_00000004 + -1 < (int)local_d8) {
                      local_d8 = *in_stack_00000004 + -1;
                    }
                    if (local_d6 < 0) {
                      local_d6 = 0;
                    }
                    if (in_stack_00000004[2] + -1 < (int)local_d6) {
                      local_d6 = in_stack_00000004[2] + -1;
                    }
                    iVar3 = *(int *)(in_stack_00000004 +
                                    (uint)(byte)(&DAT_0048f61c)
                                                [(short)(local_d6 *
                                                         (short)*(undefined4 *)
                                                                 (in_stack_00000004 + 0x25b6) +
                                                        local_d8)] * 2 + 0x187);
                    if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                        (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                         -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                       (iVar3 = *(short *)(iVar3 + 0x1f) + 20000,
                       -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      sVar1 = *in_stack_00000014;
                      local_ea = (short)((in_stack_0000000c - in_stack_00000010) /
                                        (int)in_stack_00000004[0x3a7]);
                      local_ec = (short)((in_stack_00000010 + in_stack_00000008) /
                                        (int)in_stack_00000004[0x3a7]);
                      if (local_ec < 0) {
                        local_ec = 0;
                      }
                      if (*in_stack_00000004 + -1 < (int)local_ec) {
                        local_ec = *in_stack_00000004 + -1;
                      }
                      if (local_ea < 0) {
                        local_ea = 0;
                      }
                      if (in_stack_00000004[2] + -1 < (int)local_ea) {
                        local_ea = in_stack_00000004[2] + -1;
                      }
                      iVar3 = *(int *)(in_stack_00000004 +
                                      (uint)(byte)(&DAT_0048f61c)
                                                  [(short)(local_ea *
                                                           (short)*(undefined4 *)
                                                                   (in_stack_00000004 + 0x25b6) +
                                                          local_ec)] * 2 + 0x187);
                      if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                          (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                           -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                         (iVar3 = *(short *)(iVar3 + 0x1f) + 20000,
                         -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        sVar1 = *in_stack_00000014;
                        local_fe = (short)((in_stack_0000000c + in_stack_00000010) /
                                          (int)in_stack_00000004[0x3a7]);
                        local_100 = (short)((in_stack_00000008 + in_stack_00000010) /
                                           (int)in_stack_00000004[0x3a7]);
                        if (local_100 < 0) {
                          local_100 = 0;
                        }
                        if (*in_stack_00000004 + -1 < (int)local_100) {
                          local_100 = *in_stack_00000004 + -1;
                        }
                        if (local_fe < 0) {
                          local_fe = 0;
                        }
                        if (in_stack_00000004[2] + -1 < (int)local_fe) {
                          local_fe = in_stack_00000004[2] + -1;
                        }
                        iVar3 = *(int *)(in_stack_00000004 +
                                        (uint)(byte)(&DAT_0048f61c)
                                                    [(short)(local_fe *
                                                             (short)*(undefined4 *)
                                                                     (in_stack_00000004 + 0x25b6) +
                                                            local_100)] * 2 + 0x187);
                        if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
                            (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
                             -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
                           (iVar3 = *(short *)(iVar3 + 0x1f) + 20000,
                           -iVar3 != (int)sVar1 && iVar3 <= -(int)sVar1)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          return 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


/* Ghidra address: 00412628; FUN_00412628 */

void FUN_00412628(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000020;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = *in_stack_00000008;
  iVar2 = *in_stack_0000000c;
  if (0xff < in_stack_00000020) {
    in_stack_00000020 = 0xff;
  }
  local_8 = in_stack_00000020;
  local_c = in_stack_00000020;
  iVar4 = in_stack_00000010 - iVar1;
  local_10 = in_stack_00000014 - iVar2;
  if (*in_stack_00000008 < in_stack_00000010) {
    local_14 = (*in_stack_00000008 / (int)*(short *)(in_stack_00000004 + 0x74e)) *
               (int)*(short *)(in_stack_00000004 + 0x74e) +
               ((int)*(short *)(in_stack_00000004 + 0x74e) >> 1);
    if ((in_stack_00000010 < local_14) || (local_14 < *in_stack_00000008)) {
      local_14 = *in_stack_00000008;
    }
  }
  else {
    local_14 = (in_stack_00000010 / (int)*(short *)(in_stack_00000004 + 0x74e)) *
               (int)*(short *)(in_stack_00000004 + 0x74e) +
               ((int)*(short *)(in_stack_00000004 + 0x74e) >> 1);
    if ((*in_stack_00000008 < local_14) || (local_14 < in_stack_00000010)) {
      local_14 = in_stack_00000010;
    }
  }
  if (*in_stack_0000000c < in_stack_00000014) {
    local_18 = (*in_stack_0000000c / (int)*(short *)(in_stack_00000004 + 0x74e)) *
               (int)*(short *)(in_stack_00000004 + 0x74e) +
               ((int)*(short *)(in_stack_00000004 + 0x74e) >> 1);
  }
  else {
    local_18 = (in_stack_00000014 / (int)*(short *)(in_stack_00000004 + 0x74e)) *
               (int)*(short *)(in_stack_00000004 + 0x74e) +
               ((int)*(short *)(in_stack_00000004 + 0x74e) >> 1);
  }
  if (in_stack_00000010 < iVar1) {
    local_8 = -in_stack_00000020;
    iVar4 = -iVar4;
  }
  if (in_stack_00000014 < iVar2) {
    local_c = -in_stack_00000020;
    local_10 = -local_10;
  }
  iVar5 = in_stack_00000010;
  iVar6 = in_stack_00000014;
  if (local_10 < iVar4) {
    uVar3 = FUN_0041181c();
    if ((short)uVar3 == 0) {
      uVar3 = FUN_0041181c();
      iVar6 = local_18;
      if ((short)uVar3 == 0) {
        if (local_8 < 0) {
          iVar5 = (iVar1 - iVar1 % (int)*(short *)(in_stack_00000004 + 0x74e)) + in_stack_00000020;
        }
        else {
          iVar5 = (((iVar1 - iVar1 % (int)*(short *)(in_stack_00000004 + 0x74e)) +
                   (int)*(short *)(in_stack_00000004 + 0x74e)) - in_stack_00000020) + -1;
        }
        uVar3 = FUN_0041181c();
        iVar6 = in_stack_00000014;
        if ((short)uVar3 == 0) {
          if (local_c < 0) {
            iVar6 = (iVar2 - iVar2 % (int)*(short *)(in_stack_00000004 + 0x74e)) + in_stack_00000020
            ;
          }
          else {
            iVar6 = (((iVar2 - iVar2 % (int)*(short *)(in_stack_00000004 + 0x74e)) +
                     (int)*(short *)(in_stack_00000004 + 0x74e)) - in_stack_00000020) + -1;
          }
        }
      }
    }
    else {
      uVar3 = FUN_0041181c();
      if ((short)uVar3 == 0) {
        if (local_c < 0) {
          iVar6 = (iVar2 - iVar2 % (int)*(short *)(in_stack_00000004 + 0x74e)) + in_stack_00000020;
        }
        else {
          iVar6 = (((iVar2 - iVar2 % (int)*(short *)(in_stack_00000004 + 0x74e)) +
                   (int)*(short *)(in_stack_00000004 + 0x74e)) - in_stack_00000020) + -1;
        }
      }
    }
  }
  else {
    uVar3 = FUN_0041181c();
    if ((short)uVar3 == 0) {
      uVar3 = FUN_0041181c();
      iVar5 = local_14;
      if ((short)uVar3 == 0) {
        if (local_c < 0) {
          iVar6 = (iVar2 - iVar2 % (int)*(short *)(in_stack_00000004 + 0x74e)) + in_stack_00000020;
        }
        else {
          iVar6 = (((iVar2 - iVar2 % (int)*(short *)(in_stack_00000004 + 0x74e)) +
                   (int)*(short *)(in_stack_00000004 + 0x74e)) - in_stack_00000020) + -1;
        }
        uVar3 = FUN_0041181c();
        iVar5 = in_stack_00000010;
        if ((short)uVar3 == 0) {
          if (local_8 < 0) {
            iVar5 = (iVar1 - iVar1 % (int)*(short *)(in_stack_00000004 + 0x74e)) + in_stack_00000020
            ;
          }
          else {
            iVar5 = (((iVar1 - iVar1 % (int)*(short *)(in_stack_00000004 + 0x74e)) +
                     (int)*(short *)(in_stack_00000004 + 0x74e)) - in_stack_00000020) + -1;
          }
        }
      }
    }
    else {
      uVar3 = FUN_0041181c();
      if ((short)uVar3 == 0) {
        if (local_8 < 0) {
          iVar5 = (iVar1 - iVar1 % (int)*(short *)(in_stack_00000004 + 0x74e)) + in_stack_00000020;
        }
        else {
          iVar5 = (((iVar1 - iVar1 % (int)*(short *)(in_stack_00000004 + 0x74e)) +
                   (int)*(short *)(in_stack_00000004 + 0x74e)) - in_stack_00000020) + -1;
        }
      }
    }
  }
  *in_stack_00000008 = iVar5;
  *in_stack_0000000c = iVar6;
  return;
}


/* Ghidra address: 00412ac8; FUN_00412ac8 */

void FUN_00412ac8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_stack_00000008;
  
  uVar1 = *in_stack_00000008;
  uVar2 = in_stack_00000008[2];
  FUN_00412628();
  *in_stack_00000008 = uVar1;
  in_stack_00000008[2] = uVar2;
  return;
}


/* Ghidra address: 00412b74; FUN_00412b74 */

void FUN_00412b74(void)

{
  undefined1 uVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  undefined4 *puVar9;
  int iVar10;
  short *psVar11;
  undefined4 *puVar12;
  undefined4 *in_FS_OFFSET;
  byte bVar13;
  short *in_stack_00000004;
  uint *local_70c [320];
  undefined *local_20c;
  undefined *local_208;
  undefined *local_204;
  undefined *local_200;
  undefined4 local_1fc;
  short local_1f6;
  short local_1f4;
  byte local_1f1;
  int local_1f0;
  short local_1ec;
  short local_1ea;
  byte local_1e7;
  short local_1e6;
  short local_1e4;
  byte local_1e1;
  int local_1e0;
  short local_1da;
  short local_1d8;
  byte local_1d5;
  short local_1d4;
  short local_1d2;
  byte local_1cf;
  short local_1ce;
  short local_1cc;
  byte local_1c9;
  int local_1c8;
  short local_1c4;
  short local_1c2;
  byte local_1bf;
  short local_1be;
  short local_1bc;
  byte local_1b9;
  int local_1b8;
  short local_1b4;
  short local_1b2;
  byte local_1af;
  short local_1ae;
  short local_1ac;
  byte local_1a9;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  undefined2 local_18e;
  int local_18c;
  int local_188;
  int local_184;
  short local_17e;
  byte local_17b;
  undefined2 local_17a;
  int local_178;
  int local_174;
  int local_170;
  short local_16a;
  byte local_167;
  undefined2 local_166;
  int local_164;
  int local_160;
  int local_15c;
  short local_156;
  byte local_153;
  undefined2 local_152;
  int local_150;
  int local_14c;
  int local_148;
  short local_144;
  byte local_141;
  short local_140;
  short local_13e;
  short local_13c;
  byte local_139;
  short local_138;
  short local_136;
  byte local_133;
  short local_132;
  short local_130;
  byte local_12d;
  short local_12c;
  short local_12a;
  byte local_127;
  undefined2 local_126;
  int local_124;
  int local_120;
  int local_11c;
  short local_116;
  short local_114;
  undefined2 local_112;
  short local_110;
  short local_10e;
  byte local_10b;
  undefined2 local_10a;
  short local_108;
  short local_106;
  byte local_103;
  undefined2 local_102;
  short local_100;
  short local_fe;
  byte local_fb;
  undefined2 local_fa;
  short local_f8;
  short local_f6;
  byte local_f3;
  short local_f2;
  int local_f0;
  int local_ec;
  int local_e8;
  short local_e2;
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  ushort local_c6;
  int local_c4;
  int local_c0;
  int local_bc;
  short local_b6;
  short local_b4;
  short local_b2;
  int local_b0;
  int local_ac;
  short local_a6;
  int local_a4;
  short local_9e;
  short local_9c;
  short local_9a;
  short local_98;
  ushort local_96;
  undefined4 local_94;
  int local_90;
  int local_8c;
  int local_88;
  byte local_81;
  int local_80;
  int local_7c;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  int local_70;
  short local_6c;
  short local_6a;
  undefined4 local_68;
  undefined2 local_58;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  
  bVar13 = 0;
  FUN_0042b4b4(0x435ba8);
  local_6a = in_stack_00000004[2];
  local_6c = *in_stack_00000004;
  local_70 = (int)in_stack_00000004[0x3a7];
  local_72 = local_6c + -1;
  FUN_00429054();
  FUN_00429054();
  for (sVar8 = 0; sVar8 < local_6a >> 1; sVar8 = sVar8 + 1) {
    local_74 = sVar8 * local_6c;
    local_76 = (local_72 - sVar8) * local_6c;
    sVar7 = 0;
    local_20c = &DAT_00490720 + local_76;
    local_208 = &DAT_00490720 + local_74;
    local_204 = &DAT_0048f61c + local_76;
    local_200 = &DAT_0048f61c + local_74;
    if (0 < local_6c) {
      do {
        sVar7 = sVar7 + 1;
        uVar1 = *local_200;
        *local_200 = *local_204;
        *local_204 = uVar1;
        uVar1 = *local_208;
        *local_208 = *local_20c;
        *local_20c = uVar1;
        local_20c = local_20c + 1;
        local_208 = local_208 + 1;
        local_204 = local_204 + 1;
        local_200 = local_200 + 1;
      } while (sVar7 < local_6c);
    }
  }
  sVar8 = 0;
  if (0 < local_6a) {
    do {
      sVar7 = 0;
      if (0 < local_6c) {
        do {
          local_78 = sVar7;
          if (sVar7 < 0) {
            local_78 = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_78) {
            local_78 = *in_stack_00000004 + -1;
          }
          sVar3 = sVar8;
          if (sVar8 < 0) {
            sVar3 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)sVar3) {
            sVar3 = in_stack_00000004[2] + -1;
          }
          local_78 = local_78 + sVar3 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6);
          if ((&DAT_0048f61c)[local_78] == '.') {
            (&DAT_0048f61c)[local_78] = 0x20;
          }
          if ((&DAT_00490720)[local_78] == '.') {
            (&DAT_00490720)[local_78] = 0x20;
          }
          if (*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61c)[local_78] * 2 + 0x187) == 0)
          {
            FUN_00427b9f();
          }
          if (*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_00490720)[local_78] * 2 + 0x187) == 0)
          {
            FUN_00427b9f();
          }
          iVar5 = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61c)[local_78] * 2 + 0x187);
          sVar3 = *(short *)(iVar5 + 0x18);
          if ((sVar3 == 3) && (*(short *)(iVar5 + 0x74) == 99)) {
            in_stack_00000004[0x388] = in_stack_00000004[0x388] + *(short *)(iVar5 + 0x76);
          }
          iVar10 = local_70 >> 1;
          if ((sVar3 == 1) || (sVar3 == 9)) {
            if (sVar3 == 9) {
              if ((*(short *)(iVar5 + 0xfa) == 0) &&
                 ((&DAT_0048e518)[local_78] = (&DAT_0048f61c)[local_78],
                 *(short *)(iVar5 + 0xfc) == 0)) {
                DAT_0043649c = DAT_0043649c + 1;
              }
            }
            else {
              (&DAT_0048e518)[local_78] = (&DAT_0048f61c)[local_78];
            }
            (&DAT_0048f61c)[local_78] = 0x20;
            local_7c = *(int *)(in_stack_00000004 +
                               (uint)(byte)(&DAT_00490720)[local_78] * 2 + 0x187);
            *(int *)(iVar5 + 0x30) = sVar7 * local_70 + iVar10;
            *(int *)(iVar5 + 0x34) =
                 -((int)*(short *)(local_7c + 0x1f) + (int)*(short *)(iVar5 + 0x1f));
            *(int *)(iVar5 + 0x38) = sVar8 * local_70 + iVar10;
            if (sVar3 == 1) {
              *(short *)(iVar5 + 0xbc) = *(short *)(iVar5 + 0x34) + -0x1a;
              *(short *)(iVar5 + 0xba) = *(short *)(iVar5 + 0x34) + 0x1a;
              puVar9 = (undefined4 *)(iVar5 + 0x30);
              psVar11 = in_stack_00000004 + 0x38b;
              for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(undefined4 *)psVar11 = *puVar9;
                puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
                psVar11 = psVar11 + (uint)bVar13 * -4 + 2;
              }
              *(int *)(in_stack_00000004 + 0x3a5) = iVar5;
            }
            else if (sVar3 == 9) {
              *(undefined2 *)(iVar5 + 0xbc) = *(undefined2 *)(iVar5 + 0x34);
              *(undefined2 *)(iVar5 + 0xba) = *(undefined2 *)(iVar5 + 0x34);
              puVar9 = (undefined4 *)(iVar5 + 0x30);
              puVar12 = (undefined4 *)(iVar5 + 0xc0);
              for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar12 = *puVar9;
                puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
                puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
              }
            }
          }
          if (*(short *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_00490720)[local_78] * 2 + 0x187) + 0x18) == 0xd)
          {
            local_80 = *(int *)(in_stack_00000004 +
                               (uint)(byte)(&DAT_00490720)[local_78] * 2 + 0x187);
            *(int *)(local_80 + 0x30) = sVar7 * local_70 + iVar10;
            *(int *)(local_80 + 0x34) = -(int)*(short *)(local_80 + 0x1f);
            *(int *)(local_80 + 0x38) = sVar8 * local_70 + iVar10;
          }
          sVar7 = sVar7 + 1;
        } while (sVar7 < local_6c);
      }
      sVar8 = sVar8 + 1;
    } while (sVar8 < local_6a);
  }
  local_81 = 0;
  do {
    local_88 = *(int *)(in_stack_00000004 + (uint)local_81 * 2 + 0x187);
    if ((local_88 != 0) && (*(short *)(local_88 + 0x18) == 0xd)) {
      iVar5 = FUN_0041e98c();
      DAT_0043649c = DAT_0043649c + (short)iVar5;
    }
    local_81 = local_81 + 1;
  } while (local_81 != 0xff);
  sVar8 = 0;
  *(undefined4 *)(in_stack_00000004 + 0x3aa) = *(undefined4 *)(in_stack_00000004 + 0x221);
  local_90 = 0;
  local_81 = 0xff;
  if (0 < local_6a) {
    do {
      local_8c = 0;
      sVar7 = 0;
      if (0 < local_6c) {
        do {
          sVar3 = 0;
          local_9e = sVar7;
          if (sVar7 < 0) {
            local_9e = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_9e) {
            local_9e = *in_stack_00000004 + -1;
          }
          sVar4 = sVar8;
          if (sVar8 < 0) {
            sVar4 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)sVar4) {
            sVar4 = in_stack_00000004[2] + -1;
          }
          local_9c = (short)((int)sVar4 * *(int *)(in_stack_00000004 + 0x25b6)) + local_9e;
          local_a4 = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61c)[local_9c] * 2 + 0x187)
          ;
          local_a6 = *(short *)(local_a4 + 0x18);
          local_94 = (**(code **)(*(int *)(local_a4 + 0x14) + 0x10))();
          local_96 = *(ushort *)(local_a4 + 0x1b);
          local_98 = (**(code **)(*(int *)(local_a4 + 0x14) + 0xc))();
          local_9a = **(short **)(local_a4 + 100) * *(short *)(local_a4 + 0x1d);
          if ((local_96 & 0x800) == 0) {
            local_ac = 0;
          }
          else {
            local_ac = local_a4 + 100;
          }
          local_b0 = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_00490720)[local_9c] * 2 + 0x187)
          ;
          local_b2 = *(short *)(local_b0 + 0x1f);
          local_b4 = *(short *)(local_b0 + 0x74);
          local_b6 = local_b2 + local_b4;
          local_bc = local_90;
          local_c0 = -(int)local_b2;
          local_c4 = local_8c;
          local_c6 = *(ushort *)(local_b0 + 0x1b);
          local_cc = (**(code **)(*(int *)(local_b0 + 0x14) + 0x28))();
          local_d0 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x24))();
          if (*(short *)(local_b0 + 0x18) == 0xc) {
            local_e0 = local_b0 + 0x82;
          }
          else if ((local_c6 & 0x800) == 0) {
            local_e0 = 0;
          }
          else {
            local_e0 = local_b0 + 100;
          }
          local_dc = 0;
          local_e2 = local_98 / *(short *)(local_a4 + 0x1d);
          if (-1 < *(short *)(local_b0 + 0x74)) {
            local_e8 = local_90;
            local_ec = -(int)local_b6;
            local_f0 = local_8c;
            local_f6 = sVar8 + -1;
            local_f8 = sVar7;
            if (sVar7 < 0) {
              local_f8 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_f8) {
              local_f8 = *in_stack_00000004 + -1;
            }
            if (local_f6 < 0) {
              local_f6 = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_f6) {
              local_f6 = in_stack_00000004[2] + -1;
            }
            local_f3 = (&DAT_00490720)
                       [(short)(local_f6 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                               local_f8)];
            local_f2 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_f3 * 2 + 0x187) + 0x74) +
                       *(short *)(*(int *)(in_stack_00000004 + (uint)local_f3 * 2 + 0x187) + 0x1f);
            if (local_b6 < local_f2) {
              iVar5 = (int)*(short *)(local_b0 + 0x1d);
              local_fa = (undefined2)(((int)local_f2 - (int)local_b6) / iVar5);
              local_d4 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x34))
                                   (*(int *)(local_b0 + 0x14),
                                    ((int)local_f2 - (int)local_b6) % iVar5,iVar5,local_b0,0);
              local_8 = FUN_00431988();
              if (local_8 != (uint *)0x0) {
                local_58 = 0x14;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 8;
              }
              sVar3 = 1;
              local_70c[0] = local_8;
            }
            local_100 = sVar7 + -1;
            if (local_100 < 0) {
              local_100 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_100) {
              local_100 = *in_stack_00000004 + -1;
            }
            local_fe = sVar8;
            if (sVar8 < 0) {
              local_fe = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_fe) {
              local_fe = in_stack_00000004[2] + -1;
            }
            local_fb = (&DAT_00490720)
                       [(short)(local_fe * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                               local_100)];
            local_f2 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_fb * 2 + 0x187) + 0x74) +
                       *(short *)(*(int *)(in_stack_00000004 + (uint)local_fb * 2 + 0x187) + 0x1f);
            if (local_b6 < local_f2) {
              local_d4 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x34))();
              local_102 = (undefined2)
                          (((int)local_f2 - (int)local_b6) / (int)*(short *)(local_b0 + 0x1d));
              local_c = FUN_00431988();
              if (local_c != (uint *)0x0) {
                local_58 = 0x2c;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0x20;
              }
              local_70c[sVar3] = local_c;
              sVar3 = sVar3 + 1;
            }
            local_106 = sVar8 + 1;
            local_108 = sVar7;
            if (sVar7 < 0) {
              local_108 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_108) {
              local_108 = *in_stack_00000004 + -1;
            }
            if (local_106 < 0) {
              local_106 = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_106) {
              local_106 = in_stack_00000004[2] + -1;
            }
            local_103 = (&DAT_00490720)
                        [(short)(local_106 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_108)];
            local_f2 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_103 * 2 + 0x187) + 0x74)
                       + *(short *)(*(int *)(in_stack_00000004 + (uint)local_103 * 2 + 0x187) + 0x1f
                                   );
            if (local_b6 < local_f2) {
              iVar5 = (int)*(short *)(local_b0 + 0x1d);
              local_10a = (undefined2)(((int)local_f2 - (int)local_b6) / iVar5);
              local_d4 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x34))
                                   (*(int *)(local_b0 + 0x14),
                                    ((int)local_f2 - (int)local_b6) % iVar5,iVar5,local_b0,0);
              local_10 = FUN_00431988();
              if (local_10 != (uint *)0x0) {
                local_58 = 0x44;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0x38;
              }
              local_70c[sVar3] = local_10;
              sVar3 = sVar3 + 1;
            }
            local_110 = sVar7 + 1;
            if (local_110 < 0) {
              local_110 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_110) {
              local_110 = *in_stack_00000004 + -1;
            }
            local_10e = sVar8;
            if (sVar8 < 0) {
              local_10e = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_10e) {
              local_10e = in_stack_00000004[2] + -1;
            }
            local_10b = (&DAT_00490720)
                        [(short)(local_10e * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_110)];
            local_f2 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_10b * 2 + 0x187) + 0x74)
                       + *(short *)(*(int *)(in_stack_00000004 + (uint)local_10b * 2 + 0x187) + 0x1f
                                   );
            if (local_b6 < local_f2) {
              iVar5 = (int)*(short *)(local_b0 + 0x1d);
              local_112 = (undefined2)(((int)local_f2 - (int)local_b6) / iVar5);
              local_d4 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x34))
                                   (*(int *)(local_b0 + 0x14),
                                    ((int)local_f2 - (int)local_b6) % iVar5,iVar5,local_b0,1);
              local_14 = FUN_00431988();
              if (local_14 != (uint *)0x0) {
                local_58 = 0x5c;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0x50;
              }
              local_70c[sVar3] = local_14;
              sVar3 = sVar3 + 1;
            }
          }
          if (*(short *)(local_a4 + 0x18) == 2) {
            local_114 = local_b4;
            local_116 = local_b4 / *(short *)(local_a4 + 0x1d);
            local_11c = local_90;
            local_120 = -(int)local_b2;
            local_124 = local_8c;
            local_12a = sVar8 + -1;
            local_126 = 0;
            local_12c = sVar7;
            if (sVar7 < 0) {
              local_12c = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_12c) {
              local_12c = *in_stack_00000004 + -1;
            }
            if (local_12a < 0) {
              local_12a = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_12a) {
              local_12a = in_stack_00000004[2] + -1;
            }
            local_127 = (&DAT_0048f61c)
                        [(short)(local_12a * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_12c)];
            if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_127 * 2 + 0x187) + 0x18) != 2) {
              local_94 = (**(code **)(*(int *)(local_a4 + 0x14) + 0x14))();
              local_18 = FUN_00431988();
              if (local_18 != (uint *)0x0) {
                local_58 = 0x74;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0x68;
              }
              local_70c[sVar3] = local_18;
              sVar3 = sVar3 + 1;
            }
            local_132 = sVar7 + -1;
            if (local_132 < 0) {
              local_132 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_132) {
              local_132 = *in_stack_00000004 + -1;
            }
            local_130 = sVar8;
            if (sVar8 < 0) {
              local_130 = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_130) {
              local_130 = in_stack_00000004[2] + -1;
            }
            local_12d = (&DAT_0048f61c)
                        [(short)(local_130 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_132)];
            if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_12d * 2 + 0x187) + 0x18) != 2) {
              local_94 = (**(code **)(*(int *)(local_a4 + 0x14) + 0x14))();
              local_1c = FUN_00431988();
              if (local_1c != (uint *)0x0) {
                local_58 = 0x8c;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0x80;
              }
              local_70c[sVar3] = local_1c;
              sVar3 = sVar3 + 1;
            }
            local_136 = sVar8 + 1;
            local_138 = sVar7;
            if (sVar7 < 0) {
              local_138 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_138) {
              local_138 = *in_stack_00000004 + -1;
            }
            if (local_136 < 0) {
              local_136 = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_136) {
              local_136 = in_stack_00000004[2] + -1;
            }
            local_133 = (&DAT_0048f61c)
                        [(short)(local_136 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_138)];
            if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_133 * 2 + 0x187) + 0x18) != 2) {
              local_94 = (**(code **)(*(int *)(local_a4 + 0x14) + 0x14))();
              local_20 = FUN_00431988();
              if (local_20 != (uint *)0x0) {
                local_58 = 0xa4;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0x98;
              }
              local_70c[sVar3] = local_20;
              sVar3 = sVar3 + 1;
            }
            local_13e = sVar7 + 1;
            if (local_13e < 0) {
              local_13e = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_13e) {
              local_13e = *in_stack_00000004 + -1;
            }
            local_13c = sVar8;
            if (sVar8 < 0) {
              local_13c = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_13c) {
              local_13c = in_stack_00000004[2] + -1;
            }
            local_139 = (&DAT_0048f61c)
                        [(short)(local_13c * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_13e)];
            if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_139 * 2 + 0x187) + 0x18) != 2) {
              local_94 = (**(code **)(*(int *)(local_a4 + 0x14) + 0x14))();
              local_24 = FUN_00431988();
              if (local_24 != (uint *)0x0) {
                local_58 = 0xbc;
                FUN_0040dc54();
                *DAT_0049aa2c = *DAT_0049aa2c + -2;
                local_58 = 0xb0;
              }
              local_70c[sVar3] = local_24;
              sVar3 = sVar3 + 1;
            }
          }
          sVar4 = sVar8 + -1;
          local_144 = sVar7;
          if (sVar7 < 0) {
            local_144 = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_144) {
            local_144 = *in_stack_00000004 + -1;
          }
          if (sVar4 < 0) {
            sVar4 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)sVar4) {
            sVar4 = in_stack_00000004[2] + -1;
          }
          local_141 = (&DAT_00490720)
                      [(short)(sVar4 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                              local_144)];
          local_140 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_141 * 2 + 0x187) + 0x1f);
          if (local_140 < local_b2) {
            local_148 = local_90 + -1;
            local_14c = -(int)local_140;
            local_150 = local_8c + -1;
            iVar5 = (int)*(short *)(local_b0 + 0x1d);
            local_152 = (undefined2)(((int)local_b2 - (int)local_140) / iVar5);
            local_d8 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x38))
                                 (*(int *)(local_b0 + 0x14),((int)local_b2 - (int)local_140) % iVar5
                                  ,iVar5,local_b0,0);
            local_28 = FUN_00431988();
            if (local_28 != (uint *)0x0) {
              local_58 = 0xd4;
              FUN_0040dc54();
              *DAT_0049aa2c = *DAT_0049aa2c + -2;
              local_58 = 200;
            }
            local_70c[sVar3] = local_28;
            sVar3 = sVar3 + 1;
          }
          local_156 = sVar7 + -1;
          if (local_156 < 0) {
            local_156 = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_156) {
            local_156 = *in_stack_00000004 + -1;
          }
          sVar4 = sVar8;
          if (sVar8 < 0) {
            sVar4 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)sVar4) {
            sVar4 = in_stack_00000004[2] + -1;
          }
          local_153 = (&DAT_00490720)
                      [(short)(sVar4 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                              local_156)];
          local_140 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_153 * 2 + 0x187) + 0x1f);
          if (local_140 < local_b2) {
            local_15c = local_90 + -1;
            local_160 = -(int)local_140;
            local_164 = local_8c + -1;
            iVar5 = (int)*(short *)(local_b0 + 0x1d);
            local_166 = (undefined2)(((int)local_b2 - (int)local_140) / iVar5);
            local_d8 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x38))
                                 (*(int *)(local_b0 + 0x14),((int)local_b2 - (int)local_140) % iVar5
                                  ,iVar5,local_b0,1);
            local_2c = FUN_00431988();
            if (local_2c != (uint *)0x0) {
              local_58 = 0xec;
              FUN_0040dc54();
              *DAT_0049aa2c = *DAT_0049aa2c + -2;
              local_58 = 0xe0;
            }
            local_70c[sVar3] = local_2c;
            sVar3 = sVar3 + 1;
          }
          sVar4 = sVar8 + 1;
          local_16a = sVar7;
          if (sVar7 < 0) {
            local_16a = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_16a) {
            local_16a = *in_stack_00000004 + -1;
          }
          if (sVar4 < 0) {
            sVar4 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)sVar4) {
            sVar4 = in_stack_00000004[2] + -1;
          }
          local_167 = (&DAT_00490720)
                      [(short)(sVar4 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                              local_16a)];
          local_140 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_167 * 2 + 0x187) + 0x1f);
          if (local_140 < local_b2) {
            local_170 = local_90 + -1;
            local_174 = -(int)local_140;
            local_178 = local_8c + -1;
            local_d8 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x38))();
            local_17a = (undefined2)
                        (((int)local_b2 - (int)local_140) / (int)*(short *)(local_b0 + 0x1d));
            local_30 = FUN_00431988();
            if (local_30 != (uint *)0x0) {
              local_58 = 0x104;
              FUN_0040dc54();
              *DAT_0049aa2c = *DAT_0049aa2c + -2;
              local_58 = 0xf8;
            }
            local_70c[sVar3] = local_30;
            sVar3 = sVar3 + 1;
          }
          local_17e = sVar7 + 1;
          if (local_17e < 0) {
            local_17e = 0;
          }
          if (*in_stack_00000004 + -1 < (int)local_17e) {
            local_17e = *in_stack_00000004 + -1;
          }
          sVar4 = sVar8;
          if (sVar8 < 0) {
            sVar4 = 0;
          }
          if (in_stack_00000004[2] + -1 < (int)sVar4) {
            sVar4 = in_stack_00000004[2] + -1;
          }
          local_17b = (&DAT_00490720)
                      [(short)(sVar4 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                              local_17e)];
          local_140 = *(short *)(*(int *)(in_stack_00000004 + (uint)local_17b * 2 + 0x187) + 0x1f);
          if (local_140 < local_b2) {
            local_184 = local_90 + -1;
            local_188 = -(int)local_140;
            local_18c = local_8c + -1;
            iVar5 = (int)*(short *)(local_b0 + 0x1d);
            local_18e = (undefined2)(((int)local_b2 - (int)local_140) / iVar5);
            local_d8 = (**(code **)(*(int *)(local_b0 + 0x14) + 0x38))
                                 (*(int *)(local_b0 + 0x14),((int)local_b2 - (int)local_140) % iVar5
                                  ,iVar5,local_b0,1);
            local_34 = FUN_00431988();
            if (local_34 != (uint *)0x0) {
              local_58 = 0x11c;
              FUN_0040dc54();
              *DAT_0049aa2c = *DAT_0049aa2c + -2;
              local_58 = 0x110;
            }
            local_70c[sVar3] = local_34;
            sVar3 = sVar3 + 1;
          }
          local_194 = local_90;
          local_198 = -(int)local_b2;
          local_19c = local_8c;
          if (-1 < *(short *)(local_b0 + 0x74)) {
            local_38 = FUN_00431988();
            if (local_38 != (uint *)0x0) {
              local_58 = 0x134;
              FUN_0040e244();
              *DAT_0049aa2c = *DAT_0049aa2c + -2;
              local_58 = 0x128;
            }
            local_70c[sVar3] = local_38;
            sVar3 = sVar3 + 1;
          }
          if ((local_a6 == 4) || (local_a6 == 7)) {
            local_1a0 = local_90;
            local_1a4 = -(int)local_b2;
            local_1a8 = local_8c;
            local_1ac = sVar8 + -1;
            local_1ae = sVar7;
            if (sVar7 < 0) {
              local_1ae = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_1ae) {
              local_1ae = *in_stack_00000004 + -1;
            }
            if (local_1ac < 0) {
              local_1ac = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_1ac) {
              local_1ac = in_stack_00000004[2] + -1;
            }
            local_1a9 = (&DAT_0048f61c)
                        [(short)(local_1ac * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_1ae)];
            if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_1a9 * 2 + 0x187) + 0x18) != 2) {
              local_1b2 = sVar8 + -1;
              local_1b4 = sVar7;
              if (sVar7 < 0) {
                local_1b4 = 0;
              }
              if (*in_stack_00000004 + -1 < (int)local_1b4) {
                local_1b4 = *in_stack_00000004 + -1;
              }
              if (local_1b2 < 0) {
                local_1b2 = 0;
              }
              if (in_stack_00000004[2] + -1 < (int)local_1b2) {
                local_1b2 = in_stack_00000004[2] + -1;
              }
              local_1af = (&DAT_0048f61c)
                          [(short)(local_1b2 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                  local_1b4)];
              local_1b8 = *(int *)(in_stack_00000004 + (uint)local_1af * 2 + 0x187);
              if ((*(short *)(local_1b8 + 0x18) == 4) || (*(short *)(local_1b8 + 0x18) == 7)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (!bVar2) {
                local_1bc = sVar8 + 1;
                local_1be = sVar7;
                if (sVar7 < 0) {
                  local_1be = 0;
                }
                if (*in_stack_00000004 + -1 < (int)local_1be) {
                  local_1be = *in_stack_00000004 + -1;
                }
                if (local_1bc < 0) {
                  local_1bc = 0;
                }
                if (in_stack_00000004[2] + -1 < (int)local_1bc) {
                  local_1bc = in_stack_00000004[2] + -1;
                }
                local_1b9 = (&DAT_0048f61c)
                            [(short)(local_1bc * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6)
                                    + local_1be)];
                if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_1b9 * 2 + 0x187) + 0x18) !=
                    2) {
                  local_1c2 = sVar8 + 1;
                  local_1c4 = sVar7;
                  if (sVar7 < 0) {
                    local_1c4 = 0;
                  }
                  if (*in_stack_00000004 + -1 < (int)local_1c4) {
                    local_1c4 = *in_stack_00000004 + -1;
                  }
                  if (local_1c2 < 0) {
                    local_1c2 = 0;
                  }
                  if (in_stack_00000004[2] + -1 < (int)local_1c2) {
                    local_1c2 = in_stack_00000004[2] + -1;
                  }
                  local_1bf = (&DAT_0048f61c)
                              [(short)(local_1c2 *
                                       (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                      local_1c4)];
                  local_1c8 = *(int *)(in_stack_00000004 + (uint)local_1bf * 2 + 0x187);
                  if ((*(short *)(local_1c8 + 0x18) == 4) || (*(short *)(local_1c8 + 0x18) == 7)) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (!bVar2) {
                    local_1ce = sVar7 + -1;
                    if (local_1ce < 0) {
                      local_1ce = 0;
                    }
                    if (*in_stack_00000004 + -1 < (int)local_1ce) {
                      local_1ce = *in_stack_00000004 + -1;
                    }
                    local_1cc = sVar8;
                    if (sVar8 < 0) {
                      local_1cc = 0;
                    }
                    if (in_stack_00000004[2] + -1 < (int)local_1cc) {
                      local_1cc = in_stack_00000004[2] + -1;
                    }
                    local_1c9 = (&DAT_0048f61c)
                                [(short)(local_1cc *
                                         (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                        local_1ce)];
                    if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_1c9 * 2 + 0x187) + 0x18)
                        == 2) {
                      local_3c = FUN_00431988();
                      if (local_3c != (uint *)0x0) {
                        local_58 = 0x14c;
                        FUN_0040d8d4();
                        *DAT_0049aa2c = *DAT_0049aa2c + -2;
                        local_58 = 0x140;
                      }
                      local_70c[sVar3] = local_3c;
                      sVar3 = sVar3 + 1;
                    }
                    else {
                      local_40 = FUN_00431988();
                      if (local_40 != (uint *)0x0) {
                        local_58 = 0x164;
                        FUN_0040d8d4();
                        *DAT_0049aa2c = *DAT_0049aa2c + -2;
                        local_58 = 0x158;
                      }
                      local_70c[sVar3] = local_40;
                      sVar3 = sVar3 + 1;
                    }
                  }
                }
              }
            }
            local_1d4 = sVar7 + -1;
            if (local_1d4 < 0) {
              local_1d4 = 0;
            }
            if (*in_stack_00000004 + -1 < (int)local_1d4) {
              local_1d4 = *in_stack_00000004 + -1;
            }
            local_1d2 = sVar8;
            if (sVar8 < 0) {
              local_1d2 = 0;
            }
            if (in_stack_00000004[2] + -1 < (int)local_1d2) {
              local_1d2 = in_stack_00000004[2] + -1;
            }
            local_1cf = (&DAT_0048f61c)
                        [(short)(local_1d2 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                local_1d4)];
            if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_1cf * 2 + 0x187) + 0x18) != 2) {
              local_1da = sVar7 + -1;
              if (local_1da < 0) {
                local_1da = 0;
              }
              if (*in_stack_00000004 + -1 < (int)local_1da) {
                local_1da = *in_stack_00000004 + -1;
              }
              local_1d8 = sVar8;
              if (sVar8 < 0) {
                local_1d8 = 0;
              }
              if (in_stack_00000004[2] + -1 < (int)local_1d8) {
                local_1d8 = in_stack_00000004[2] + -1;
              }
              local_1d5 = (&DAT_0048f61c)
                          [(short)(local_1d8 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                  local_1da)];
              local_1e0 = *(int *)(in_stack_00000004 + (uint)local_1d5 * 2 + 0x187);
              if ((*(short *)(local_1e0 + 0x18) == 4) || (*(short *)(local_1e0 + 0x18) == 7)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (!bVar2) {
                local_1e6 = sVar7 + 1;
                if (local_1e6 < 0) {
                  local_1e6 = 0;
                }
                if (*in_stack_00000004 + -1 < (int)local_1e6) {
                  local_1e6 = *in_stack_00000004 + -1;
                }
                local_1e4 = sVar8;
                if (sVar8 < 0) {
                  local_1e4 = 0;
                }
                if (in_stack_00000004[2] + -1 < (int)local_1e4) {
                  local_1e4 = in_stack_00000004[2] + -1;
                }
                local_1e1 = (&DAT_0048f61c)
                            [(short)(local_1e4 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6)
                                    + local_1e6)];
                if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_1e1 * 2 + 0x187) + 0x18) !=
                    2) {
                  local_1ec = sVar7 + 1;
                  if (local_1ec < 0) {
                    local_1ec = 0;
                  }
                  if (*in_stack_00000004 + -1 < (int)local_1ec) {
                    local_1ec = *in_stack_00000004 + -1;
                  }
                  local_1ea = sVar8;
                  if (sVar8 < 0) {
                    local_1ea = 0;
                  }
                  if (in_stack_00000004[2] + -1 < (int)local_1ea) {
                    local_1ea = in_stack_00000004[2] + -1;
                  }
                  local_1e7 = (&DAT_0048f61c)
                              [(short)(local_1ea *
                                       (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                      local_1ec)];
                  local_1f0 = *(int *)(in_stack_00000004 + (uint)local_1e7 * 2 + 0x187);
                  if ((*(short *)(local_1f0 + 0x18) == 4) || (*(short *)(local_1f0 + 0x18) == 7)) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (!bVar2) {
                    local_1f4 = sVar8 + -1;
                    local_1f6 = sVar7;
                    if (sVar7 < 0) {
                      local_1f6 = 0;
                    }
                    if (*in_stack_00000004 + -1 < (int)local_1f6) {
                      local_1f6 = *in_stack_00000004 + -1;
                    }
                    if (local_1f4 < 0) {
                      local_1f4 = 0;
                    }
                    if (in_stack_00000004[2] + -1 < (int)local_1f4) {
                      local_1f4 = in_stack_00000004[2] + -1;
                    }
                    local_1f1 = (&DAT_0048f61c)
                                [(short)(local_1f4 *
                                         (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) +
                                        local_1f6)];
                    if (*(short *)(*(int *)(in_stack_00000004 + (uint)local_1f1 * 2 + 0x187) + 0x18)
                        == 2) {
                      local_44 = FUN_00431988();
                      if (local_44 != (uint *)0x0) {
                        local_58 = 0x17c;
                        FUN_0040d8d4();
                        *DAT_0049aa2c = *DAT_0049aa2c + -2;
                        local_58 = 0x170;
                      }
                      local_70c[sVar3] = local_44;
                      sVar3 = sVar3 + 1;
                    }
                    else {
                      local_48 = FUN_00431988();
                      if (local_48 != (uint *)0x0) {
                        local_58 = 0x194;
                        FUN_0040d8d4();
                        *DAT_0049aa2c = *DAT_0049aa2c + -2;
                        local_58 = 0x188;
                      }
                      local_70c[sVar3] = local_48;
                      sVar3 = sVar3 + 1;
                    }
                  }
                }
              }
            }
          }
          local_a4 = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048e518)[local_9c] * 2 + 0x187)
          ;
          local_a6 = *(undefined2 *)(local_a4 + 0x18);
          local_70c[sVar3] = (uint *)0x0;
          local_1fc = FUN_004319bc();
          FUN_00428fe4();
          *(undefined4 *)(in_stack_00000004 + local_9c * 2 + 0x3ac) = local_1fc;
          local_8c = local_8c + local_70;
          sVar7 = sVar7 + 1;
        } while (sVar7 < local_6c);
      }
      local_90 = local_90 + local_70;
      sVar8 = sVar8 + 1;
    } while (sVar8 < local_6a);
  }
  *in_FS_OFFSET = local_68;
  return;
}


/* Ghidra address: 004152d8; FUN_004152d8 */

void FUN_004152d8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_stack_00000004;
  
  puVar2 = (undefined4 *)(in_stack_00000004 + 0x716);
  puVar3 = (undefined4 *)(*(int *)(in_stack_00000004 + 0x74a) + 0x30);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


/* Ghidra address: 004152fc; FUN_004152fc */

void FUN_004152fc(void)

{
  int iVar1;
  bool bVar2;
  int3 extraout_var;
  
  bVar2 = FUN_00420838();
  iVar1 = DAT_0044f640;
  if (CONCAT31(extraout_var,bVar2) != 0 && -1 < extraout_var) {
    *(undefined2 *)(DAT_0044f640 + 0x20) = 0x28;
    *(undefined2 *)(iVar1 + 0x22) = 0xd8;
    return;
  }
  *(undefined2 *)(DAT_0044f640 + 0x20) = 0x2c;
  *(undefined2 *)(iVar1 + 0x22) = 0xd8;
  return;
}


/* Ghidra address: 00415344; FUN_00415344 */

void FUN_00415344(void)

{
  int iVar1;
  uint in_stack_00000004;
  
  iVar1 = DAT_0044f640;
  if ((in_stack_00000004 & (int)*(short *)(DAT_00499d54 + 0x92)) == 0) {
    *(undefined2 *)(DAT_0044f640 + 0x20) = 0x2c;
    *(undefined2 *)(iVar1 + 0x22) = 0xd8;
  }
  else {
    if (in_stack_00000004 == 1) {
      *(undefined2 *)(DAT_0044f640 + 0x20) = 0xcd;
      *(undefined2 *)(iVar1 + 0x22) = 0xd8;
      return;
    }
    if (in_stack_00000004 == 2) {
      *(undefined2 *)(DAT_0044f640 + 0x20) = 99;
      *(undefined2 *)(iVar1 + 0x22) = 0xd8;
      return;
    }
    if (in_stack_00000004 == 4) {
      *(undefined2 *)(DAT_0044f640 + 0x20) = 0xa8;
      *(undefined2 *)(iVar1 + 0x22) = 0xd8;
      return;
    }
  }
  return;
}


/* Ghidra address: 004153b4; FUN_004153b4 */

void FUN_004153b4(void)

{
  int iVar1;
  
  *(undefined2 *)(DAT_0044f640 + 0x20) = 0xa8;
  *(undefined2 *)(DAT_0044f640 + 0x22) = 0xd8;
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  *(undefined2 *)(DAT_0044f640 + 0x20) = 0x28;
  *(undefined2 *)(DAT_0044f640 + 0x22) = 0xd8;
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  *(undefined2 *)(DAT_0044f640 + 0x20) = 0xa8;
  *(undefined2 *)(DAT_0044f640 + 0x22) = 0xd8;
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  *(undefined2 *)(DAT_0044f640 + 0x20) = 0x28;
  *(undefined2 *)(DAT_0044f640 + 0x22) = 0xd8;
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  *(undefined2 *)(DAT_0044f640 + 0x20) = 0xa8;
  *(undefined2 *)(DAT_0044f640 + 0x22) = 0xd8;
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  FUN_004152fc();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  FUN_004152fc();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  FUN_004152fc();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  FUN_004152fc();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  FUN_004152fc();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  *(undefined2 *)(DAT_0044f640 + 0x20) = 0xa8;
  *(undefined2 *)(DAT_0044f640 + 0x22) = 0xd8;
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  FUN_00415344();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  FUN_00415344();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  FUN_00415344();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_004266a3();
  iVar1 = DAT_0044f640;
  *(undefined2 *)(DAT_0044f640 + 0x20) = 0x28;
  *(undefined2 *)(iVar1 + 0x22) = 0xd8;
  return;
}


/* Ghidra address: 004158d8; FUN_004158d8 */

/* WARNING: Removing unreachable block (ram,0x00415c19) */
/* WARNING: Removing unreachable block (ram,0x00415aa3) */
/* WARNING: Removing unreachable block (ram,0x00415aca) */
/* WARNING: Removing unreachable block (ram,0x00415c40) */

void FUN_004158d8(void)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  short sVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  bool bVar9;
  short sVar10;
  short sVar11;
  ushort uVar12;
  undefined4 uVar13;
  short sVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  short sVar20;
  short sVar21;
  short *in_stack_00000004;
  int local_158;
  int local_fc;
  int local_a0;
  int local_74;
  int local_40;
  int local_3c;
  short local_36;
  short local_34;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_22;
  short local_1c;
  
  uVar13 = FUN_0042fc2c();
  sVar10 = (short)uVar13;
  uVar13 = FUN_0042fc2c();
  sVar11 = (short)uVar13;
  FUN_0040afbc();
  bVar5 = *(byte *)(*(int *)(in_stack_00000004 + 0x1c7) + 0x21);
  bVar6 = *(byte *)(*(int *)(in_stack_00000004 + 0x1c7) + 0x21);
  *(ushort *)(DAT_0044f640 + 4) = (ushort)*(byte *)(*(int *)(in_stack_00000004 + 0x1c7) + 0x21);
  (**(code **)(*DAT_0044f640 + 0x3c))();
  *(ushort *)(DAT_0044f640 + 4) =
       (ushort)*(byte *)(*(int *)(in_stack_00000004 + (uint)DAT_0048e518 * 2 + 0x187) + 0x21);
  sVar7 = *in_stack_00000004;
  sVar14 = sVar11 * in_stack_00000004[2];
  sVar8 = *in_stack_00000004;
  *(undefined2 *)(DAT_0044f640 + 4) = 0xa8;
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0040b7d8();
  local_2c = 0;
  if (*in_stack_00000004 + -1 < 0) {
    local_2c = *in_stack_00000004 + -1;
  }
  local_2a = 0;
  if (in_stack_00000004[2] + -1 < 0) {
    local_2a = in_stack_00000004[2] + -1;
  }
  local_1c = local_2a * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) + local_2c;
  local_22 = 0;
  if (0 < sVar14) {
    do {
      pbVar1 = &DAT_00490720 + local_1c;
      pcVar2 = &DAT_00491824 + local_1c;
      for (sVar4 = sVar10 * sVar8; 0 < sVar4; sVar4 = sVar4 - sVar10) {
        if (((*pcVar2 != '\0') &&
            (uVar12 = (ushort)*(byte *)(*(int *)(in_stack_00000004 + (uint)*pbVar1 * 2 + 0x187) +
                                       0x21), uVar12 != bVar5)) && (uVar12 != bVar6)) {
          *(ushort *)(DAT_0044f640 + 4) = uVar12;
          (**(code **)(*DAT_0044f640 + 0x3c))();
        }
        pcVar2 = pcVar2 + 1;
        pbVar1 = pbVar1 + 1;
        local_1c = local_1c + 1;
      }
      local_22 = local_22 + sVar11;
    } while (local_22 < sVar14);
  }
  local_36 = 0;
  if (*in_stack_00000004 + -1 < 0) {
    local_36 = *in_stack_00000004 + -1;
  }
  local_34 = 0;
  if (in_stack_00000004[2] + -1 < 0) {
    local_34 = in_stack_00000004[2] + -1;
  }
  local_1c = local_34 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) + local_36;
  local_22 = 0;
  if (0 < sVar14) {
    do {
      pbVar1 = &DAT_0048f61c + local_1c;
      pcVar2 = &DAT_00491824 + local_1c;
      pbVar3 = &DAT_0048e518 + local_1c;
      for (sVar4 = sVar10 * sVar8; 0 < sVar4; sVar4 = sVar4 - sVar10) {
        local_3c = *(int *)(in_stack_00000004 + (uint)*pbVar3 * 2 + 0x187);
        sVar21 = local_22 + 4;
        sVar20 = sVar4 + 4;
        sVar16 = *(short *)(local_3c + 0x18);
        if (sVar16 == 1) {
          *pcVar2 = '\x01';
        }
        if (*pcVar2 != '\0') {
          if (sVar16 == 0) {
            local_3c = *(int *)(in_stack_00000004 + (uint)*pbVar1 * 2 + 0x187);
            sVar16 = *(short *)(local_3c + 0x18);
          }
          *(ushort *)(DAT_0044f640 + 4) = (ushort)*(byte *)(local_3c + 0x21);
          if (sVar16 == 2) {
            if ((pcVar2[-1] != '\0') &&
               (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) != 2))
            {
              local_40 = (int)sVar21;
              iVar15 = (int)sVar20;
              iVar17 = (int)sVar21 + (int)sVar11;
              if (iVar17 < local_40) {
                iVar18 = iVar17;
                if (local_40 < iVar17) {
                  iVar18 = local_40;
                  local_40 = iVar17;
                }
                if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                   ((local_40 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < iVar18)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x18))();
                }
              }
              else {
                iVar18 = iVar17;
                if (iVar17 < local_40) {
                  iVar18 = local_40;
                  local_40 = iVar17;
                }
                if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                     (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                    (iVar18 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                   (*(int *)((int)DAT_0044f640 + 0x46) < local_40)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x18))();
                }
              }
            }
            if (((&DAT_00491824)[(int)local_1c - (int)sVar7] != '\0') &&
               (*(short *)(*(int *)(in_stack_00000004 +
                                   (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                   0x187) + 0x18) != 2)) {
              iVar17 = (int)sVar20;
              iVar15 = (int)sVar21;
              local_74 = (int)sVar20 - (int)sVar10;
              if (iVar17 < local_74) {
                iVar18 = iVar17;
                if (local_74 < iVar17) {
                  iVar18 = local_74;
                  local_74 = iVar17;
                }
                if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < iVar15)) ||
                   ((local_74 < *(int *)((int)DAT_0044f640 + 0x3a) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < iVar18)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x14))();
                }
              }
              else {
                iVar18 = iVar17;
                if (iVar17 < local_74) {
                  iVar18 = local_74;
                  local_74 = iVar17;
                }
                if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                     (*(int *)((int)DAT_0044f640 + 0x46) < iVar15)) ||
                    (iVar18 < *(int *)((int)DAT_0044f640 + 0x3a))) ||
                   (*(int *)((int)DAT_0044f640 + 0x42) < local_74)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x14))();
                }
              }
            }
            if ((pcVar2[1] != '\0') &&
               (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18) != 2))
            {
              local_a0 = (int)sVar21;
              iVar17 = (int)sVar21 + (int)sVar11;
              iVar15 = (int)sVar20 - (int)sVar10;
              if (iVar17 < local_a0) {
                iVar18 = iVar17;
                if (local_a0 < iVar17) {
                  iVar18 = local_a0;
                  local_a0 = iVar17;
                }
                if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                   ((local_a0 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < iVar18)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x18))();
                }
              }
              else {
                iVar18 = iVar17;
                if (iVar17 < local_a0) {
                  iVar18 = local_a0;
                  local_a0 = iVar17;
                }
                if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                     (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                    (iVar18 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                   (*(int *)((int)DAT_0044f640 + 0x46) < local_a0)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x18))();
                }
              }
            }
            if ((pcVar2[sVar7] != '\0') &&
               (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) + 0x18) !=
                2)) {
              iVar18 = (int)sVar20;
              iVar17 = (int)sVar21 + (int)sVar11;
              iVar15 = (int)sVar20 - (int)sVar10;
              if (iVar18 < iVar15) {
                iVar19 = iVar18;
                if (iVar15 < iVar18) {
                  iVar19 = iVar15;
                  iVar15 = iVar18;
                }
                if (((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                   ((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < iVar19)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x14))();
                }
              }
              else {
                iVar19 = iVar18;
                if (iVar18 < iVar15) {
                  iVar19 = iVar15;
                  iVar15 = iVar18;
                }
                if ((((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                     (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                    (iVar19 < *(int *)((int)DAT_0044f640 + 0x3a))) ||
                   (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x14))();
                }
              }
            }
          }
          else {
            if ((in_stack_00000004[6] != 0) &&
               ((((sVar16 == 3 || (sVar16 == 10)) ||
                 ((sVar16 == 6 || ((sVar16 == 9 && (*(short *)(local_3c + 300) != 4)))))) ||
                (sVar16 == 0xd)))) {
              (**(code **)(*DAT_0044f640 + 0x3c))();
            }
            if ((sVar16 == 8) || (sVar16 == 0xc)) {
              (**(code **)(*DAT_0044f640 + 0x3c))();
            }
            else if (sVar16 == 7) {
              if (*(char *)(local_3c + 0x74) == '\x01') {
                *(undefined2 *)(DAT_0044f640 + 4) = 0x2c;
              }
              if (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) != 2
                 ) {
                if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18)
                     == 4) ||
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) ==
                    7)) {
                  bVar9 = true;
                }
                else {
                  bVar9 = false;
                }
                if ((!bVar9) &&
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18) !=
                    2)) {
                  if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18)
                       == 4) ||
                     (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18)
                      == 7)) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (!bVar9) {
                    local_fc = sVar21 + 1;
                    iVar17 = (int)sVar21 + (int)sVar11;
                    iVar15 = (int)sVar20 - ((int)sVar10 >> 1);
                    if (iVar17 < local_fc) {
                      iVar18 = iVar17;
                      if (local_fc < iVar17) {
                        iVar18 = local_fc;
                        local_fc = iVar17;
                      }
                      if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                         ((local_fc < *(int *)((int)DAT_0044f640 + 0x3e) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < iVar18)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x18))();
                      }
                    }
                    else {
                      iVar18 = iVar17;
                      if (iVar17 < local_fc) {
                        iVar18 = local_fc;
                        local_fc = iVar17;
                      }
                      if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                           (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                          (iVar18 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                         (*(int *)((int)DAT_0044f640 + 0x46) < local_fc)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x18))();
                      }
                    }
                  }
                }
              }
              if (*(short *)(*(int *)(in_stack_00000004 +
                                     (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                     0x187) + 0x18) != 2) {
                if ((*(short *)(*(int *)(in_stack_00000004 +
                                        (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2
                                        + 0x187) + 0x18) == 4) ||
                   (*(short *)(*(int *)(in_stack_00000004 +
                                       (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                       0x187) + 0x18) == 7)) {
                  bVar9 = true;
                }
                else {
                  bVar9 = false;
                }
                if ((!bVar9) &&
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) + 0x18)
                    != 2)) {
                  if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) +
                                 0x18) == 4) ||
                     (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) +
                                0x18) == 7)) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (!bVar9) {
                    iVar17 = (int)sVar21 + ((int)sVar11 >> 1);
                    iVar18 = sVar20 + -1;
                    iVar15 = (int)sVar20 - (int)sVar10;
                    if (iVar18 < iVar15) {
                      iVar19 = iVar18;
                      if (iVar15 < iVar18) {
                        iVar19 = iVar15;
                        iVar15 = iVar18;
                      }
                      if (((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                         ((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < iVar19)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x14))();
                      }
                    }
                    else {
                      iVar19 = iVar18;
                      if (iVar18 < iVar15) {
                        iVar19 = iVar15;
                        iVar15 = iVar18;
                      }
                      if ((((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                           (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                          (iVar19 < *(int *)((int)DAT_0044f640 + 0x3a))) ||
                         (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x14))();
                      }
                    }
                  }
                }
              }
            }
            else if (sVar16 == 4) {
              if (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) != 2
                 ) {
                if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18)
                     == 4) ||
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) ==
                    7)) {
                  bVar9 = true;
                }
                else {
                  bVar9 = false;
                }
                if ((!bVar9) &&
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18) !=
                    2)) {
                  if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18)
                       == 4) ||
                     (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18)
                      == 7)) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (!bVar9) {
                    local_158 = sVar21 + 1;
                    iVar17 = (int)sVar21 + (int)sVar11;
                    iVar15 = (int)sVar20 - ((int)sVar10 >> 1);
                    if (iVar17 < local_158) {
                      iVar18 = iVar17;
                      if (local_158 < iVar17) {
                        iVar18 = local_158;
                        local_158 = iVar17;
                      }
                      if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                         ((local_158 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < iVar18)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x18))();
                      }
                    }
                    else {
                      iVar18 = iVar17;
                      if (iVar17 < local_158) {
                        iVar18 = local_158;
                        local_158 = iVar17;
                      }
                      if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                           (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                          (iVar18 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                         (*(int *)((int)DAT_0044f640 + 0x46) < local_158)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x18))();
                      }
                    }
                  }
                }
              }
              if (*(short *)(*(int *)(in_stack_00000004 +
                                     (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                     0x187) + 0x18) != 2) {
                if ((*(short *)(*(int *)(in_stack_00000004 +
                                        (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2
                                        + 0x187) + 0x18) == 4) ||
                   (*(short *)(*(int *)(in_stack_00000004 +
                                       (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                       0x187) + 0x18) == 7)) {
                  bVar9 = true;
                }
                else {
                  bVar9 = false;
                }
                if ((!bVar9) &&
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) + 0x18)
                    != 2)) {
                  if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) +
                                 0x18) == 4) ||
                     (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) +
                                0x18) == 7)) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (!bVar9) {
                    iVar17 = (int)sVar21 + ((int)sVar11 >> 1);
                    iVar18 = sVar20 + -1;
                    iVar15 = (int)sVar20 - (int)sVar10;
                    if (iVar18 < iVar15) {
                      iVar19 = iVar18;
                      if (iVar15 < iVar18) {
                        iVar19 = iVar15;
                        iVar15 = iVar18;
                      }
                      if (((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                         ((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < iVar19)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x14))();
                      }
                    }
                    else {
                      iVar19 = iVar18;
                      if (iVar18 < iVar15) {
                        iVar19 = iVar15;
                        iVar15 = iVar18;
                      }
                      if ((((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                           (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                          (iVar19 < *(int *)((int)DAT_0044f640 + 0x3a))) ||
                         (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x14))();
                      }
                    }
                  }
                }
              }
            }
            else if (sVar16 == 1) {
              local_28 = sVar21;
              local_26 = sVar20;
            }
          }
        }
        pbVar3 = pbVar3 + 1;
        pcVar2 = pcVar2 + 1;
        pbVar1 = pbVar1 + 1;
        local_1c = local_1c + 1;
      }
      sVar4 = *(short *)(*(int *)(in_stack_00000004 + 0x3a5) + 0x3c);
      sVar20 = (local_26 - sVar10) + 1;
      sVar16 = local_28 + 1;
      if (((sVar4 < 0x155) || (0x168 < sVar4)) && ((sVar4 < 0 || (0x13 < sVar4)))) {
        if ((sVar4 < 0x14) || (0x40 < sVar4)) {
          if ((sVar4 < 0x41) || (0x6d < sVar4)) {
            if ((sVar4 < 0x6e) || (0x9a < sVar4)) {
              if ((sVar4 < 0x9b) || (199 < sVar4)) {
                if ((sVar4 < 200) || (0xf4 < sVar4)) {
                  if ((sVar4 < 0xf5) || (0x121 < sVar4)) {
                    if ((0x121 < sVar4) && (sVar4 < 0x155)) {
                      if (((int)sVar20 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                         (((*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar20 ||
                           (sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 4))();
                      }
                      if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
                         ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 4))();
                      }
                      if (((sVar20 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 2)) ||
                         (((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 4))();
                      }
                    }
                  }
                  else {
                    if (((((int)sVar20 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                         (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar20)) ||
                        (sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                       (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)) {
                      bVar9 = false;
                    }
                    else {
                      bVar9 = true;
                    }
                    if (bVar9) {
                      (**(code **)(*DAT_0044f640 + 4))();
                    }
                    if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                        (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
                       ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                        (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                      bVar9 = false;
                    }
                    else {
                      bVar9 = true;
                    }
                    if (bVar9) {
                      (**(code **)(*DAT_0044f640 + 4))();
                    }
                    if (((sVar20 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                        (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 2)) ||
                       ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                        (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                      bVar9 = false;
                    }
                    else {
                      bVar9 = true;
                    }
                    if (bVar9) {
                      (**(code **)(*DAT_0044f640 + 4))();
                    }
                  }
                }
                else {
                  if (((((int)sVar20 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                       (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar20)) ||
                      ((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                     (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  if (bVar9) {
                    (**(code **)(*DAT_0044f640 + 4))();
                  }
                  if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                      (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
                     ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                      (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  if (bVar9) {
                    (**(code **)(*DAT_0044f640 + 4))();
                  }
                  if (((sVar20 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                      (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 2)) ||
                     ((sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                      (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)))) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  if (bVar9) {
                    (**(code **)(*DAT_0044f640 + 4))();
                  }
                }
              }
              else {
                if ((((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                     (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
                    ((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                   (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 4))();
                }
                if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
                   ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 4))();
                }
                if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
                   ((sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 4))();
                }
              }
            }
            else {
              if ((((sVar20 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                   (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 2)) ||
                  ((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                 (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                (**(code **)(*DAT_0044f640 + 4))();
              }
              if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                  (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
                 ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                  (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                (**(code **)(*DAT_0044f640 + 4))();
              }
              if ((((int)sVar20 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                  (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar20)) ||
                 ((sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                  (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)))) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                (**(code **)(*DAT_0044f640 + 4))();
              }
            }
          }
          else {
            if ((((sVar20 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                 (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 2)) ||
                (sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
               (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              (**(code **)(*DAT_0044f640 + 4))();
            }
            if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
               ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              (**(code **)(*DAT_0044f640 + 4))();
            }
            if ((((int)sVar20 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar20)) ||
               ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              (**(code **)(*DAT_0044f640 + 4))();
            }
          }
        }
        else {
          if ((((sVar20 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
               (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 2)) ||
              (sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
             (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            (**(code **)(*DAT_0044f640 + 4))();
          }
          if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
              (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
             ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
              (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            (**(code **)(*DAT_0044f640 + 4))();
          }
          if ((((int)sVar20 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
              (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar20)) ||
             (((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e) ||
              (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)))) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            (**(code **)(*DAT_0044f640 + 4))();
          }
        }
      }
      else {
        if ((((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
             (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
            (sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
           (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          (**(code **)(*DAT_0044f640 + 4))();
        }
        if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
            (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
           ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
            (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          (**(code **)(*DAT_0044f640 + 4))();
        }
        if (((sVar20 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
            (*(int *)((int)DAT_0044f640 + 0x42) < sVar20 + 1)) ||
           (((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e) ||
            (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)))) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          (**(code **)(*DAT_0044f640 + 4))();
        }
      }
      local_22 = local_22 + sVar11;
    } while (local_22 < sVar14);
  }
  FUN_004153b4();
  return;
}


/* Ghidra address: 0041821c; FUN_0041821c */

/* WARNING: Removing unreachable block (ram,0x004185f0) */
/* WARNING: Removing unreachable block (ram,0x00418488) */
/* WARNING: Removing unreachable block (ram,0x004184af) */
/* WARNING: Removing unreachable block (ram,0x00418617) */

void FUN_0041821c(void)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  bool bVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined4 uVar13;
  short sVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  short sVar20;
  short sVar21;
  short *in_stack_00000004;
  int local_160;
  int local_fc;
  int local_a0;
  int local_74;
  int local_40;
  int local_38;
  short local_34;
  short local_32;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_1c;
  
  uVar13 = FUN_0042fc2c();
  sVar10 = (short)uVar13;
  uVar13 = FUN_0042fc2c();
  sVar11 = (short)uVar13;
  FUN_0040afbc();
  bVar4 = *(byte *)(*(int *)(in_stack_00000004 + 0x1c7) + 0x21);
  bVar5 = *(byte *)(*(int *)(in_stack_00000004 + 0x1c7) + 0x21);
  *(ushort *)(DAT_0044f640 + 4) = (ushort)*(byte *)(*(int *)(in_stack_00000004 + 0x1c7) + 0x21);
  (**(code **)(*DAT_0044f640 + 0x3c))();
  *(ushort *)(DAT_0044f640 + 4) =
       (ushort)*(byte *)(*(int *)(in_stack_00000004 + (uint)DAT_0048e518 * 2 + 0x187) + 0x21);
  sVar7 = *in_stack_00000004;
  sVar14 = sVar11 * in_stack_00000004[2];
  sVar8 = *in_stack_00000004;
  *(undefined2 *)(DAT_0044f640 + 4) = 0xa8;
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0042fc2c();
  FUN_0040b7d8();
  for (local_22 = 1; (int)local_22 < in_stack_00000004[2] + -1; local_22 = local_22 + 1) {
    for (sVar20 = 1; (int)sVar20 < *in_stack_00000004 + -1; sVar20 = sVar20 + 1) {
      sVar16 = sVar20;
      if (sVar20 < 0) {
        sVar16 = 0;
      }
      if (*in_stack_00000004 + -1 < (int)sVar16) {
        sVar16 = *in_stack_00000004 + -1;
      }
      sVar12 = local_22;
      if (local_22 < 0) {
        sVar12 = 0;
      }
      if (in_stack_00000004[2] + -1 < (int)sVar12) {
        sVar12 = in_stack_00000004[2] + -1;
      }
      (&DAT_00491824)[(short)(sVar16 + sVar12 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6))]
           = 1;
    }
  }
  local_2a = 0;
  if (*in_stack_00000004 + -1 < 0) {
    local_2a = *in_stack_00000004 + -1;
  }
  local_28 = 0;
  if (in_stack_00000004[2] + -1 < 0) {
    local_28 = in_stack_00000004[2] + -1;
  }
  local_1c = local_28 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) + local_2a;
  local_22 = 0;
  if (0 < sVar14) {
    do {
      pbVar1 = &DAT_00490720 + local_1c;
      pcVar2 = &DAT_00491824 + local_1c;
      for (sVar20 = sVar10 * sVar8; 0 < sVar20; sVar20 = sVar20 - sVar10) {
        if (((*pcVar2 != '\0') &&
            (bVar6 = *(byte *)(*(int *)(in_stack_00000004 + (uint)*pbVar1 * 2 + 0x187) + 0x21),
            bVar6 != bVar4)) && (bVar6 != bVar5)) {
          *(ushort *)(DAT_0044f640 + 4) = (ushort)bVar6;
          (**(code **)(*DAT_0044f640 + 0x3c))();
        }
        pcVar2 = pcVar2 + 1;
        pbVar1 = pbVar1 + 1;
        local_1c = local_1c + 1;
      }
      local_22 = local_22 + sVar11;
    } while (local_22 < sVar14);
  }
  local_34 = 0;
  if (*in_stack_00000004 + -1 < 0) {
    local_34 = *in_stack_00000004 + -1;
  }
  local_32 = 0;
  if (in_stack_00000004[2] + -1 < 0) {
    local_32 = in_stack_00000004[2] + -1;
  }
  local_1c = local_32 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) + local_34;
  local_22 = 0;
  if (0 < sVar14) {
    do {
      pbVar1 = &DAT_0048f61c + local_1c;
      pcVar2 = &DAT_00491824 + local_1c;
      pbVar3 = &DAT_0048e518 + local_1c;
      for (sVar20 = sVar10 * sVar8; 0 < sVar20; sVar20 = sVar20 - sVar10) {
        local_38 = *(int *)(in_stack_00000004 + (uint)*pbVar3 * 2 + 0x187);
        sVar12 = local_22 + 4;
        sVar16 = *(short *)(local_38 + 0x18);
        sVar21 = sVar20 + 4;
        if (sVar16 == 1) {
          *pcVar2 = '\x01';
        }
        if (*pcVar2 != '\0') {
          if (sVar16 == 0) {
            local_38 = *(int *)(in_stack_00000004 + (uint)*pbVar1 * 2 + 0x187);
            sVar16 = *(short *)(local_38 + 0x18);
          }
          *(ushort *)(DAT_0044f640 + 4) = (ushort)*(byte *)(local_38 + 0x21);
          if (sVar16 == 2) {
            if ((pcVar2[-1] != '\0') &&
               (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) != 2))
            {
              local_40 = (int)sVar12;
              iVar15 = (int)sVar21;
              iVar17 = (int)sVar12 + (int)sVar11;
              if (iVar17 < local_40) {
                iVar18 = iVar17;
                if (local_40 < iVar17) {
                  iVar18 = local_40;
                  local_40 = iVar17;
                }
                if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                   ((local_40 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < iVar18)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x18))();
                }
              }
              else {
                iVar18 = iVar17;
                if (iVar17 < local_40) {
                  iVar18 = local_40;
                  local_40 = iVar17;
                }
                if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                     (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                    (iVar18 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                   (*(int *)((int)DAT_0044f640 + 0x46) < local_40)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x18))();
                }
              }
            }
            if (((&DAT_00491824)[(int)local_1c - (int)sVar7] != '\0') &&
               (*(short *)(*(int *)(in_stack_00000004 +
                                   (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                   0x187) + 0x18) != 2)) {
              iVar17 = (int)sVar21;
              iVar15 = (int)sVar12;
              local_74 = (int)sVar21 - (int)sVar10;
              if (iVar17 < local_74) {
                iVar18 = iVar17;
                if (local_74 < iVar17) {
                  iVar18 = local_74;
                  local_74 = iVar17;
                }
                if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < iVar15)) ||
                   ((local_74 < *(int *)((int)DAT_0044f640 + 0x3a) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < iVar18)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x14))();
                }
              }
              else {
                iVar18 = iVar17;
                if (iVar17 < local_74) {
                  iVar18 = local_74;
                  local_74 = iVar17;
                }
                if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                     (*(int *)((int)DAT_0044f640 + 0x46) < iVar15)) ||
                    (iVar18 < *(int *)((int)DAT_0044f640 + 0x3a))) ||
                   (*(int *)((int)DAT_0044f640 + 0x42) < local_74)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x14))();
                }
              }
            }
            if ((pcVar2[1] != '\0') &&
               (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18) != 2))
            {
              local_a0 = (int)sVar12;
              iVar17 = (int)sVar12 + (int)sVar11;
              iVar15 = (int)sVar21 - (int)sVar10;
              if (iVar17 < local_a0) {
                iVar18 = iVar17;
                if (local_a0 < iVar17) {
                  iVar18 = local_a0;
                  local_a0 = iVar17;
                }
                if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                   ((local_a0 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < iVar18)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x18))();
                }
              }
              else {
                iVar18 = iVar17;
                if (iVar17 < local_a0) {
                  iVar18 = local_a0;
                  local_a0 = iVar17;
                }
                if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                     (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                    (iVar18 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                   (*(int *)((int)DAT_0044f640 + 0x46) < local_a0)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x18))();
                }
              }
            }
            if ((pcVar2[sVar7] != '\0') &&
               (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) + 0x18) !=
                2)) {
              iVar18 = (int)sVar21;
              iVar17 = (int)sVar12 + (int)sVar11;
              iVar15 = (int)sVar21 - (int)sVar10;
              if (iVar18 < iVar15) {
                iVar19 = iVar18;
                if (iVar15 < iVar18) {
                  iVar19 = iVar15;
                  iVar15 = iVar18;
                }
                if (((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                   ((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < iVar19)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x14))();
                }
              }
              else {
                iVar19 = iVar18;
                if (iVar18 < iVar15) {
                  iVar19 = iVar15;
                  iVar15 = iVar18;
                }
                if ((((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                     (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                    (iVar19 < *(int *)((int)DAT_0044f640 + 0x3a))) ||
                   (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 0x14))();
                }
              }
            }
          }
          else {
            if (((sVar16 == 3) || (sVar16 == 10)) ||
               ((sVar16 == 6 || ((sVar16 == 9 || (sVar16 == 0xd)))))) {
              if (sVar16 == 9) {
                *(undefined2 *)(DAT_0044f640 + 4) = 0xcd;
              }
              (**(code **)(*DAT_0044f640 + 0x3c))();
            }
            if ((sVar16 == 8) || (sVar16 == 0xc)) {
              (**(code **)(*DAT_0044f640 + 0x3c))();
            }
            else if (sVar16 == 7) {
              if (*(char *)(local_38 + 0x74) == '\x01') {
                *(undefined2 *)(DAT_0044f640 + 4) = 0x2c;
              }
              if (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) != 2
                 ) {
                if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18)
                     == 4) ||
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) ==
                    7)) {
                  bVar9 = true;
                }
                else {
                  bVar9 = false;
                }
                if ((!bVar9) &&
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18) !=
                    2)) {
                  if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18)
                       == 4) ||
                     (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18)
                      == 7)) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (!bVar9) {
                    local_fc = sVar12 + 1;
                    iVar17 = (int)sVar12 + (int)sVar11;
                    iVar15 = (int)sVar21 - ((int)sVar10 >> 1);
                    if (iVar17 < local_fc) {
                      iVar18 = iVar17;
                      if (local_fc < iVar17) {
                        iVar18 = local_fc;
                        local_fc = iVar17;
                      }
                      if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                         ((local_fc < *(int *)((int)DAT_0044f640 + 0x3e) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < iVar18)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x18))();
                      }
                    }
                    else {
                      iVar18 = iVar17;
                      if (iVar17 < local_fc) {
                        iVar18 = local_fc;
                        local_fc = iVar17;
                      }
                      if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                           (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                          (iVar18 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                         (*(int *)((int)DAT_0044f640 + 0x46) < local_fc)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x18))();
                      }
                    }
                  }
                }
              }
              if (*(short *)(*(int *)(in_stack_00000004 +
                                     (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                     0x187) + 0x18) != 2) {
                if ((*(short *)(*(int *)(in_stack_00000004 +
                                        (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2
                                        + 0x187) + 0x18) == 4) ||
                   (*(short *)(*(int *)(in_stack_00000004 +
                                       (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                       0x187) + 0x18) == 7)) {
                  bVar9 = true;
                }
                else {
                  bVar9 = false;
                }
                if ((!bVar9) &&
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) + 0x18)
                    != 2)) {
                  if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) +
                                 0x18) == 4) ||
                     (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) +
                                0x18) == 7)) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (!bVar9) {
                    iVar17 = (int)sVar12 + ((int)sVar11 >> 1);
                    iVar18 = sVar21 + -1;
                    iVar15 = (int)sVar21 - (int)sVar10;
                    if (iVar18 < iVar15) {
                      iVar19 = iVar18;
                      if (iVar15 < iVar18) {
                        iVar19 = iVar15;
                        iVar15 = iVar18;
                      }
                      if (((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                         ((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < iVar19)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x14))();
                      }
                    }
                    else {
                      iVar19 = iVar18;
                      if (iVar18 < iVar15) {
                        iVar19 = iVar15;
                        iVar15 = iVar18;
                      }
                      if ((((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                           (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                          (iVar19 < *(int *)((int)DAT_0044f640 + 0x3a))) ||
                         (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x14))();
                      }
                    }
                  }
                }
              }
            }
            else if (sVar16 == 4) {
              if (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) != 2
                 ) {
                if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18)
                     == 4) ||
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[-1] * 2 + 0x187) + 0x18) ==
                    7)) {
                  bVar9 = true;
                }
                else {
                  bVar9 = false;
                }
                if ((!bVar9) &&
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18) !=
                    2)) {
                  if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18)
                       == 4) ||
                     (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[1] * 2 + 0x187) + 0x18)
                      == 7)) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (!bVar9) {
                    local_160 = sVar12 + 1;
                    iVar17 = (int)sVar12 + (int)sVar11;
                    iVar15 = (int)sVar21 - ((int)sVar10 >> 1);
                    if (iVar17 < local_160) {
                      iVar18 = iVar17;
                      if (local_160 < iVar17) {
                        iVar18 = local_160;
                        local_160 = iVar17;
                      }
                      if (((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                         ((local_160 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < iVar18)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x18))();
                      }
                    }
                    else {
                      iVar18 = iVar17;
                      if (iVar17 < local_160) {
                        iVar18 = local_160;
                        local_160 = iVar17;
                      }
                      if ((((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                           (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) ||
                          (iVar18 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                         (*(int *)((int)DAT_0044f640 + 0x46) < local_160)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x18))();
                      }
                    }
                  }
                }
              }
              if (*(short *)(*(int *)(in_stack_00000004 +
                                     (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                     0x187) + 0x18) != 2) {
                if ((*(short *)(*(int *)(in_stack_00000004 +
                                        (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2
                                        + 0x187) + 0x18) == 4) ||
                   (*(short *)(*(int *)(in_stack_00000004 +
                                       (uint)(byte)(&DAT_0048f61c)[(int)local_1c - (int)sVar7] * 2 +
                                       0x187) + 0x18) == 7)) {
                  bVar9 = true;
                }
                else {
                  bVar9 = false;
                }
                if ((!bVar9) &&
                   (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) + 0x18)
                    != 2)) {
                  if ((*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) +
                                 0x18) == 4) ||
                     (*(short *)(*(int *)(in_stack_00000004 + (uint)pbVar1[sVar7] * 2 + 0x187) +
                                0x18) == 7)) {
                    bVar9 = true;
                  }
                  else {
                    bVar9 = false;
                  }
                  if (!bVar9) {
                    iVar17 = (int)sVar12 + ((int)sVar11 >> 1);
                    iVar18 = sVar21 + -1;
                    iVar15 = (int)sVar21 - (int)sVar10;
                    if (iVar18 < iVar15) {
                      iVar19 = iVar18;
                      if (iVar15 < iVar18) {
                        iVar19 = iVar15;
                        iVar15 = iVar18;
                      }
                      if (((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                         ((iVar15 < *(int *)((int)DAT_0044f640 + 0x3a) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < iVar19)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x14))();
                      }
                    }
                    else {
                      iVar19 = iVar18;
                      if (iVar18 < iVar15) {
                        iVar19 = iVar15;
                        iVar15 = iVar18;
                      }
                      if ((((iVar17 < *(int *)((int)DAT_0044f640 + 0x3e)) ||
                           (*(int *)((int)DAT_0044f640 + 0x46) < iVar17)) ||
                          (iVar19 < *(int *)((int)DAT_0044f640 + 0x3a))) ||
                         (*(int *)((int)DAT_0044f640 + 0x42) < iVar15)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 0x14))();
                      }
                    }
                  }
                }
              }
            }
            else if (sVar16 == 1) {
              local_26 = sVar12;
              local_24 = sVar21;
            }
          }
        }
        pbVar3 = pbVar3 + 1;
        pcVar2 = pcVar2 + 1;
        pbVar1 = pbVar1 + 1;
        local_1c = local_1c + 1;
      }
      sVar20 = *(short *)(*(int *)(in_stack_00000004 + 0x3a5) + 0x3c);
      sVar12 = (local_24 - sVar10) + 1;
      sVar16 = local_26 + 1;
      if (((sVar20 < 0x155) || (0x168 < sVar20)) && ((sVar20 < 0 || (0x13 < sVar20)))) {
        if ((sVar20 < 0x14) || (0x40 < sVar20)) {
          if ((sVar20 < 0x41) || (0x6d < sVar20)) {
            if ((sVar20 < 0x6e) || (0x9a < sVar20)) {
              if ((sVar20 < 0x9b) || (199 < sVar20)) {
                if ((sVar20 < 200) || (0xf4 < sVar20)) {
                  if ((sVar20 < 0xf5) || (0x121 < sVar20)) {
                    if ((0x121 < sVar20) && (sVar20 < 0x155)) {
                      if (((int)sVar12 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                         (((*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar12 ||
                           (sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 4))();
                      }
                      if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                         ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 4))();
                      }
                      if (((sVar12 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                          (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 2)) ||
                         (((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                          (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)))) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        (**(code **)(*DAT_0044f640 + 4))();
                      }
                    }
                  }
                  else {
                    if (((((int)sVar12 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                         (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar12)) ||
                        (sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                       (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)) {
                      bVar9 = false;
                    }
                    else {
                      bVar9 = true;
                    }
                    if (bVar9) {
                      (**(code **)(*DAT_0044f640 + 4))();
                    }
                    if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                        (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                       ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                        (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                      bVar9 = false;
                    }
                    else {
                      bVar9 = true;
                    }
                    if (bVar9) {
                      (**(code **)(*DAT_0044f640 + 4))();
                    }
                    if (((sVar12 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                        (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 2)) ||
                       ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                        (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                      bVar9 = false;
                    }
                    else {
                      bVar9 = true;
                    }
                    if (bVar9) {
                      (**(code **)(*DAT_0044f640 + 4))();
                    }
                  }
                }
                else {
                  if (((((int)sVar12 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                       (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar12)) ||
                      ((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                     (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  if (bVar9) {
                    (**(code **)(*DAT_0044f640 + 4))();
                  }
                  if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                      (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                     ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                      (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  if (bVar9) {
                    (**(code **)(*DAT_0044f640 + 4))();
                  }
                  if (((sVar12 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                      (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 2)) ||
                     ((sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                      (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)))) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  if (bVar9) {
                    (**(code **)(*DAT_0044f640 + 4))();
                  }
                }
              }
              else {
                if ((((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                     (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                    ((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                   (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 4))();
                }
                if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                   ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 4))();
                }
                if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                    (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                   ((sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                    (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)))) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  (**(code **)(*DAT_0044f640 + 4))();
                }
              }
            }
            else {
              if ((((sVar12 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                   (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 2)) ||
                  ((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
                 (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                (**(code **)(*DAT_0044f640 + 4))();
              }
              if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                  (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
                 ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                  (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                (**(code **)(*DAT_0044f640 + 4))();
              }
              if ((((int)sVar12 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                  (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar12)) ||
                 ((sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                  (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)))) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (bVar9) {
                (**(code **)(*DAT_0044f640 + 4))();
              }
            }
          }
          else {
            if ((((sVar12 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                 (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 2)) ||
                (sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
               (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              (**(code **)(*DAT_0044f640 + 4))();
            }
            if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
               ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              (**(code **)(*DAT_0044f640 + 4))();
            }
            if ((((int)sVar12 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
                (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar12)) ||
               ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
                (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              (**(code **)(*DAT_0044f640 + 4))();
            }
          }
        }
        else {
          if ((((sVar12 + 2 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
               (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 2)) ||
              (sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
             (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            (**(code **)(*DAT_0044f640 + 4))();
          }
          if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
              (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
             ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
              (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            (**(code **)(*DAT_0044f640 + 4))();
          }
          if ((((int)sVar12 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
              (*(int *)((int)DAT_0044f640 + 0x42) < (int)sVar12)) ||
             (((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e) ||
              (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)))) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            (**(code **)(*DAT_0044f640 + 4))();
          }
        }
      }
      else {
        if ((((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
             (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
            (sVar16 + 2 < *(int *)((int)DAT_0044f640 + 0x3e))) ||
           (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 2)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          (**(code **)(*DAT_0044f640 + 4))();
        }
        if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
            (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
           ((sVar16 + 1 < *(int *)((int)DAT_0044f640 + 0x3e) ||
            (*(int *)((int)DAT_0044f640 + 0x46) < sVar16 + 1)))) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          (**(code **)(*DAT_0044f640 + 4))();
        }
        if (((sVar12 + 1 < *(int *)((int)DAT_0044f640 + 0x3a)) ||
            (*(int *)((int)DAT_0044f640 + 0x42) < sVar12 + 1)) ||
           (((int)sVar16 < *(int *)((int)DAT_0044f640 + 0x3e) ||
            (*(int *)((int)DAT_0044f640 + 0x46) < (int)sVar16)))) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          (**(code **)(*DAT_0044f640 + 4))();
        }
      }
      local_22 = local_22 + sVar11;
    } while (local_22 < sVar14);
  }
  FUN_004153b4();
  return;
}


/* Ghidra address: 0041ac1c; FUN_0041ac1c */

void FUN_0041ac1c(void)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x435d58);
  while (0 < DAT_00493dac) {
    DAT_00493dac = DAT_00493dac + -1;
    piVar1 = (int *)(&DAT_00493db0)[DAT_00493dac];
    if (piVar1 != (int *)0x0) {
      sVar2 = (**(code **)(*piVar1 + 0x10))();
      if ((sVar2 != 0) && (piVar1 != (int *)0x0)) {
        iVar3 = FUN_0042b677();
        *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
        (**(code **)*piVar1)();
      }
    }
  }
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  FUN_0041acc8();
  FUN_0041034c();
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 0041acc8; FUN_0041acc8 */

void FUN_0041acc8(void)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 local_28;
  
  FUN_0042b4b4(0x435d88);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    if (*(int *)(in_stack_00000004 + 4) != 0) {
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      FUN_0041acc8();
    }
    if (*(int *)(in_stack_00000004 + 8) != 0) {
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      FUN_0041acc8();
    }
    if (((*(int **)(in_stack_00000004 + 0xc) != (int *)0x0) &&
        (sVar2 = (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 0x10))(), sVar2 != 0)) &&
       (puVar1 = *(undefined4 **)(in_stack_00000004 + 0xc), puVar1 != (undefined4 *)0x0)) {
      iVar3 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
      (**(code **)*puVar1)();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 0041ad88; FUN_0041ad88 */

void FUN_0041ad88(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  int in_stack_00000004;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x435dc8);
  iVar3 = (int)DAT_0049292c;
  puVar2 = DAT_00492944;
  if (DAT_00492944 == (undefined4 *)0x0) {
    DAT_0049292c = (undefined4 *)((int)DAT_0049292c + 0x10);
    DAT_00492944 = DAT_0049292c;
    if (DAT_0049292c != (undefined4 *)0x0) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(int *)(iVar3 + 0x1c) = in_stack_00000004;
      *DAT_00492944 = 0;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    while (puVar2 != (undefined4 *)0x0) {
      iVar1 = puVar2[3];
      if (*(int *)(iVar1 + 0x12) == 0) {
        bVar4 = *(int *)(in_stack_00000004 + 6) < *(int *)(iVar1 + 6);
      }
      else if (*(int *)(iVar1 + 0x12) == 1) {
        bVar4 = *(int *)(in_stack_00000004 + 0xe) < *(int *)(iVar1 + 0xe);
      }
      else if (*(int *)(iVar1 + 0x12) == 2) {
        bVar4 = *(int *)(in_stack_00000004 + 10) < *(int *)(iVar1 + 10);
      }
      else {
        bVar4 = *(short *)(in_stack_00000004 + 0x17) <= *(short *)(iVar1 + 0x17);
      }
      if (bVar4) {
        iVar1 = puVar2[3];
        if (*(int *)(iVar1 + 0x12) == 0) {
          bVar4 = DAT_00492938 < *(int *)(iVar1 + 6);
        }
        else if (*(int *)(iVar1 + 0x12) == 1) {
          bVar4 = DAT_00492940 < *(int *)(iVar1 + 0xe);
        }
        else if (*(int *)(iVar1 + 0x12) == 2) {
          bVar4 = DAT_0049293c < *(int *)(iVar1 + 10);
        }
        else {
          bVar4 = -1 < *(short *)(iVar1 + 0x17);
        }
        if (bVar4) {
          unaff_EBX = puVar2 + 1;
          puVar2 = (undefined4 *)puVar2[1];
        }
        else {
          unaff_EBX = puVar2 + 2;
          puVar2 = (undefined4 *)puVar2[2];
        }
      }
      else {
        iVar1 = puVar2[3];
        if (*(int *)(iVar1 + 0x12) == 0) {
          bVar4 = DAT_00492938 < *(int *)(iVar1 + 6);
        }
        else if (*(int *)(iVar1 + 0x12) == 1) {
          bVar4 = DAT_00492940 < *(int *)(iVar1 + 0xe);
        }
        else if (*(int *)(iVar1 + 0x12) == 2) {
          bVar4 = DAT_0049293c < *(int *)(iVar1 + 10);
        }
        else {
          bVar4 = -1 < *(short *)(iVar1 + 0x17);
        }
        if (bVar4) {
          unaff_EBX = puVar2 + 2;
          puVar2 = (undefined4 *)puVar2[2];
        }
        else {
          unaff_EBX = puVar2 + 1;
          puVar2 = (undefined4 *)puVar2[1];
        }
      }
    }
    DAT_0049292c = (undefined4 *)((int)DAT_0049292c + 0x10);
    puVar2 = DAT_0049292c;
    if (DAT_0049292c != (undefined4 *)0x0) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(int *)(iVar3 + 0x1c) = in_stack_00000004;
      *puVar2 = 0;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
    }
    *unaff_EBX = puVar2;
    *in_FS_OFFSET = local_2c;
  }
  return;
}


/* Ghidra address: 0041afc0; FUN_0041afc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041afc0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_00493da8 = (DAT_0044ebdc - DAT_0044ebd4) + 1;
  iVar1 = DAT_0044ebd4;
  if (DAT_0044ebd4 < 0) {
    iVar1 = 0;
  }
  DAT_00493da4 = DAT_0044ebdc;
  if (0x513 < DAT_0044ebdc) {
    DAT_00493da4 = 0x513;
  }
  puVar2 = &DAT_00492950 + iVar1;
  DAT_00493da0 = iVar1;
  for (; iVar1 <= DAT_00493da4; iVar1 = iVar1 + 1) {
    *puVar2 = 1;
    puVar2 = puVar2 + 1;
  }
  _DAT_0048aab2 = 0;
  FUN_0041b160(DAT_00492944,puVar2,DAT_00493da4,(undefined4 *)DAT_00492944);
  return;
}


/* Ghidra address: 0041b048; FUN_0041b048 */

void FUN_0041b048(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = in_stack_00000008;
  while (iVar2 = iVar2 >> 1, iVar3 = iVar2, 0 < iVar2) {
    for (; iVar3 < in_stack_00000008; iVar3 = iVar3 + 1) {
      iVar4 = iVar3 - iVar2;
      while ((-1 < iVar4 &&
             (*(short *)(*(int *)(in_stack_00000004 + iVar4 * 4) + 0x17) <
              *(short *)(*(int *)(in_stack_00000004 + (iVar2 + iVar4) * 4) + 0x17)))) {
        uVar1 = *(undefined4 *)(in_stack_00000004 + iVar4 * 4);
        *(undefined4 *)(in_stack_00000004 + iVar4 * 4) =
             *(undefined4 *)(in_stack_00000004 + (iVar2 + iVar4) * 4);
        *(undefined4 *)(in_stack_00000004 + (iVar2 + iVar4) * 4) = uVar1;
        iVar4 = iVar4 - iVar2;
      }
    }
  }
  return;
}


/* Ghidra address: 0041b0b4; FUN_0041b0b4 */

void FUN_0041b0b4(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_0041b104();
  FUN_0041b048();
  puVar1 = &DAT_00493db0;
  for (iVar2 = 0; iVar2 < DAT_00493dac; iVar2 = iVar2 + 1) {
    (**(code **)(*(int *)*puVar1 + 8))();
    puVar1 = puVar1 + 1;
  }
  return;
}


/* Ghidra address: 0041b104; FUN_0041b104 */

void FUN_0041b104(void)

{
  int *in_stack_00000004;
  
  if ((*in_stack_00000004 == 0) && (in_stack_00000004[2] != 0)) {
    FUN_0041b104();
  }
  if ((*(byte *)(in_stack_00000004[3] + 0x16) & 1) != 0) {
    (**(code **)(*(int *)in_stack_00000004[3] + 8))();
  }
  if (in_stack_00000004[1] != 0) {
    FUN_0041b104();
  }
  return;
}


/* Ghidra address: 0041b160; FUN_0041b160 */

void FUN_0041b160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_stack_0000000c;
  undefined4 local_8;
  
  iVar3 = param_4[1];
  if (iVar3 != 0) {
    FUN_0041b160(iVar3,in_stack_0000000c,param_3,(undefined4 *)iVar3);
  }
  if (DAT_00493da8 < 1) {
    *param_4 = 1;
    iVar3 = param_4[3];
    pbVar1 = (byte *)(iVar3 + 0x16);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined2 *)(iVar3 + 0x17) = 0;
  }
  else {
    (**(code **)(*(int *)param_4[3] + 4))();
    local_8._2_2_ = (short)((uint)param_3 >> 0x10);
    iVar3 = (int)local_8._2_2_;
    local_8 = param_3;
    if (iVar3 < DAT_00493da0) {
      local_8._0_2_ = (short)param_3;
      local_8 = CONCAT22((undefined2)DAT_00493da0,(short)local_8);
    }
    if (DAT_00493da4 < (short)local_8) {
      local_8 = CONCAT22(local_8._2_2_,(undefined2)DAT_00493da4);
    }
    iVar3 = param_4[3];
    pbVar1 = (byte *)(iVar3 + 0x16);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined2 *)(iVar3 + 0x17) = 0;
    if ((*(byte *)(param_4[3] + 0x16) & 2) == 0) {
      iVar3 = (int)local_8._2_2_;
      piVar4 = &DAT_00492950 + iVar3;
      for (; iVar2 = (int)(short)local_8, iVar3 <= iVar2; iVar3 = iVar3 + 1) {
        if (*piVar4 == 1) {
          *(byte *)(param_4[3] + 0x16) = *(byte *)(param_4[3] + 0x16) | 1;
          (&DAT_00491824)[*(ushort *)(param_4[3] + 4)] = 1;
          iVar2 = 0;
          break;
        }
        piVar4 = piVar4 + 1;
      }
    }
    else {
      iVar3 = (int)local_8._2_2_;
      piVar4 = &DAT_00492950 + iVar3;
      for (; iVar3 <= (short)local_8; iVar3 = iVar3 + 1) {
        if (*piVar4 == 1) {
          *(byte *)(param_4[3] + 0x16) = *(byte *)(param_4[3] + 0x16) | 1;
          (&DAT_00491824)[*(ushort *)(param_4[3] + 4)] = 1;
          DAT_00493da8 = DAT_00493da8 + -1;
          *piVar4 = 0;
        }
        piVar4 = piVar4 + 1;
      }
      if (local_8._2_2_ <= DAT_00493da0) {
        DAT_00493da0 = (int)(short)local_8;
      }
      iVar2 = (int)(short)local_8;
      if (DAT_00493da4 <= iVar2) {
        DAT_00493da4 = (int)local_8._2_2_;
      }
    }
    iVar3 = param_4[2];
    if (iVar3 != 0) {
      FUN_0041b160(iVar3,in_stack_0000000c,iVar2,(undefined4 *)iVar3);
    }
  }
  return;
}


/* Ghidra address: 0041b3f4; FUN_0041b3f4 */

void FUN_0041b3f4(void)

{
  char *pcVar1;
  int iVar2;
  short *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int local_20;
  int local_1c;
  short local_8;
  short local_6;
  
  if ((in_stack_00000008 == in_stack_00000010) || (in_stack_0000000c == in_stack_00000014)) {
    FUN_0041050c();
    FUN_004105a8();
    while ((local_20 != in_stack_00000010 || (local_1c != in_stack_00000014))) {
      pcVar1 = &DAT_00494d50 + local_1c * 0x40 + local_20;
      if ((*pcVar1 != '\x01') && (*pcVar1 == '\0')) {
        local_6 = (short)local_1c;
        local_8 = (short)local_20;
        if (local_8 < 0) {
          local_8 = 0;
        }
        if (*in_stack_00000004 + -1 < (int)local_8) {
          local_8 = *in_stack_00000004 + -1;
        }
        if (local_6 < 0) {
          local_6 = 0;
        }
        if (in_stack_00000004[2] + -1 < (int)local_6) {
          local_6 = in_stack_00000004[2] + -1;
        }
        iVar2 = (int)(short)(local_6 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) + local_8)
        ;
        (&DAT_00495d50)[DAT_00499d50] = iVar2;
        DAT_00499d50 = DAT_00499d50 + 1;
        *pcVar1 = '\x01';
        if (((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61c)[iVar2] * 2 + 0x187)
                       + 0x1b) & 2) != 0) &&
           ((((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61d)[iVar2] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0 &&
             ((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61b)[iVar2] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0)) ||
            (((*(byte *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_0048f61c)[*in_stack_00000004 + iVar2] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0 &&
             ((*(byte *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_0048f61c)[iVar2 - *in_stack_00000004] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0)))))) {
          *pcVar1 = '\x02';
        }
      }
      FUN_004105a8();
    }
  }
  else {
    FUN_0041b3f4();
    FUN_0041b3f4();
    FUN_0041b3f4();
    FUN_0041b3f4();
  }
  return;
}


/* Ghidra address: 0041b5cc; FUN_0041b5cc */

void FUN_0041b5cc(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  short *in_stack_00000004;
  int *in_stack_00000010;
  int *in_stack_00000014;
  int local_2c;
  int local_28;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_0041038c();
  local_10 = 0;
  do {
    if (DAT_0048aaac <= local_10) {
LAB_0041b731:
      *in_stack_00000010 = local_8;
      *in_stack_00000014 = local_c;
      return;
    }
    iVar1 = local_2c / (int)in_stack_00000004[0x3a7];
    iVar2 = local_28 / (int)in_stack_00000004[0x3a7];
    pcVar3 = &DAT_00494d50 + iVar2 * 0x40 + iVar1;
    local_c = iVar2;
    local_8 = iVar1;
    if (*pcVar3 != '\x01') {
      if (*pcVar3 == '\0') {
        local_c._0_2_ = (short)iVar2;
        local_8._0_2_ = (short)iVar1;
        if ((short)local_8 < 0) {
          local_8._0_2_ = 0;
        }
        if (*in_stack_00000004 + -1 < (int)(short)local_8) {
          local_8._0_2_ = *in_stack_00000004 + -1;
        }
        if ((short)local_c < 0) {
          local_c._0_2_ = 0;
        }
        if (in_stack_00000004[2] + -1 < (int)(short)local_c) {
          local_c._0_2_ = in_stack_00000004[2] + -1;
        }
        iVar1 = (int)(short)((short)local_8 +
                            (short)local_c * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6));
        (&DAT_00495d50)[DAT_00499d50] = iVar1;
        DAT_00499d50 = DAT_00499d50 + 1;
        *pcVar3 = '\x01';
        if (((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61c)[iVar1] * 2 + 0x187)
                       + 0x1b) & 2) != 0) &&
           ((((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61d)[iVar1] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0 &&
             ((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61b)[iVar1] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0)) ||
            (((*(byte *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_0048f61c)[*in_stack_00000004 + iVar1] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0 &&
             ((*(byte *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_0048f61c)[iVar1 - *in_stack_00000004] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0)))))) {
          *pcVar3 = '\x02';
          goto LAB_0041b731;
        }
      }
      else if (*pcVar3 == '\x02') goto LAB_0041b731;
    }
    FUN_004103cc();
    local_10 = local_10 + 1;
  } while( true );
}


/* Ghidra address: 0041b748; FUN_0041b748 */

void FUN_0041b748(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  short *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_14;
  short local_10;
  short local_c;
  
  for (local_14 = in_stack_0000000c + -1; local_14 <= in_stack_0000000c + 1; local_14 = local_14 + 1
      ) {
    for (iVar3 = in_stack_00000008 + -1; iVar3 <= in_stack_00000008 + 1; iVar3 = iVar3 + 1) {
      pcVar1 = &DAT_00494d50 + local_14 * 0x40 + iVar3;
      if (*pcVar1 == '\0') {
        local_10 = (short)local_14;
        local_c = (short)iVar3;
        if (local_c < 0) {
          local_c = 0;
        }
        if (*in_stack_00000004 + -1 < (int)local_c) {
          local_c = *in_stack_00000004 + -1;
        }
        if (local_10 < 0) {
          local_10 = 0;
        }
        if (in_stack_00000004[2] + -1 < (int)local_10) {
          local_10 = in_stack_00000004[2] + -1;
        }
        iVar2 = (int)(short)(local_c + local_10 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6)
                            );
        (&DAT_00495d50)[DAT_00499d50] = iVar2;
        DAT_00499d50 = DAT_00499d50 + 1;
        *pcVar1 = '\x01';
        if (((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61c)[iVar2] * 2 + 0x187)
                       + 0x1b) & 2) != 0) &&
           ((((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61d)[iVar2] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0 &&
             ((*(byte *)(*(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61b)[iVar2] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0)) ||
            (((*(byte *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_0048f61c)[*in_stack_00000004 + iVar2] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0 &&
             ((*(byte *)(*(int *)(in_stack_00000004 +
                                 (uint)(byte)(&DAT_0048f61c)[iVar2 - *in_stack_00000004] * 2 + 0x187
                                 ) + 0x1b) & 2) != 0)))))) {
          *pcVar1 = '\x02';
        }
      }
    }
  }
  return;
}


/* Ghidra address: 0041b890; FUN_0041b890 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041b890(void)

{
  ushort *puVar1;
  uint uVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  byte bVar11;
  short *in_stack_00000004;
  int *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 local_2b4 [13];
  uint *local_280;
  uint *local_27c;
  uint *local_278;
  short local_274;
  short local_272;
  undefined4 local_270;
  undefined2 local_26a;
  undefined2 local_268;
  undefined2 local_266;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  byte local_257;
  short local_256;
  uint *local_254;
  uint *local_250;
  int local_24c;
  int local_248;
  int local_244;
  uint *local_240;
  uint *local_23c;
  undefined4 local_238;
  int local_234;
  undefined4 local_230;
  uint *local_22c;
  uint *local_228;
  undefined4 local_224;
  int local_220;
  undefined4 local_21c;
  uint *local_218;
  uint *local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  int local_204;
  short local_1fe;
  int local_1fc;
  short local_1f8;
  short local_1f6;
  undefined2 local_1f4;
  undefined2 local_1f2;
  undefined4 local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int *local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int *local_134;
  int local_130;
  int local_12c;
  int local_128;
  short local_122;
  uint *local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  short local_102;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_70;
  int local_6c;
  int local_64;
  short local_5e;
  int local_5c;
  int local_58;
  short local_52;
  undefined4 local_50;
  undefined2 local_40;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  
  bVar11 = 0;
  FUN_0042b4b4(0x435eb0);
  DAT_00499d50 = 0;
  local_52 = (short)in_stack_00000008[3];
  local_88 = *in_stack_00000008;
  local_8c = in_stack_00000008[2];
  local_5e = in_stack_00000004[0x3a8];
  local_64 = (int)in_stack_00000004[0x3a7];
  local_90 = 2;
  local_94 = 3;
  local_98 = *(int *)(&DAT_00446554 + (0x168 - local_52) * 4);
  local_9c = *(int *)(&DAT_00445fb0 + (0x168 - local_52) * 4);
  local_78 = ((local_64 * 2 * local_98 - local_64 * 3 * local_9c >> 0xf) + local_8c) / local_64;
  local_6c = ((local_64 * 3 * local_98 + local_64 * 2 * local_9c >> 0xf) + local_88) / local_64;
  local_80 = local_64 * -3;
  local_84 = local_64 * 2;
  local_7c = ((local_84 * local_98 - local_80 * local_9c >> 0xf) + local_8c) / local_64;
  local_70 = ((local_80 * local_98 + local_84 * local_9c >> 0xf) + local_88) / local_64;
  local_5c = local_8c;
  local_58 = local_88;
  FUN_00429054();
  local_a0 = 0x4b;
  local_102 = 0;
  FUN_0041da94();
  local_108 = (int)local_102;
  local_a0 = local_a0 << 1;
  local_114 = local_88 / (int)in_stack_00000004[0x3a7];
  local_118 = local_8c / (int)in_stack_00000004[0x3a7];
  if (DAT_0048aaac < 0x40) {
    FUN_0041b748();
  }
  local_11c = 0;
  if (0 < local_a0) {
    do {
      if (0x167 < local_108) {
        local_108 = 0;
      }
      FUN_0041b5cc();
      if ((local_10c != local_114) || (local_110 != local_118)) {
        FUN_0041b3f4();
      }
      local_114 = local_10c;
      local_118 = local_110;
      local_11c = local_11c + 1;
      local_108 = local_108 + 1;
    } while (local_11c < local_a0);
  }
  *(undefined2 *)((int)in_stack_0000000c + 0x1a) = 0xe10;
  *(short *)((int)in_stack_0000000c + 0x2a) = in_stack_00000004[4];
  *(short *)(in_stack_0000000c + 0xb) = in_stack_00000004[3];
  in_stack_0000000c[7] = *in_stack_00000008;
  in_stack_0000000c[8] = in_stack_00000008[1];
  in_stack_0000000c[9] = in_stack_00000008[2];
  *(short *)(in_stack_0000000c + 10) = (short)in_stack_00000008[3];
  *in_stack_0000000c = 0x80;
  local_8 = FUN_00431988();
  if (local_8 != (uint *)0x0) {
    local_40 = 0x14;
    puVar8 = local_2b4;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *in_stack_0000000c;
      in_stack_0000000c = in_stack_0000000c + (uint)bVar11 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    }
    iVar5 = 0xc;
    do {
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    FUN_0040a940();
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    local_40 = 8;
  }
  *(uint **)(in_stack_00000004 + 0x389) = local_8;
  _DAT_0048aab0 =
       (((short)local_70 - (short)local_6c) + 1) * (((short)local_7c - (short)local_78) + 1);
  local_120 = local_8;
  FUN_0040d8b0();
  DAT_00492944 = 0;
  DAT_00493dac = 0;
  DAT_00492928 = FUN_00410304();
  DAT_00492940 = in_stack_00000008[2];
  DAT_0049293c = in_stack_00000008[1];
  DAT_00492938 = *in_stack_00000008;
  local_280 = &DAT_00495d50;
  DAT_0049292c = DAT_00492928;
  local_130 = DAT_00492938;
  local_12c = DAT_0049293c;
  local_128 = DAT_00492940;
  for (local_122 = 0; local_122 < DAT_00499d50; local_122 = local_122 + 1) {
    if (*(int *)(in_stack_00000004 + *local_280 * 2 + 0x3ac) != 0) {
      for (local_134 = *(int **)(in_stack_00000004 + *local_280 * 2 + 0x3ac); *local_134 != 0;
          local_134 = local_134 + 1) {
        iVar5 = *local_134;
        if (*(int *)(iVar5 + 0x12) < 2) {
          iVar9 = *(short *)(iVar5 + 0x55) - DAT_0044ebf8;
          iVar10 = *(short *)(iVar5 + 0x5b) - DAT_0044ebf8;
          local_140 = *(short *)(iVar5 + 0x59) - DAT_0044ec00;
          local_144 = *(short *)(iVar5 + 0x5f) - DAT_0044ec00;
          local_138 = local_140 * DAT_0044ebf4 - iVar9 * DAT_0044ebf0 >> 0xf;
          local_13c = local_144 * DAT_0044ebf4 - iVar10 * DAT_0044ebf0 >> 0xf;
          *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) | 1;
          if ((DAT_0044ebc8 < local_138) || (DAT_0044ebc8 < local_13c)) {
            iVar6 = iVar9 * DAT_0044ebf4 + local_140 * DAT_0044ebf0 >> 0xf;
            iVar9 = iVar10 * DAT_0044ebf4 + local_144 * DAT_0044ebf0 >> 0xf;
            local_148 = *(short *)(iVar5 + 0x57) - DAT_0044ebfc;
            local_14c = *(short *)(iVar5 + 0x5d) - DAT_0044ebfc;
            *(undefined2 *)(iVar5 + 0x51) = 0;
            *(short *)(iVar5 + 0x53) = **(short **)(iVar5 + 0x19) + -1;
            if (local_138 < DAT_0044ebc8) {
              local_150 = ((DAT_0044ebc8 - local_138) * 0x10000) / (local_13c - local_138);
              iVar6 = iVar6 + ((iVar9 - iVar6) * local_150 >> 0x10);
              *(short *)(iVar5 + 0x51) =
                   (short)((uint)(*(short *)(iVar5 + 0x53) * local_150) >> 0x10);
              local_138 = DAT_0044ebc8;
            }
            else if (local_13c < DAT_0044ebc8) {
              local_154 = ((DAT_0044ebc8 - local_138) * 0x10000) / (local_13c - local_138);
              iVar9 = ((iVar9 - iVar6) * local_154 >> 0x10) + iVar6;
              *(short *)(iVar5 + 0x53) =
                   (short)((uint)(*(short *)(iVar5 + 0x53) * local_154) >> 0x10);
              local_13c = DAT_0044ebc8;
            }
            local_140 = DAT_0044f6cc / local_138;
            local_144 = DAT_0044f6cc / local_13c;
            iVar10 = (local_140 * iVar6 >> 0xf) + (int)DAT_0044ebd0;
            iVar9 = (local_144 * iVar9 >> 0xf) + (int)DAT_0044ebd0;
            if (iVar9 == iVar10) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            if (iVar9 < iVar10) {
              if ((DAT_0044ebdc < iVar9) || (iVar10 < DAT_0044ebd4)) {
                *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
                *(undefined2 *)(iVar5 + 0x17) = 0;
              }
            }
            else if ((DAT_0044ebdc < iVar10) || (iVar9 < DAT_0044ebd4)) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            if ((iVar9 - iVar10) * (local_14c - local_148) < 0) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            if ((*(byte *)(iVar5 + 0x16) & 1) != 0) {
              *(int *)(iVar5 + 0x45) = iVar10;
              *(int *)(iVar5 + 0x21) = iVar10;
              *(int *)(iVar5 + 0x25) = (local_140 * local_148 >> 0xf) + (int)DAT_0044ebd2;
              *(int *)(iVar5 + 0x49) = (local_140 * local_14c >> 0xf) + (int)DAT_0044ebd2;
              *(int *)(iVar5 + 0x4d) = local_138;
              *(int *)(iVar5 + 0x29) = local_138;
              *(int *)(iVar5 + 0x39) = iVar9;
              *(int *)(iVar5 + 0x2d) = iVar9;
              *(int *)(iVar5 + 0x31) = (local_144 * local_148 >> 0xf) + (int)DAT_0044ebd2;
              *(int *)(iVar5 + 0x3d) = (local_144 * local_14c >> 0xf) + (int)DAT_0044ebd2;
              *(int *)(iVar5 + 0x41) = local_13c;
              *(int *)(iVar5 + 0x35) = local_13c;
              if (iVar9 < iVar10) {
                *(short *)(iVar5 + 0x67) = (short)iVar10;
                *(short *)(iVar5 + 0x65) = (short)iVar9;
              }
              else {
                *(short *)(iVar5 + 0x67) = (short)iVar9;
                *(short *)(iVar5 + 0x65) = (short)iVar10;
              }
              if (*(int *)(iVar5 + 0x1d) != 0) {
                *(undefined4 *)(iVar5 + 0x19) = **(undefined4 **)(iVar5 + 0x1d);
                puVar1 = (ushort *)(*(int *)(iVar5 + 0x19) + 4);
                *puVar1 = *puVar1 & 0xfff6;
              }
              *(short *)(iVar5 + 0x17) = (short)(local_138 + local_13c >> 1);
              if (*(short *)(iVar5 + 0x17) < 0) {
                *(undefined2 *)(iVar5 + 0x17) = 0;
              }
            }
          }
          else {
            *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
            *(undefined2 *)(iVar5 + 0x17) = 0;
          }
          if ((*(byte *)(iVar5 + 0x16) & 1) != 0) {
            FUN_0041ad88();
          }
        }
      }
    }
    local_280 = local_280 + 1;
  }
  local_280 = &DAT_00495d50;
  for (local_122 = 0; local_122 < DAT_00499d50; local_122 = local_122 + 1) {
    if (*(int *)(in_stack_00000004 + *local_280 * 2 + 0x3ac) != 0) {
      for (local_158 = *(int **)(in_stack_00000004 + *local_280 * 2 + 0x3ac); *local_158 != 0;
          local_158 = local_158 + 1) {
        iVar5 = *local_158;
        if (*(int *)(iVar5 + 0x12) == 2) {
          local_168 = *(short *)(iVar5 + 0x85) - DAT_0044ebf8;
          local_164 = DAT_0044f6c8 + local_168;
          local_184 = *(short *)(iVar5 + 0x89) - DAT_0044ec00;
          local_17c = DAT_0044f6c8 + local_184;
          local_16c = local_17c * DAT_0044ebf4 - local_168 * DAT_0044ebf0 >> 0xf;
          local_170 = local_17c * DAT_0044ebf4 - local_164 * DAT_0044ebf0 >> 0xf;
          local_174 = local_184 * DAT_0044ebf4 - local_168 * DAT_0044ebf0 >> 0xf;
          iVar9 = local_184 * DAT_0044ebf4 - local_164 * DAT_0044ebf0 >> 0xf;
          local_180 = local_184;
          local_178 = local_17c;
          if ((((DAT_0044ebc8 < local_16c) || (DAT_0044ebc8 < local_170)) || (DAT_0044ebc8 < iVar9))
             || (DAT_0044ebc8 < local_174)) {
            local_198 = local_168 * DAT_0044ebf4 + local_17c * DAT_0044ebf0 >> 0xf;
            local_1a4 = local_164 * DAT_0044ebf4 + local_17c * DAT_0044ebf0 >> 0xf;
            local_1b0 = local_164 * DAT_0044ebf4 + local_184 * DAT_0044ebf0 >> 0xf;
            local_1bc = local_168 * DAT_0044ebf4 + local_184 * DAT_0044ebf0 >> 0xf;
            local_1b8 = *(short *)(iVar5 + 0x87) - DAT_0044ebfc;
            local_18c = local_1b8 - *(short *)(iVar5 + 0x8b);
            *(int *)(iVar5 + 0x49) = local_198;
            *(int *)(iVar5 + 0x4d) = local_1b8;
            *(int *)(iVar5 + 0x51) = local_16c;
            *(int *)(iVar5 + 0x55) = local_1a4;
            *(int *)(iVar5 + 0x59) = local_1b8;
            *(int *)(iVar5 + 0x5d) = local_170;
            *(int *)(iVar5 + 0x61) = local_1b0;
            *(int *)(iVar5 + 0x65) = local_1b8;
            *(int *)(iVar5 + 0x69) = iVar9;
            *(int *)(iVar5 + 0x6d) = local_1bc;
            *(int *)(iVar5 + 0x71) = local_1b8;
            *(int *)(iVar5 + 0x75) = local_174;
            local_1b4 = local_174;
            local_1ac = local_1b8;
            local_1a8 = iVar9;
            local_1a0 = local_1b8;
            local_19c = local_170;
            local_194 = local_1b8;
            local_190 = local_16c;
            local_188 = local_1b8;
            local_168 = local_1bc;
            local_164 = local_1b0;
            local_160 = local_1a4;
            local_15c = local_198;
            FUN_00428fe4();
            *(int *)(iVar5 + 0x41) = local_18c;
            *(int *)(iVar5 + 0x35) = local_18c;
            *(int *)(iVar5 + 0x29) = local_18c;
            *(int *)(iVar5 + 0x1d) = local_18c;
            if (local_16c < DAT_0044ebc8) {
              local_16c = DAT_0044ebc8;
            }
            if (local_170 < DAT_0044ebc8) {
              local_170 = DAT_0044ebc8;
            }
            if (iVar9 < DAT_0044ebc8) {
              iVar9 = DAT_0044ebc8;
            }
            if (local_174 < DAT_0044ebc8) {
              local_174 = DAT_0044ebc8;
            }
            local_15c = ((DAT_0044f6cc / local_16c) * local_15c >> 0xf) + (int)DAT_0044ebd0;
            local_160 = ((DAT_0044f6cc / local_170) * local_160 >> 0xf) + (int)DAT_0044ebd0;
            local_164 = ((DAT_0044f6cc / iVar9) * local_164 >> 0xf) + (int)DAT_0044ebd0;
            local_168 = ((DAT_0044f6cc / local_174) * local_168 >> 0xf) + (int)DAT_0044ebd0;
            local_1c4 = local_15c;
            local_1c0 = local_160;
            if ((local_15c <= local_160) && (local_1c0 = local_15c, local_15c < local_160)) {
              local_1c4 = local_160;
            }
            iVar10 = local_164;
            if ((local_1c0 <= local_164) && (iVar10 = local_1c0, local_1c4 < local_164)) {
              local_1c4 = local_164;
            }
            local_1c0 = iVar10;
            iVar10 = local_168;
            if ((local_1c0 <= local_168) && (iVar10 = local_1c0, local_1c4 < local_168)) {
              local_1c4 = local_168;
            }
            local_1c0 = iVar10;
            if ((DAT_0044ebdc < local_1c0) || (local_1c4 < DAT_0044ebd4)) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            else {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) | 1;
              *(undefined2 *)(iVar5 + 0x81) = (undefined2)local_1c0;
              *(undefined2 *)(iVar5 + 0x83) = (undefined2)local_1c4;
              *(short *)(iVar5 + 0x17) = (short)(iVar9 + local_16c + local_170 + local_174 >> 2);
              if (*(short *)(iVar5 + 0x17) < 0) {
                *(undefined2 *)(iVar5 + 0x17) = 0;
              }
            }
          }
          else {
            *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
            *(undefined2 *)(iVar5 + 0x17) = 0;
            local_160 = local_164;
            local_15c = local_168;
          }
          if ((*(byte *)(iVar5 + 0x16) & 1) != 0) {
            FUN_0041ad88();
          }
        }
        else if (*(int *)(iVar5 + 0x12) == 3) {
          local_1c8 = *(short *)(iVar5 + 0x51) - DAT_0044ebf8;
          local_1cc = *(short *)(iVar5 + 0x57) - DAT_0044ebf8;
          local_1d0 = *(short *)(iVar5 + 0x55) - DAT_0044ec00;
          local_1d4 = *(short *)(iVar5 + 0x5b) - DAT_0044ec00;
          iVar7 = local_1c8 * DAT_0044ebf0;
          iVar6 = local_1d0 * DAT_0044ebf4;
          iVar10 = local_1d4 * DAT_0044ebf4;
          iVar9 = local_1cc * DAT_0044ebf0;
          *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) | 1;
          iVar10 = iVar10 - iVar9 >> 0xf;
          iVar9 = iVar6 - iVar7 >> 0xf;
          if ((DAT_0044ebc8 < iVar9) || (DAT_0044ebc8 < iVar10)) {
            local_1c8 = local_1c8 * DAT_0044ebf4 + local_1d0 * DAT_0044ebf0 >> 0xf;
            local_1cc = local_1cc * DAT_0044ebf4 + local_1d4 * DAT_0044ebf0 >> 0xf;
            *(undefined2 *)(iVar5 + 0x4d) = 0;
            *(short *)(iVar5 + 0x4f) = **(short **)(iVar5 + 0x19) + -1;
            if (iVar9 < DAT_0044ebc8) {
              local_1d8 = ((DAT_0044ebc8 - iVar9) * 0x10000) / (iVar10 - iVar9);
              local_1c8 = local_1c8 + ((local_1cc - local_1c8) * local_1d8 >> 0x10);
              *(short *)(iVar5 + 0x4d) =
                   (short)((uint)(*(short *)(iVar5 + 0x4f) * local_1d8) >> 0x10);
              iVar9 = DAT_0044ebc8;
            }
            if (iVar10 < DAT_0044ebc8) {
              local_1dc = ((DAT_0044ebc8 - iVar10) * 0x10000) / (iVar9 - iVar10);
              local_1cc = local_1cc + ((local_1c8 - local_1cc) * local_1dc >> 0x10);
              *(short *)(iVar5 + 0x4f) =
                   *(short *)(iVar5 + 0x4f) -
                   (short)((uint)(*(short *)(iVar5 + 0x4f) * local_1dc) >> 0x10);
              iVar10 = DAT_0044ebc8;
            }
            local_1d0 = DAT_0044f6cc / iVar9;
            local_1d4 = DAT_0044f6cc / iVar10;
            local_1c8 = (local_1d0 * local_1c8 >> 0xf) + (int)DAT_0044ebd0;
            local_1cc = (local_1d4 * local_1cc >> 0xf) + (int)DAT_0044ebd0;
            if (local_1cc < local_1c8) {
              if ((DAT_0044ebdc < local_1cc) || (local_1c8 < DAT_0044ebd4)) {
                *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
                *(undefined2 *)(iVar5 + 0x17) = 0;
              }
            }
            else if ((DAT_0044ebdc < local_1c8) || (local_1cc < DAT_0044ebd4)) {
              *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
              *(undefined2 *)(iVar5 + 0x17) = 0;
            }
            if ((*(byte *)(iVar5 + 0x16) & 1) != 0) {
              local_1e0 = *(short *)(iVar5 + 0x53) - DAT_0044ebfc;
              local_1e4 = *(short *)(iVar5 + 0x59) - DAT_0044ebfc;
              if (*(short *)(iVar5 + 0x5d) == 1) {
                *(int *)(iVar5 + 0x41) = local_1cc;
                *(int *)(iVar5 + 0x1d) = local_1cc;
                *(int *)(iVar5 + 0x35) = local_1c8;
                *(int *)(iVar5 + 0x29) = local_1c8;
                *(int *)(iVar5 + 0x21) = (local_1d4 * local_1e0 >> 0xf) + (int)DAT_0044ebd2;
                *(int *)(iVar5 + 0x45) = (local_1d4 * local_1e4 >> 0xf) + (int)DAT_0044ebd2;
                *(int *)(iVar5 + 0x2d) = (local_1d0 * local_1e0 >> 0xf) + (int)DAT_0044ebd2;
                *(int *)(iVar5 + 0x39) = (local_1d0 * local_1e4 >> 0xf) + (int)DAT_0044ebd2;
              }
              else {
                *(int *)(iVar5 + 0x41) = local_1c8;
                *(int *)(iVar5 + 0x1d) = local_1c8;
                *(int *)(iVar5 + 0x35) = local_1cc;
                *(int *)(iVar5 + 0x29) = local_1cc;
                *(int *)(iVar5 + 0x21) = (local_1d0 * local_1e0 >> 0xf) + (int)DAT_0044ebd2;
                *(int *)(iVar5 + 0x45) = (local_1d0 * local_1e4 >> 0xf) + (int)DAT_0044ebd2;
                *(int *)(iVar5 + 0x2d) = (local_1d4 * local_1e0 >> 0xf) + (int)DAT_0044ebd2;
                *(int *)(iVar5 + 0x39) = (local_1d4 * local_1e4 >> 0xf) + (int)DAT_0044ebd2;
              }
              iVar6 = iVar9 + -100;
              if (iVar9 + -100 < DAT_0044ebc8) {
                iVar6 = DAT_0044ebc8;
              }
              iVar9 = iVar10 + -100;
              if (iVar10 + -100 < DAT_0044ebc8) {
                iVar9 = DAT_0044ebc8;
              }
              *(int *)(iVar5 + 0x49) = iVar6;
              *(int *)(iVar5 + 0x25) = iVar6;
              *(int *)(iVar5 + 0x3d) = iVar9;
              *(int *)(iVar5 + 0x31) = iVar9;
              *(short *)(iVar5 + 0x17) = (short)(iVar9 + iVar6 >> 1) - (DAT_0044f6c8 >> 2);
              if (*(short *)(iVar5 + 0x17) < 0) {
                *(undefined2 *)(iVar5 + 0x17) = 0;
              }
            }
          }
          else {
            *(byte *)(iVar5 + 0x16) = *(byte *)(iVar5 + 0x16) & 0xfe;
            *(undefined2 *)(iVar5 + 0x17) = 0;
          }
          if ((*(byte *)(iVar5 + 0x16) & 1) != 0) {
            FUN_0041ad88();
          }
        }
      }
    }
    local_280 = local_280 + 1;
  }
  local_280 = &DAT_00495d50;
  for (local_122 = 0; local_122 < DAT_00499d50; local_122 = local_122 + 1) {
    uVar2 = *local_280;
    local_1e8 = (uVar2 & 0x3f) * (int)in_stack_00000004[0x3a7];
    local_1ec = ((int)uVar2 >> 6) * (int)in_stack_00000004[0x3a7];
    iVar5 = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048f61c)[uVar2] * 2 + 0x187);
    local_1f8 = *(short *)(iVar5 + 0x18);
    local_1f0 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x10))();
    local_1fc = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_00490720)[uVar2] * 2 + 0x187);
    local_1fe = *(short *)(local_1fc + 0x1f);
    if (*(short *)(local_1fc + 0x18) == 0xc) {
      local_204 = 5000;
    }
    else {
      local_204 = -5;
    }
    if (((local_1f8 == 3) || (local_1f8 == 10)) || (local_1f8 == 6)) {
      *(int *)(iVar5 + 0x30) = (local_64 >> 1) + local_1e8;
      *(int *)(iVar5 + 0x34) = local_204 - local_1fe;
      *(int *)(iVar5 + 0x38) = (local_64 >> 1) + local_1ec;
      local_208 = *(undefined4 *)(iVar5 + 0x38);
      local_20c = *(undefined4 *)(iVar5 + 0x34);
      local_210 = *(undefined4 *)(iVar5 + 0x30);
      local_1f0 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x10))();
      local_1f2 = *(undefined2 *)(iVar5 + 0x1b);
      local_1f6 = **(short **)(iVar5 + 100) * *(short *)(iVar5 + 0x1d);
      local_1f4 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xc))();
      local_c = FUN_00431988();
      if (local_c != (uint *)0x0) {
        local_40 = 0x2c;
        FUN_0040df9c();
        *DAT_0049aa2c = *DAT_0049aa2c + -2;
        local_40 = 0x20;
      }
      local_214 = local_c;
      if ((*(byte *)((int)local_c + 0x16) & 1) == 0) {
        local_10 = local_c;
        if (local_c != (uint *)0x0) {
          iVar5 = FUN_0042b677();
          *DAT_0049aa2c = *DAT_0049aa2c + iVar5;
          local_40 = 0x44;
          (**(code **)*local_10)();
          local_40 = 0x38;
        }
      }
      else {
        (&DAT_00493db0)[DAT_00493dac] = local_c;
        DAT_00493dac = DAT_00493dac + 1;
        local_218 = local_c;
      }
    }
    else if (local_1f8 == 9) {
      local_1f2 = *(undefined2 *)(iVar5 + 0x1b);
      local_1f4 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xc))();
      local_1f6 = **(short **)(iVar5 + 100) * *(short *)(iVar5 + 0x1d);
      local_21c = *(undefined4 *)(iVar5 + 0x38);
      local_220 = local_204 - local_1fe;
      local_224 = *(undefined4 *)(iVar5 + 0x30);
      local_14 = FUN_00431988();
      if (local_14 != (uint *)0x0) {
        local_40 = 0x5c;
        FUN_0040df9c();
        *DAT_0049aa2c = *DAT_0049aa2c + -2;
        local_40 = 0x50;
      }
      local_228 = local_14;
      if ((*(byte *)((int)local_14 + 0x16) & 1) == 0) {
        local_18 = local_14;
        if (local_14 != (uint *)0x0) {
          iVar5 = FUN_0042b677();
          *DAT_0049aa2c = *DAT_0049aa2c + iVar5;
          local_40 = 0x74;
          (**(code **)*local_18)();
          local_40 = 0x68;
        }
      }
      else {
        (&DAT_00493db0)[DAT_00493dac] = local_14;
        DAT_00493dac = DAT_00493dac + 1;
        local_22c = local_14;
      }
    }
    iVar5 = *(int *)(in_stack_00000004 + (uint)(byte)(&DAT_0048e518)[uVar2] * 2 + 0x187);
    local_1f8 = *(short *)(iVar5 + 0x18);
    if (local_1f8 != 0) {
      local_1f0 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x10))();
      local_1f2 = *(undefined2 *)(iVar5 + 0x1b);
      local_1f4 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xc))();
      local_1f6 = **(short **)(iVar5 + 100) * *(short *)(iVar5 + 0x1d);
      if (local_1f8 == 9) {
        local_230 = *(undefined4 *)(iVar5 + 0x38);
        local_234 = *(int *)(iVar5 + 0x34) + (int)*(short *)(iVar5 + 0x1f);
        local_238 = *(undefined4 *)(iVar5 + 0x30);
        local_1c = FUN_00431988();
        if (local_1c != (uint *)0x0) {
          local_40 = 0x8c;
          FUN_0040df9c();
          *DAT_0049aa2c = *DAT_0049aa2c + -2;
          local_40 = 0x80;
        }
        local_23c = local_1c;
        if ((*(byte *)((int)local_1c + 0x16) & 1) == 0) {
          local_20 = local_1c;
          if (local_1c != (uint *)0x0) {
            iVar5 = FUN_0042b677();
            *DAT_0049aa2c = *DAT_0049aa2c + iVar5;
            local_40 = 0xa4;
            (**(code **)*local_20)();
            local_40 = 0x98;
          }
        }
        else {
          (&DAT_00493db0)[DAT_00493dac] = local_1c;
          DAT_00493dac = DAT_00493dac + 1;
          local_240 = local_1c;
        }
      }
      else if (local_1f8 == 3) {
        local_244 = (local_64 >> 1) + local_1ec;
        local_248 = local_204 - local_1fe;
        local_24c = (local_64 >> 1) + local_1e8;
        local_24 = FUN_00431988();
        if (local_24 != (uint *)0x0) {
          local_40 = 0xbc;
          FUN_0040df9c();
          *DAT_0049aa2c = *DAT_0049aa2c + -2;
          local_40 = 0xb0;
        }
        local_250 = local_24;
        if ((*(byte *)((int)local_24 + 0x16) & 1) == 0) {
          local_28 = local_24;
          if (local_24 != (uint *)0x0) {
            iVar5 = FUN_0042b677();
            *DAT_0049aa2c = *DAT_0049aa2c + iVar5;
            local_40 = 0xd4;
            (**(code **)*local_28)();
            local_40 = 200;
          }
        }
        else {
          (&DAT_00493db0)[DAT_00493dac] = local_24;
          DAT_00493dac = DAT_00493dac + 1;
          local_254 = local_24;
        }
      }
    }
    local_280 = local_280 + 1;
  }
  local_256 = in_stack_00000004[0x3a9];
  for (local_257 = 0; (0 < local_256 && (local_257 != 0xff)); local_257 = local_257 + 1) {
    iVar5 = *(int *)(in_stack_00000004 + (uint)local_257 * 2 + 0x187);
    if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x1c) & 0x10) != 0)) {
      local_256 = local_256 + -1;
      local_25c = *(undefined4 *)(iVar5 + 0x38);
      local_260 = *(undefined4 *)(iVar5 + 0x34);
      local_264 = *(undefined4 *)(iVar5 + 0x30);
      local_266 = (**(code **)(*(int *)(iVar5 + 0x14) + 0xc))();
      lVar3 = (longlong)(int)**(short **)(iVar5 + 100) * (longlong)(int)*(short *)(iVar5 + 0x1d);
      local_268 = (undefined2)lVar3;
      local_26a = *(undefined2 *)(iVar5 + 0x1b);
      local_270 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x10))
                            (*(int *)(iVar5 + 0x14),(int)((ulonglong)lVar3 >> 0x20),
                             CONCAT22((short)((uint)*(short **)(iVar5 + 100) >> 0x10),local_26a),
                             iVar5);
      sVar4 = *(short *)(iVar5 + 0x38);
      local_274 = *(short *)(iVar5 + 0x30);
      if (local_274 < 0) {
        local_274 = 0;
      }
      if (*in_stack_00000004 + -1 < (int)local_274) {
        local_274 = *in_stack_00000004 + -1;
      }
      if (sVar4 < 0) {
        sVar4 = 0;
      }
      if (in_stack_00000004[2] + -1 < (int)sVar4) {
        sVar4 = in_stack_00000004[2] + -1;
      }
      local_272 = sVar4 * (short)*(undefined4 *)(in_stack_00000004 + 0x25b6) + local_274;
      local_2c = FUN_00431988();
      if (local_2c != (uint *)0x0) {
        local_40 = 0xec;
        FUN_0040df9c();
        *DAT_0049aa2c = *DAT_0049aa2c + -2;
        local_40 = 0xe0;
      }
      local_278 = local_2c;
      if ((*(byte *)((int)local_2c + 0x16) & 1) == 0) {
        local_30 = local_2c;
        if (local_2c != (uint *)0x0) {
          iVar5 = FUN_0042b677();
          *DAT_0049aa2c = *DAT_0049aa2c + iVar5;
          local_40 = 0x104;
          (**(code **)*local_30)();
          local_40 = 0xf8;
        }
      }
      else {
        (&DAT_00493db0)[DAT_00493dac] = local_2c;
        DAT_00493dac = DAT_00493dac + 1;
        local_27c = local_2c;
      }
    }
  }
  FUN_0041afc0();
  *in_FS_OFFSET = local_50;
  return;
}


/* Ghidra address: 0041d558; FUN_0041d558 */

void FUN_0041d558(void)

{
  int *piVar1;
  int in_stack_00000004;
  
  *(undefined2 *)(in_stack_00000004 + 0x4b72) = 0;
  piVar1 = DAT_0044ec08;
  *(undefined2 *)(DAT_0044ec08 + 4) = 0;
  (**(code **)(*piVar1 + 0x3c))();
  FUN_00406c00();
  return;
}


/* Ghidra address: 0041d5a0; FUN_0041d5a0 */

void FUN_0041d5a0(void)

{
  int *piVar1;
  int in_stack_00000004;
  short in_stack_00000008;
  
  if (*(short *)(in_stack_00000004 + 0x4b72) == 0) {
    if (in_stack_00000008 == 0) {
      FUN_0040afbc();
      piVar1 = DAT_0044ec08;
      *(undefined2 *)(DAT_0044ec08 + 4) = 0;
      if (DAT_0048aaac < 0x40) {
        (**(code **)(*piVar1 + 0x3c))();
        FUN_00406c00();
      }
      FUN_0041b0b4();
      (**(code **)(*DAT_0044ec08 + 0x3c))();
      (**(code **)(*DAT_0044ec08 + 0x3c))();
    }
  }
  else if (DAT_0048e514 == 0) {
    FUN_004158d8();
  }
  else {
    FUN_0041821c();
  }
  FUN_0041ac1c();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  FUN_0040aad4();
  return;
}


/* Ghidra address: 0041d904; FUN_0041d904 */

LPVOID FUN_0041d904(void)

{
  LPVOID pvVar1;
  
  pvVar1 = (LPVOID)FUN_0040d59c();
  if (pvVar1 == (LPVOID)0x0) {
    FUN_0040d5d0();
    pvVar1 = FUN_00409c0c();
    FUN_0040d56c();
  }
  return pvVar1;
}


/* Ghidra address: 0041d95a; FUN_0041d95a */

LPVOID FUN_0041d95a(void)

{
  LPVOID pvVar1;
  
  pvVar1 = (LPVOID)FUN_0040d59c();
  if (pvVar1 == (LPVOID)0x0) {
    FUN_0040d5d0();
    pvVar1 = FUN_00426c10();
    FUN_0040d56c();
  }
  return pvVar1;
}


/* Ghidra address: 0041d9b0; FUN_0041d9b0 */

void FUN_0041d9b0(void)

{
  FUN_0040d5d0();
  FUN_004264c0();
  return;
}


/* Ghidra address: 0041d9de; FUN_0041d9de */

uint * FUN_0041d9de(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4360d0);
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0040a6f8();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  FUN_0040d43c();
  FUN_0040a858();
  *in_FS_OFFSET = local_28;
  return puVar1;
}


/* Ghidra address: 0041da64; FUN_0041da64 */

short * FUN_0041da64(void)

{
  short *in_stack_00000004;
  short in_stack_00000008;
  
  for (; 0x167 < in_stack_00000008; in_stack_00000008 = in_stack_00000008 + -0x168) {
  }
  for (; in_stack_00000008 < 0; in_stack_00000008 = in_stack_00000008 + 0x168) {
  }
  *in_stack_00000004 = in_stack_00000008;
  return in_stack_00000004;
}


/* Ghidra address: 0041da94; FUN_0041da94 */

void FUN_0041da94(void)

{
  short *in_stack_00000004;
  short in_stack_00000008;
  
  for (; 0x167 < in_stack_00000008; in_stack_00000008 = in_stack_00000008 + -0x168) {
  }
  for (; in_stack_00000008 < 0; in_stack_00000008 = in_stack_00000008 + 0x168) {
  }
  *in_stack_00000004 = in_stack_00000008;
  return;
}


/* Ghidra address: 0041dac0; FUN_0041dac0 */

void FUN_0041dac0(void)

{
  int *in_stack_00000004;
  
  if (*in_stack_00000004 != 0) {
    FUN_0040886c();
  }
  return;
}


/* Ghidra address: 0041dae0; FUN_0041dae0 */

int FUN_0041dae0(void)

{
  int in_stack_00000004;
  
  FUN_00427be8();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436b70;
  *(undefined4 *)(in_stack_00000004 + 0x24) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x32) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x18) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x1c) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x20) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x28) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x2c) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x30) = 0;
  FUN_0041da94();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0041db40; FUN_0041db40 */

void FUN_0041db40(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436b70;
    FUN_0041dc1c();
    FUN_00427c1e();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 0041db7c; FUN_0041db7c */

undefined4 FUN_0041db7c(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(short **)(in_stack_00000004 + 0x1c) != (short *)0x0) {
    if (**(short **)(in_stack_00000004 + 0x1c) == 0) {
      uVar1 = FUN_004269f7();
      *(undefined4 *)(in_stack_00000004 + 0x20) = uVar1;
    }
    else {
      uVar1 = FUN_004269f7();
      *(undefined4 *)(in_stack_00000004 + 0x20) = uVar1;
    }
  }
  return *(undefined4 *)(in_stack_00000004 + 0x20);
}


/* Ghidra address: 0041dbd0; FUN_0041dbd0 */

void FUN_0041dbd0(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  short *in_stack_00000008;
  
  *(short **)(in_stack_00000004 + 0x1c) = in_stack_00000008;
  if (*in_stack_00000008 == 0) {
    uVar1 = FUN_004269f7();
    *(undefined4 *)(in_stack_00000004 + 0x20) = uVar1;
  }
  else {
    uVar1 = FUN_004269f7();
    *(undefined4 *)(in_stack_00000004 + 0x20) = uVar1;
  }
  return;
}


/* Ghidra address: 0041dc1c; FUN_0041dc1c */

void FUN_0041dc1c(void)

{
  FUN_0041dd50();
  FUN_0041dda8();
  return;
}


/* Ghidra address: 0041dc34; FUN_0041dc34 */

bool FUN_0041dc34(void)

{
  int in_stack_00000004;
  
  return (int)*(short *)(in_stack_00000004 + 0x30) ==
         *(short *)(*(int *)(in_stack_00000004 + 0x1c) + 2) + -1;
}


/* Ghidra address: 0041dc50; FUN_0041dc50 */

void FUN_0041dc50(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  short in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x1c) != 0) {
    *(short *)(in_stack_00000004 + 0x30) = in_stack_00000008 + -1;
    *(undefined4 *)(in_stack_00000004 + 0x2c) = 0;
    if (**(short **)(in_stack_00000004 + 0x1c) == 0) {
      uVar1 = FUN_004269f7();
      *(undefined4 *)(in_stack_00000004 + 0x20) = uVar1;
    }
    else {
      uVar1 = FUN_004269f7();
      *(undefined4 *)(in_stack_00000004 + 0x20) = uVar1;
    }
    FUN_00427c8d();
  }
  return;
}


/* Ghidra address: 0041dccc; FUN_0041dccc */

void FUN_0041dccc(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x2c) == 0) {
    if (**(short **)(in_stack_00000004 + 0x1c) == 0) {
      do {
        iVar1 = FUN_00426946();
        *(int *)(in_stack_00000004 + 0x20) = iVar1;
      } while (iVar1 == 0);
    }
    else {
      do {
        iVar1 = FUN_00426946();
        *(int *)(in_stack_00000004 + 0x20) = iVar1;
      } while (iVar1 == 0);
    }
    FUN_00427d84();
  }
  else {
    FUN_00427d42();
  }
  return;
}


/* Ghidra address: 0041dd50; FUN_0041dd50 */

void FUN_0041dd50(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1c) != 0) {
    *(undefined4 *)(in_stack_00000004 + 0x2c) = 1;
  }
  return;
}


/* Ghidra address: 0041dd68; FUN_0041dd68 */

void FUN_0041dd68(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_EDX;
  
  iVar1 = *(int *)(param_4 + 0x18);
  if (iVar1 != 0) {
    if ((*(byte *)(param_4 + 0x28) & 2) != 0) {
      iVar1 = FUN_0040a818();
      param_2 = extraout_EDX;
    }
    if ((*(byte *)(param_4 + 0x28) & 1) != 0) {
      FUN_0040a7dc();
      return;
    }
    FUN_0040a7a4(iVar1,param_2,*(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x18),0);
  }
  return;
}


/* Ghidra address: 0041dda8; FUN_0041dda8 */

void FUN_0041dda8(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x18) != 0) {
    FUN_0040a7fc();
  }
  return;
}


/* Ghidra address: 0041ddc0; FUN_0041ddc0 */

uint * FUN_0041ddc0(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined2 *in_stack_00000004;
  undefined4 local_58;
  
  FUN_0042b4b4(0x4361d4);
  switch(*in_stack_00000004) {
  case 0:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e2c4();
      puVar1[5] = (uint)&PTR_FUN_00436b28;
      *(undefined1 *)((int)puVar1 + 0x8e) = 1;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 1:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041ffc0();
      *DAT_0049aa2c = *DAT_0049aa2c + -4;
    }
    break;
  case 2:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e2c4();
      puVar1[5] = (uint)&PTR_LAB_00436af8;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 3:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e2c4();
      puVar1[5] = (uint)&PTR_LAB_00436ac4;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 4:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e2c4();
      puVar1[5] = (uint)&PTR_LAB_00436a94;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 5:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041eb44();
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 6:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_004220dc();
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 7:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_00422118();
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 8:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_004212a4();
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 9:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_00422b74();
      *DAT_0049aa2c = *DAT_0049aa2c + -4;
    }
    break;
  case 10:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e2c4();
      puVar1[5] = (uint)&PTR_LAB_00436ac4;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      puVar1[5] = (uint)&PTR_LAB_00436a60;
      *(undefined2 *)((int)puVar1 + 0xaf) = 0;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -4;
    }
    break;
  default:
    *in_FS_OFFSET = local_58;
    return (uint *)0x0;
  case 0xc:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e7ec();
      *DAT_0049aa2c = *DAT_0049aa2c + -4;
    }
    break;
  case 0xd:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e944();
      *DAT_0049aa2c = *DAT_0049aa2c + -4;
    }
  }
  (**(code **)(puVar1[5] + 4))();
  *in_FS_OFFSET = local_58;
  return puVar1;
}


/* Ghidra address: 0041e238; FUN_0041e238 */

void FUN_0041e238(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x436324);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436a30;
    puVar1 = *(undefined4 **)(in_stack_00000004 + 0x6c);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (**(code **)*puVar1)();
    }
    FUN_00427c1e();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 0041e2c4; FUN_0041e2c4 */

int FUN_0041e2c4(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  undefined2 *in_stack_00000008;
  
  FUN_00427be8();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436a30;
  *(undefined2 *)(in_stack_00000004 + 0x18) = *in_stack_00000008;
  *(undefined1 *)(in_stack_00000004 + 0x1a) = *(undefined1 *)(in_stack_00000008 + 1);
  *(undefined4 *)(in_stack_00000004 + 0x68) = *(undefined4 *)((int)in_stack_00000008 + 0xb);
  *(undefined2 *)(in_stack_00000004 + 0x1b) = *(undefined2 *)((int)in_stack_00000008 + 0x13);
  *(undefined4 *)(in_stack_00000004 + 100) = *(undefined4 *)((int)in_stack_00000008 + 7);
  *(undefined2 *)(in_stack_00000004 + 0x1d) = *(undefined2 *)((int)in_stack_00000008 + 3);
  *(undefined2 *)(in_stack_00000004 + 0x1f) = *(undefined2 *)((int)in_stack_00000008 + 5);
  *(undefined1 *)(in_stack_00000004 + 0x21) = *(undefined1 *)((int)in_stack_00000008 + 0x15);
  *(undefined4 *)(in_stack_00000004 + 0x6c) = *(undefined4 *)((int)in_stack_00000008 + 0xf);
  *(undefined2 *)(in_stack_00000004 + 0x2a) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x70) = 0;
  if ((*(byte *)(in_stack_00000004 + 0x1c) & 8) != 0) {
    if (**(short **)(in_stack_00000004 + 0x68) == 0) {
      uVar1 = FUN_004269f7();
      *(undefined4 *)(in_stack_00000004 + 100) = uVar1;
      FUN_00427c8d();
    }
    else {
      FUN_0041e4b4();
      uVar1 = FUN_004269f7();
      *(undefined4 *)(in_stack_00000004 + 100) = uVar1;
    }
  }
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0041e39c; FUN_0041e39c */

void FUN_0041e39c(void)

{
  short sVar1;
  short sVar2;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  short in_stack_0000000c;
  
  sVar2 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar1 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar1) {
    sVar1 = *DAT_0048aab4 + -1;
  }
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar2) {
    sVar2 = DAT_0048aab4[2] + -1;
  }
  sVar1 = sVar2 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6) + sVar1;
  if (in_stack_0000000c == 0) {
    (&DAT_0048e518)[sVar1] = in_stack_00000008;
  }
  else if (in_stack_0000000c == 1) {
    (&DAT_0048f61c)[sVar1] = in_stack_00000008;
  }
  else {
    (&DAT_00490720)[sVar1] = in_stack_00000008;
  }
  return;
}


/* Ghidra address: 0041e474; FUN_0041e474 */

void FUN_0041e474(void)

{
  int iVar1;
  int in_stack_00000004;
  
  do {
    iVar1 = FUN_00426946();
    *(int *)(in_stack_00000004 + 100) = iVar1;
  } while (iVar1 == 0);
  FUN_00427d84();
  return;
}


/* Ghidra address: 0041e4b4; FUN_0041e4b4 */

undefined2 FUN_0041e4b4(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  int in_stack_00000004;
  short *in_stack_00000008;
  int local_3c [2];
  int local_34;
  undefined2 local_6;
  
  bVar4 = 0;
  FUN_0041da64();
  if ((*in_stack_00000008 != 0) && (*(int *)(DAT_0048aab4 + 0x754) != 0)) {
    piVar2 = (int *)(*(int *)(DAT_0048aab4 + 0x754) + 0x30);
    piVar3 = local_3c;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    }
    if ((local_34 == *(int *)(in_stack_00000004 + 0x38)) &&
       (*(int *)(in_stack_00000004 + 0x30) == local_3c[0])) {
      local_6 = 0;
    }
    else {
      FUN_00409020();
      FUN_0041da94();
    }
  }
  return local_6;
}


/* Ghidra address: 0041e53c; FUN_0041e53c */

undefined4 FUN_0041e53c(void)

{
  ushort *puVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 100) == 0) {
    FUN_00427b9f();
  }
  if (((*(byte *)(in_stack_00000004 + 0x1c) & 8) != 0) &&
     (**(short **)(in_stack_00000004 + 0x68) != 0)) {
    FUN_0041e4b4();
    uVar2 = FUN_004269f7();
    *(undefined4 *)(in_stack_00000004 + 100) = uVar2;
  }
  if ((*(byte *)(in_stack_00000004 + 0x1b) & 1) == 0) {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 & 0xfffe;
  }
  else {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 | 1;
  }
  if ((*(byte *)(in_stack_00000004 + 0x1b) & 8) == 0) {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 & 0xfff7;
  }
  else {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 | 8;
  }
  return *(undefined4 *)(in_stack_00000004 + 100);
}


/* Ghidra address: 0041e5c4; FUN_0041e5c4 */

void FUN_0041e5c4(void)

{
  int in_stack_00000004;
  uint *in_stack_00000008;
  int in_stack_0000000c;
  
  if (((((*in_stack_00000008 & 0x40000) != 0) && (in_stack_0000000c != 0)) &&
      ((*(ushort *)(in_stack_00000004 + 0x1b) & 8) == 0)) &&
     ((*(ushort *)(in_stack_00000004 + 0x1b) & 0x10) == 0)) {
    *in_stack_00000008 = *in_stack_00000008 & 0xfffbffff;
  }
  return;
}


/* Ghidra address: 0041e5f0; FUN_0041e5f0 */

void FUN_0041e5f0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  int iVar1;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x2c);
  (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))();
  *(int *)(in_stack_00000004 + 0x2c) = in_stack_00000008;
  (**(code **)(*(int *)(in_stack_00000008 + 0x14) + 8))
            (in_stack_00000008,*(int *)(in_stack_00000008 + 0x14),iVar1,in_stack_00000008);
  return;
}


/* Ghidra address: 0041e614; FUN_0041e614 */

void FUN_0041e614(void)

{
  return;
}


/* Ghidra address: 0041e61c; FUN_0041e61c */

void FUN_0041e61c(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436b28;
    FUN_0041e238();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 0041e650; FUN_0041e650 */

void FUN_0041e650(void)

{
  return;
}


/* Ghidra address: 0041e658; FUN_0041e658 */

void FUN_0041e658(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,int param_5)

{
  LPVOID pvVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_5 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_5 + 0x3e;
  }
  FUN_0042ec88(param_4 + 0x74,iVar2,param_3,(int *)iVar2,(undefined2 *)(param_4 + 0x74));
  if (*(short *)(param_4 + 0x74) < 0) {
    *(short *)(param_4 + 0x74) = -*(short *)(param_4 + 0x74);
    *(undefined1 *)(param_4 + 0x8e) = 0;
  }
  FUN_0042e838();
  pvVar1 = FUN_0041d904();
  *(LPVOID *)(param_4 + 0x76) = pvVar1;
  FUN_0042e838();
  pvVar1 = FUN_0041d904();
  *(LPVOID *)(param_4 + 0x7a) = pvVar1;
  FUN_0042e838();
  pvVar1 = FUN_0041d95a();
  *(LPVOID *)(param_4 + 0x86) = pvVar1;
  FUN_0042e838();
  puVar3 = &DAT_00499d58;
  pvVar1 = FUN_0041d95a();
  *(LPVOID *)(param_4 + 0x8a) = pvVar1;
  (**(code **)(*(int *)(param_4 + 0x14) + 0x34))(pvVar1,*(int *)(param_4 + 0x14),puVar3,param_4,0);
  (**(code **)(*(int *)(param_4 + 0x14) + 0x38))();
  return;
}


/* Ghidra address: 0041e750; FUN_0041e750 */

int FUN_0041e750(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_004269f7();
  *(int *)(in_stack_00000004 + 0x7e) = iVar1;
  *(undefined2 *)(iVar1 + 4) = 0;
  return iVar1;
}


/* Ghidra address: 0041e784; FUN_0041e784 */

int FUN_0041e784(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_004269f7();
  *(int *)(in_stack_00000004 + 0x82) = iVar1;
  *(undefined2 *)(iVar1 + 4) = 0;
  return iVar1;
}


/* Ghidra address: 0041e7bc; FUN_0041e7bc */

int FUN_0041e7bc(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_004269f7();
  *(int *)(in_stack_00000004 + 100) = iVar1;
  *(undefined2 *)(iVar1 + 4) = 0;
  return iVar1;
}


/* Ghidra address: 0041e7ec; FUN_0041e7ec */

int FUN_0041e7ec(void)

{
  int in_stack_00000004;
  
  FUN_0041e2c4();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436b28;
  *(undefined1 *)(in_stack_00000004 + 0x8e) = 1;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_LAB_004369e4;
  *(undefined2 *)(in_stack_00000004 + 0x72) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x70) = 0xc;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0041e838; FUN_0041e838 */

void FUN_0041e838(void)

{
  int in_stack_00000004;
  
  if (*(short *)(in_stack_00000004 + 0x70) < 0xc) {
    *(short *)(in_stack_00000004 + 0x70) = *(short *)(in_stack_00000004 + 0x70) + 1;
  }
  else {
    *(undefined2 *)(in_stack_00000004 + 0x70) = 0;
  }
  FUN_00409f40();
  *(undefined2 *)(*(int *)(in_stack_00000004 + 0x82) + 4) = 0x1000;
  FUN_00409f40();
  return;
}


/* Ghidra address: 0041e888; FUN_0041e888 */

undefined4 FUN_0041e888(void)

{
  int in_stack_00000004;
  
  return *(undefined4 *)(in_stack_00000004 + 100);
}


/* Ghidra address: 0041e894; FUN_0041e894 */

void FUN_0041e894(void)

{
  return;
}


/* Ghidra address: 0041e89c; FUN_0041e89c */

void FUN_0041e89c(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined2 extraout_CX;
  undefined4 extraout_EDX;
  undefined2 *puVar2;
  
  FUN_0041e658(param_1,param_2,param_3,param_4,param_5);
  puVar2 = (undefined2 *)(param_4 + 0x91);
  if (param_5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_5 + 0x3e);
  }
  piVar1 = FUN_0042ec88(puVar2,param_4 + 0x8f,(short)piVar1,piVar1,(undefined2 *)(param_4 + 0x8f));
  FUN_0042ec88(piVar1,extraout_EDX,extraout_CX,piVar1,puVar2);
  if (*(short *)(param_4 + 0x8f) != 1000) {
    *(undefined2 *)(*(int *)(param_4 + 0x82) + 4) = 0x1000;
    FUN_00427c8d();
  }
  return;
}


/* Ghidra address: 0041e914; FUN_0041e914 */

undefined4 FUN_0041e914(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  undefined4 uVar2;
  
  if (*(short *)(in_stack_00000004 + 0x8f) == 1000) {
    uVar2 = *(undefined4 *)(in_stack_00000004 + 0x6c);
    uVar1 = FUN_0040a818();
    FUN_0040a7a4(uVar1,*(undefined4 *)(in_stack_00000004 + 0x6c),uVar2,
                 *(undefined4 *)(in_stack_00000004 + 0x6c),0);
  }
  return 0;
}


/* Ghidra address: 0041e944; FUN_0041e944 */

int FUN_0041e944(void)

{
  int in_stack_00000004;
  
  FUN_0041e2c4();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436b28;
  *(undefined1 *)(in_stack_00000004 + 0x8e) = 1;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_LAB_00436998;
  *(undefined1 *)(in_stack_00000004 + 0x94) = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0041e98c; FUN_0041e98c */

int FUN_0041e98c(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int in_stack_00000004;
  
  iVar3 = 0;
  for (pbVar2 = (byte *)(in_stack_00000004 + 0x94); *pbVar2 != 0; pbVar2 = pbVar2 + 1) {
    iVar1 = *(int *)(DAT_0048aab4 + 0x30e + (uint)*pbVar2 * 4);
    if ((*(short *)(iVar1 + 0x18) == 9) && (*(short *)(iVar1 + 0xfc) == 0)) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}


/* Ghidra address: 0041e9d0; FUN_0041e9d0 */

void FUN_0041e9d0(void)

{
  return;
}


/* Ghidra address: 0041e9d8; FUN_0041e9d8 */

void FUN_0041e9d8(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,int param_5)

{
  FUN_0041e658(param_1,param_2,param_3,param_4,param_5);
  FUN_0042ecb8();
  FUN_0042eacc();
  *(undefined1 *)(param_4 + 0x94) = 0;
  FUN_0042ee34();
  return;
}


/* Ghidra address: 0041ea3c; FUN_0041ea3c */

void FUN_0041ea3c(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  char *pcVar1;
  int in_stack_00000004;
  
  for (pcVar1 = (char *)(in_stack_00000004 + 0x94); *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    FUN_004238a4();
  }
  *(undefined1 *)(in_stack_00000004 + 0x94) = 0;
  if (*(int *)(in_stack_00000004 + 0x90) < 1) {
    if (*(int *)(in_stack_00000004 + 0x90) < 0) {
      if (*(int *)(in_stack_00000004 + 0x90) == -2) {
        DAT_0043408c = 30000;
        DAT_00434090 = 30000;
      }
      *(undefined1 *)(DAT_00499d54 + 0x12e) = *(undefined1 *)(in_stack_00000004 + 0x8f);
      FUN_00420544();
    }
  }
  else {
    (**(code **)(*(int *)(*(int *)(DAT_0048aab4 + 0x30e +
                                  (uint)*(byte *)(in_stack_00000004 + 0x8f) * 4) + 0x14) + 0x20))();
    FUN_0040a7a4(*(undefined4 *)(in_stack_00000004 + 0x6c),extraout_EDX,extraout_ECX,
                 *(undefined4 *)(in_stack_00000004 + 0x6c),0);
    *(undefined4 *)(in_stack_00000004 + 0x90) = 0;
  }
  return;
}


/* Ghidra address: 0041eb08; FUN_0041eb08 */

void FUN_0041eb08(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436964;
    *(undefined2 *)(in_stack_00000004 + 0x1b) = 0;
    FUN_0041e238();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 0041eb44; FUN_0041eb44 */

int FUN_0041eb44(void)

{
  int in_stack_00000004;
  undefined1 in_stack_0000000c;
  
  FUN_0041e2c4();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436964;
  *(undefined2 *)(in_stack_00000004 + 0x7a) = 0;
  *(undefined1 *)(in_stack_00000004 + 0xb8) = in_stack_0000000c;
  *(undefined1 *)(in_stack_00000004 + 0xb9) = 0x20;
  *(undefined4 *)(in_stack_00000004 + 0x50) = 0xee;
  *(undefined4 *)(in_stack_00000004 + 0x48) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x40) = 3;
  *(undefined2 *)(in_stack_00000004 + 0x9e) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x9c) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xa6) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xaa) = 0;
  *(undefined2 *)(in_stack_00000004 + 0xae) = 1;
  *(undefined2 *)(in_stack_00000004 + 0xa0) = 1;
  *(undefined2 *)(in_stack_00000004 + 0xa4) = 0;
  *(undefined2 *)(in_stack_00000004 + 0xa2) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x7c) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x22) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xb4) = 0x5a;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0041ebec; FUN_0041ebec */

void FUN_0041ebec(void)

{
  int *piVar1;
  uint uVar2;
  int in_stack_00000004;
  
  uVar2 = *(uint *)(in_stack_00000004 + 0x22);
  *(uint *)(in_stack_00000004 + 0x22) = *(uint *)(in_stack_00000004 + 0x22) & 0xbbe7dbc3;
  if ((((uVar2 & 0x400) != 0) || ((uVar2 & 0x10) != 0)) || ((uVar2 & 0x20) != 0)) {
    if (*(short *)(in_stack_00000004 + 0xa0) < 1) {
      *(short *)(in_stack_00000004 + 0x1f) =
           *(short *)(in_stack_00000004 + 0x1f) - *(short *)(in_stack_00000004 + 0x7c);
      *(short *)(in_stack_00000004 + 0xa0) = *(short *)(in_stack_00000004 + 0xa0) + -1;
      if (*(short *)(in_stack_00000004 + 0xa0) < -8) {
        *(undefined2 *)(in_stack_00000004 + 0xa0) = 1;
      }
    }
    else {
      *(short *)(in_stack_00000004 + 0x1f) =
           *(short *)(in_stack_00000004 + 0x1f) + *(short *)(in_stack_00000004 + 0x7c);
      *(short *)(in_stack_00000004 + 0xa0) = *(short *)(in_stack_00000004 + 0xa0) + 1;
      if (8 < *(short *)(in_stack_00000004 + 0xa0)) {
        *(undefined2 *)(in_stack_00000004 + 0xa0) = 0xffff;
      }
    }
  }
  if (((uVar2 & 4) == 0) && ((uVar2 & 8) == 0)) {
    *(undefined4 *)(in_stack_00000004 + 0xaa) = 0;
  }
  else {
    *(int *)(in_stack_00000004 + 0xaa) = *(int *)(in_stack_00000004 + 0xaa) + 0x29;
    if (0xfa < *(int *)(in_stack_00000004 + 0xaa)) {
      *(undefined4 *)(in_stack_00000004 + 0xaa) = 0xfa;
    }
  }
  if ((((uVar2 & 0x400) == 0) && ((uVar2 & 0x10) == 0)) &&
     (((uVar2 & 0x20) == 0 && (((uVar2 & 0x100000) == 0 && ((uVar2 & 0x80000) == 0)))))) {
    piVar1 = (int *)(in_stack_00000004 + 0xa6);
    *piVar1 = *piVar1 + -0x29;
    if (*piVar1 < 0) {
      *(undefined4 *)(in_stack_00000004 + 0xa6) = 0;
    }
  }
  else {
    *(int *)(in_stack_00000004 + 0xa6) = *(int *)(in_stack_00000004 + 0xa6) + 0x29;
    if (0xfa < *(int *)(in_stack_00000004 + 0xa6)) {
      *(undefined4 *)(in_stack_00000004 + 0xa6) = 0xfa;
    }
    *(uint *)(in_stack_00000004 + 0xb0) = uVar2;
  }
  FUN_004a3145();
  return;
}


/* Ghidra address: 0041ed4b; FUN_0041ed4b */

undefined4 FUN_0041ed4b(void)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  
  *(short *)(unaff_EBX + 0x9c) =
       (short)(((int)*(short *)(unaff_EBX + 0x3e) * *(int *)(unaff_EBX + 0xaa)) / 0xfa) + 1;
  psVar1 = (short *)((*(int *)(unaff_EBX + 0x44) * *(int *)(unaff_EBX + 0xa6)) / 0xfa);
  *(short *)(unaff_EBX + 0x9e) = (short)psVar1;
  if ((unaff_ESI & 0x2000) != 0) {
    *(short *)(unaff_EBX + 0x9e) = *(short *)(unaff_EBX + 0x9e) << 1;
  }
  if ((unaff_ESI & 4) == 0) {
    if ((unaff_ESI & 8) == 0) {
      *(undefined2 *)(unaff_EBX + 0x9c) = 0;
    }
    else {
      *(undefined2 *)(unaff_EBP + -8) = *(undefined2 *)(unaff_EBX + 0x9c);
      psVar1 = (short *)(unaff_EBX + 0x3c);
      *psVar1 = *psVar1 - *(short *)(unaff_EBP + -8);
      if (*psVar1 < 0) {
        sVar3 = *psVar1 + 0x168;
      }
      else {
        sVar3 = *psVar1;
      }
      *psVar1 = sVar3;
    }
  }
  else {
    *(undefined2 *)(unaff_EBP + -6) = *(undefined2 *)(unaff_EBX + 0x9c);
    psVar1 = (short *)(unaff_EBX + 0x3c);
    *psVar1 = *psVar1 + *(short *)(unaff_EBP + -6);
    if (*psVar1 < 0x168) {
      sVar3 = *psVar1;
    }
    else {
      sVar3 = *psVar1 + -0x168;
    }
    *psVar1 = sVar3;
  }
  if (((((unaff_ESI & 0x10) == 0) || ((unaff_ESI & 0x20) != 0)) || ((unaff_ESI & 0x100000) != 0)) ||
     (((unaff_ESI & 0x80000) != 0 || ((unaff_ESI & 0x400) != 0)))) {
    unaff_ESI = *(uint *)(unaff_EBX + 0xb0);
  }
  if (((unaff_ESI & 0x10) != 0) || ((unaff_ESI & 0x400) != 0)) {
    psVar1 = (short *)FUN_0041f354();
  }
  if ((unaff_ESI & 0x20) != 0) {
    psVar1 = (short *)FUN_0041f354();
  }
  if ((unaff_ESI & 0x80000) != 0) {
    psVar1 = (short *)FUN_0041f354();
  }
  if ((unaff_ESI & 0x100000) != 0) {
    psVar1 = (short *)FUN_0041f354();
  }
  if ((unaff_EDI == *(int *)(unaff_EBX + 0x30)) &&
     (psVar1 = *(short **)(unaff_EBX + 0x38), *(short **)(unaff_EBP + -4) == psVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT22((short)((uint)psVar1 >> 0x10),1);
  }
  return uVar2;
}


/* Ghidra address: 0041eec8; FUN_0041eec8 */

void FUN_0041eec8(void)

{
  return;
}


/* Ghidra address: 0041eed0; FUN_0041eed0 */

int FUN_0041eed0(void)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int in_stack_00000004;
  short local_50;
  short local_40;
  short local_30;
  short local_20;
  
  sVar3 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar4 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar4) {
    sVar4 = *DAT_0048aab4 + -1;
  }
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar3) {
    sVar3 = DAT_0048aab4[2] + -1;
  }
  iVar2 = (int)*(short *)(*(int *)(DAT_0048aab4 +
                                  (uint)(byte)(&DAT_00490720)
                                              [(short)(sVar4 + sVar3 * (short)*(undefined4 *)
                                                                               (DAT_0048aab4 +
                                                                               0x25b6))] * 2 + 0x187
                                  ) + 0x74);
  sVar5 = (short)((*(int *)(in_stack_00000004 + 0x38) + -0xa0) / (int)DAT_0048aab4[0x3a7]);
  local_20 = (short)((*(int *)(in_stack_00000004 + 0x30) + -0xa0) / (int)DAT_0048aab4[0x3a7]);
  if (local_20 < 0) {
    local_20 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)local_20) {
    local_20 = *DAT_0048aab4 + -1;
  }
  if (sVar5 < 0) {
    sVar5 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar5) {
    sVar5 = DAT_0048aab4[2] + -1;
  }
  iVar1 = (int)*(short *)(*(int *)(DAT_0048aab4 +
                                  (uint)(byte)(&DAT_00490720)
                                              [(short)(sVar5 * (short)*(undefined4 *)
                                                                       (DAT_0048aab4 + 0x25b6) +
                                                      local_20)] * 2 + 0x187) + 0x74);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  sVar6 = (short)((*(int *)(in_stack_00000004 + 0x38) + -0xa0) / (int)DAT_0048aab4[0x3a7]);
  local_30 = (short)((*(int *)(in_stack_00000004 + 0x30) + 0xa0) / (int)DAT_0048aab4[0x3a7]);
  if (local_30 < 0) {
    local_30 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)local_30) {
    local_30 = *DAT_0048aab4 + -1;
  }
  if (sVar6 < 0) {
    sVar6 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar6) {
    sVar6 = DAT_0048aab4[2] + -1;
  }
  iVar1 = (int)*(short *)(*(int *)(DAT_0048aab4 +
                                  (uint)(byte)(&DAT_00490720)
                                              [(short)(sVar6 * (short)*(undefined4 *)
                                                                       (DAT_0048aab4 + 0x25b6) +
                                                      local_30)] * 2 + 0x187) + 0x74);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  sVar7 = (short)((*(int *)(in_stack_00000004 + 0x38) + 0xa0) / (int)DAT_0048aab4[0x3a7]);
  local_40 = (short)((*(int *)(in_stack_00000004 + 0x30) + -0xa0) / (int)DAT_0048aab4[0x3a7]);
  if (local_40 < 0) {
    local_40 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)local_40) {
    local_40 = *DAT_0048aab4 + -1;
  }
  if (sVar7 < 0) {
    sVar7 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar7) {
    sVar7 = DAT_0048aab4[2] + -1;
  }
  iVar1 = (int)*(short *)(*(int *)(DAT_0048aab4 +
                                  (uint)(byte)(&DAT_00490720)
                                              [(short)(sVar7 * (short)*(undefined4 *)
                                                                       (DAT_0048aab4 + 0x25b6) +
                                                      local_40)] * 2 + 0x187) + 0x74);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  sVar8 = (short)((*(int *)(in_stack_00000004 + 0x38) + 0xa0) / (int)DAT_0048aab4[0x3a7]);
  local_50 = (short)((*(int *)(in_stack_00000004 + 0x30) + 0xa0) / (int)DAT_0048aab4[0x3a7]);
  if (local_50 < 0) {
    local_50 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)local_50) {
    local_50 = *DAT_0048aab4 + -1;
  }
  if (sVar8 < 0) {
    sVar8 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar8) {
    sVar8 = DAT_0048aab4[2] + -1;
  }
  iVar1 = (int)*(short *)(*(int *)(DAT_0048aab4 +
                                  (uint)(byte)(&DAT_00490720)
                                              [(short)(sVar8 * (short)*(undefined4 *)
                                                                       (DAT_0048aab4 + 0x25b6) +
                                                      local_50)] * 2 + 0x187) + 0x74);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  if ((*(short *)(*(int *)(DAT_0048aab4 +
                          (uint)(byte)(&DAT_00490720)
                                      [(short)(sVar8 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6)
                                              + local_50)] * 2 + 0x187) + 0x18) == 0xc &&
       (*(short *)(*(int *)(DAT_0048aab4 +
                           (uint)(byte)(&DAT_00490720)
                                       [(short)(sVar7 * (short)*(undefined4 *)
                                                                (DAT_0048aab4 + 0x25b6) + local_40)]
                           * 2 + 0x187) + 0x18) == 0xc &&
       (*(short *)(*(int *)(DAT_0048aab4 +
                           (uint)(byte)(&DAT_00490720)
                                       [(short)(sVar6 * (short)*(undefined4 *)
                                                                (DAT_0048aab4 + 0x25b6) + local_30)]
                           * 2 + 0x187) + 0x18) == 0xc &&
       (*(short *)(*(int *)(DAT_0048aab4 +
                           (uint)(byte)(&DAT_00490720)
                                       [(short)(sVar5 * (short)*(undefined4 *)
                                                                (DAT_0048aab4 + 0x25b6) + local_20)]
                           * 2 + 0x187) + 0x18) == 0xc &&
       *(short *)(*(int *)(DAT_0048aab4 +
                          (uint)(byte)(&DAT_00490720)
                                      [(short)(sVar4 + sVar3 * (short)*(undefined4 *)
                                                                       (DAT_0048aab4 + 0x25b6))] * 2
                          + 0x187) + 0x18) == 0xc)))) ||
     (iVar2 < *(short *)(in_stack_00000004 + 0x1f) + 0x6e)) {
    iVar2 = (int)*(short *)(in_stack_00000004 + 0x1f) >> 2;
  }
  else {
    iVar2 = (int)*(short *)(in_stack_00000004 + 0x1f);
  }
  return iVar2;
}


/* Ghidra address: 0041f354; FUN_0041f354 */

void FUN_0041f354(void)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int in_stack_00000004;
  short in_stack_00000008;
  short local_16;
  short local_6;
  
  *(int *)(in_stack_00000004 + 0x48) = (int)in_stack_00000008 >> 2;
  local_6 = 1;
  do {
    sVar4 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
    sVar5 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
    if (sVar5 < 0) {
      sVar5 = 0;
    }
    if (*DAT_0048aab4 + -1 < (int)sVar5) {
      sVar5 = *DAT_0048aab4 + -1;
    }
    if (sVar4 < 0) {
      sVar4 = 0;
    }
    if (DAT_0048aab4[2] + -1 < (int)sVar4) {
      sVar4 = DAT_0048aab4[2] + -1;
    }
    sVar5 = sVar5 + sVar4 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6);
    if (*(short *)(in_stack_00000004 + 0x7a) == 0) {
      uVar2 = FUN_00411634();
      sVar4 = (short)uVar2;
    }
    else {
      uVar2 = FUN_00411634();
      sVar4 = (short)uVar2;
    }
    iVar3 = FUN_0041eed0();
    sVar4 = -(short)iVar3 - sVar4;
    iVar3 = *(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048f61c)[sVar5] * 2 + 0x187);
    if ((*(short *)(iVar3 + 0x18) == 7) && (*(short *)(iVar3 + 0x79) != 0)) {
      *(short *)(iVar3 + 0x79) = *(short *)(iVar3 + 0x79) + -1;
    }
    (&DAT_0048e518)[sVar5] = 0x20;
    if (*(short *)(in_stack_00000004 + 0x7a) == 0) {
      FUN_00412ac8();
    }
    else {
      FUN_00412ac8();
    }
    sVar5 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
    sVar6 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
    if (sVar6 < 0) {
      sVar6 = 0;
    }
    if (*DAT_0048aab4 + -1 < (int)sVar6) {
      sVar6 = *DAT_0048aab4 + -1;
    }
    if (sVar5 < 0) {
      sVar5 = 0;
    }
    if (DAT_0048aab4[2] + -1 < (int)sVar5) {
      sVar5 = DAT_0048aab4[2] + -1;
    }
    sVar6 = sVar6 + sVar5 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6);
    if (*(short *)(*(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048f61c)[sVar6] * 2 + 0x187) + 0x18)
        == 7) {
      psVar1 = (short *)(*(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048f61c)[sVar6] * 2 + 0x187) +
                        0x79);
      *psVar1 = *psVar1 + 1;
    }
    if (*(short *)(in_stack_00000004 + 0x7a) == 0) {
      uVar2 = FUN_00411634();
      sVar5 = (short)uVar2;
    }
    else {
      uVar2 = FUN_00411634();
      sVar5 = (short)uVar2;
    }
    iVar3 = FUN_0041eed0();
    sVar5 = -(short)iVar3 - sVar5;
    *(int *)(in_stack_00000004 + 0x34) = *(int *)(in_stack_00000004 + 0x34) + 0x4b;
    if (*(int *)(in_stack_00000004 + 0x34) < (int)sVar4) {
      sVar4 = *(short *)(in_stack_00000004 + 0x34);
    }
    if (sVar5 <= sVar4) {
      *(int *)(in_stack_00000004 + 0x34) = (int)sVar5;
    }
    (&DAT_0048e518)[sVar6] = *(undefined1 *)(in_stack_00000004 + 0xb8);
    local_6 = local_6 + 1;
  } while (local_6 < 4);
  *(int *)(in_stack_00000004 + 0x48) = (int)in_stack_00000008;
  return;
}


/* Ghidra address: 0041f61c; FUN_0041f61c */

void FUN_0041f61c(void)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int in_stack_00000004;
  short local_12;
  
  sVar4 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar5 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar5 < 0) {
    sVar5 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar5) {
    sVar5 = *DAT_0048aab4 + -1;
  }
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar4) {
    sVar4 = DAT_0048aab4[2] + -1;
  }
  sVar5 = sVar5 + sVar4 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6);
  if (*(short *)(in_stack_00000004 + 0x7a) == 0) {
    uVar2 = FUN_00411634();
    sVar4 = (short)uVar2;
  }
  else {
    uVar2 = FUN_00411634();
    sVar4 = (short)uVar2;
  }
  iVar3 = FUN_0041eed0();
  sVar4 = -(short)iVar3 - sVar4;
  iVar3 = *(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048f61c)[sVar5] * 2 + 0x187);
  if ((*(short *)(iVar3 + 0x18) == 7) && (*(short *)(iVar3 + 0x79) != 0)) {
    *(short *)(iVar3 + 0x79) = *(short *)(iVar3 + 0x79) + -1;
  }
  (&DAT_0048e518)[sVar5] = 0x20;
  if (*(short *)(in_stack_00000004 + 0x7a) == 0) {
    FUN_00412628();
  }
  else {
    FUN_00412628();
  }
  sVar5 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar6 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar6 < 0) {
    sVar6 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar6) {
    sVar6 = *DAT_0048aab4 + -1;
  }
  if (sVar5 < 0) {
    sVar5 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar5) {
    sVar5 = DAT_0048aab4[2] + -1;
  }
  sVar6 = sVar6 + sVar5 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6);
  if (*(short *)(*(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048f61c)[sVar6] * 2 + 0x187) + 0x18) ==
      7) {
    psVar1 = (short *)(*(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048f61c)[sVar6] * 2 + 0x187) +
                      0x79);
    *psVar1 = *psVar1 + 1;
  }
  if (*(short *)(in_stack_00000004 + 0x7a) == 0) {
    uVar2 = FUN_00411634();
    sVar5 = (short)uVar2;
  }
  else {
    uVar2 = FUN_00411634();
    sVar5 = (short)uVar2;
  }
  iVar3 = FUN_0041eed0();
  sVar5 = -(short)iVar3 - sVar5;
  *(int *)(in_stack_00000004 + 0x34) = *(int *)(in_stack_00000004 + 0x34) + 0x4b;
  if (*(int *)(in_stack_00000004 + 0x34) < (int)sVar4) {
    sVar4 = *(short *)(in_stack_00000004 + 0x34);
  }
  if (sVar5 <= sVar4) {
    *(int *)(in_stack_00000004 + 0x34) = (int)sVar5;
  }
  (&DAT_0048e518)[sVar6] = *(undefined1 *)(in_stack_00000004 + 0xb8);
  return;
}


/* Ghidra address: 0041f8d0; FUN_0041f8d0 */

int FUN_0041f8d0(void)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 *in_stack_00000010;
  undefined4 local_38 [6];
  undefined4 local_20;
  
  bVar8 = 0;
  puVar6 = (undefined4 *)(in_stack_00000004 + 0x30);
  puVar7 = local_38;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_20 = 0xffffff9c;
  sVar5 = 0;
  do {
    iVar3 = FUN_00411480();
    if (in_stack_00000004 != iVar3) {
      if (*(short *)(iVar3 + 0x18) == in_stack_00000008) {
        puVar6 = (undefined4 *)(iVar3 + 0x30);
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *in_stack_00000010 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          in_stack_00000010 = in_stack_00000010 + (uint)bVar8 * -2 + 1;
        }
        return iVar3;
      }
      sVar1 = *(short *)(in_stack_00000004 + 0x34);
      if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
          (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
           -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
         (iVar4 = *(short *)(iVar3 + 0x1f) + 20000, -iVar4 != (int)sVar1 && iVar4 <= -(int)sVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) && ((*(ushort *)(iVar3 + 0x1b) & 8) == 0)) {
        return 0;
      }
      iVar3 = FUN_00411480();
      sVar1 = *(short *)(in_stack_00000004 + 0x34);
      if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
          (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
           -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
         (iVar4 = *(short *)(iVar3 + 0x1f) + 20000, -iVar4 != (int)sVar1 && iVar4 <= -(int)sVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) && ((*(ushort *)(iVar3 + 0x1b) & 8) == 0)) {
        return 0;
      }
    }
    sVar5 = sVar5 + 1;
    if (4999 < sVar5) {
      return 0;
    }
  } while( true );
}


/* Ghidra address: 0041fa14; FUN_0041fa14 */

undefined4 FUN_0041fa14(void)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 local_38 [6];
  undefined4 local_20;
  
  puVar6 = (undefined4 *)(in_stack_00000004 + 0x30);
  puVar7 = local_38;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_20 = 0xffffff9c;
  sVar5 = 0;
  do {
    iVar3 = FUN_00411480();
    if (in_stack_00000004 != iVar3) {
      if (iVar3 == in_stack_00000008) {
        return CONCAT22((short)((uint)iVar3 >> 0x10),1);
      }
      sVar1 = *(short *)(in_stack_00000004 + 0x34);
      if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
          (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
           -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
         (iVar4 = *(short *)(iVar3 + 0x1f) + 20000, -iVar4 != (int)sVar1 && iVar4 <= -(int)sVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) && ((*(ushort *)(iVar3 + 0x1b) & 8) == 0)) {
        return 0;
      }
      iVar3 = FUN_00411480();
      sVar1 = *(short *)(in_stack_00000004 + 0x34);
      if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
          (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
           -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
         (iVar4 = *(short *)(iVar3 + 0x1f) + 20000, -iVar4 != (int)sVar1 && iVar4 <= -(int)sVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) && ((*(ushort *)(iVar3 + 0x1b) & 8) == 0)) {
        return 0;
      }
    }
    sVar5 = sVar5 + 1;
    if (4999 < sVar5) {
      return 0;
    }
  } while( true );
}


/* Ghidra address: 0041fb48; FUN_0041fb48 */

void FUN_0041fb48(void)

{
  FUN_0042fd58();
  FUN_0042fc2c();
  FUN_0042fa55();
  return;
}


/* Ghidra address: 0041fba0; FUN_0041fba0 */

void FUN_0041fba0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int in_stack_00000004;
  undefined4 local_38;
  int local_34;
  undefined2 local_26;
  
  bVar4 = 0;
  iVar1 = FUN_0041133c();
  if (-1 < (short)iVar1) {
    FUN_00421314();
    FUN_00411418();
    puVar2 = (undefined4 *)(in_stack_00000004 + 0x30);
    puVar3 = &local_38;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_34 = local_34 - *(short *)(in_stack_00000004 + 0xbe);
    local_26 = 0;
    FUN_0042158c();
  }
  return;
}


/* Ghidra address: 0041fc2c; FUN_0041fc2c */

undefined2 FUN_0041fc2c(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  int in_stack_00000004;
  int in_stack_0000000c;
  int local_80;
  int local_7c;
  int local_78;
  short local_74;
  short local_6e;
  int local_4c;
  int local_44;
  short local_16;
  int local_14;
  int local_10;
  short local_c;
  undefined2 local_a;
  uint *local_8;
  
  bVar7 = 0;
  iVar2 = FUN_0041133c();
  if (-1 < (short)iVar2) {
    local_8 = FUN_00421314();
    FUN_00411418();
    piVar5 = (int *)(in_stack_00000004 + 0x30);
    piVar6 = &local_80;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    local_7c = local_7c - *(short *)(in_stack_00000004 + 0xbe);
    iVar2 = FUN_0041f8d0();
    if (iVar2 != 0) {
      local_a = 0;
      local_c = 0;
      local_10 = local_4c - local_80;
      if (local_10 < 0) {
        local_10 = -local_10;
      }
      local_44 = local_44 - local_78;
      if (local_44 < 0) {
        local_44 = -local_44;
      }
      if (local_10 <= local_44) {
        local_10 = local_44;
      }
      iVar3 = FUN_00411480();
      local_14 = (int)*(short *)(iVar3 + 0x1f);
      if (in_stack_0000000c == 1) {
        iVar3 = -1;
      }
      else {
        iVar3 = ((*(int *)(&DAT_00445fb0 + local_6e * 4) * local_10) /
                 *(int *)(&DAT_00446554 + local_6e * 4) - local_7c) - local_14;
      }
      sVar1 = (**(code **)(*(int *)(iVar2 + 0x14) + 0xc))();
      if ((sVar1 <= iVar3) || (iVar3 < 1)) {
        (**(code **)(*(int *)(iVar2 + 0x14) + 0xc))();
        FUN_00409020();
        FUN_0041da94();
        FUN_0041da64();
        if (0x10e < local_16) {
          FUN_0041da94();
        }
        if (0xb4 < local_16) {
          FUN_0041da94();
        }
        if (0x5a < local_16) {
          FUN_0041da94();
        }
        if ((int)local_16 < *(int *)(in_stack_00000004 + 0xb4)) {
          local_6e = local_c;
        }
      }
    }
    local_6e = local_6e + *(short *)(&DAT_0043635c + DAT_00436378 * 4);
    local_74 = local_74 + *(short *)(&DAT_00436368 + DAT_0043637c * 4);
    DAT_00436378 = (DAT_00436378 + 1) % 3;
    DAT_0043637c = DAT_0043637c + 1 & 3;
    uVar4 = FUN_0042158c();
    if ((short)uVar4 != 0) {
      return (short)local_8[0x1f];
    }
  }
  return 0;
}


/* Ghidra address: 0041fe80; FUN_0041fe80 */

undefined4 FUN_0041fe80(void)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  int in_stack_00000004;
  short in_stack_00000008;
  
  sVar3 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar1 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar1) {
    sVar1 = *DAT_0048aab4 + -1;
  }
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar3) {
    sVar3 = DAT_0048aab4[2] + -1;
  }
  sVar1 = (short)((int)sVar3 * *(int *)(DAT_0048aab4 + 0x25b6)) + sVar1;
  if (in_stack_00000008 == 0) {
    uVar2 = *(undefined4 *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048e518)[sVar1] * 2 + 0x187);
  }
  else if (in_stack_00000008 == 1) {
    uVar2 = *(undefined4 *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048f61c)[sVar1] * 2 + 0x187);
  }
  else {
    uVar2 = *(undefined4 *)(DAT_0048aab4 + (uint)(byte)(&DAT_00490720)[sVar1] * 2 + 0x187);
  }
  return uVar2;
}


/* Ghidra address: 0041ff74; FUN_0041ff74 */

void FUN_0041ff74(void)

{
  return;
}


/* Ghidra address: 0041ff7c; FUN_0041ff7c */

void FUN_0041ff7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  puVar4 = (undefined2 *)(param_4 + 0x3e);
  puVar3 = (undefined2 *)(param_4 + 0x3c);
  if (param_5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_5 + 0x3e;
  }
  piVar2 = FUN_0042e8f8(iVar1,puVar3,param_3,(int *)iVar1,(undefined4 *)(param_4 + 0x44));
  piVar2 = FUN_0042ec88(piVar2,extraout_EDX,extraout_CX,piVar2,puVar3);
  FUN_0042ec88(piVar2,extraout_EDX_00,extraout_CX_00,piVar2,puVar4);
  return;
}


/* Ghidra address: 0041ffc0; FUN_0041ffc0 */

int FUN_0041ffc0(void)

{
  int in_stack_00000004;
  
  FUN_0041eb44();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436930;
  *(undefined2 *)(in_stack_00000004 + 0x7a) = 1;
  *(undefined2 *)(in_stack_00000004 + 0x7c) = 0x14;
  *(undefined2 *)(in_stack_00000004 + 0x120) = DAT_00436c1c;
  FUN_00429054();
  FUN_00429054();
  *(undefined2 *)(in_stack_00000004 + 0xf0) = 0;
  *(undefined2 *)(in_stack_00000004 + 0xf2) = 500;
  *(undefined2 *)(in_stack_00000004 + 0xf4) = 0;
  *(undefined2 *)(in_stack_00000004 + 0xf6) = 0x1e;
  *(undefined2 *)(in_stack_00000004 + 0xf8) = 0;
  *(undefined2 *)(in_stack_00000004 + 0xfa) = 0x32;
  *(undefined2 *)(in_stack_00000004 + 0xfc) = 0;
  *(undefined2 *)(in_stack_00000004 + 0xfe) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x100) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x102) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x11a) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x118) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x128) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x122) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x50) = 0xee;
  FUN_00427c8d();
  *(undefined2 *)(in_stack_00000004 + 0x124) = 1;
  DAT_00499d54 = in_stack_00000004;
  *(undefined4 *)(in_stack_00000004 + 0xb4) = 0x1e;
  *(undefined1 *)(in_stack_00000004 + 300) = 0;
  *(undefined1 *)(in_stack_00000004 + 0x12d) = 0;
  *(undefined2 *)(in_stack_00000004 + 0xbe) = 0xff9c;
  *(undefined4 *)(in_stack_00000004 + 0x133) = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00420104; FUN_00420104 */

void FUN_00420104(void)

{
  if (DAT_00499d54 != 0) {
    FUN_00420890();
  }
  return;
}


/* Ghidra address: 00420120; FUN_00420120 */

void FUN_00420120(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x4363ac);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436930;
    puVar1 = *(undefined4 **)(in_stack_00000004 + 0xc0);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (**(code **)*puVar1)();
    }
    puVar1 = *(undefined4 **)(in_stack_00000004 + 0xc4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (**(code **)*puVar1)();
    }
    *(undefined2 *)(in_stack_00000004 + 0x1b) = 0;
    DAT_00499d54 = 0;
    FUN_0041eb08();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}


/* Ghidra address: 00420200; FUN_00420200 */

void FUN_00420200(void)

{
  return;
}


/* Ghidra address: 00420208; FUN_00420208 */

void FUN_00420208(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined4 extraout_ECX_00;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  short sVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  
  FUN_0041ff7c(param_1,param_2,param_3,param_4,param_5);
  sVar6 = 0;
  uVar4 = extraout_ECX;
  do {
    iVar1 = sVar6 * 2 + param_4 + 0x7e;
    if (param_5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = param_5 + 0x3e;
    }
    FUN_0042ec88(iVar1,iVar5,(short)uVar4,(int *)iVar5,(undefined2 *)iVar1);
    sVar6 = sVar6 + 1;
    uVar4 = extraout_ECX_00;
  } while (sVar6 < 0xb);
  FUN_0042e838();
  puVar2 = FUN_0041d9de();
  *(uint **)(param_4 + 0xc0) = puVar2;
  FUN_0042e838();
  puVar2 = FUN_0041d9de();
  *(uint **)(param_4 + 0xc4) = puVar2;
  puVar8 = (undefined2 *)(param_4 + 0x9a);
  puVar7 = (undefined2 *)(param_4 + 0x98);
  if (param_5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_5 + 0x3e;
  }
  piVar3 = FUN_0042ec88(param_4 + 0x96,iVar1,(short)puVar7,(int *)iVar1,
                        (undefined2 *)(param_4 + 0x96));
  piVar3 = FUN_0042ec88(piVar3,extraout_EDX,extraout_CX,piVar3,puVar7);
  FUN_0042ec88(piVar3,extraout_EDX_00,extraout_CX_00,piVar3,puVar8);
  FUN_00408944();
  FUN_0040895c();
  return;
}


/* Ghidra address: 00420308; FUN_00420308 */

undefined4 FUN_00420308(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 extraout_var;
  undefined4 uVar1;
  undefined2 extraout_var_00;
  short sVar2;
  short sVar3;
  
  if (DAT_00436c18 + -1 == 0) {
    uVar1 = 3;
  }
  else if (*(short *)(param_4 + 0x7e) == 0) {
    if (*(char *)(param_4 + 0x12d) == '\0') {
      FUN_0040a7a4(DAT_00436c18 + -1,CONCAT31((int3)((uint)param_2 >> 8),*(char *)(param_4 + 0x12d))
                   ,*(undefined4 *)(param_4 + 0xc4),*(undefined4 *)(param_4 + 0xc4),0);
      *(undefined1 *)(param_4 + 0x12d) = 1;
      *(short *)(param_4 + 0x126) = *(short *)(param_4 + 0x1f) >> 2;
      *(int *)(param_4 + 0x137) = (int)*(short *)(param_4 + 0x1f);
    }
    *(short *)(param_4 + 0x1f) = *(short *)(param_4 + 0x1f) + -0x10;
    if (*(short *)(param_4 + 0x1f) < *(short *)(param_4 + 0x126)) {
      *(short *)(param_4 + 0x1f) = *(short *)(param_4 + 0x126);
      FUN_0040a7fc();
    }
    FUN_00424d90();
    if (*(char *)(param_4 + 0x12d) == '\x01') {
      uVar1 = 0;
    }
    else {
      *(undefined2 *)(param_4 + 0x1f) = *(undefined2 *)(param_4 + 0x137);
      *(short *)(param_4 + 0x120) = *(short *)(param_4 + 0x120) + -1;
      if (*(short *)(param_4 + 0x120) == 0) {
        uVar1 = CONCAT22(extraout_var,2);
      }
      else {
        *(undefined1 *)(param_4 + 0x12d) = 0;
        sVar2 = (short)(*(int *)(param_4 + 0x38) / (int)DAT_0048aab4[0x3a7]);
        sVar3 = (short)(*(int *)(param_4 + 0x30) / (int)DAT_0048aab4[0x3a7]);
        if (sVar3 < 0) {
          sVar3 = 0;
        }
        if (*DAT_0048aab4 + -1 < (int)sVar3) {
          sVar3 = *DAT_0048aab4 + -1;
        }
        if (sVar2 < 0) {
          sVar2 = 0;
        }
        if (DAT_0048aab4[2] + -1 < (int)sVar2) {
          sVar2 = DAT_0048aab4[2] + -1;
        }
        (&DAT_0048e518)[(short)(sVar2 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6) + sVar3)] =
             0x20;
        FUN_004152d8();
        sVar2 = (short)(*(int *)(param_4 + 0x38) / (int)DAT_0048aab4[0x3a7]);
        sVar3 = (short)(*(int *)(param_4 + 0x30) / (int)DAT_0048aab4[0x3a7]);
        if (sVar3 < 0) {
          sVar3 = 0;
        }
        if (*DAT_0048aab4 + -1 < (int)sVar3) {
          sVar3 = *DAT_0048aab4 + -1;
        }
        if (sVar2 < 0) {
          sVar2 = 0;
        }
        if (DAT_0048aab4[2] + -1 < (int)sVar2) {
          sVar2 = DAT_0048aab4[2] + -1;
        }
        (&DAT_0048e518)[(short)((short)((int)sVar2 * *(int *)(DAT_0048aab4 + 0x25b6)) + sVar3)] =
             *(undefined1 *)(param_4 + 0xb8);
        *(undefined2 *)(param_4 + 0x7e) = *(undefined2 *)(param_4 + 0x82);
        FUN_00408944();
        uVar1 = CONCAT22(extraout_var_00,1);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* Ghidra address: 00420544; FUN_00420544 */

void FUN_00420544(void)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int in_stack_00000004;
  byte in_stack_00000008;
  
  sVar2 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar3 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar3) {
    sVar3 = *DAT_0048aab4 + -1;
  }
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar2) {
    sVar2 = DAT_0048aab4[2] + -1;
  }
  (&DAT_0048e518)[(short)(sVar2 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6) + sVar3)] = 0x20;
  iVar1 = *(int *)(DAT_0048aab4 + (uint)in_stack_00000008 * 2 + 0x187);
  *(undefined4 *)(in_stack_00000004 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
  *(int *)(in_stack_00000004 + 0x34) =
       *(int *)(iVar1 + 0x34) - (int)*(short *)(in_stack_00000004 + 0x1f);
  *(undefined4 *)(in_stack_00000004 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
  sVar2 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
  sVar3 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  if (*DAT_0048aab4 + -1 < (int)sVar3) {
    sVar3 = *DAT_0048aab4 + -1;
  }
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  if (DAT_0048aab4[2] + -1 < (int)sVar2) {
    sVar2 = DAT_0048aab4[2] + -1;
  }
  (&DAT_0048e518)[(short)(sVar2 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6) + sVar3)] =
       *(undefined1 *)(in_stack_00000004 + 0xb8);
  return;
}


/* Ghidra address: 004206b0; FUN_004206b0 */

void FUN_004206b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5
                 ,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_3c [6];
  int local_24;
  int local_8;
  
  iVar2 = CONCAT31((int3)((uint)param_1 >> 8),*(char *)(param_4 + 0x12d));
  if (*(char *)(param_4 + 0x12d) == '\x01') {
    if ((*param_5 & 0x800) != 0) {
      *(undefined1 *)(param_4 + 0x12d) = 2;
    }
    *param_5 = 0;
  }
  else if (*(int *)(param_4 + 0x133) == 0) {
    *param_5 = *param_5 | 0x800;
    uVar3 = 0;
    if ((*param_5 & 0x800) != 0) {
      puVar4 = (undefined4 *)(param_4 + 0x30);
      puVar5 = local_3c;
      for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_24 = -(int)*(short *)(DAT_0048aab4 + 0x74e);
      iVar1 = FUN_00411480();
      iVar2 = 0;
      uVar3 = extraout_ECX;
      if (iVar1 != 0) {
        iVar2 = (**(code **)(*(int *)(iVar1 + 0x14) + 0x20))();
        uVar3 = extraout_ECX_00;
      }
      *param_5 = *param_5 & 0xfffff7ff;
    }
    if ((*param_5 & 0x200) != 0) {
      *param_5 = *param_5 & 0xfffffdff;
      iVar2 = (int)*(short *)(param_4 + 0x118);
      if ((*(int *)(param_4 + 200 + iVar2 * 4) != 0) &&
         (*(short *)(param_4 + 0x104 + iVar2 * 2) != 0)) {
        uVar3 = *(undefined4 *)(param_4 + 200 + *(short *)(param_4 + 0x118) * 4);
        iVar2 = FUN_00421c94();
        if ((short)iVar2 != 0) {
          local_8 = *(int *)(param_4 + 200 + *(short *)(param_4 + 0x118) * 4);
          FUN_0040a7fc();
          iVar2 = FUN_0040a7a4(*(undefined4 *)(local_8 + 0x6c),extraout_EDX,local_8,
                               *(undefined4 *)(local_8 + 0x6c),0);
          uVar3 = extraout_ECX_01;
        }
      }
    }
    if (((*param_5 & 0x40000) != 0) &&
       (*param_5 = *param_5 & 0xfffbffff, *(short *)(param_4 + 0x7e) != 0)) {
      FUN_0040a7a4(iVar2,*(undefined4 *)(param_4 + 0xc4),uVar3,*(undefined4 *)(param_4 + 0xc4),0);
      if (*(short *)(param_6 + 0x18) == 8) {
        FUN_00420890();
      }
      else {
        FUN_00420890();
      }
    }
    *(uint *)(param_4 + 0x22) = *(uint *)(param_4 + 0x22) | *param_5;
  }
  else {
    *param_5 = 0;
  }
  return;
}


/* Ghidra address: 00420820; FUN_00420820 */

undefined1 FUN_00420820(void)

{
  undefined1 uVar1;
  int in_stack_00000004;
  
  uVar1 = *(undefined1 *)(in_stack_00000004 + 300);
  *(undefined1 *)(in_stack_00000004 + 300) = 0;
  return uVar1;
}


/* Ghidra address: 00420838; FUN_00420838 */

bool FUN_00420838(void)

{
  bool bVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  short *in_stack_0000000c;
  undefined2 *in_stack_00000010;
  
  *in_stack_0000000c = *(short *)(in_stack_00000004 + 0x104 + in_stack_00000008 * 2);
  *in_stack_00000010 = *(undefined2 *)(in_stack_00000004 + 0xf0 + in_stack_00000008 * 2);
  if (((in_stack_00000008 == 1) || (in_stack_00000008 == 3)) || (in_stack_00000008 == 5)) {
    bVar1 = *in_stack_0000000c != 0;
  }
  else {
    bVar1 = *(int *)(in_stack_00000004 + 200 + in_stack_00000008 * 4) != 0;
  }
  return bVar1;
}


/* Ghidra address: 00420890; FUN_00420890 */

undefined4 FUN_00420890(void)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  ushort in_stack_0000000c;
  
  iVar3 = DAT_0048aab4;
  sVar2 = (short)in_stack_00000008;
  if (sVar2 == 0) {
    if ((short)in_stack_0000000c < 0) {
      *(undefined1 *)(in_stack_00000004 + 300) = 1;
    }
    if ((0 < (short)in_stack_0000000c) &&
       (*(short *)(in_stack_00000004 + 0x7e) == *(short *)(in_stack_00000004 + 0x82))) {
      return 0;
    }
    *(short *)(in_stack_00000004 + 0x7e) = *(short *)(in_stack_00000004 + 0x7e) + in_stack_0000000c;
    if (*(short *)(in_stack_00000004 + 0x7e) < 0) {
      *(undefined2 *)(in_stack_00000004 + 0x7e) = 0;
    }
    else if (*(short *)(in_stack_00000004 + 0x82) < *(short *)(in_stack_00000004 + 0x7e)) {
      *(short *)(in_stack_00000004 + 0x7e) = *(short *)(in_stack_00000004 + 0x82);
    }
    in_stack_00000008 = FUN_00408944();
  }
  else if ((sVar2 < 0x3c) || (0x45 < sVar2)) {
    if ((sVar2 < 0x32) || (0x3b < sVar2)) {
      if (sVar2 == 1) {
        if ((0 < (short)in_stack_0000000c) &&
           (*(short *)(in_stack_00000004 + 0x80) == *(short *)(in_stack_00000004 + 0x84))) {
          return 0;
        }
        *(short *)(in_stack_00000004 + 0x80) =
             *(short *)(in_stack_00000004 + 0x80) + in_stack_0000000c;
        if (*(short *)(in_stack_00000004 + 0x80) < 0) {
          *(undefined2 *)(in_stack_00000004 + 0x80) = 0;
        }
        else if (*(short *)(in_stack_00000004 + 0x84) < *(short *)(in_stack_00000004 + 0x80)) {
          *(short *)(in_stack_00000004 + 0x80) = *(short *)(in_stack_00000004 + 0x84);
        }
        in_stack_00000008 = FUN_0040895c();
      }
      else if (sVar2 == 2) {
        *(ushort *)(in_stack_00000004 + 0x82) = in_stack_0000000c;
        *(ushort *)(in_stack_00000004 + 0x7e) = in_stack_0000000c;
        FUN_00408944();
        in_stack_00000008 = FUN_00408984();
      }
      else if (sVar2 == 3) {
        *(short *)(in_stack_00000004 + 0x84) =
             *(short *)(in_stack_00000004 + 0x84) + in_stack_0000000c;
        *(undefined2 *)(in_stack_00000004 + 0x80) = *(undefined2 *)(in_stack_00000004 + 0x84);
        FUN_0040895c();
        in_stack_00000008 = FUN_0040899c();
      }
      else if (sVar2 == 10) {
        *(ushort *)(in_stack_00000004 + 0x92) =
             *(ushort *)(in_stack_00000004 + 0x92) | in_stack_0000000c;
        in_stack_00000008 = FUN_004089dc();
      }
      else if (sVar2 == 100) {
        in_stack_00000008 = FUN_0041f61c();
      }
      else if (sVar2 == 0x65) {
        in_stack_00000008 = FUN_0041f61c();
      }
      else if (sVar2 == 0x66) {
        in_stack_00000008 = FUN_0041f61c();
      }
      else {
        if (sVar2 == 1000) {
          DAT_00436c18 = 1;
          return 0;
        }
        if (sVar2 == 99) {
          *(short *)(in_stack_00000004 + 0x122) =
               *(short *)(in_stack_00000004 + 0x122) + in_stack_0000000c;
          in_stack_00000008 = FUN_004089b4();
        }
        else if (sVar2 == 200) {
          *(undefined2 *)(DAT_0048aab4 + 0xc) = 1;
          in_stack_00000008 = iVar3;
        }
        else {
          psVar1 = (short *)(in_stack_00000004 + 0x7e + sVar2 * 2);
          *psVar1 = *psVar1 + in_stack_0000000c;
        }
      }
    }
    else {
      *(ushort *)(in_stack_00000004 + 0xf0 + (sVar2 + -0x32) * 2) = in_stack_0000000c;
      if ((short)in_stack_0000000c < 0) {
        *(undefined2 *)(in_stack_00000004 + 0xf0 + (sVar2 + -0x32) * 2) = 0;
      }
      in_stack_00000008 = FUN_00420890();
    }
  }
  else {
    iVar3 = sVar2 + -0x3c;
    if ((0 < (short)in_stack_0000000c) &&
       (*(short *)(in_stack_00000004 + 0x104 + iVar3 * 2) ==
        *(short *)(in_stack_00000004 + 0xf0 + iVar3 * 2))) {
      return 0;
    }
    psVar1 = (short *)(in_stack_00000004 + 0x104 + iVar3 * 2);
    *psVar1 = *psVar1 + in_stack_0000000c;
    if (*(short *)(in_stack_00000004 + 0x104 + iVar3 * 2) < 0) {
      *(undefined2 *)(in_stack_00000004 + 0x104 + iVar3 * 2) = 0;
    }
    else {
      sVar2 = *(short *)(in_stack_00000004 + 0xf0 + iVar3 * 2);
      if (sVar2 < *(short *)(in_stack_00000004 + 0x104 + iVar3 * 2)) {
        *(short *)(in_stack_00000004 + 0x104 + iVar3 * 2) = sVar2;
      }
    }
    if (((*(int *)(in_stack_00000004 + 200 + iVar3 * 4) == 0) &&
        (0 < *(short *)(in_stack_00000004 + 0x104 + iVar3 * 2))) ||
       (*(short *)(in_stack_00000004 + 0x124) == 1)) {
      *(undefined4 *)(in_stack_00000004 + 200 + iVar3 * 4) = (&DAT_00499dfc)[iVar3];
      FUN_00420ed0();
      *(undefined2 *)(in_stack_00000004 + 0x124) = 0;
    }
    else if (*(short *)(in_stack_00000004 + 0x104 + iVar3 * 2) == 0) {
      FUN_00420d5c();
    }
    in_stack_00000008 = (int)*(short *)(in_stack_00000004 + 0x118);
    if (iVar3 == *(short *)(in_stack_00000004 + 0x118)) {
      in_stack_00000008 = FUN_0040895c();
    }
  }
  return CONCAT22((short)((uint)in_stack_00000008 >> 0x10),1);
}


/* Ghidra address: 00420c20; FUN_00420c20 */

void FUN_00420c20(void)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 *local_c;
  undefined4 *local_8;
  
  *(undefined2 *)(in_stack_00000004 + 0x7e) = *(undefined2 *)(in_stack_00000008 + 8);
  FUN_00408944();
  *(undefined2 *)(in_stack_00000004 + 0x82) = *(undefined2 *)(in_stack_00000008 + 0xc);
  local_c = (undefined4 *)(in_stack_00000004 + 200);
  iVar2 = 0;
  puVar3 = (undefined2 *)(in_stack_00000004 + 0xf0);
  local_8 = &DAT_00499dfc;
  piVar1 = (int *)(in_stack_00000008 + 0x10);
  do {
    if (*piVar1 != 0) {
      *local_c = *local_8;
      *puVar3 = (short)piVar1[10];
      puVar3[10] = (short)piVar1[0x14];
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
    local_c = local_c + 1;
    local_8 = local_8 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 10);
  FUN_00420ed0();
  FUN_0040895c();
  return;
}


/* Ghidra address: 00420ce4; FUN_00420ce4 */

void FUN_00420ce4(void)

{
  undefined4 *puVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  
  *(int *)(in_stack_00000008 + 8) = (int)*(short *)(in_stack_00000004 + 0x7e);
  *(int *)(in_stack_00000008 + 0xc) = (int)*(short *)(in_stack_00000004 + 0x82);
  iVar4 = 0;
  puVar1 = (undefined4 *)(in_stack_00000008 + 0x10);
  psVar3 = (short *)(in_stack_00000004 + 0xf0);
  piVar2 = (int *)(in_stack_00000004 + 200);
  do {
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    else {
      *puVar1 = 1;
      puVar1[10] = (int)*psVar3;
      puVar1[0x14] = (int)psVar3[10];
    }
    iVar4 = iVar4 + 1;
    psVar3 = psVar3 + 1;
    puVar1 = puVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 10);
  *(int *)(in_stack_00000008 + 0x88) = (int)*(short *)(in_stack_00000004 + 0x118);
  return;
}


/* Ghidra address: 00420d5c; FUN_00420d5c */

void FUN_00420d5c(void)

{
  int iVar1;
  short *psVar2;
  int in_stack_00000004;
  
  iVar1 = 9;
  psVar2 = (short *)(in_stack_00000004 + 0x116);
  do {
    if (0 < *psVar2) {
      FUN_00420ed0();
      FUN_0040895c();
      return;
    }
    iVar1 = iVar1 + -1;
    psVar2 = psVar2 + -1;
  } while (0 < iVar1);
  FUN_00421c74();
  FUN_00427c8d();
  *(undefined2 *)(in_stack_00000004 + 0x11a) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x124) = 1;
  return;
}


/* Ghidra address: 00420de4; FUN_00420de4 */

void FUN_00420de4(void)

{
  short sVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  sVar1 = *(short *)(in_stack_00000008 + 0xab);
  *(short *)(in_stack_00000004 + 0x11a) = sVar1;
  if (*(int *)(in_stack_00000004 + 200 + sVar1 * 4) == 0) {
    *(int *)(in_stack_00000004 + 200 + sVar1 * 4) = in_stack_00000008;
    iVar2 = *(int *)(in_stack_00000004 + 200 + *(short *)(in_stack_00000004 + 0x118) * 4);
    if (iVar2 == 0) {
      *(undefined2 *)(in_stack_00000004 + 0x118) = *(undefined2 *)(in_stack_00000004 + 0x11a);
      FUN_00421be4();
    }
    else if ((*(ushort *)(iVar2 + 0xaf) & 4) != 0) {
      FUN_00421c74();
      FUN_00427c8d();
      return;
    }
  }
  return;
}


/* Ghidra address: 00420e98; FUN_00420e98 */

undefined2 FUN_00420e98(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0041fc2c();
  FUN_00420890();
  return uVar1;
}


/* Ghidra address: 00420ed0; FUN_00420ed0 */

void FUN_00420ed0(void)

{
  int iVar1;
  int in_stack_00000004;
  short in_stack_00000008;
  
  if ((((*(int *)(in_stack_00000004 + 200 + in_stack_00000008 * 4) != 0) &&
       (*(int *)(in_stack_00000004 + 200 + in_stack_00000008 * 4) !=
        *(int *)(in_stack_00000004 + 200 + *(short *)(in_stack_00000004 + 0x118) * 4))) &&
      (*(short *)(in_stack_00000004 + 0x104 + in_stack_00000008 * 2) != 0)) &&
     (in_stack_00000008 != *(short *)(in_stack_00000004 + 0x11a))) {
    *(short *)(in_stack_00000004 + 0x11a) = in_stack_00000008;
    iVar1 = *(int *)(in_stack_00000004 + 200 + *(short *)(in_stack_00000004 + 0x118) * 4);
    if ((iVar1 == 0) || ((*(ushort *)(iVar1 + 0xaf) & 4) == 0)) {
      *(undefined2 *)(in_stack_00000004 + 0x118) = *(undefined2 *)(in_stack_00000004 + 0x11a);
      FUN_00421be4();
    }
    else {
      FUN_00421c74();
      FUN_00427c8d();
    }
  }
  return;
}


/* Ghidra address: 00420fb4; FUN_00420fb4 */

void FUN_00420fb4(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 200 + *(short *)(in_stack_00000004 + 0x118) * 4) == 0) {
    FUN_00427d42();
    return;
  }
  if (*(short *)(*(int *)(in_stack_00000004 + 200 + *(short *)(in_stack_00000004 + 0x118) * 4) +
                0xaf) == 0) {
    *(short *)(in_stack_00000004 + 0x118) = *(short *)(in_stack_00000004 + 0x11a);
    if (*(short *)(in_stack_00000004 + 0x11a) != 0) {
      FUN_00421be4();
      FUN_0040895c();
    }
    FUN_00427d42();
  }
  return;
}


/* Ghidra address: 00421048; FUN_00421048 */

void FUN_00421048(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int in_stack_00000004;
  
  if ((*(int *)(in_stack_00000004 + 0x133) == 2) &&
     (*(short *)(in_stack_00000004 + 0x1f) = *(short *)(in_stack_00000004 + 0x1f) + 0x10,
     *(short *)(in_stack_00000004 + 0x126) < *(short *)(in_stack_00000004 + 0x1f))) {
    *(undefined2 *)(in_stack_00000004 + 0x1f) = *(undefined2 *)(in_stack_00000004 + 0x137);
    *(undefined4 *)(in_stack_00000004 + 0x133) = 0;
  }
  if (*(int *)(in_stack_00000004 + 0x133) < 0) {
    *(short *)(in_stack_00000004 + 0x1f) = *(short *)(in_stack_00000004 + 0x1f) + -0x10;
    if (*(short *)(in_stack_00000004 + 0x1f) < *(short *)(in_stack_00000004 + 0x126)) {
      *(short *)(in_stack_00000004 + 0x1f) = *(short *)(in_stack_00000004 + 0x126);
      *(short *)(in_stack_00000004 + 0x126) = *(short *)(in_stack_00000004 + 0x126) << 2;
      *(undefined4 *)(in_stack_00000004 + 0x133) = 1;
    }
  }
  iVar3 = FUN_0041fe80();
  if (*(short *)(iVar3 + 0x18) == 3) {
    uVar4 = FUN_00420890();
    if ((short)uVar4 != 0) {
      sVar1 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x24))();
      if (sVar1 != 0) {
        FUN_0041e39c();
      }
    }
  }
  else if (*(short *)(iVar3 + 0x18) == 10) {
    sVar1 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x24))();
    if (sVar1 != 0) {
      FUN_0041e39c();
    }
    FUN_00420de4();
    FUN_004089f8();
    FUN_00420890();
  }
  iVar3 = FUN_0041fe80();
  sVar1 = *(short *)(iVar3 + 0x18);
  if (sVar1 == 0xc) {
    *(uint *)(in_stack_00000004 + 0x22) = *(uint *)(in_stack_00000004 + 0x22) | 0x4000000;
    uVar4 = FUN_00411634();
    if ((int)(short)(-(*(short *)(in_stack_00000004 + 0x1f) >> 2) - (short)uVar4) ==
        *(int *)(in_stack_00000004 + 0x34)) {
      FUN_00420890();
    }
    sVar2 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x3c))();
    if (sVar2 != 0) {
      FUN_0041e39c();
    }
  }
  if ((sVar1 == 0xd) && (*(int *)(iVar3 + 0x90) == -3)) {
    (**(code **)(*(int *)(iVar3 + 0x14) + 0x3c))();
  }
  else if (((sVar1 == 0xd) && (iVar3 != *(int *)(in_stack_00000004 + 0x128))) ||
          (*(int *)(in_stack_00000004 + 0x133) == 1)) {
    if (*(int *)(in_stack_00000004 + 0x133) == 1) {
      *(undefined4 *)(in_stack_00000004 + 0x133) = 2;
      (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x12f) + 0x14) + 0x3c))();
    }
    else if (*(char *)(iVar3 + 0x1a) != *(char *)(in_stack_00000004 + 0x12e)) {
      if (*(int *)(iVar3 + 0x90) < 0) {
        *(char *)(in_stack_00000004 + 0x12e) = *(char *)(iVar3 + 0x1a);
        *(undefined4 *)(in_stack_00000004 + 0x133) = 0xffffffff;
        *(short *)(in_stack_00000004 + 0x126) = *(short *)(in_stack_00000004 + 0x1f) >> 2;
        *(int *)(in_stack_00000004 + 0x137) = (int)*(short *)(in_stack_00000004 + 0x1f);
        *(int *)(in_stack_00000004 + 0x12f) = iVar3;
      }
      else {
        (**(code **)(*(int *)(iVar3 + 0x14) + 0x3c))();
      }
    }
  }
  else {
    *(undefined1 *)(in_stack_00000004 + 0x12e) = *(undefined1 *)(iVar3 + 0x1a);
  }
  *(int *)(in_stack_00000004 + 0x128) = iVar3;
  FUN_0041ebec();
  return;
}


/* Ghidra address: 004212a4; FUN_004212a4 */

int FUN_004212a4(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  FUN_0041e2c4();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_00436900;
  *(undefined1 *)(in_stack_00000004 + 0x88) = 0x20;
  *(undefined2 *)(in_stack_00000004 + 0x70) = 0xffff;
  *(undefined2 *)(in_stack_00000004 + 0x78) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x99) = 0;
  FUN_0041e4b4();
  uVar1 = FUN_00426946();
  *(undefined4 *)(in_stack_00000004 + 100) = uVar1;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00421314; FUN_00421314 */

uint * FUN_00421314(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 local_2c;
  
  bVar6 = 0;
  FUN_0042b4b4(0x436428);
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_00427be8();
    puVar1[5] = (uint)&PTR_FUN_00436a30;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_FUN_00436900;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -3;
  }
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(in_stack_00000004 + 0x18);
  *(undefined1 *)((int)puVar1 + 0x1a) = in_stack_00000008;
  puVar1[0x1a] = *(uint *)(in_stack_00000004 + 0x68);
  *(undefined2 *)((int)puVar1 + 0x1b) = *(undefined2 *)(in_stack_00000004 + 0x1b);
  puVar1[0x19] = *(uint *)(in_stack_00000004 + 100);
  *(undefined2 *)((int)puVar1 + 0x1d) = *(undefined2 *)(in_stack_00000004 + 0x1d);
  *(undefined2 *)((int)puVar1 + 0x1f) = *(undefined2 *)(in_stack_00000004 + 0x1f);
  *(undefined1 *)((int)puVar1 + 0x21) = *(undefined1 *)(in_stack_00000004 + 0x21);
  puVar2 = (uint *)(in_stack_00000004 + 0x30);
  puVar5 = puVar1 + 0xc;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  *(undefined2 *)((int)puVar1 + 0x7a) = *(undefined2 *)(in_stack_00000004 + 0x7a);
  *(undefined2 *)(puVar1 + 0x1f) = *(undefined2 *)(in_stack_00000004 + 0x7c);
  *(undefined2 *)((int)puVar1 + 0x7e) = *(undefined2 *)(in_stack_00000004 + 0x7e);
  *(undefined2 *)(puVar1 + 0x1e) = *(undefined2 *)(in_stack_00000004 + 0x78);
  *(undefined4 *)((int)puVar1 + 0x91) = *(undefined4 *)(in_stack_00000004 + 0x91);
  *(undefined4 *)((int)puVar1 + 0x8d) = *(undefined4 *)(in_stack_00000004 + 0x8d);
  *(undefined4 *)((int)puVar1 + 0x99) = *(undefined4 *)(in_stack_00000004 + 0x99);
  puVar2 = FUN_00431988();
  if (puVar2 != (uint *)0x0) {
    *puVar2 = (uint)&PTR_FUN_0043548c;
    FUN_0040a760();
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  puVar1[0x1b] = (uint)puVar2;
  *(undefined1 *)(puVar1 + 0x22) = 0x20;
  *(undefined2 *)(puVar1 + 0x1c) = 0xffff;
  FUN_0041e4b4();
  uVar3 = FUN_00426946();
  puVar1[0x19] = uVar3;
  *in_FS_OFFSET = local_2c;
  return puVar1;
}


/* Ghidra address: 004214b0; FUN_004214b0 */

void FUN_004214b0(void)

{
  return;
}


/* Ghidra address: 004214b8; FUN_004214b8 */

void FUN_004214b8(void)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined2 extraout_CX;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined2 *puVar4;
  
  puVar4 = (undefined2 *)(in_stack_00000004 + 0x7a);
  if (in_stack_00000008 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_stack_00000008 + 0x3e;
  }
  piVar1 = FUN_0042e8f8(puVar4,in_stack_00000004 + 0x48,iVar3,(int *)iVar3,
                        (undefined4 *)(in_stack_00000004 + 0x48));
  FUN_0042ec88(piVar1,extraout_EDX,extraout_CX,piVar1,puVar4);
  *(int *)(in_stack_00000004 + 0x48) = -*(int *)(in_stack_00000004 + 0x48);
  *(int *)(in_stack_00000004 + 0x34) = -(int)*(short *)(in_stack_00000004 + 0x1f);
  FUN_0042e838();
  pvVar2 = FUN_0041d95a();
  *(LPVOID *)(in_stack_00000004 + 0x8d) = pvVar2;
  if (in_stack_00000008 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(in_stack_00000008 + 0x3e);
  }
  FUN_0042ec88(in_stack_00000004 + 0x7c,extraout_EDX_00,(short)piVar1,piVar1,
               (undefined2 *)(in_stack_00000004 + 0x7c));
  *(undefined4 *)(in_stack_00000004 + 0x99) = 0;
  if (*(short *)(in_stack_00000004 + 0x7c) < 0) {
    *(undefined4 *)(in_stack_00000004 + 0x99) = 1;
    *(short *)(in_stack_00000004 + 0x7c) = -*(short *)(in_stack_00000004 + 0x7c);
  }
  *(short *)(in_stack_00000004 + 0x7e) = *(short *)(in_stack_00000004 + 0x7c) >> 1;
  FUN_0042e838();
  pvVar2 = FUN_0041d95a();
  *(LPVOID *)(in_stack_00000004 + 0x91) = pvVar2;
  return;
}


/* Ghidra address: 0042158c; FUN_0042158c */

undefined4 FUN_0042158c(void)

{
  int iVar1;
  undefined2 extraout_var;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  *(undefined4 *)(in_stack_00000004 + 0x89) = in_stack_0000000c;
  *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x1000;
  *(undefined4 *)(in_stack_00000004 + 0x30) = *in_stack_00000008;
  *(undefined4 *)(in_stack_00000004 + 0x38) = in_stack_00000008[2];
  *(undefined4 *)(in_stack_00000004 + 0x34) = in_stack_00000008[1];
  FUN_0041da94();
  *(undefined2 *)(in_stack_00000004 + 0x3c) = 0;
  FUN_0041da94();
  *(undefined2 *)(in_stack_00000004 + 0x42) = 0;
  do {
    FUN_0041e4b4();
    iVar1 = FUN_00426946();
    *(int *)(in_stack_00000004 + 100) = iVar1;
  } while (iVar1 == 0);
  FUN_00427c8d();
  return CONCAT22(extraout_var,1);
}


/* Ghidra address: 00421644; FUN_00421644 */

void FUN_00421644(void)

{
  return;
}


/* Ghidra address: 0042164c; FUN_0042164c */

void FUN_0042164c(void)

{
  bool bVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  short sVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  byte bVar11;
  int in_stack_00000004;
  undefined4 local_88 [13];
  int local_54 [6];
  int local_3c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  bVar11 = 0;
  local_8 = 0x40000;
  local_c = *(undefined4 *)(in_stack_00000004 + 0x30);
  *(int *)(in_stack_00000004 + 0x50) =
       (int)(short)(**(short **)(in_stack_00000004 + 100) * *(short *)(in_stack_00000004 + 0x1d)) >>
       1;
  if (*(short *)(in_stack_00000004 + 0x78) < 1) {
    local_10 = *(int *)(in_stack_00000004 + 0x48);
    local_14 = -(int)DAT_0048aab4[0x3a7] >> 3;
    local_18 = local_10 / local_14;
    piVar8 = (int *)(in_stack_00000004 + 0x30);
    piVar10 = local_54;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar10 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar10 = piVar10 + 1;
    }
    local_3c = local_3c % local_14;
    if (local_3c != 0) {
      local_18 = local_18 + 1;
    }
    while (iVar4 = local_18 + -1, bVar1 = 0 < local_18, local_18 = iVar4, bVar1) {
      local_1c = FUN_00411480();
      local_3c = local_14;
      iVar5 = (int)*(short *)(local_1c + 0x1f);
      iVar4 = -iVar5;
      if ((iVar4 - local_54[1] < 1) ||
         (iVar5 = (int)*(short *)(local_1c + 0x74), iVar5 < iVar4 - local_54[1])) {
        *(undefined4 *)(in_stack_00000004 + 0x95) = *(undefined4 *)(in_stack_00000004 + 0x91);
        *(undefined2 *)(in_stack_00000004 + 0x70) = 0xffff;
        FUN_0040a7a4(*(undefined4 *)(in_stack_00000004 + 0x6c),local_1c,iVar5,
                     *(undefined4 *)(in_stack_00000004 + 0x6c),0);
        *(undefined2 *)(in_stack_00000004 + 0x78) = 1;
        break;
      }
      local_20 = local_54[0];
      sVar3 = (short)(local_54[2] / (int)DAT_0048aab4[0x3a7]);
      sVar6 = (short)(local_54[0] / (int)DAT_0048aab4[0x3a7]);
      if (sVar6 < 0) {
        sVar6 = 0;
      }
      if (*DAT_0048aab4 + -1 < (int)sVar6) {
        sVar6 = *DAT_0048aab4 + -1;
      }
      if (sVar3 < 0) {
        sVar3 = 0;
      }
      if (DAT_0048aab4[2] + -1 < (int)sVar3) {
        sVar3 = DAT_0048aab4[2] + -1;
      }
      sVar6 = sVar6 + sVar3 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6);
      iVar4 = *(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048f61c)[sVar6] * 2 + 0x187);
      puVar7 = (undefined4 *)(in_stack_00000004 + 0x30);
      puVar9 = local_88;
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      piVar8 = local_54;
      piVar10 = (int *)(in_stack_00000004 + 0x30);
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar8;
        piVar8 = piVar8 + (uint)bVar11 * -2 + 1;
        piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
      }
      (**(code **)(*(int *)(iVar4 + 0x14) + 0x20))();
      puVar7 = local_88;
      puVar9 = (undefined4 *)(in_stack_00000004 + 0x30);
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      if ((~local_8 & 0x40000) != 0) {
        *(undefined4 *)(in_stack_00000004 + 0x95) = *(undefined4 *)(in_stack_00000004 + 0x91);
        *(undefined2 *)(in_stack_00000004 + 0x70) = 0xffff;
        FUN_0040a7a4(~local_8,*(undefined4 *)(in_stack_00000004 + 0x91),
                     *(undefined4 *)(in_stack_00000004 + 0x6c),
                     *(undefined4 *)(in_stack_00000004 + 0x6c),0);
        *(undefined2 *)(in_stack_00000004 + 0x78) = 1;
        break;
      }
      if ((local_18 == 0) && ((*(byte *)(in_stack_00000004 + 0x1b) & 0x40) != 0)) {
        *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x400;
        *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) & 0xefff;
        DAT_0048aab4[0x3a9] = DAT_0048aab4[0x3a9] + -1;
        FUN_00427d42();
        return;
      }
      iVar4 = *(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048e518)[sVar6] * 2 + 0x187);
      if ((((*(short *)(iVar4 + 0x18) != 0) && (*(short *)(iVar4 + 0x18) != 8)) &&
          (iVar4 != *(int *)(in_stack_00000004 + 0x89))) &&
         ((*(int *)(in_stack_00000004 + 0x99) != 0 ||
          (*(short *)(*(int *)(in_stack_00000004 + 0x89) + 0x18) != *(short *)(iVar4 + 0x18))))) {
        sVar3 = (**(code **)(*(int *)(iVar4 + 0x14) + 0xc))();
        sVar3 = sVar3 + *(short *)(local_1c + 0x1f) + *(short *)(in_stack_00000004 + 0x34);
        if (*(short *)(iVar4 + 0x18) == 1) {
          sVar3 = sVar3 + 0xdc;
        }
        if ((0 < sVar3) &&
           ((**(code **)(*(int *)(iVar4 + 0x14) + 0x20))(), (~local_8 & 0x40000) != 0)) {
          if ((*(short *)(iVar4 + 0x18) == 1) ||
             ((*(short *)(iVar4 + 0x18) == 9 && (*(short *)(iVar4 + 0xfc) == 0)))) {
            *(undefined4 *)(in_stack_00000004 + 0x95) = *(undefined4 *)(in_stack_00000004 + 0x8d);
          }
          else {
            *(undefined4 *)(in_stack_00000004 + 0x95) = *(undefined4 *)(in_stack_00000004 + 0x91);
            FUN_0040a7a4(*(undefined4 *)(in_stack_00000004 + 0x91),
                         *(undefined4 *)(in_stack_00000004 + 0x6c),extraout_ECX,
                         *(undefined4 *)(in_stack_00000004 + 0x6c),0);
          }
          *(undefined2 *)(in_stack_00000004 + 0x70) = 0xffff;
          *(undefined2 *)(in_stack_00000004 + 0x78) = 1;
          break;
        }
      }
      piVar8 = local_54;
      piVar10 = (int *)(in_stack_00000004 + 0x30);
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar10 = *piVar8;
        piVar8 = piVar8 + (uint)bVar11 * -2 + 1;
        piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
      }
    }
    *(int *)(in_stack_00000004 + 0x48) = local_10;
    if (*(short *)(in_stack_00000004 + 0x72) == 0) {
      do {
        FUN_0041e4b4();
        iVar4 = FUN_00426946();
        *(int *)(in_stack_00000004 + 100) = iVar4;
      } while (iVar4 == 0);
    }
    if ((*(byte *)(in_stack_00000004 + 0x1b) & 0x40) != 0) {
      do {
        FUN_0041e4b4();
        iVar4 = FUN_00426946();
        *(int *)(in_stack_00000004 + 100) = iVar4;
      } while (iVar4 == 0);
    }
    *(short *)(in_stack_00000004 + 0x7c) =
         (short)((int)*(short *)(in_stack_00000004 + 0x7c) +
                 (int)*(short *)(in_stack_00000004 + 0x7e) >> 1);
    if ((0 < *(short *)(in_stack_00000004 + 0x72)) &&
       (*(short *)(in_stack_00000004 + 0x72) = *(short *)(in_stack_00000004 + 0x72) + -0x29,
       *(short *)(in_stack_00000004 + 0x72) < 0)) {
      *(undefined2 *)(in_stack_00000004 + 0x72) = 0;
    }
  }
  else {
    if (*(short *)(in_stack_00000004 + 0x72) == 0) {
      FUN_0041e4b4();
      uVar2 = FUN_00426946();
      *(undefined4 *)(in_stack_00000004 + 100) = uVar2;
    }
    if (*(int *)(in_stack_00000004 + 100) == 0) {
      if (*(short *)(in_stack_00000004 + 0x72) == 0) {
        FUN_0041e4b4();
        uVar2 = FUN_00426946();
        *(undefined4 *)(in_stack_00000004 + 100) = uVar2;
      }
      FUN_0040a7fc();
      *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x400;
      *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) & 0xefff;
      DAT_0048aab4[0x3a9] = DAT_0048aab4[0x3a9] + -1;
      FUN_00427d42();
    }
    if ((0 < *(short *)(in_stack_00000004 + 0x72)) &&
       (*(short *)(in_stack_00000004 + 0x72) = *(short *)(in_stack_00000004 + 0x72) + -0x29,
       *(short *)(in_stack_00000004 + 0x72) < 0)) {
      *(undefined2 *)(in_stack_00000004 + 0x72) = 0;
    }
  }
  return;
}


/* Ghidra address: 00421b78; FUN_00421b78 */

void FUN_00421b78(void)

{
  return;
}


/* Ghidra address: 00421b80; FUN_00421b80 */

void FUN_00421b80(void)

{
  int *piVar1;
  undefined2 extraout_CX;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)(in_stack_00000004 + 0xad);
  if (in_stack_00000008 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(in_stack_00000008 + 0x3e);
  }
  piVar1 = FUN_0042ec88(puVar2,in_stack_00000004 + 0xab,(short)piVar1,piVar1,
                        (undefined2 *)(in_stack_00000004 + 0xab));
  FUN_0042ec88(piVar1,extraout_EDX,extraout_CX,piVar1,puVar2);
  (&DAT_00499dfc)[*(short *)(in_stack_00000004 + 0xab)] = in_stack_00000004;
  FUN_00422058();
  *(undefined2 *)(in_stack_00000004 + 0xb5) = 0;
  *(undefined2 *)(in_stack_00000004 + 0xb3) = 0;
  return;
}


/* Ghidra address: 00421be4; FUN_00421be4 */

void FUN_00421be4(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(short *)(in_stack_00000004 + 0xaf) == 0) {
    *(undefined2 *)(in_stack_00000004 + 0x70) = 0;
    *(undefined2 *)(in_stack_00000004 + 0xaf) = 1;
    *(undefined2 *)(in_stack_00000004 + 0xb5) = 0;
    *(undefined2 *)(in_stack_00000004 + 0xb3) = 0;
    FUN_0041e4b4();
    uVar1 = FUN_004269f7();
    *(undefined4 *)(in_stack_00000004 + 100) = uVar1;
    FUN_00427c8d();
    *(undefined2 *)(in_stack_00000004 + 0xb1) = 2;
  }
  return;
}


/* Ghidra address: 00421c74; FUN_00421c74 */

void FUN_00421c74(void)

{
  int in_stack_00000004;
  
  *(undefined2 *)(in_stack_00000004 + 0xaf) = 5;
  *(undefined2 *)(in_stack_00000004 + 0xb1) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x70) = 0;
  return;
}


/* Ghidra address: 00421c94; FUN_00421c94 */

undefined4 FUN_00421c94(void)

{
  int in_stack_00000004;
  
  if ((*(byte *)(in_stack_00000004 + 0xaf) & 4) != 0) {
    *(undefined2 *)(in_stack_00000004 + 0xaf) = 2;
    return CONCAT22((short)((uint)in_stack_00000004 >> 0x10),1);
  }
  return 0;
}


/* Ghidra address: 00421cb8; FUN_00421cb8 */

void FUN_00421cb8(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(short *)(in_stack_00000004 + 0xaf) == 1) {
    *(short *)(in_stack_00000004 + 0xb1) = *(short *)(in_stack_00000004 + 0xb1) + -1;
    if (*(short *)(in_stack_00000004 + 0xb1) == 0) {
      *(undefined2 *)(in_stack_00000004 + 0xaf) = 4;
    }
    FUN_00427d84();
  }
  else if (*(short *)(in_stack_00000004 + 0xaf) == 5) {
    *(short *)(in_stack_00000004 + 0xb1) = *(short *)(in_stack_00000004 + 0xb1) + 1;
    if (*(short *)(in_stack_00000004 + 0xb1) == 3) {
      *(undefined2 *)(in_stack_00000004 + 0xaf) = 0;
      FUN_00427d42();
    }
    FUN_00427d84();
  }
  else {
    if (*(short *)(in_stack_00000004 + 0xaf) == 2) {
      *(short *)(in_stack_00000004 + 0x70) = *(short *)(in_stack_00000004 + 0x70) + 1;
      if (*(short *)(in_stack_00000004 + 0x70) == *(short *)(in_stack_00000004 + 0xad)) {
        (**(code **)(*(int *)(DAT_00499d54 + 0x14) + 0x24))();
      }
      if (*(short *)(*(int *)(in_stack_00000004 + 0x68) + 4) == *(short *)(in_stack_00000004 + 0x70)
         ) {
        *(undefined2 *)(in_stack_00000004 + 0xaf) = 4;
        *(ushort *)(in_stack_00000004 + 0xaf) = *(ushort *)(in_stack_00000004 + 0xaf) | 3;
        *(undefined2 *)(in_stack_00000004 + 0x70) = 0;
        if (*(short *)(*(int *)(in_stack_00000004 + 0x68) + 4) <
            *(short *)(in_stack_00000004 + 0xad)) {
          (**(code **)(*(int *)(DAT_00499d54 + 0x14) + 0x24))();
        }
      }
    }
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 8;
    FUN_0041e4b4();
    uVar1 = FUN_00426a95();
    *(undefined4 *)(in_stack_00000004 + 100) = uVar1;
    FUN_00427d84();
  }
  return;
}


/* Ghidra address: 00421e00; FUN_00421e00 */

void FUN_00421e00(void)

{
  FUN_0042fc2c();
  FUN_0042fc2c();
  (**(code **)(*DAT_0044f640 + 0x44))();
  if (*(int *)(DAT_0048aab4 + 0x3ce) != 0) {
    (**(code **)(*(int *)(*(int *)(DAT_0048aab4 + 0x3ce) + 0x14) + 0x10))();
    FUN_0042fc2c();
    FUN_0042fc2c();
    (**(code **)(*DAT_0044f640 + 0x44))();
  }
  return;
}


/* Ghidra address: 00421f60; FUN_00421f60 */

void FUN_00421f60(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte bVar8;
  int in_stack_00000004;
  uint *in_stack_00000008;
  int in_stack_0000000c;
  int local_38 [13];
  
  bVar8 = 0;
  if ((*in_stack_00000008 & 0x40000) != 0) {
    piVar4 = (int *)(in_stack_0000000c + 0x30);
    piVar6 = local_38;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    iVar3 = FUN_00411480();
    sVar1 = *(short *)(iVar3 + 0x1f);
    sVar2 = (**(code **)(*(int *)(in_stack_00000004 + 0x14) + 0xc))();
    iVar3 = (int)sVar2 >> 1;
    if (iVar3 < 100) {
      iVar3 = 100;
    }
    if (((-(int)sVar1 - local_38[1] < iVar3) && (*(short *)(in_stack_00000004 + 0x74) == 0)) &&
       (*(short *)(in_stack_00000004 + 0x76) < 0)) {
      puVar5 = (undefined4 *)(in_stack_0000000c + 0x30);
      puVar7 = (undefined4 *)(in_stack_00000004 + 0x30);
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      *in_stack_00000008 = *in_stack_00000008 & 0xfffbffff;
      FUN_0041e39c();
    }
  }
  return;
}


/* Ghidra address: 00422004; FUN_00422004 */

undefined4 FUN_00422004(void)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  undefined4 uVar2;
  
  FUN_0040886c();
  uVar2 = *(undefined4 *)(in_stack_00000004 + 0x6c);
  uVar1 = FUN_0040a830();
  if ((short)uVar1 == 0) {
    uVar1 = FUN_0040a7a4(*(undefined4 *)(in_stack_00000004 + 0x6c),extraout_EDX,uVar2,
                         *(undefined4 *)(in_stack_00000004 + 0x6c),0);
  }
  if (*(short *)(in_stack_00000004 + 0x74) == 1000) {
    return 0;
  }
  return CONCAT22((short)((uint)uVar1 >> 0x10),1);
}


/* Ghidra address: 00422050; FUN_00422050 */

void FUN_00422050(void)

{
  return;
}


/* Ghidra address: 00422058; FUN_00422058 */

void FUN_00422058(void)

{
  int *piVar1;
  undefined2 extraout_CX;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)(in_stack_00000004 + 0x76);
  if (in_stack_00000008 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(in_stack_00000008 + 0x3e);
  }
  piVar1 = FUN_0042ec88(puVar2,in_stack_00000004 + 0x74,(short)piVar1,piVar1,
                        (undefined2 *)(in_stack_00000004 + 0x74));
  FUN_0042ec88(piVar1,extraout_EDX,extraout_CX,piVar1,puVar2);
  FUN_0042ed84();
  return;
}


/* Ghidra address: 004220a0; FUN_004220a0 */

void FUN_004220a0(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_004368d0;
    *(undefined2 *)(in_stack_00000004 + 0x1b) = 0;
    FUN_0041e238();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 004220dc; FUN_004220dc */

int FUN_004220dc(void)

{
  int in_stack_00000004;
  
  FUN_0041e2c4();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_004368d0;
  *(undefined2 *)(in_stack_00000004 + 0x78) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x72) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x76) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x74) = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00422118; FUN_00422118 */

int FUN_00422118(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int in_stack_00000004;
  
  bVar4 = 0;
  FUN_0041e2c4();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_LAB_004368a0;
  puVar2 = *(undefined4 **)(in_stack_00000004 + 100);
  puVar3 = (undefined4 *)(in_stack_00000004 + 0x8f);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(int *)(in_stack_00000004 + 100) = in_stack_00000004 + 0x8f;
  *(undefined1 *)(in_stack_00000004 + 0x74) = 2;
  *(undefined4 *)(in_stack_00000004 + 0x75) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x7f) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x72) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x7d) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x7b) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x83) = 1;
  *(undefined2 *)(in_stack_00000004 + 0x79) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x8d) = *(undefined2 *)(in_stack_00000004 + 0x1b);
  *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) & 0xffef;
  if ((*(byte *)(in_stack_00000004 + 0x8d) & 8) == 0) {
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 2;
  }
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 004221ac; FUN_004221ac */

void FUN_004221ac(void)

{
  return;
}


/* Ghidra address: 004221b4; FUN_004221b4 */

void FUN_004221b4(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined2 extraout_CX;
  undefined4 extraout_EDX;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)(param_4 + 0x81);
  if (param_5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_5 + 0x3e;
  }
  piVar2 = FUN_0042ec88(iVar1,puVar3,param_3,(int *)iVar1,(undefined2 *)(param_4 + 0x7f));
  FUN_0042ec88(piVar2,extraout_EDX,extraout_CX,piVar2,puVar3);
  FUN_0042eacc();
  return;
}


/* Ghidra address: 004221fc; FUN_004221fc */

undefined4 FUN_004221fc(void)

{
  ushort *puVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 100) == 0) {
    FUN_00427b9f();
  }
  else if (*(short *)(in_stack_00000004 + 0x81) != 10) {
    FUN_00409f40();
  }
  if ((*(byte *)(in_stack_00000004 + 0x1b) & 1) == 0) {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 & 0xfffe;
  }
  else {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 | 1;
  }
  if ((*(byte *)(in_stack_00000004 + 0x1b) & 8) == 0) {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 & 0xfff7;
  }
  else {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 | 8;
  }
  return *(undefined4 *)(in_stack_00000004 + 100);
}


/* Ghidra address: 0042227c; FUN_0042227c */

void FUN_0042227c(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000004;
  
  if ((*(char *)(in_stack_00000004 + 0x74) == '\x02') &&
     (*(short *)(in_stack_00000004 + 0x70) <= *(short *)(in_stack_00000004 + 0x83))) {
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 8;
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) & 0xfffd;
    FUN_00427d84();
    uVar1 = FUN_0040a830();
    if ((short)uVar1 == 0) {
      FUN_0040a7dc();
    }
    *(short *)(in_stack_00000004 + 0x70) = *(short *)(in_stack_00000004 + 0x70) + 1;
    iVar2 = (int)*(short *)(in_stack_00000004 + 0x83);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if (iVar2 >> 2 < (int)*(short *)(in_stack_00000004 + 0x70)) {
      *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x10;
      return;
    }
  }
  else {
    *(undefined1 *)(in_stack_00000004 + 0x74) = 1;
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x10;
    FUN_0040a7fc();
    *(byte *)(in_stack_00000004 + 0x21) = ~*(byte *)(in_stack_00000004 + 0x21);
    FUN_0040886c();
    *(int *)(in_stack_00000004 + 0x75) = *(int *)(in_stack_00000004 + 0x75) + -1;
    FUN_00427d42();
  }
  return;
}


/* Ghidra address: 00422324; FUN_00422324 */

void FUN_00422324(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(short *)(in_stack_00000004 + 0x79) < 1) {
    if ((*(char *)(in_stack_00000004 + 0x74) == '\x01') &&
       (0 < *(short *)(in_stack_00000004 + 0x70))) {
      *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) & 0xffef;
      *(short *)(in_stack_00000004 + 0x70) = *(short *)(in_stack_00000004 + 0x70) + -1;
      FUN_00427d84();
      uVar1 = FUN_0040a830();
      if ((short)uVar1 == 0) {
        FUN_0040a7dc();
        return;
      }
    }
    else {
      *(undefined1 *)(in_stack_00000004 + 0x74) = 2;
      *(undefined2 *)(in_stack_00000004 + 0x70) = 0;
      *(undefined2 *)(in_stack_00000004 + 0x1b) = *(undefined2 *)(in_stack_00000004 + 0x8d);
      FUN_0040a7fc();
      *(byte *)(in_stack_00000004 + 0x21) = ~*(byte *)(in_stack_00000004 + 0x21);
      *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) & 0xfff7;
      if ((*(byte *)(in_stack_00000004 + 0x8d) & 8) == 0) {
        *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 2;
      }
      FUN_0040886c();
      *(int *)(in_stack_00000004 + 0x75) = *(int *)(in_stack_00000004 + 0x75) + -1;
      FUN_00427d42();
    }
  }
  return;
}


/* Ghidra address: 004223dc; FUN_004223dc */

void FUN_004223dc(void)

{
  int in_stack_00000004;
  
  if ((*(char *)(in_stack_00000004 + 0x74) == '\x01') && (*(short *)(in_stack_00000004 + 0x79) < 1))
  {
    FUN_00427c8d();
    FUN_00427d42();
  }
  return;
}


/* Ghidra address: 00422428; FUN_00422428 */

void FUN_00422428(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if ((int)*(short *)(in_stack_00000004 + 0x70) ==
      *(short *)(*(int *)(in_stack_00000004 + 0x68) + 4) + -1) {
    FUN_00427d42();
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x10;
    return;
  }
  do {
    iVar1 = FUN_00426946();
    *(int *)(in_stack_00000004 + 100) = iVar1;
  } while (iVar1 == 0);
  FUN_00427d84();
  return;
}


/* Ghidra address: 00422484; FUN_00422484 */

void FUN_00422484(void)

{
  ushort uVar1;
  ushort uVar2;
  int in_stack_00000004;
  uint *in_stack_00000008;
  int in_stack_0000000c;
  
  if ((((*in_stack_00000008 & 0x40000) != 0) &&
      ((((*(byte *)(in_stack_00000004 + 0x1b) & 8) == 0 ||
        ((*(short *)(in_stack_00000004 + 0x81) == 10 &&
         (*(char *)(in_stack_00000004 + 0x74) != '\x03')))) &&
       (*in_stack_00000008 = *in_stack_00000008 & 0xfffbffff,
       *(short *)(in_stack_00000004 + 0x81) == 10)))) &&
     (*(char *)(in_stack_00000004 + 0x74) != '\x03')) {
    *(undefined1 *)(in_stack_00000004 + 0x74) = 3;
    FUN_00409f40();
    *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x10;
  }
  if (*(short *)(in_stack_00000004 + 0x81) != 10) {
    if (((*in_stack_00000008 & 0x800) != 0) && (*(int *)(in_stack_00000004 + 0x75) == 0)) {
      *in_stack_00000008 = *in_stack_00000008 & 0xfffff7ff;
      *(undefined2 *)(in_stack_00000004 + 0x83) = 0xc;
      if (*(short *)(in_stack_0000000c + 0x18) == 0xd) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *(ushort *)(in_stack_0000000c + 0x92);
      }
      uVar1 = *(ushort *)(in_stack_00000004 + 0x7f);
      if (((uVar1 != 0) && ((uVar1 & uVar2) == 0)) &&
         (*(char *)(in_stack_00000004 + 0x74) == '\x02')) {
        if (*(short *)(in_stack_0000000c + 0x18) != 1) {
          return;
        }
        if (uVar1 == 1) {
          *(undefined **)(in_stack_00000004 + 0x85) = &DAT_00436736;
        }
        else if (uVar1 == 2) {
          *(undefined **)(in_stack_00000004 + 0x85) = &DAT_00436748;
        }
        else if (uVar1 == 4) {
          *(undefined **)(in_stack_00000004 + 0x85) = &DAT_00436759;
        }
        else if (uVar1 == 8) {
          *(undefined **)(in_stack_00000004 + 0x85) = &DAT_0043676c;
        }
        else {
          *(undefined **)(in_stack_00000004 + 0x85) = &DAT_0043678d;
        }
        FUN_0040886c();
        return;
      }
      if ((*(char *)(in_stack_00000004 + 0x74) == '\x02') &&
         (*(int *)(in_stack_00000004 + 0x75) == 0)) {
        *(int *)(in_stack_00000004 + 0x75) = *(int *)(in_stack_00000004 + 0x75) + 1;
        FUN_00427c8d();
        if (*(short *)(in_stack_00000004 + 0x81) == 1) {
          *(int *)(in_stack_00000004 + 0x75) = *(int *)(in_stack_00000004 + 0x75) + 1;
          FUN_00427c8d();
        }
      }
    }
    *in_stack_00000008 = *in_stack_00000008 & 0xfffff7ff;
  }
  return;
}


/* Ghidra address: 00422620; FUN_00422620 */

void FUN_00422620(void)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  int iVar2;
  
  iVar2 = in_stack_00000004 + 0x24;
  uVar1 = FUN_0041dac0();
  FUN_0041dd68(uVar1,extraout_EDX,iVar2,in_stack_00000004);
  FUN_00423734();
  return;
}


/* Ghidra address: 00422648; FUN_00422648 */

void FUN_00422648(void)

{
  int iVar1;
  
  iVar1 = FUN_0042329c();
  if ((iVar1 == 0) && (iVar1 = FUN_00423264(), iVar1 == 0)) {
    return;
  }
  FUN_0041e5f0();
  return;
}


/* Ghidra address: 00422684; FUN_00422684 */

void FUN_00422684(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  int in_stack_00000004;
  
  *(undefined2 *)(*(int *)(in_stack_00000004 + 0x34) + 0x3e) = 0x17;
  uVar1 = FUN_0041dc50();
  FUN_0042339c(uVar1,*(undefined4 *)(in_stack_00000004 + 0x34),extraout_ECX,
               *(undefined4 *)(in_stack_00000004 + 0x34));
  *(undefined4 *)(in_stack_00000004 + 0x38) = 1;
  return;
}


/* Ghidra address: 004226b4; FUN_004226b4 */

void FUN_004226b4(void)

{
  FUN_0041dd50();
  return;
}


/* Ghidra address: 004226c4; FUN_004226c4 */

void FUN_004226c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined4 uVar5;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined2 extraout_var_09;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar4 = *(int *)(param_4 + 0x34);
  if (*(short *)(iVar4 + 0xfc) == 0) {
    FUN_00423d7c();
    if (*(int *)(param_4 + 0x3c) == 0) {
      uVar2 = FUN_004232d0();
      if (CONCAT31(extraout_var_05,uVar2) != 0) {
        iVar4 = FUN_00423264();
        if (iVar4 != 0) {
          bVar3 = FUN_004231d4();
          if (CONCAT31(extraout_var_06,bVar3) == 0) {
            bVar3 = FUN_0042365c();
            if (CONCAT31(extraout_var_07,bVar3) != 0) {
              FUN_0041e5f0();
            }
          }
          else {
            FUN_0041e5f0();
          }
        }
      }
      iVar4 = param_4;
      bVar3 = FUN_0041dc34();
      uVar5 = 0;
      uVar6 = extraout_EDX;
      if (CONCAT31(extraout_var_08,bVar3) != 0) {
        uVar5 = FUN_0042339c(CONCAT31(extraout_var_08,bVar3),*(undefined4 *)(param_4 + 0x34),iVar4,
                             *(undefined4 *)(param_4 + 0x34));
        uVar6 = extraout_EDX_00;
      }
      uVar7 = *(undefined4 *)(param_4 + 0x34);
      iVar4 = FUN_004233dc(uVar5,uVar6,uVar7);
      if (iVar4 == 0) {
        uVar5 = FUN_00423430();
        *(undefined4 *)(param_4 + 0x38) = uVar5;
      }
      else {
        FUN_0042339c(iVar4,*(undefined4 *)(param_4 + 0x34),uVar7,*(undefined4 *)(param_4 + 0x34));
      }
      FUN_00423674();
    }
    else {
      if (*(int *)(param_4 + 0x40) == 0) {
        uVar1 = *(undefined2 *)(param_4 + 0x44);
        FUN_00423354((undefined2 *)(param_4 + 0x44),CONCAT22(extraout_var_09,uVar1),
                     *(undefined4 *)(param_4 + 0x34),*(undefined4 *)(param_4 + 0x34),uVar1);
        uVar5 = FUN_00423430();
        *(undefined4 *)(param_4 + 0x38) = uVar5;
        *(uint *)(param_4 + 0x40) = (uint)(*(short *)(*(int *)(param_4 + 0x34) + 0x110) == 0);
      }
      else {
        uVar5 = *(undefined4 *)(param_4 + 0x34);
        uVar2 = FUN_004232d0();
        if (CONCAT31(extraout_var_02,uVar2) == 0) {
          FUN_0042339c(0,*(undefined4 *)(param_4 + 0x34),uVar5,*(undefined4 *)(param_4 + 0x34));
        }
        else {
          *(undefined4 *)(param_4 + 0x40) = 0;
          FUN_0041da94();
          iVar4 = FUN_00423264();
          if (iVar4 != 0) {
            bVar3 = FUN_004231d4();
            if (CONCAT31(extraout_var_03,bVar3) == 0) {
              bVar3 = FUN_0042365c();
              if (CONCAT31(extraout_var_04,bVar3) != 0) {
                FUN_0041e5f0();
              }
            }
            else {
              FUN_0041e5f0();
            }
          }
        }
      }
      FUN_00423674();
    }
  }
  else {
    FUN_0042339c(iVar4,param_2,param_3,iVar4);
    uVar2 = FUN_004232d0();
    if (CONCAT31(extraout_var,uVar2) != 0) {
      *(undefined4 *)(param_4 + 0x40) = 0;
      FUN_0041da94();
      iVar4 = FUN_00423264();
      if (iVar4 != 0) {
        bVar3 = FUN_004231d4();
        if (CONCAT31(extraout_var_00,bVar3) == 0) {
          bVar3 = FUN_0042365c();
          if (CONCAT31(extraout_var_01,bVar3) != 0) {
            FUN_0041e5f0();
          }
        }
        else {
          FUN_0041e5f0();
        }
      }
    }
  }
  return;
}


/* Ghidra address: 00422914; FUN_00422914 */

void FUN_00422914(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  
  uVar1 = FUN_0041dc50();
  FUN_0041dd68(uVar1,extraout_EDX,extraout_ECX,in_stack_00000004);
  *(undefined4 *)(in_stack_00000004 + 0x38) = 0;
  return;
}


/* Ghidra address: 00422938; FUN_00422938 */

void FUN_00422938(void)

{
  FUN_0041dd50();
  return;
}


/* Ghidra address: 00422948; FUN_00422948 */

void FUN_00422948(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  
  iVar2 = in_stack_00000004;
  bVar1 = FUN_0041dc34();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    *(undefined4 *)(in_stack_00000004 + 0x38) = 0;
    return;
  }
  if (*(short *)(*(int *)(in_stack_00000004 + 0x34) + 0xfc) != 0) {
    FUN_0041dd68(*(int *)(in_stack_00000004 + 0x34),extraout_EDX,iVar2,in_stack_00000004);
  }
  bVar1 = FUN_004231d4();
  if ((CONCAT31(extraout_var_00,bVar1) != 0) && (iVar2 = FUN_00423264(), iVar2 != 0)) {
    if (*(int *)(in_stack_00000004 + 0x38) != 0) {
      return;
    }
    FUN_00423718();
    *(undefined4 *)(in_stack_00000004 + 0x38) = 1;
    return;
  }
  FUN_0041e5f0();
  return;
}


/* Ghidra address: 004229c4; FUN_004229c4 */

void FUN_004229c4(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  
  uVar1 = FUN_0041dc50();
  FUN_0041dd68(uVar1,extraout_EDX,extraout_ECX,in_stack_00000004);
  return;
}


/* Ghidra address: 004229e0; FUN_004229e0 */

void FUN_004229e0(void)

{
  FUN_0041dd50();
  return;
}


/* Ghidra address: 004229f0; FUN_004229f0 */

void FUN_004229f0(void)

{
  undefined1 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  int in_stack_00000004;
  
  if (*(short *)(*(int *)(in_stack_00000004 + 0x34) + 0xf8) != *(short *)(in_stack_00000004 + 0x30))
  {
    bVar2 = FUN_0041dc34();
    if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
       (((uVar1 = FUN_004232d0(), CONCAT31(extraout_var_02,uVar1) == 0 ||
         (iVar3 = FUN_00423264(), iVar3 == 0)) ||
        (bVar2 = FUN_0042365c(), CONCAT31(extraout_var_03,bVar2) == 0)))) {
      FUN_0041e5f0();
    }
    *(undefined4 *)(in_stack_00000004 + 0x38) = 0;
    return;
  }
  uVar1 = FUN_004232d0();
  if (CONCAT31(extraout_var,uVar1) == 0) {
    return;
  }
  iVar3 = FUN_00423264();
  if (iVar3 == 0) {
    return;
  }
  bVar2 = FUN_0042365c();
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    return;
  }
  if (*(int *)(in_stack_00000004 + 0x38) != 0) {
    return;
  }
  FUN_0042369c();
  *(undefined4 *)(in_stack_00000004 + 0x38) = 1;
  return;
}


/* Ghidra address: 00422aa0; FUN_00422aa0 */

void FUN_00422aa0(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x3c) = *(undefined4 *)(in_stack_00000004 + 0x38);
  return;
}


/* Ghidra address: 00422ab0; FUN_00422ab0 */

void FUN_00422ab0(void)

{
  int *piVar1;
  int in_stack_00000004;
  
  if (*(short *)(*(int *)(in_stack_00000004 + 0x34) + 0x12e) < 1) {
    FUN_0041e5f0();
    return;
  }
  piVar1 = (int *)(in_stack_00000004 + 0x3c);
  *piVar1 = *piVar1 + -0x29;
  if (*piVar1 < 0) {
    FUN_0041e5f0();
  }
  return;
}


/* Ghidra address: 00422af0; FUN_00422af0 */

void FUN_00422af0(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x38) = 1;
  uVar1 = FUN_0041dc50();
  FUN_0041dd68(uVar1,extraout_EDX,extraout_ECX,in_stack_00000004);
  FUN_0041dda8();
  FUN_0041dda8();
  FUN_004236e4();
  return;
}


/* Ghidra address: 00422b40; FUN_00422b40 */

void FUN_00422b40(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x38) != 0) {
    bVar1 = FUN_0041dc34();
    if (CONCAT31(extraout_var,bVar1) != 0) {
      *(undefined4 *)(in_stack_00000004 + 0x38) = 0;
      FUN_0041dd50();
      FUN_00423790();
    }
  }
  return;
}


/* Ghidra address: 00422b74; FUN_00422b74 */

uint FUN_00422b74(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  uint in_stack_00000004;
  undefined4 local_3c;
  
  FUN_0042b4b4(0x436500);
  FUN_0041eb44();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_0043686c;
  *(undefined2 *)(in_stack_00000004 + 0x92) = 0;
  *(undefined2 *)(in_stack_00000004 + 0xfc) = 0;
  *(undefined2 *)(in_stack_00000004 + 0xfa) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x16a) = 1;
  *(undefined4 *)(in_stack_00000004 + 0xf4) = 0;
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0041dae0();
    puVar1[5] = (uint)&PTR_LAB_00436834;
    puVar1[0xd] = in_stack_00000004;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_LAB_00436850;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -4;
  }
  *(uint **)(in_stack_00000004 + 0x114) = puVar1;
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0041dae0();
    puVar1[5] = (uint)&PTR_LAB_00436834;
    puVar1[0xd] = in_stack_00000004;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_LAB_00436818;
    puVar1[0xf] = 0;
    *(undefined2 *)(puVar1 + 0x11) = 0;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -4;
  }
  *(uint **)(in_stack_00000004 + 0x118) = puVar1;
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0041dae0();
    puVar1[5] = (uint)&PTR_LAB_00436834;
    puVar1[0xd] = in_stack_00000004;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_LAB_004367fc;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -4;
  }
  *(uint **)(in_stack_00000004 + 0x11c) = puVar1;
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0041dae0();
    puVar1[5] = (uint)&PTR_LAB_00436834;
    puVar1[0xd] = in_stack_00000004;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_LAB_004367e0;
    puVar1[0xe] = 0;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -4;
  }
  *(uint **)(in_stack_00000004 + 0x120) = puVar1;
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0041dae0();
    puVar1[5] = (uint)&PTR_LAB_00436834;
    puVar1[0xd] = in_stack_00000004;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_LAB_004367c4;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -4;
  }
  *(uint **)(in_stack_00000004 + 0x124) = puVar1;
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0041dae0();
    puVar1[5] = (uint)&PTR_LAB_00436834;
    puVar1[0xd] = in_stack_00000004;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_LAB_004367a8;
    puVar1[0xe] = 1;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -4;
  }
  *(uint **)(in_stack_00000004 + 0x128) = puVar1;
  *(undefined4 *)(in_stack_00000004 + 0x2c) = *(undefined4 *)(in_stack_00000004 + 0x114);
  *(undefined4 *)(in_stack_00000004 + 0x50) = 0xee;
  DAT_0043649e = 0;
  *(undefined1 *)(in_stack_00000004 + 0xfe) = 0;
  DAT_0043637c = 0;
  DAT_00436378 = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_3c;
  return in_stack_00000004;
}


/* Ghidra address: 00422eac; FUN_00422eac */

void FUN_00422eac(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_44;
  
  FUN_0042b4b4(0x436618);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_0043686c;
    iVar3 = *(int *)(in_stack_00000004 + 0x114);
    if (iVar3 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar3 + 0x14))();
    }
    iVar3 = *(int *)(in_stack_00000004 + 0x118);
    if (iVar3 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar3 + 0x14))();
    }
    iVar3 = *(int *)(in_stack_00000004 + 0x11c);
    if (iVar3 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar3 + 0x14))();
    }
    iVar3 = *(int *)(in_stack_00000004 + 0x120);
    if (iVar3 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar3 + 0x14))();
    }
    iVar3 = *(int *)(in_stack_00000004 + 0x124);
    if (iVar3 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar3 + 0x14))();
    }
    iVar3 = *(int *)(in_stack_00000004 + 0x128);
    if (iVar3 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar3 + 0x14))();
    }
    puVar1 = *(undefined4 **)(in_stack_00000004 + 0x107);
    if (puVar1 != (undefined4 *)0x0) {
      iVar3 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
      (**(code **)*puVar1)();
    }
    puVar1 = *(undefined4 **)(in_stack_00000004 + 0x10b);
    if (puVar1 != (undefined4 *)0x0) {
      iVar3 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
      (**(code **)*puVar1)();
    }
    *(undefined2 *)(in_stack_00000004 + 0x1b) = 0;
    FUN_0041eb08();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_44;
  return;
}


/* Ghidra address: 00423104; FUN_00423104 */

undefined4 FUN_00423104(void)

{
  ushort *puVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    if (*(int *)(*(int *)(in_stack_00000004 + 0x2c) + 0x1c) != 0) {
      FUN_0041e4b4();
      FUN_0041da94();
    }
    (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x2c) + 0x14) + 4))();
    uVar2 = FUN_0041db7c();
    *(undefined4 *)(in_stack_00000004 + 100) = uVar2;
  }
  *(int *)(in_stack_00000004 + 0x50) =
       (int)(short)(**(short **)(in_stack_00000004 + 100) * *(short *)(in_stack_00000004 + 0x1d)) >>
       1;
  if ((*(byte *)(in_stack_00000004 + 0x1b) & 1) == 0) {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 & 0xfffe;
  }
  else {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 | 1;
  }
  if ((*(byte *)(in_stack_00000004 + 0x1b) & 8) == 0) {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 & 0xfff7;
  }
  else {
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 100) + 4);
    *puVar1 = *puVar1 | 8;
  }
  return *(undefined4 *)(in_stack_00000004 + 100);
}


/* Ghidra address: 0042319c; FUN_0042319c */

int FUN_0042319c(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = *(int *)(*(int *)(DAT_0048aab4 + 0x754) + 0x30) - *(int *)(in_stack_00000004 + 0x30);
  iVar1 = *(int *)(*(int *)(DAT_0048aab4 + 0x754) + 0x38) - *(int *)(in_stack_00000004 + 0x38);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}


/* Ghidra address: 004231d4; FUN_004231d4 */

bool FUN_004231d4(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = (int)*(short *)(DAT_0048aab4 + 0x74e) + ((int)*(short *)(DAT_0048aab4 + 0x74e) >> 1);
  if (*(int *)(in_stack_00000004 + 0x13c) < iVar2) {
    iVar2 = *(int *)(in_stack_00000004 + 0x13c);
  }
  iVar1 = FUN_0042319c();
  return iVar1 <= iVar2;
}


/* Ghidra address: 00423210; FUN_00423210 */

undefined2 * FUN_00423210(void)

{
  undefined2 *in_stack_00000004;
  
  FUN_00409020();
  FUN_0041da94();
  *in_stack_00000004 = 0;
  return in_stack_00000004;
}


/* Ghidra address: 00423264; FUN_00423264 */

int FUN_00423264(void)

{
  undefined4 uVar1;
  
  FUN_0041da64();
  uVar1 = FUN_0041fa14();
  return (int)(short)uVar1;
}


/* Ghidra address: 0042329c; FUN_0042329c */

undefined4 FUN_0042329c(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_0042319c();
  if ((*(int *)(in_stack_00000004 + 0x13c) <= iVar1) &&
     (*(char *)(in_stack_00000004 + 0xfe) == '\0')) {
    return 0;
  }
  *(undefined1 *)(in_stack_00000004 + 0xfe) = 0;
  return 1;
}


/* Ghidra address: 004232d0; FUN_004232d0 */

/* WARNING: Removing unreachable block (ram,0x00423322) */
/* WARNING: Removing unreachable block (ram,0x0042334c) */

undefined1 FUN_004232d0(void)

{
  int in_stack_00000004;
  undefined2 local_a;
  
  FUN_00423210();
  FUN_0041da94();
  *(undefined2 *)(in_stack_00000004 + 0x3c) = local_a;
  return 1;
}


/* Ghidra address: 00423354; FUN_00423354 */

void FUN_00423354(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined2 param_5)

{
  undefined2 local_6;
  
  FUN_0041da64();
  local_6 = (short)((uint)param_3 >> 0x10);
  if (local_6 < *(short *)(param_4 + 0x3e)) {
    *(undefined2 *)(param_4 + 0x3c) = param_5;
  }
  else if (local_6 < 0xb5) {
    *(uint *)(param_4 + 0x22) = *(uint *)(param_4 + 0x22) | 8;
  }
  else {
    *(uint *)(param_4 + 0x22) = *(uint *)(param_4 + 0x22) | 4;
  }
  return;
}


/* Ghidra address: 0042339c; FUN_0042339c */

void FUN_0042339c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined2 local_6;
  
  puVar1 = FUN_00423210();
  local_6 = (undefined2)((uint)param_3 >> 0x10);
  FUN_00423354(CONCAT22((short)((uint)puVar1 >> 0x10),local_6),extraout_EDX,extraout_ECX,param_4,
               local_6);
  FUN_0041ebec();
  return;
}


/* Ghidra address: 004233dc; FUN_004233dc */

undefined4 FUN_004233dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined2 local_6;
  
  FUN_00423210();
  FUN_0041da94();
  local_6 = (short)((uint)param_3 >> 0x10);
  if ((local_6 < 0x2e) || (0x13a < local_6)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* Ghidra address: 00423430; FUN_00423430 */

undefined4 FUN_00423430(void)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  int in_stack_00000004;
  int local_54 [2];
  int local_4c;
  int local_3c;
  undefined2 local_1e;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  short local_a;
  undefined4 local_8;
  
  bVar6 = 0;
  local_8 = 1;
  sVar1 = *(short *)(in_stack_00000004 + 0x110);
  *(short *)(in_stack_00000004 + 0x110) = *(short *)(in_stack_00000004 + 0x110) + 1;
  if (*(short *)(in_stack_00000004 + 0x112) <= sVar1) {
    *(undefined2 *)(in_stack_00000004 + 0x110) = 0;
    local_8 = 1;
    FUN_0041e39c();
    piVar4 = (int *)(in_stack_00000004 + 0x30);
    piVar5 = local_54;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
    }
    local_10 = *(int *)(in_stack_00000004 + 0x38);
    local_14 = *(int *)(in_stack_00000004 + 0x30);
    sVar1 = (short)(local_10 / (int)DAT_0048aab4[0x3a7]);
    local_a = (short)(local_14 / (int)DAT_0048aab4[0x3a7]);
    if (local_a < 0) {
      local_a = 0;
    }
    if (*DAT_0048aab4 + -1 < (int)local_a) {
      local_a = *DAT_0048aab4 + -1;
    }
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    if (DAT_0048aab4[2] + -1 < (int)sVar1) {
      sVar1 = DAT_0048aab4[2] + -1;
    }
    local_a = local_a + sVar1 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6);
    local_3c = -((int)DAT_0048aab4[0x3a7] >> 1);
    iVar2 = 0;
    do {
      FUN_00412ac8();
      local_18 = local_4c;
      local_1c = local_54[0];
      sVar1 = (short)(local_4c / (int)DAT_0048aab4[0x3a7]);
      sVar3 = (short)(local_54[0] / (int)DAT_0048aab4[0x3a7]);
      if (sVar3 < 0) {
        sVar3 = 0;
      }
      if (*DAT_0048aab4 + -1 < (int)sVar3) {
        sVar3 = *DAT_0048aab4 + -1;
      }
      if (sVar1 < 0) {
        sVar1 = 0;
      }
      if (DAT_0048aab4[2] + -1 < (int)sVar1) {
        sVar1 = DAT_0048aab4[2] + -1;
      }
      sVar3 = sVar3 + sVar1 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6);
    } while ((sVar3 == local_a) && (iVar2 = iVar2 + 1, iVar2 < 10));
    if (sVar3 != local_a) {
      local_8 = 0;
      FUN_00409020();
      FUN_0041da64();
      *(undefined2 *)(in_stack_00000004 + 0x3c) = local_1e;
    }
    FUN_0041e39c();
  }
  *(uint *)(in_stack_00000004 + 0x22) = *(uint *)(in_stack_00000004 + 0x22) | 0x10;
  FUN_0041ebec();
  return local_8;
}


/* Ghidra address: 0042365c; FUN_0042365c */

bool FUN_0042365c(void)

{
  int in_stack_00000004;
  
  return 0 < *(short *)(in_stack_00000004 + 0x136);
}


/* Ghidra address: 00423674; FUN_00423674 */

void FUN_00423674(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x138);
  *(int *)(in_stack_00000004 + 0x138) = *(int *)(in_stack_00000004 + 0x138) + -1;
  if (iVar1 < 1) {
    *(undefined2 *)(in_stack_00000004 + 0x136) = *(undefined2 *)(in_stack_00000004 + 0x132);
  }
  return;
}


/* Ghidra address: 0042369c; FUN_0042369c */

void FUN_0042369c(void)

{
  short sVar1;
  int in_stack_00000004;
  
  sVar1 = *(short *)(in_stack_00000004 + 0x136);
  *(short *)(in_stack_00000004 + 0x136) = *(short *)(in_stack_00000004 + 0x136) + -1;
  if (0 < sVar1) {
    (**(code **)(*(int *)(in_stack_00000004 + 0x14) + 0x24))();
    *(int *)(in_stack_00000004 + 0x138) = *(short *)(in_stack_00000004 + 0x134) * 0x18;
  }
  return;
}


/* Ghidra address: 004236e4; FUN_004236e4 */

void FUN_004236e4(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(short *)(in_stack_00000004 + 0xfc) != 0) {
    iVar1 = 0;
    do {
      FUN_0041fba0();
      iVar1 = iVar1 + 0x1e;
    } while (iVar1 < 0x168);
  }
  return;
}


/* Ghidra address: 00423718; FUN_00423718 */

void FUN_00423718(void)

{
  int in_stack_00000004;
  
  (**(code **)(*(int *)(in_stack_00000004 + 0x14) + 0x24))();
  return;
}


/* Ghidra address: 00423734; FUN_00423734 */

void FUN_00423734(void)

{
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 0x138) = *(short *)(in_stack_00000004 + 0x134) * 0x18;
  *(undefined2 *)(in_stack_00000004 + 0x136) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x110) = *(undefined2 *)(in_stack_00000004 + 0x112);
  *(undefined4 *)(in_stack_00000004 + 0x16a) = 0;
  FUN_00427c8d();
  return;
}


/* Ghidra address: 00423790; FUN_00423790 */

void FUN_00423790(void)

{
  int iVar1;
  int in_stack_00000004;
  
  FUN_0041e39c();
  if (*(short *)(*(int *)(DAT_0048aab4 + 0x30e + (uint)*(byte *)(in_stack_00000004 + 0x10f) * 4) +
                0x74) == 10) {
    FUN_0041e39c();
  }
  if (*(short *)(in_stack_00000004 + 0xfc) == 0) {
    iVar1 = FUN_0041fe80();
    if (*(short *)(iVar1 + 0x18) == 0) {
      iVar1 = FUN_0041fe80();
      if (*(short *)(iVar1 + 0x18) != 0xc) {
        FUN_0041e39c();
      }
    }
    else if (*(short *)(iVar1 + 0x18) == 7) {
      iVar1 = FUN_0041fe80();
      if (*(short *)(iVar1 + 0x79) != 0) {
        *(short *)(iVar1 + 0x79) = *(short *)(iVar1 + 0x79) + -1;
      }
    }
    DAT_0043649e = DAT_0043649e + 1;
  }
  *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x10;
  *(undefined4 *)(in_stack_00000004 + 0x16a) = 1;
  return;
}


/* Ghidra address: 0042384c; FUN_0042384c */

void FUN_0042384c(void)

{
  int in_stack_00000004;
  
  if (*(int *)(*(int *)(in_stack_00000004 + 0x2c) + 0x1c) != 0) {
    FUN_0041e4b4();
    FUN_0041da94();
  }
  (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x2c) + 0x14) + 4))();
  if (*(int *)(in_stack_00000004 + 0x16a) != 0) {
    FUN_00427d42();
  }
  return;
}


/* Ghidra address: 0042389c; FUN_0042389c */

void FUN_0042389c(void)

{
  return;
}


/* Ghidra address: 004238a4; FUN_004238a4 */

void FUN_004238a4(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    if (((*(int *)(in_stack_00000004 + 0xf4) == 0) ||
        (*(int *)(in_stack_00000004 + 0x2c) == *(int *)(in_stack_00000004 + 0x128))) ||
       (*(short *)(in_stack_00000004 + 0xfc) != 0)) {
      puVar4 = (undefined4 *)(in_stack_00000004 + 0xc0);
      puVar5 = (undefined4 *)(in_stack_00000004 + 0x30);
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(int *)(in_stack_00000004 + 0xf4) = *(int *)(in_stack_00000004 + 0xf4) + 1;
      sVar2 = (short)(*(int *)(in_stack_00000004 + 0x38) / (int)DAT_0048aab4[0x3a7]);
      sVar1 = (short)(*(int *)(in_stack_00000004 + 0x30) / (int)DAT_0048aab4[0x3a7]);
      if (sVar1 < 0) {
        sVar1 = 0;
      }
      if (*DAT_0048aab4 + -1 < (int)sVar1) {
        sVar1 = *DAT_0048aab4 + -1;
      }
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      if (DAT_0048aab4[2] + -1 < (int)sVar2) {
        sVar2 = DAT_0048aab4[2] + -1;
      }
      sVar1 = sVar2 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6) + sVar1;
      if (*(short *)(*(int *)(DAT_0048aab4 + (uint)(byte)(&DAT_0048e518)[sVar1] * 2 + 0x187) + 0x18)
          == 0) {
        (&DAT_0048e518)[sVar1] = *(undefined1 *)(in_stack_00000004 + 0xb8);
      }
      *(undefined2 *)(in_stack_00000004 + 0x12e) = *(undefined2 *)(in_stack_00000004 + 0x130);
      *(undefined4 *)(in_stack_00000004 + 0x2c) = *(undefined4 *)(in_stack_00000004 + 0x114);
    }
    else {
      DAT_0043649e = DAT_0043649e + 1;
    }
  }
  return;
}


/* Ghidra address: 004239d0; FUN_004239d0 */

void FUN_004239d0(void)

{
  int iVar1;
  int *piVar2;
  LPVOID pvVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  undefined2 extraout_CX_01;
  undefined2 extraout_CX_02;
  undefined2 extraout_CX_03;
  undefined2 extraout_CX_04;
  undefined2 extraout_CX_05;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  short local_6;
  
  puVar8 = (undefined2 *)(in_stack_00000004 + 0x3e);
  puVar7 = (undefined2 *)(in_stack_00000004 + 0x3c);
  if (in_stack_00000008 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_stack_00000008 + 0x3e;
  }
  piVar2 = FUN_0042e8f8(iVar1,puVar7,in_stack_00000004 + 0x44,(int *)iVar1,
                        (undefined4 *)(in_stack_00000004 + 0x44));
  piVar2 = FUN_0042ec88(piVar2,extraout_EDX,extraout_CX,piVar2,puVar7);
  FUN_0042ec88(piVar2,extraout_EDX_00,extraout_CX_00,piVar2,puVar8);
  FUN_0042e838();
  pvVar3 = FUN_0041d95a();
  *(LPVOID *)(in_stack_00000004 + 0xff) = pvVar3;
  FUN_0042e838();
  pvVar3 = FUN_0041d95a();
  *(LPVOID *)(in_stack_00000004 + 0x103) = pvVar3;
  FUN_0042e838();
  puVar4 = FUN_0041d9de();
  *(uint **)(in_stack_00000004 + 0x107) = puVar4;
  FUN_0042e838();
  puVar4 = FUN_0041d9de();
  *(uint **)(in_stack_00000004 + 0x10b) = puVar4;
  puVar8 = (undefined2 *)(in_stack_00000004 + 0x112);
  puVar7 = (undefined2 *)(in_stack_00000004 + 0x134);
  puVar6 = (undefined2 *)(in_stack_00000004 + 0x132);
  if (in_stack_00000008 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = in_stack_00000008 + 0x3e;
  }
  FUN_0042ec88(in_stack_00000004 + 0x12e,iVar1,(short)in_stack_00000004 + 0x13c,(int *)iVar1,
               (undefined2 *)(in_stack_00000004 + 0x12e));
  FUN_0042eacc();
  piVar2 = FUN_0042ec18();
  piVar2 = FUN_0042ec88(piVar2,extraout_EDX_01,extraout_CX_01,piVar2,puVar6);
  piVar2 = FUN_0042ec88(piVar2,extraout_EDX_02,extraout_CX_02,piVar2,puVar7);
  FUN_0042ec88(piVar2,extraout_EDX_03,extraout_CX_03,piVar2,puVar8);
  puVar8 = (undefined2 *)(in_stack_00000004 + 0xf8);
  puVar7 = (undefined2 *)(in_stack_00000004 + 0xbe);
  piVar2 = FUN_0042ecb8();
  piVar2 = FUN_0042ec88(piVar2,extraout_EDX_04,extraout_CX_04,piVar2,puVar7);
  FUN_0042ec88(piVar2,extraout_EDX_05,extraout_CX_05,piVar2,puVar8);
  FUN_0042ed84();
  if (*(short *)(in_stack_00000004 + 0x12e) < 0) {
    *(undefined2 *)(in_stack_00000004 + 0xfa) = 1;
    *(short *)(in_stack_00000004 + 0x12e) = -*(short *)(in_stack_00000004 + 0x12e);
  }
  if (*(int *)(in_stack_00000004 + 0x44) == 0) {
    *(undefined2 *)(in_stack_00000004 + 0xfc) = 1;
  }
  if (*(short *)(in_stack_00000004 + 0x112) < 0) {
    iVar1 = *(int *)(in_stack_00000004 + 0x118);
    *(undefined4 *)(iVar1 + 0x3c) = 1;
    FUN_0041da94();
    *(undefined2 *)(*(int *)(iVar1 + 0x34) + 0x3c) = *(undefined2 *)(iVar1 + 0x44);
    *(undefined4 *)(iVar1 + 0x40) = 1;
    *(short *)(in_stack_00000004 + 0x112) = -*(short *)(in_stack_00000004 + 0x112);
  }
  *(undefined2 *)(in_stack_00000004 + 0x130) = *(undefined2 *)(in_stack_00000004 + 0x12e);
  FUN_0041dbd0();
  iVar1 = *(int *)(in_stack_00000004 + 0x114);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(in_stack_00000004 + 0x6c);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_0041da94();
  FUN_0041dbd0();
  FUN_0041dbd0();
  iVar1 = *(int *)(in_stack_00000004 + 0x120);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(in_stack_00000004 + 0x107);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_0041dbd0();
  iVar1 = *(int *)(in_stack_00000004 + 0x11c);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(in_stack_00000004 + 0x107);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  uVar5 = FUN_004269f7();
  iVar1 = *(int *)(in_stack_00000004 + 0x124);
  *(undefined4 *)(iVar1 + 0x20) = uVar5;
  *(int *)(iVar1 + 0x38) = (int)local_6;
  FUN_0041dbd0();
  iVar1 = *(int *)(in_stack_00000004 + 0x128);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(in_stack_00000004 + 0x10b);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  uVar5 = FUN_0041db7c();
  *(undefined4 *)(in_stack_00000004 + 100) = uVar5;
  return;
}


/* Ghidra address: 00423cf8; FUN_00423cf8 */

void FUN_00423cf8(void)

{
  int iVar1;
  int in_stack_00000004;
  uint *in_stack_00000008;
  int in_stack_0000000c;
  
  if ((*(short *)(in_stack_00000004 + 0x12e) != 0) && ((*in_stack_00000008 & 0x40000) != 0)) {
    *in_stack_00000008 = *in_stack_00000008 & 0xfffbffff;
    *(short *)(in_stack_00000004 + 0x12e) =
         *(short *)(in_stack_00000004 + 0x12e) - *(short *)(in_stack_0000000c + 0x7c);
    *(undefined1 *)(in_stack_00000004 + 0xfe) = 1;
    if (*(short *)(in_stack_00000004 + 0x132) == 0) {
      iVar1 = *(int *)(in_stack_00000004 + 0x118);
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      iVar1 = *(int *)(iVar1 + 0x34);
      *(undefined2 *)(iVar1 + 0x110) = *(undefined2 *)(iVar1 + 0x112);
    }
    if (*(short *)(in_stack_00000004 + 0x12e) < 1) {
      *(undefined2 *)(in_stack_00000004 + 0x12e) = 0;
      FUN_0041e5f0();
    }
  }
  return;
}


/* Ghidra address: 00423d7c; FUN_00423d7c */

void FUN_00423d7c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_stack_00000004;
  undefined4 local_3c [6];
  int local_24;
  undefined4 local_8;
  
  local_8 = 0x800;
  puVar2 = (undefined4 *)(in_stack_00000004 + 0x30);
  puVar3 = local_3c;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_24 = -(int)*(short *)(DAT_0048aab4 + 0x74e);
  iVar1 = FUN_00411480();
  *(undefined2 *)(in_stack_00000004 + 0x92) = *(undefined2 *)(*(int *)(DAT_0048aab4 + 0x754) + 0x92)
  ;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x20))();
  }
  return;
}


/* Ghidra address: 00424838; FUN_00424838 */

void FUN_00424838(void)

{
  return;
}


/* Ghidra address: 0042483d; FUN_0042483d */

void FUN_0042483d(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  if (in_stack_00000004 != 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    FUN_0041e238();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 00424a1c; FUN_00424a1c */

void FUN_00424a1c(void)

{
  FUN_0040439c();
  FUN_00405078();
  DAT_00436bd8 = 1;
  return;
}


/* Ghidra address: 00424a78; FUN_00424a78 */

void FUN_00424a78(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x436bf4);
  if (0 < DAT_00436be0) {
    FUN_0040a7fc();
    puVar1 = *(undefined4 **)(&DAT_0049a1a0 + DAT_00436be0 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (**(code **)*puVar1)();
    }
    DAT_00436be0 = DAT_00436be0 + -1;
  }
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 00424b00; FUN_00424b00 */

void FUN_00424b00(void)

{
  (**(code **)(*DAT_0044f640 + 0x40))();
  return;
}


/* Ghidra address: 00424b24; FUN_00424b24 */

void FUN_00424b24(void)

{
  FUN_0040afbc();
  FUN_0040d43c();
  FUN_00428fe4();
  FUN_00410b64();
  DAT_0049a1b4 = FUN_0041d904();
  FUN_00424b00();
  return;
}


/* Ghidra address: 00424b90; FUN_00424b90 */

void FUN_00424b90(void)

{
  FUN_0040d388();
  return;
}


/* Ghidra address: 00424ba0; FUN_00424ba0 */

undefined * FUN_00424ba0(void)

{
  FUN_0042cfc4();
  return &DAT_0049a1b8;
}


/* Ghidra address: 00424bc8; FUN_00424bc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424bc8(void)

{
  FUN_0042cfc4();
  FUN_0040a29c();
  FUN_0040a644();
  FUN_0040afbc();
  (**(code **)(*DAT_0044f640 + 0x34))();
  FUN_00405078();
  (**(code **)(*DAT_0044f640 + 0x40))();
  FUN_00405068();
  FUN_00409b1c();
  return;
}


/* Ghidra address: 00424c6c; FUN_00424c6c */

void FUN_00424c6c(void)

{
  FUN_0040afbc();
  DAT_0049a208 = FUN_0041d904();
  return;
}


/* Ghidra address: 00424c98; FUN_00424c98 */

void FUN_00424c98(void)

{
  (**(code **)(*DAT_0044f640 + 0x40))();
  return;
}


/* Ghidra address: 00424cbc; FUN_00424cbc */

void FUN_00424cbc(void)

{
  FUN_0040d388();
  return;
}


/* Ghidra address: 00424ccc; FUN_00424ccc */

void FUN_00424ccc(void)

{
  FUN_0042cfc4();
  FUN_00408c74();
  return;
}


/* Ghidra address: 00424d14; FUN_00424d14 */

void FUN_00424d14(void)

{
  FUN_00408c74();
  return;
}


/* Ghidra address: 00424d20; FUN_00424d20 */

void FUN_00424d20(void)

{
  short sVar1;
  short in_stack_00000004;
  
  DAT_00435498 = DAT_00435498 - in_stack_00000004;
  if (DAT_00435498 < DAT_0049a32e) {
    DAT_00435498 = DAT_0049a32e;
  }
  sVar1 = DAT_0049a336;
  if (in_stack_00000004 != DAT_0049a184) {
    sVar1 = (short)(((int)DAT_0049a336 * (int)in_stack_00000004) / DAT_0049a184);
  }
  DAT_0049a334 = DAT_0049a334 - sVar1;
  if (DAT_0049a334 < DAT_0049a332) {
    DAT_0049a334 = DAT_0049a332;
  }
  return;
}


/* Ghidra address: 00424d90; FUN_00424d90 */

void FUN_00424d90(void)

{
  short sVar1;
  short in_stack_00000004;
  
  DAT_00435498 = DAT_00435498 + in_stack_00000004;
  if (DAT_0049a32c < DAT_00435498) {
    DAT_00435498 = DAT_0049a32c;
  }
  sVar1 = DAT_0049a336;
  if (in_stack_00000004 != DAT_0049a184) {
    sVar1 = (short)(((int)DAT_0049a336 * (int)in_stack_00000004) / DAT_0049a184);
  }
  DAT_0049a334 = DAT_0049a334 + sVar1;
  if (DAT_0049a330 < DAT_0049a334) {
    DAT_0049a334 = DAT_0049a330;
  }
  return;
}


/* Ghidra address: 00424e20; FUN_00424e20 */

void FUN_00424e20(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_0042b4b4(0x436c70);
  DAT_0049a178 = 0;
  puVar2 = FUN_00431988();
  if (puVar2 != (uint *)0x0) {
    FUN_00410754();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  DAT_00434094 = puVar2;
  DAT_0049a17c = puVar2;
  puVar2 = FUN_00431988();
  if (puVar2 != (uint *)0x0) {
    FUN_004018e4();
    *DAT_0049aa2c = *DAT_0049aa2c + -2;
  }
  DAT_0044f640 = puVar2;
  FUN_0042cfc4();
  puVar2 = FUN_00431988();
  if (puVar2 != (uint *)0x0) {
    FUN_0040d2f4();
    *DAT_0049aa2c = *DAT_0049aa2c + -3;
  }
  DAT_0044f6c4 = puVar2;
  FUN_0041d9b0();
  FUN_0040afbc();
  iVar1 = *(int *)((int)DAT_0044f640 + 0x36);
  DAT_0049a184 = iVar1 / 0x28;
  DAT_0049a32c = (undefined2)(iVar1 / 3);
  DAT_0049a32e = (undefined2)(-iVar1 / 3);
  DAT_0049a330 = 0x42;
  DAT_0049a332 = 0xffbe;
  DAT_0049a336 = 5;
  FUN_004281c6();
  FUN_0042cfc4();
  *in_FS_OFFSET = local_30;
  return;
}


/* Ghidra address: 00424fc0; FUN_00424fc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424fc0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 local_34;
  
  bVar7 = 0;
  FUN_0042b4b4(0x436d00);
  FUN_00424bc8();
  DAT_00436b90 = 0;
  DAT_00436bd8 = 0;
  DAT_00436b9c = 0;
  DAT_00436b9a = 0;
  DAT_0043649e = 0;
  DAT_0043649c = 0;
  DAT_00435498 = 0;
  DAT_0049a334 = 0;
  DAT_0049a328 = 0;
  DAT_0049a324 = 0;
  DAT_0049a320 = 0;
  DAT_0049a31c = 0;
  FUN_004281c6();
  DAT_00436c30 = in_stack_00000008;
  _DAT_00436b98 = 8;
  DAT_00436c18 = 0;
  DAT_00436c20 = (uint *)0x0;
  _DAT_00436c24 = 1;
  _DAT_00436c26 = 0;
  _DAT_00436c28 = 0;
  _DAT_00436c2a = 1;
  DAT_00436c2c = (uint *)0x0;
  DAT_00436c34 = 1;
  _DAT_00436c38 = 0;
  DAT_00436c3c = 0;
  DAT_00436c14 = 4;
  uVar2 = FUN_0042fc2c();
  DAT_004356e4 = (undefined2)uVar2;
  DAT_0049a188 = in_stack_00000004;
  _DAT_0049a18c = s_BsintRO1_0043719a;
  _DAT_0049a190 = s_EsintRO1_004371a3;
  DAT_0049a338 = 1;
  puVar3 = FUN_00431988();
  if (puVar3 != (uint *)0x0) {
    FUN_0040809c();
    *DAT_0049aa2c = *DAT_0049aa2c + -2;
  }
  _DAT_0049a340 = (int)*(short *)((int)puVar3 + 0x5f);
  DAT_0043518c = puVar3;
  puVar3 = FUN_00431988();
  if (puVar3 != (uint *)0x0) {
    FUN_00411430();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  DAT_00436c20 = puVar3;
  FUN_00428fe4();
  iVar4 = DAT_00435924;
  uVar2 = extraout_EDX;
  if (DAT_00435924 == 2) {
    iVar4 = FUN_00410b64();
    uVar2 = extraout_EDX_00;
  }
  DAT_0049a388 = *(int *)((int)DAT_00436c20 + 0x442);
  uVar2 = FUN_00420308(iVar4,uVar2,DAT_00436c20,DAT_0049a388);
  DAT_0049a344 = (int)(short)uVar2;
  puVar5 = (undefined4 *)(DAT_0049a388 + 0x30);
  puVar6 = &DAT_0049a354;
  for (iVar4 = 0xd; iVar1 = DAT_0044f640, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  _DAT_00436bcc = DAT_0044f640;
  uVar2 = FUN_0042fc2c();
  DAT_00436ba2._2_2_ = (undefined2)uVar2;
  DAT_00436ba2._0_2_ = *(undefined2 *)(iVar1 + 0x32);
  DAT_0049a180 = 0;
  if (DAT_00436c30 == 1) {
    puVar3 = FUN_00431988();
    if (puVar3 != (uint *)0x0) {
      FUN_00424ba0();
      FUN_0040d708();
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
    }
  }
  else {
    puVar3 = DAT_00436c2c;
    if ((DAT_00436c30 == 2) && (puVar3 = FUN_00431988(), puVar3 != (uint *)0x0)) {
      FUN_0040d6d0();
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
    }
  }
  DAT_00436c2c = puVar3;
  FUN_00409a20();
  DAT_0049a348 = FUN_00409a78();
  DAT_0049a34c = 0;
  DAT_00436c14 = 0;
  FUN_004281c6();
  DAT_00436ba2._2_2_ = *(undefined2 *)(DAT_0044f640 + 0x36);
  _DAT_0049a340 = 1;
  _DAT_0049a1a0 = FUN_0041d904();
  *(ushort *)((int)_DAT_0049a1a0 + 4) = *(ushort *)((int)_DAT_0049a1a0 + 4) | 1;
  FUN_00409a8c();
  FUN_00409a38();
  *in_FS_OFFSET = local_34;
  return;
}


/* Ghidra address: 004253bc; FUN_004253bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004253bc(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined *puVar8;
  uint local_50;
  
  bVar7 = 0;
  iVar2 = 0;
  if ((DAT_004351f0 != 0) && (iVar2 = FUN_00408aa0(), iVar2 == 0)) {
    return 1;
  }
  if (DAT_00436b9a == 0) {
    if ((DAT_00436b9c < 1) || (iVar2 != 1)) {
      local_50 = FUN_00427f4c();
      if ((DAT_00436c30 == 1) && (local_50 != 0)) {
        uVar3 = 10;
      }
      else {
        if ((local_50 & 0x100) != 0) {
          FUN_00408c74();
        }
        FUN_00409a20();
        FUN_00409a20();
        if (DAT_0049a34c == 0) {
          DAT_0049a350 = FUN_00409a78();
          DAT_0049a34c = DAT_0049a350 - DAT_0049a348;
          while (DAT_0049a34c == 0) {
            DAT_0049a350 = FUN_00409a78();
            DAT_0049a34c = DAT_0049a350 - DAT_0049a348;
          }
          DAT_0049a348 = DAT_0049a350;
        }
        DAT_0049a34c = DAT_0049a34c - 1;
        if (2 < DAT_0049a34c) {
          DAT_0049a34c = 2;
        }
        FUN_00409a38();
        FUN_00409a38();
        FUN_00427da7();
        DAT_0049a328 = FUN_00409a58();
        FUN_00409a8c();
        puVar5 = (undefined4 *)(DAT_0049a388 + 0x30);
        puVar6 = &DAT_0049a354;
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        FUN_00409a38();
        FUN_0041b890();
        FUN_00409a8c();
        DAT_0049a31c = FUN_00409a58();
        if (DAT_00436c34 == 5) {
          FUN_0041d5a0();
        }
        else {
          if (DAT_0049a34c == 0) {
            FUN_00409a38();
          }
          cVar1 = FUN_00420820();
          if (cVar1 == '\0') {
            if (DAT_00436bd8 == 1) {
              DAT_00436bd8 = 0;
              FUN_00405078();
            }
          }
          else {
            FUN_00424a1c();
          }
          FUN_0041d5a0();
          if (DAT_0049a34c == 0) {
            FUN_00409a8c();
            DAT_0049a320 = FUN_00409a58();
          }
        }
        if ((((*(int *)(DAT_0049a388 + 200 + *(short *)(DAT_0049a388 + 0x118) * 4) != 0) &&
             ((local_50 & 0x2000000) == 0)) && (DAT_0049a34c == 0)) && (DAT_0043427c != 0)) {
          (**(code **)(*(int *)(*(int *)(DAT_0049a388 + 200 + *(short *)(DAT_0049a388 + 0x118) * 4)
                               + 0x14) + 0x1c))();
        }
        if ((local_50 & 0x2000000) == 0) {
          if (DAT_00436c3c != 0) {
            FUN_0041d558();
          }
          if ((DAT_0049a34c == 0) && (DAT_0043427c != 0)) {
            FUN_00408534();
          }
          DAT_00436c3c = 0;
        }
        else {
          *(undefined2 *)(DAT_00436c20 + 0x4b72) = 1;
          local_50 = local_50 & 0xffffbfff;
          DAT_00436c3c = 1;
        }
        if ((DAT_0049a34c == 0) || (DAT_00436c34 == 5)) {
          (**(code **)(*DAT_0044f640 + 0x38))();
        }
        if (DAT_00436c34 == 5) {
          DAT_00436c34 = 6;
          if (DAT_00436c30 == 0) {
            if (DAT_0049a338 == 1) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 2) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 3) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 4) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 5) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 6) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 7) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 8) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 9) {
              FUN_00408c74();
            }
            else if (DAT_0049a338 == 10) {
              FUN_00408c74();
            }
            DAT_0049a338 = DAT_0049a338 + 1;
          }
        }
        else if (DAT_00436c34 != 6) {
          DAT_00435498 = 0;
          DAT_0049a334 = 0;
          DAT_00436c34 = DAT_00436c34 + 1;
        }
        _DAT_00437640 = 0;
        if ((DAT_00436c30 == 1) && ((local_50 & 0x4000) == 0)) {
          local_50 = FUN_0040d784();
        }
        if (local_50 == 0x80000000) {
          uVar3 = 2;
        }
        else {
          if (((DAT_00436c30 == 2) && ((local_50 & 0x4000) == 0)) &&
             (iVar2 = FUN_0040d768(), iVar2 != 0)) {
            return 10;
          }
          FUN_00409a8c();
          iVar2 = FUN_00409a58();
          _DAT_0049a318 = iVar2 + 1;
          DAT_00436c14 = ((uint)((int)(1000 / (ulonglong)_DAT_0049a318) + DAT_00436c14) >> 1) + 1;
          if (DAT_00436c14 < 4) {
            DAT_00436c14 = 4;
          }
          puVar8 = &DAT_0049a20c;
          DAT_0049a174 = FUN_00409a58();
          uVar3 = FUN_00420308(DAT_0049a174,DAT_0049a388,puVar8,DAT_0049a388);
          DAT_0049a344 = (int)(short)uVar3;
          if (0 < DAT_0049a344) {
            DAT_00436c34 = 1;
            FUN_0040886c();
            if (((DAT_0049a344 == 2) && (DAT_00436c1c < DAT_0049a338)) || (DAT_0049a344 == 3)) {
              FUN_00409a8c();
              if ((DAT_00436b94 == 1) && (DAT_0049a338 <= DAT_00436c1c)) {
                FUN_00424d14();
              }
              else {
                FUN_00424ccc();
              }
              DAT_00436b9a = 1;
              return 1;
            }
            if (DAT_0049a344 == 2) {
              return 0;
            }
          }
          if (DAT_0049a180 != 0) {
            DAT_00435498 = DAT_00435498 + (short)DAT_0049a180;
            if (((0 < DAT_00435498) && (0 < DAT_0049a180)) ||
               ((DAT_00435498 < 0 && (DAT_0049a180 < 0)))) {
              DAT_0049a180 = 0;
              DAT_00435498 = 0;
              DAT_0049a334 = 0;
            }
          }
          if ((DAT_0043764c == 1) && (DAT_00436b90 == 0)) {
            FUN_0040886c();
            DAT_00436b90 = 1;
          }
          else if (((local_50 & 0x2000) == 0) && (DAT_00436b90 == 1)) {
            FUN_0040886c();
            DAT_00436b90 = 0;
          }
          if (local_50 == 0) {
            uVar3 = 1;
          }
          else if ((local_50 & 0x400000) == 0) {
            psVar4 = FUN_0041da64();
            iVar2 = DAT_0049a388;
            *(short *)(DAT_0049a388 + 0x42) = *psVar4;
            (**(code **)(*(int *)(iVar2 + 0x14) + 0x20))();
            if ((local_50 & 0x10000000) != 0) {
              FUN_00424d20();
            }
            if ((local_50 & 0x8000000) != 0) {
              FUN_00424d90();
            }
            if ((local_50 & 0x20000000) != 0) {
              if (DAT_00435498 < 1) {
                if (DAT_00435498 < 0) {
                  DAT_0049a180 = DAT_0049a184;
                }
              }
              else {
                DAT_0049a180 = -DAT_0049a184;
              }
            }
            if ((local_50 & 0x4000) != 0) {
              DAT_00436b9c = 1;
              FUN_00408c74();
            }
            uVar3 = 1;
          }
          else {
            FUN_00420ed0();
            uVar3 = 1;
          }
        }
      }
    }
    else {
      uVar3 = 10;
    }
  }
  else {
    uVar3 = 0xb;
  }
  return uVar3;
}


/* Ghidra address: 00425b40; FUN_00425b40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425b40(void)

{
  int iVar1;
  
  FUN_0040fbf0();
  iVar1 = FUN_0042bebc();
  if (iVar1 != 0) {
    FUN_0042bee8();
    FUN_0042ba40();
  }
  return;
}


/* Ghidra address: 00425c0c; FUN_00425c0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00425c0c(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (DAT_004351f0 == 0) {
    if (DAT_00436b9a == 0) {
      uVar2 = FUN_00427f4c();
      FUN_00409a20();
      FUN_00409a20();
      if (DAT_0049a34c == 0) {
        DAT_0049a350 = FUN_00409a78();
        DAT_0049a34c = DAT_0049a350 - DAT_0049a348;
        while (DAT_0049a34c == 0) {
          DAT_0049a350 = FUN_00409a78();
          DAT_0049a34c = DAT_0049a350 - DAT_0049a348;
        }
        DAT_0049a348 = DAT_0049a350;
      }
      DAT_0049a34c = DAT_0049a34c - 1;
      if (2 < DAT_0049a34c) {
        DAT_0049a34c = 2;
      }
      FUN_00409a38();
      FUN_00409a38();
      FUN_00427da7();
      iVar3 = FUN_00409a58();
      DAT_0049a328 = iVar3 + DAT_0049a328 >> 1;
      FUN_00409a8c();
      puVar4 = (undefined4 *)(DAT_0049a388 + 0x30);
      puVar5 = &DAT_0049a354;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      FUN_00409a38();
      FUN_0041b890();
      FUN_00409a8c();
      iVar3 = FUN_00409a58();
      DAT_0049a31c = iVar3 + DAT_0049a31c >> 1;
      if (DAT_00436c34 == 5) {
        FUN_0041d5a0();
      }
      else {
        if (DAT_0049a34c == 0) {
          FUN_00409a38();
        }
        FUN_0041d5a0();
        if (DAT_0049a34c == 0) {
          FUN_00409a8c();
          DAT_0049a320 = FUN_00409a58();
        }
      }
      if ((DAT_0049a34c == 0) || (DAT_00436c34 == 5)) {
        FUN_00408088();
        FUN_00408534();
        (**(code **)(*DAT_0044f640 + 0x38))();
      }
      _DAT_00437640 = 0;
      FUN_00409a8c();
      iVar3 = FUN_00409a58();
      _DAT_0049a318 = iVar3 + 1;
      DAT_00436c14 = ((uint)((int)(1000 / (ulonglong)_DAT_0049a318) + DAT_00436c14) >> 1) + 1;
      if (DAT_00436c14 < 4) {
        DAT_00436c14 = 4;
      }
      if (uVar2 == 0) {
        uVar1 = 1;
      }
      else if ((uVar2 & 0x4000) == 0) {
        uVar1 = 1;
      }
      else {
        (**(code **)(*DAT_0044f640 + 0x34))();
        FUN_0040b074();
        FUN_00425b40();
        uVar1 = 10;
      }
    }
    else {
      uVar1 = 10;
    }
  }
  else {
    FUN_00408aa0();
    uVar1 = 1;
  }
  return uVar1;
}


/* Ghidra address: 00425e98; FUN_00425e98 */

void FUN_00425e98(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x436d88);
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  FUN_004107b4();
  if (DAT_0044f6c4 != 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + 3;
    FUN_0040d3d4();
  }
  piVar1 = DAT_0044f640;
  if (DAT_0044f640 != (int *)0x0) {
    iVar2 = FUN_0042b677();
    *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
    (**(code **)(*piVar1 + 0x24))();
  }
  *in_FS_OFFSET = local_2c;
  return;
}


/* Ghidra address: 00425f44; FUN_00425f44 */

void FUN_00425f44(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x436dd0);
  DAT_0049a178 = 0;
  FUN_004281c6();
  if (DAT_0043518c != 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + 2;
    FUN_004082d0();
  }
  if (DAT_00436c20 != 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_00411064();
  }
  DAT_00436c20 = 0;
  if (DAT_00436c30 == 2) {
    FUN_0040d768();
    FUN_00424ba0();
    FUN_0040d828();
  }
  if (DAT_00436c2c != 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_0040d73c();
  }
  DAT_00436c2c = 0;
  FUN_0040d388();
  FUN_004281c6();
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 0042603c; FUN_0042603c */

undefined4 FUN_0042603c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined2 local_8;
  
  FUN_0042b4b4(0x436e00);
  FUN_0040fc00();
  FUN_0042cfc4();
  FUN_00409678();
  uVar1 = FUN_004096e4();
  if ((short)uVar1 == 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    if (local_8 != 0) {
      (*(code *)PTR_FUN_00435338)();
    }
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    uVar1 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    if (local_8 != 0) {
      (*(code *)PTR_FUN_00435338)();
    }
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    uVar1 = 1;
    *in_FS_OFFSET = local_2c;
  }
  return uVar1;
}


/* Ghidra address: 00426100; FUN_00426100 */

undefined4 FUN_00426100(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 local_2c;
  undefined2 local_8;
  
  FUN_0042b4b4(0x436e24);
  iVar1 = FUN_0042603c();
  if (iVar1 == 0) {
    uVar2 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    FUN_004096a4();
    FUN_0040978c();
    if (DAT_00499d54 != 0) {
      FUN_00420c20();
    }
    *in_stack_00000004 = DAT_0049a38c;
    *in_stack_00000008 = DAT_0049a390;
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    if (local_8 != 0) {
      (*(code *)PTR_FUN_00435338)();
    }
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
    uVar2 = 1;
    *in_FS_OFFSET = local_2c;
  }
  return uVar2;
}


/* Ghidra address: 004261c8; FUN_004261c8 */

void FUN_004261c8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_2c;
  undefined2 local_8;
  
  FUN_0042b4b4(0x436e48);
  DAT_0049a38c = in_stack_00000004;
  DAT_0049a390 = in_stack_00000008;
  FUN_0042603c();
  if (DAT_00499d54 != 0) {
    FUN_00420ce4();
  }
  FUN_004096a4();
  FUN_00409828();
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (local_8 != 0) {
    (*(code *)PTR_FUN_00435338)();
  }
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return;
}


/* Ghidra address: 00426270; FUN_00426270 */

void FUN_00426270(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 local_24;
  
  bVar4 = 0;
  FUN_0042b4b4(0x436e6c);
  FUN_0040777c();
  puVar2 = &DAT_0043549a;
  puVar3 = &DAT_00436b9e;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_00409a20();
  *in_FS_OFFSET = local_24;
  return;
}


/* Ghidra address: 0042649c; FUN_0042649c */

void FUN_0042649c(void)

{
  LPVOID pvVar1;
  int in_stack_00000004;
  
  pvVar1 = FUN_00410304();
  *(LPVOID *)(in_stack_00000004 + 0x1c) = pvVar1;
  *(undefined2 *)(in_stack_00000004 + 0x24) = 8;
  *(undefined2 *)(in_stack_00000004 + 0x26) = 8;
  return;
}


/* Ghidra address: 004264c0; FUN_004264c0 */

void FUN_004264c0(void)

{
  LPVOID pvVar1;
  int in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  
  FUN_0041034c();
  pvVar1 = FUN_00410304();
  *(LPVOID *)(in_stack_00000004 + 0x1c) = pvVar1;
  (**(code **)(*in_stack_00000008 + 0xc))
            (in_stack_00000008,*in_stack_00000008,in_stack_0000000c,in_stack_00000008,
             *(undefined4 *)(in_stack_00000004 + 0x1c));
  if (in_stack_0000000c < 0) {
    in_stack_0000000c = in_stack_0000000c + 0xff;
  }
  *(short *)(in_stack_00000004 + 0x26) = (short)((uint)in_stack_0000000c >> 8);
  *(undefined2 *)(in_stack_00000004 + 0x24) = *(undefined2 *)(in_stack_00000004 + 0x26);
  return;
}


/* Ghidra address: 00426592; FUN_00426592 */

void FUN_00426592(void)

{
  short sVar1;
  short sVar2;
  int in_stack_00000004;
  byte in_stack_00000010;
  int in_stack_00000014;
  uint uStack_8;
  
  if (in_stack_00000010 < 0x80) {
    uStack_8 = (uint)in_stack_00000010 << 0x10;
  }
  else if ((in_stack_00000010 < 0xf0) && (0xb < in_stack_00000010)) {
    uStack_8 = (uint)(ushort)(in_stack_00000010 - 0x40) << 0x10;
  }
  else {
    uStack_8 = (uint)(ushort)(in_stack_00000010 - 0x10) << 0x10;
  }
  for (sVar2 = 0; sVar2 < *(short *)(in_stack_00000004 + 0x26); sVar2 = sVar2 + 1) {
    sVar1 = 0;
    do {
      if ((*(byte *)(*(int *)(in_stack_00000004 + 0x1c) +
                     (uStack_8 >> 0x10) * (int)*(short *)(in_stack_00000004 + 0x26) + (int)sVar2) &
          (&DAT_0043732c)[sVar1]) == 0) {
        if (in_stack_00000014 != 1) {
          FUN_0042689e();
        }
      }
      else {
        FUN_0042689e();
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 < 8);
  }
  return;
}


/* Ghidra address: 0042664b; FUN_0042664b */

void FUN_0042664b(void)

{
  char *in_stack_00000010;
  
  for (; (*in_stack_00000010 != '\0' && (*in_stack_00000010 != '$'));
      in_stack_00000010 = in_stack_00000010 + 1) {
    if ((*in_stack_00000010 != '\n') && (*in_stack_00000010 != '\r')) {
      FUN_00426592();
    }
  }
  return;
}


/* Ghidra address: 004266a3; FUN_004266a3 */

void FUN_004266a3(void)

{
  FUN_0042d020();
  FUN_0042664b();
  return;
}


/* Ghidra address: 004266d7; FUN_004266d7 */

void FUN_004266d7(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int in_stack_00000004;
  short *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  byte in_stack_00000014;
  int in_stack_00000018;
  ushort local_6;
  
  if (in_stack_00000014 < 0x80) {
    local_6 = (ushort)in_stack_00000014;
  }
  else if ((in_stack_00000014 < 0xf0) && (0xb < in_stack_00000014)) {
    local_6 = in_stack_00000014 - 0x40;
  }
  else {
    local_6 = in_stack_00000014 - 0x10;
  }
  sVar1 = *in_stack_00000008;
  iVar4 = *(int *)(in_stack_00000008 + 7) + in_stack_00000010 * sVar1 + in_stack_0000000c;
  for (sVar3 = 0; sVar3 < *(short *)(in_stack_00000004 + 0x26); sVar3 = sVar3 + 1) {
    sVar2 = 0;
    do {
      if ((*(byte *)(*(int *)(in_stack_00000004 + 0x1c) +
                     (uint)local_6 * (int)*(short *)(in_stack_00000004 + 0x26) + (int)sVar3) &
          (&DAT_00437334)[sVar2]) == 0) {
        if (in_stack_00000018 != 1) {
          *(undefined1 *)(iVar4 + sVar2) = *(undefined1 *)(in_stack_00000004 + 0x22);
        }
      }
      else {
        *(undefined1 *)(iVar4 + sVar2) = *(undefined1 *)(in_stack_00000004 + 0x20);
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 < 8);
    iVar4 = iVar4 + sVar1;
  }
  return;
}


/* Ghidra address: 00426799; FUN_00426799 */

void FUN_00426799(void)

{
  char *in_stack_00000014;
  
  for (; (*in_stack_00000014 != '\0' && (*in_stack_00000014 != '$'));
      in_stack_00000014 = in_stack_00000014 + 1) {
    if ((*in_stack_00000014 != '\n') && (*in_stack_00000014 != '\r')) {
      FUN_004266d7();
    }
  }
  return;
}


/* Ghidra address: 004267f4; FUN_004267f4 */

void FUN_004267f4(void)

{
  FUN_0042d020();
  FUN_00429054();
  FUN_00426799();
  return;
}


/* Ghidra address: 0042689e; FUN_0042689e */

void FUN_0042689e(void)

{
  undefined4 uVar1;
  int *in_stack_00000004;
  
  uVar1 = FUN_004268dc();
  if ((short)uVar1 != 0) {
    (**(code **)(*in_stack_00000004 + 4))();
  }
  return;
}


/* Ghidra address: 004268dc; FUN_004268dc */

undefined4 FUN_004268dc(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int *in_stack_00000014;
  int *in_stack_00000018;
  
  if ((((*in_stack_00000014 < in_stack_00000004) || (in_stack_0000000c < *in_stack_00000014)) ||
      (*in_stack_00000018 < in_stack_00000008)) || (in_stack_00000010 < *in_stack_00000018)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* Ghidra address: 00426946; FUN_00426946 */

undefined4 FUN_00426946(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  short sVar4;
  short *in_stack_00000004;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  undefined2 *in_stack_00000010;
  short *in_stack_00000014;
  short in_stack_00000018;
  
  *in_stack_00000014 = *in_stack_00000014 + 1;
  if (*in_stack_00000014 < in_stack_00000004[1]) {
    sVar4 = 0;
    if (*in_stack_00000004 != 0) {
      sVar4 = (short)((((int)in_stack_00000018 + ((int)*in_stack_00000004 >> 1)) % 0x168) /
                     (int)*in_stack_00000004) * in_stack_00000004[1];
    }
    sVar1 = *in_stack_00000014;
    if (in_stack_00000004[2] <= (short)(sVar4 + sVar1)) {
      FUN_0042a068();
    }
    puVar3 = (undefined2 *)((short)(sVar4 + sVar1) * 10 + *(int *)(in_stack_00000004 + 4));
    *in_stack_00000008 = puVar3[1];
    *in_stack_0000000c = puVar3[2];
    *in_stack_00000010 = *puVar3;
    uVar2 = *(undefined4 *)(puVar3 + 3);
  }
  else {
    *in_stack_00000014 = -1;
    uVar2 = 0;
  }
  return uVar2;
}


/* Ghidra address: 004269f7; FUN_004269f7 */

undefined4 FUN_004269f7(void)

{
  undefined2 *puVar1;
  short sVar2;
  short *in_stack_00000004;
  short in_stack_00000008;
  undefined2 *in_stack_0000000c;
  short in_stack_00000010;
  
  if (in_stack_00000008 < 0) {
    in_stack_00000008 = 0;
  }
  else if (in_stack_00000004[1] <= in_stack_00000008) {
    in_stack_00000008 = in_stack_00000004[1] + -1;
  }
  sVar2 = 0;
  if (*in_stack_00000004 != 0) {
    sVar2 = (short)((((int)in_stack_00000010 + ((int)*in_stack_00000004 >> 1)) % 0x168) /
                   (int)*in_stack_00000004) * in_stack_00000004[1];
  }
  sVar2 = sVar2 + in_stack_00000008;
  if ((in_stack_00000004[2] <= sVar2) || (sVar2 < 0)) {
    FUN_0042a068();
  }
  puVar1 = (undefined2 *)(sVar2 * 10 + *(int *)(in_stack_00000004 + 4));
  *in_stack_0000000c = *puVar1;
  return *(undefined4 *)(puVar1 + 3);
}


/* Ghidra address: 00426a95; FUN_00426a95 */

undefined4 FUN_00426a95(void)

{
  undefined2 *puVar1;
  short sVar2;
  short *in_stack_00000004;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  short in_stack_00000010;
  undefined2 *in_stack_00000014;
  short in_stack_00000018;
  
  if (in_stack_00000010 < 0) {
    in_stack_00000010 = 0;
  }
  else if (in_stack_00000004[1] <= in_stack_00000010) {
    in_stack_00000010 = in_stack_00000004[1] + -1;
  }
  sVar2 = 0;
  if (*in_stack_00000004 != 0) {
    sVar2 = (short)((((int)in_stack_00000018 + ((int)*in_stack_00000004 >> 1)) % 0x168) /
                   (int)*in_stack_00000004) * in_stack_00000004[1];
  }
  if (in_stack_00000004[2] <= (short)(sVar2 + in_stack_00000010)) {
    FUN_0042a068();
  }
  puVar1 = (undefined2 *)((short)(sVar2 + in_stack_00000010) * 10 + *(int *)(in_stack_00000004 + 4))
  ;
  *in_stack_00000008 = puVar1[1];
  *in_stack_0000000c = puVar1[2];
  *in_stack_00000014 = *puVar1;
  return *(undefined4 *)(puVar1 + 3);
}


/* Ghidra address: 00426c10; FUN_00426c10 */

LPVOID FUN_00426c10(void)

{
  LPVOID pvVar1;
  int iVar2;
  short sVar3;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  pvVar1 = FUN_00410304();
  (**(code **)(*in_stack_00000004 + 0xc))
            (in_stack_00000004,*in_stack_00000004,in_stack_00000008,in_stack_00000004,pvVar1);
  *(int *)((int)pvVar1 + 8) = (int)pvVar1 + 0xc;
  iVar2 = *(short *)((int)pvVar1 + 4) * 10 + *(int *)((int)pvVar1 + 8);
  for (sVar3 = 0; sVar3 < *(short *)((int)pvVar1 + 4); sVar3 = sVar3 + 1) {
    *(int *)(*(int *)((int)pvVar1 + 8) + 6 + sVar3 * 10) = iVar2;
    *(int *)(iVar2 + 0xe) = iVar2 + 0x12;
    *(undefined2 *)(iVar2 + 4) = 8;
    iVar2 = *(int *)(iVar2 + 0xe) + *(int *)(iVar2 + 10);
  }
  return pvVar1;
}


/* Ghidra address: 00426cf8; FUN_00426cf8 */

void FUN_00426cf8(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4373f6);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    iVar1 = *(int *)(in_stack_00000004 + 6);
    if (iVar1 != 0) {
      iVar2 = FUN_0042b677();
      *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
      (*(code *)**(undefined4 **)(iVar1 + 4))();
    }
    if (*(int *)(in_stack_00000004 + 10) != 0) {
      FUN_0041034c();
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 00426d80; FUN_00426d80 */

/* WARNING: Removing unreachable block (ram,0x00426e64) */

undefined4 FUN_00426d80(void)

{
  undefined4 uVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined2 *in_stack_0000000c;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x437426);
  thunk_FUN_0042cddc();
  FUN_0042bcf8();
  FUN_004096a4();
  DVar2 = FUN_0042dce8();
  *in_stack_0000000c = (short)DVar2;
  pvVar3 = FUN_00410304();
  *(LPVOID *)(in_stack_00000004 + 10) = pvVar3;
  FUN_0040978c();
  thunk_FUN_0042e178();
  uVar1 = *(undefined4 *)(in_stack_00000004 + 10);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return uVar1;
}


/* Ghidra address: 00426e8c; FUN_00426e8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00426e8c(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  undefined2 extraout_CX_01;
  undefined2 extraout_CX_02;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined2 uVar10;
  char *pcVar11;
  char *pcVar12;
  short *psVar13;
  undefined4 *in_FS_OFFSET;
  byte bVar14;
  int *in_stack_00000004;
  short *in_stack_0000000c;
  int in_stack_00000010;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined1 local_56 [2];
  uint *local_54;
  byte local_4d;
  LPVOID local_4c;
  short *local_48;
  short *local_44;
  short *local_40;
  undefined2 local_3a;
  undefined4 local_38;
  undefined2 local_28;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  
  bVar14 = 0;
  FUN_0042b4b4(0x43748a);
  uVar10 = 0;
  _DAT_0049a468 = 0;
  local_40 = in_stack_0000000c + 0x3a8;
  _DAT_0049a47b = 0x18;
  local_44 = in_stack_0000000c + 0xc2a;
  DAT_0049a69e = '\0';
  local_48 = in_stack_0000000c + 0x14ac;
  DAT_0049a752 = '\0';
  local_4c = (LPVOID)0x0;
  *(undefined4 *)((int)in_stack_00000004 + 10) = 0;
  DAT_00436b94 = 0;
  if (in_stack_00000010 == 0) {
    iVar3 = FUN_0040d618();
    *in_stack_00000004 = iVar3;
  }
  else {
    iVar3 = FUN_00426d80();
    *in_stack_00000004 = iVar3;
  }
  for (sVar2 = 0; sVar2 < (short)in_stack_00000004[1]; sVar2 = sVar2 + 1) {
    if (*(char *)(*in_stack_00000004 + (int)sVar2) == '\r') {
      *(undefined1 *)(*in_stack_00000004 + (int)sVar2) = 10;
    }
  }
  local_8 = FUN_00431988();
  if (local_8 != (uint *)0x0) {
    local_28 = 0x14;
    FUN_0042e498();
    *DAT_0049aa2c = *DAT_0049aa2c + -6;
    local_28 = 8;
  }
  *(uint **)((int)in_stack_00000004 + 6) = local_8;
  do {
    do {
      while( true ) {
        uVar6 = FUN_004279bc();
        sVar2 = (short)uVar6;
        if (sVar2 == 0) {
          if (in_stack_00000010 == 0) {
            FUN_0040d524();
          }
          *DAT_0049aa2c = *DAT_0049aa2c + 1;
          *in_FS_OFFSET = local_38;
          return in_stack_00000004;
        }
        if (sVar2 != 1) break;
        FUN_00429114();
        iVar3 = FUN_0042920c();
        if (iVar3 == 0) {
          uVar10 = 1;
        }
        else {
          FUN_00429114();
          iVar3 = FUN_0042920c();
          if (iVar3 == 0) {
            uVar10 = 2;
          }
          else {
            FUN_00429114();
            iVar3 = FUN_0042920c();
            if (iVar3 == 0) {
              uVar10 = 7;
            }
            else {
              FUN_00429114();
              iVar3 = FUN_0042920c();
              if (iVar3 == 0) {
                uVar10 = 3;
              }
              else {
                FUN_00429114();
                iVar3 = FUN_0042920c();
                if (iVar3 == 0) {
                  uVar10 = 5;
                }
                else {
                  FUN_00429114();
                  iVar3 = FUN_0042920c();
                  if (iVar3 == 0) {
                    uVar10 = 4;
                  }
                  else {
                    FUN_00429114();
                    iVar3 = FUN_0042920c();
                    if (iVar3 == 0) {
                      uVar10 = 6;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } while (sVar2 != 2);
    switch(uVar10) {
    case 1:
      FUN_00429114();
      iVar3 = FUN_0042920c();
      if (iVar3 == 0) {
        iVar3 = FUN_00427a80();
        *in_stack_0000000c = (short)iVar3;
      }
      else {
        FUN_00429114();
        iVar3 = FUN_0042920c();
        if (iVar3 == 0) {
          iVar3 = FUN_00427a80();
          in_stack_0000000c[1] = (short)iVar3;
        }
        else {
          FUN_00429114();
          iVar3 = FUN_0042920c();
          if (iVar3 == 0) {
            iVar3 = FUN_00427a80();
            in_stack_0000000c[2] = (short)iVar3;
          }
          else {
            FUN_00429114();
            iVar3 = FUN_0042920c();
            if (iVar3 == 0) {
              iVar3 = FUN_00427a80();
              in_stack_0000000c[3] = (short)iVar3;
            }
            else {
              FUN_00429114();
              iVar3 = FUN_0042920c();
              if (iVar3 == 0) {
                iVar3 = FUN_00427a80();
                in_stack_0000000c[4] = (short)iVar3;
              }
              else {
                FUN_00429114();
                iVar3 = FUN_0042920c();
                if (iVar3 == 0) {
                  iVar3 = FUN_00427a80();
                  in_stack_0000000c[5] = (short)iVar3;
                }
                else {
                  FUN_00429114();
                  iVar3 = FUN_0042920c();
                  if (iVar3 == 0) {
                    iVar3 = FUN_00427a80();
                    in_stack_0000000c[6] = (short)iVar3;
                  }
                  else {
                    FUN_00429114();
                    iVar3 = FUN_0042920c();
                    if (iVar3 == 0) {
                      iVar3 = FUN_00427a80();
                      in_stack_0000000c[7] = (short)iVar3;
                    }
                    else {
                      FUN_00429114();
                      iVar3 = FUN_0042920c();
                      if (iVar3 == 0) {
                        iVar3 = FUN_00427a80();
                        DAT_0048aaac = (int)(short)iVar3;
                      }
                      else {
                        FUN_00429114();
                        iVar3 = FUN_0042920c();
                        if (iVar3 == 0) {
                          iVar3 = FUN_00427a80();
                          DAT_0043408c = (int)(short)iVar3;
                        }
                        else {
                          FUN_00429114();
                          iVar3 = FUN_0042920c();
                          if (iVar3 == 0) {
                            iVar3 = FUN_00427a80();
                            DAT_00434090 = (int)(short)iVar3;
                          }
                          else {
                            FUN_00429114();
                            iVar3 = FUN_0042920c();
                            if (iVar3 == 0) {
                              iVar3 = FUN_00427a80();
                              DAT_00436b94 = (int)(short)iVar3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    case 2:
      FUN_00429114();
      iVar3 = FUN_0042920c();
      if (iVar3 == 0) {
        FUN_00427aac();
        uVar7 = 0xffffffff;
        pcVar11 = &DAT_0049a536;
        do {
          pcVar12 = pcVar11;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar12 = pcVar11 + (uint)bVar14 * -2 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar11 = pcVar12 + -uVar7;
        psVar13 = in_stack_0000000c + 0x188;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)psVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + ((uint)bVar14 * -2 + 1) * 4;
          psVar13 = psVar13 + (uint)bVar14 * -4 + 2;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)psVar13 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar14 * -2 + 1;
          psVar13 = (short *)((int)psVar13 + (uint)bVar14 * -2 + 1);
        }
        FUN_0040d43c();
        FUN_00407db8();
      }
      break;
    case 3:
      FUN_00429114();
      iVar3 = FUN_0042920c();
      if (iVar3 == 0) {
        FUN_00427aac();
        local_c = FUN_00431988();
        if (local_c != (uint *)0x0) {
          local_28 = 0x2c;
          FUN_0042e498();
          *DAT_0049aa2c = *DAT_0049aa2c + -6;
          local_28 = 0x20;
        }
        puVar5 = local_c;
        piVar4 = FUN_0042e838();
        if (puVar5 == (uint *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)((int)puVar5 + 0x3e);
        }
        FUN_0042ec88(piVar4,&local_3a,(short)piVar9,piVar9,&local_3a);
        local_10 = puVar5;
        if (puVar5 != (uint *)0x0) {
          iVar3 = FUN_0042b677();
          *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
          local_28 = 0x44;
          (**(code **)local_10[1])();
          local_28 = 0x38;
        }
      }
      else {
        FUN_00429114();
        iVar3 = FUN_0042920c();
        if (iVar3 == 0) {
          FUN_00427aac();
          local_4c = FUN_0041d95a();
        }
        else {
          FUN_00429114();
          iVar3 = FUN_0042920c();
          if (iVar3 == 0) {
            FUN_00427aac();
          }
          else {
            local_14 = FUN_00431988();
            if (local_14 != (uint *)0x0) {
              local_28 = 0x5c;
              FUN_0042e498();
              *DAT_0049aa2c = *DAT_0049aa2c + -6;
              local_28 = 0x50;
            }
            puVar19 = (undefined2 *)local_56;
            puVar18 = (undefined2 *)&DAT_0049a46d;
            puVar17 = (undefined2 *)&DAT_0049a46b;
            puVar16 = (undefined2 *)&DAT_0049a47b;
            puVar15 = (undefined2 *)&DAT_0049a468;
            local_54 = local_14;
            piVar4 = FUN_0042ecb8();
            piVar4 = FUN_0042ec88(piVar4,extraout_EDX,extraout_CX,piVar4,puVar15);
            piVar4 = FUN_0042ed54(piVar4,extraout_EDX_00,extraout_ECX,piVar4,puVar16);
            piVar4 = FUN_0042ec88(piVar4,extraout_EDX_01,extraout_CX_00,piVar4,puVar17);
            piVar4 = FUN_0042ec88(piVar4,extraout_EDX_02,extraout_CX_01,piVar4,puVar18);
            FUN_0042ec88(piVar4,extraout_EDX_03,extraout_CX_02,piVar4,puVar19);
            DAT_0049a47d = local_56[0];
            if (local_4d == 0x5f) {
              local_4d = 0x20;
            }
            if (DAT_0049a752 == '\0') {
              DAT_0049a46f = (LPVOID)0x0;
            }
            else {
              DAT_0049a46f = FUN_0041d904();
            }
            *(undefined2 *)((int)DAT_0049a46f + 4) = local_3a;
            _DAT_0049a473 = local_4c;
            if (DAT_0049a69e == '\0') {
              _DAT_0049a477 = (uint *)0x0;
            }
            else {
              _DAT_0049a477 = FUN_0041d9de();
            }
            DAT_0049a46a = local_4d;
            if (*(int *)(in_stack_0000000c + (uint)local_4d * 2 + 0x1a8) != 0) {
              FUN_00427b9f();
            }
            puVar5 = FUN_0041ddc0();
            *(uint **)(in_stack_0000000c + (uint)local_4d * 2 + 0x1a8) = puVar5;
            local_18 = local_54;
            if (local_54 != (uint *)0x0) {
              iVar3 = FUN_0042b677();
              *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
              local_28 = 0x74;
              (**(code **)local_18[1])();
              local_28 = 0x68;
            }
          }
        }
      }
      break;
    case 4:
      FUN_00428fe4();
      local_40 = (short *)((int)local_40 + (int)*in_stack_0000000c);
      break;
    case 5:
      FUN_00428fe4();
      local_44 = (short *)((int)local_44 + (int)*in_stack_0000000c);
      break;
    case 6:
      FUN_00428fe4();
      local_48 = (short *)((int)local_48 + (int)*in_stack_0000000c);
      break;
    case 7:
      FUN_00429114();
      iVar3 = FUN_0042920c();
      if (iVar3 == 0) {
        FUN_00427aac();
        uVar7 = 0xffffffff;
        pcVar11 = &DAT_0049a536;
        do {
          pcVar12 = pcVar11;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar12 = pcVar11 + (uint)bVar14 * -2 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar11 = pcVar12 + -uVar7;
        psVar13 = in_stack_0000000c + 0x198;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)psVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + ((uint)bVar14 * -2 + 1) * 4;
          psVar13 = psVar13 + (uint)bVar14 * -4 + 2;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)psVar13 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar14 * -2 + 1;
          psVar13 = (short *)((int)psVar13 + (uint)bVar14 * -2 + 1);
        }
        FUN_0040d43c();
        FUN_00410ea8();
      }
    }
  } while( true );
}


/* Ghidra address: 004279bc; FUN_004279bc */

undefined4 FUN_004279bc(void)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  while (*(int *)(**(int **)(in_stack_00000004 + 6) + 0xc) == 0) {
    piVar1 = FUN_0042ed84();
    iVar4 = *piVar1;
    if ((*(byte *)(iVar4 + 0xc) & 0x86) != 0) {
      iVar4 = 0;
    }
    if ((iVar4 == 0) || ((*in_stack_00000008 != '#' && (*in_stack_00000008 != '\0')))) break;
  }
  if (*(int *)(**(int **)(in_stack_00000004 + 6) + 0xc) == 0) {
    pcVar3 = in_stack_00000008;
    if (*in_stack_00000008 == '[') {
      while( true ) {
        pcVar3 = pcVar3 + 1;
        if (*pcVar3 == ']') break;
        *in_stack_00000008 = *pcVar3;
        in_stack_00000008 = in_stack_00000008 + 1;
      }
      *in_stack_00000008 = '\0';
      uVar2 = CONCAT22((short)((uint)pcVar3 >> 0x10),1);
    }
    else {
      uVar2 = CONCAT22((short)((uint)*(int **)(in_stack_00000004 + 6) >> 0x10),2);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* Ghidra address: 00427a4c; FUN_00427a4c */

/* WARNING: Removing unreachable block (ram,0x00427a75) */

char * FUN_00427a4c(void)

{
  char *pcVar1;
  
  pcVar1 = FUN_004290c0();
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 == ' ');
  return pcVar1;
}


/* Ghidra address: 00427a80; FUN_00427a80 */

int FUN_00427a80(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = FUN_00427a4c();
  if (pcVar1 == (char *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0042fd94();
  }
  return iVar2;
}


/* Ghidra address: 00427aac; FUN_00427aac */

char * FUN_00427aac(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  char *in_stack_0000000c;
  
  bVar6 = 0;
  pcVar2 = FUN_00427a4c();
  if (pcVar2 == (char *)0x0) {
    *in_stack_0000000c = DAT_00437621;
  }
  else {
    uVar3 = 0xffffffff;
    do {
      pcVar5 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = pcVar2 + (uint)bVar6 * -2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar5 + -uVar3;
    pcVar5 = in_stack_0000000c;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + (uint)bVar6 * -8 + 4;
      pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar6 * -2 + 1;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  return in_stack_0000000c;
}


/* Ghidra address: 00427b00; FUN_00427b00 */

void FUN_00427b00(void)

{
  return;
}


/* Ghidra address: 00427b08; FUN_00427b08 */

void FUN_00427b08(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_24;
  
  FUN_0042b4b4(0x43751a);
  FUN_0040777c();
  *in_FS_OFFSET = local_24;
  return;
}


/* Ghidra address: 00427b48; FUN_00427b48 */

void FUN_00427b48(void)

{
  int iVar1;
  LPCSTR in_stack_00000004;
  CHAR local_104 [256];
  
  wvsprintfA(local_104,in_stack_00000004,&stack0x00000008);
  FUN_0040fbf8();
  iVar1 = FUN_0042bebc();
  if (iVar1 != 0) {
    FUN_0042bee8();
    FUN_0042ba40();
  }
  return;
}


/* Ghidra address: 00427b9f; FUN_00427b9f */

void FUN_00427b9f(void)

{
  LPCSTR in_stack_00000004;
  
  wvsprintfA(&DAT_0049a808,in_stack_00000004,&stack0x00000008);
  FUN_00427b48();
  FUN_0042a068();
  return;
}


/* Ghidra address: 00427be8; FUN_00427be8 */

undefined4 * FUN_00427be8(void)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = in_stack_00000008;
  if (in_stack_00000004[1] != 0) {
    uVar1 = FUN_004319bc();
    in_stack_00000004[2] = uVar1;
  }
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00427c1e; FUN_00427c1e */

void FUN_00427c1e(void)

{
  int *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (int *)0x0) {
    if (in_stack_00000004[1] != 0) {
      FUN_00431964();
      if (*in_stack_00000004 != 0) {
        DAT_00437630 = DAT_00437630 - *in_stack_00000004;
        DAT_0043762c = DAT_0043762c + -1;
        if (DAT_0043762c != 0) {
          *(int *)(in_stack_00000004[3] + 0x10) = in_stack_00000004[4];
          *(int *)(in_stack_00000004[4] + 0xc) = in_stack_00000004[3];
          if (in_stack_00000004 == DAT_00437634) {
            DAT_00437634 = (int *)in_stack_00000004[3];
          }
        }
      }
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 00427c8d; FUN_00427c8d */

void FUN_00427c8d(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  
  uVar3 = (uint)(in_stack_00000014 * 0x18) / 1000;
  if (*in_stack_00000004 < in_stack_00000004[1] + -1) {
    if (*in_stack_00000004 == 0) {
      if (DAT_0043762c == 0) {
        DAT_00437634 = in_stack_00000004;
        in_stack_00000004[4] = (int)in_stack_00000004;
        in_stack_00000004[3] = (int)in_stack_00000004;
      }
      else {
        in_stack_00000004[3] = DAT_00437634[3];
        in_stack_00000004[4] = (int)DAT_00437634;
        *(int **)(in_stack_00000004[3] + 0x10) = in_stack_00000004;
        DAT_00437634[3] = (int)in_stack_00000004;
        DAT_00437634 = in_stack_00000004;
      }
      DAT_0043762c = DAT_0043762c + 1;
    }
    iVar1 = *in_stack_00000004;
    iVar2 = in_stack_00000004[2];
    *(undefined4 *)(iVar2 + 8 + iVar1 * 0x14) = in_stack_00000008;
    *(undefined4 *)(iVar2 + 0xc + iVar1 * 0x14) = in_stack_0000000c;
    *(undefined4 *)(iVar2 + 0x10 + iVar1 * 0x14) = in_stack_00000010;
    *(uint *)(in_stack_00000004[2] + 4 + *in_stack_00000004 * 0x14) = uVar3;
    *(uint *)(in_stack_00000004[2] + *in_stack_00000004 * 0x14) = uVar3;
    *in_stack_00000004 = *in_stack_00000004 + 1;
    DAT_00437630 = DAT_00437630 + 1;
  }
  return;
}


/* Ghidra address: 00427d42; FUN_00427d42 */

void FUN_00427d42(void)

{
  int *in_stack_00000004;
  
  if (*in_stack_00000004 != 0) {
    DAT_0043763c = 0;
  }
  return;
}


/* Ghidra address: 00427d84; FUN_00427d84 */

void FUN_00427d84(void)

{
  int in_stack_00000008;
  
  *(uint *)(DAT_00437638 + 4) = (uint)(in_stack_00000008 * 0x18) / 1000;
  return;
}


/* Ghidra address: 00427da7; FUN_00427da7 */

void FUN_00427da7(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  int local_8;
  
  bVar7 = 0;
  if (DAT_00437630 != 0) {
    for (local_8 = 0; local_8 < DAT_0043762c; local_8 = local_8 + 1) {
      DAT_00437638 = DAT_00437634[2];
      iVar4 = 0;
      for (iVar3 = 0; iVar3 < *DAT_00437634; iVar3 = iVar3 + 1) {
        puVar5 = (undefined4 *)(DAT_00437638 + iVar3 * 0x14);
        puVar6 = (undefined4 *)(DAT_00437638 + iVar4 * 0x14);
        for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        DAT_0043763c = '\x01';
        iVar2 = *(int *)(DAT_00437638 + iVar3 * 0x14);
        piVar1 = (int *)(DAT_00437638 + iVar3 * 0x14);
        *piVar1 = *piVar1 + -1;
        piVar1 = DAT_00437634;
        if (iVar2 < 1) {
          (**(code **)(DAT_00437638 + 8 + iVar3 * 0x14))();
          DAT_00437634 = piVar1;
          *(undefined4 *)(DAT_00437638 + iVar3 * 0x14) =
               *(undefined4 *)(DAT_00437638 + 4 + iVar3 * 0x14);
        }
        if (DAT_0043763c != '\0') {
          iVar4 = iVar4 + 1;
        }
      }
      DAT_00437630 = DAT_00437630 - (*DAT_00437634 - iVar4);
      *DAT_00437634 = iVar4;
      if (iVar4 == 0) {
        *(int *)(DAT_00437634[3] + 0x10) = DAT_00437634[4];
        *(int *)(DAT_00437634[4] + 0xc) = DAT_00437634[3];
        DAT_0043762c = DAT_0043762c + -1;
      }
      DAT_00437634 = (int *)DAT_00437634[3];
    }
  }
  return;
}


/* Ghidra address: 00427f3c; thunk_FUN_004a318e */

/* WARNING: Exceeded maximum restarts with more pending */

int thunk_FUN_004a318e(void)

{
  SHORT SVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  int unaff_EBP;
  int in_stack_00000004;
  
  if (*(int *)(unaff_EBP + 4) != 0x425411) {
    SVar1 = GetAsyncKeyState(in_stack_00000004);
    return (int)SVar1;
  }
  if (((in_stack_00000004 != 0x53) && (in_stack_00000004 != 0x44)) &&
     (((hModule = GetModuleHandleA(s_USER32_dll_004a3234), hModule == (HMODULE)0x0 ||
       (pFVar2 = GetProcAddress(hModule,s_MapVirtualKeyA_004a323f), pFVar2 == (FARPROC)0x0)) ||
      ((((iVar3 = (*pFVar2)(), iVar3 != 0x11 && (iVar3 != 0x1f)) && (iVar3 != 0x1e)) &&
       (iVar3 != 0x20)))))) {
    SVar1 = GetAsyncKeyState(in_stack_00000004);
    return (int)SVar1;
  }
  return 0;
}


/* Ghidra address: 00427f4c; FUN_00427f4c */

uint FUN_00427f4c(void)

{
  SHORT SVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_004a3000();
  iVar3 = thunk_FUN_004a318e();
  iVar5 = 0;
  while (iVar4 = thunk_FUN_004a318e(), iVar4 == 0) {
    iVar5 = iVar5 + 1;
    if (9 < iVar5) {
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x80000;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x100000;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 == 0) {
        iVar3 = thunk_FUN_004a318e();
        if (iVar3 != 0) {
          uVar2 = uVar2 | 4;
        }
        iVar3 = thunk_FUN_004a318e();
        if (iVar3 != 0) {
          uVar2 = uVar2 | 8;
        }
      }
      else {
        iVar3 = thunk_FUN_004a318e();
        if (iVar3 != 0) {
          uVar2 = uVar2 | 0x80000;
        }
        iVar3 = thunk_FUN_004a318e();
        if (iVar3 != 0) {
          uVar2 = uVar2 | 0x100000;
        }
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x400;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x20;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x200;
      }
      SVar1 = GetKeyState(0xd);
      if (SVar1 != 0) {
        uVar2 = uVar2 | 0x800;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x8000000;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x10000000;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x20000000;
      }
      iVar3 = thunk_FUN_004a318e();
      if ((iVar3 == 0) && (SVar1 = GetKeyState(0x14), SVar1 == 0)) {
        DAT_0043764c = 0;
      }
      else {
        uVar2 = uVar2 | 0x2000;
        SVar1 = GetKeyState(0x10);
        if (SVar1 != 0) {
          DAT_0043764c = 2;
        }
        SVar1 = GetKeyState(0x14);
        if (SVar1 != 0) {
          DAT_0043764c = 1;
        }
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x4000;
      }
      if (0 < DAT_0049a178) {
        iVar3 = thunk_FUN_004a318e();
        if (((uVar2 & 0x4000) != 0) && (DAT_00437654 == 1)) {
          iVar3 = -1;
        }
        iVar5 = thunk_FUN_004a318e();
        if (iVar5 != 0) {
          iVar3 = 0;
        }
        if (iVar3 < 0) {
          DAT_00437650 = 1;
        }
        else if (DAT_00437650 == 1) {
          DAT_00437654 = (uint)(DAT_00437654 == 0);
          DAT_00437650 = 0;
        }
        if (DAT_00437654 == 1) {
          uVar2 = uVar2 | 0x2000000;
        }
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        FUN_00408088();
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x80000000;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x8000;
      }
      iVar3 = thunk_FUN_004a318e();
      if (iVar3 != 0) {
        uVar2 = uVar2 | 0x100;
      }
      return uVar2;
    }
  }
  if (iVar3 == 0) {
    return iVar5 + 0x400000;
  }
  if (iVar5 == 1) {
    DAT_0048e514 = 1;
    return uVar2;
  }
  if (iVar5 != 2) {
    return uVar2;
  }
  FUN_00420104();
  return uVar2;
}


/* Ghidra address: 004281c6; FUN_004281c6 */

void FUN_004281c6(void)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  tagMSG local_2c;
  
  iVar1 = 0;
  do {
    (&DAT_0049a918)[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  SetKeyboardState(&DAT_0049a918);
  FUN_00409a20();
  FUN_00409a38();
  do {
    uVar3 = FUN_00427f4c();
    if ((uVar3 == 0) || ((uVar3 & 0x40000000) != 0)) {
      FUN_00409a8c();
      return;
    }
    BVar2 = PeekMessageA(&local_2c,(HWND)0x0,0,0,1);
    if (BVar2 != 0) {
      TranslateMessage(&local_2c);
      DispatchMessageA(&local_2c);
    }
    uVar3 = FUN_00409a58();
  } while (uVar3 < 0xbb9);
  return;
}


/* Ghidra address: 00428258; FUN_00428258 */

undefined4 FUN_00428258(void)

{
  undefined4 in_stack_00000004;
  
  FUN_00428c01();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00428280; FUN_00428280 */

uint FUN_00428280(void)

{
  UINT UVar1;
  MMRESULT MVar2;
  uint uVar3;
  tagAUXCAPSA local_34;
  
  UVar1 = auxGetNumDevs();
  uVar3 = 0;
  if ((ushort)UVar1 != 0) {
    do {
      MVar2 = auxGetDevCapsA(uVar3 & 0xffff,&local_34,0x30);
      if (MVar2 != 0) {
        return uVar3;
      }
      if (((byte)local_34.wTechnology & 1) != 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((ushort)uVar3 < (ushort)UVar1);
  }
  return uVar3;
}


/* Ghidra address: 004282bd; FUN_004282bd */

void FUN_004282bd(void)

{
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0x3bd) {
    FUN_00428c26();
  }
  return;
}


/* Ghidra address: 004282d6; FUN_004282d6 */

void FUN_004282d6(void)

{
  int iVar1;
  int *piVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int local_18 [3];
  short local_c;
  undefined2 local_a;
  
  piVar2 = local_18;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 1;
    piVar2 = piVar2 + 1;
  }
  *(short *)piVar2 = (short)*in_stack_00000008;
  if (*in_stack_00000004 == 0x10) {
    local_18[2] = local_18[2] << 1;
    local_c = local_c << 1;
    local_a = 0x10;
  }
  waveopen();
  iVar1 = 0;
  do {
    FUN_00428c43();
    FUN_00428c7c();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}


/* Ghidra address: 0042836a; FUN_0042836a */

void FUN_0042836a(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_00428ca2();
    FUN_00428ca7();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}


/* Ghidra address: 004283b1; FUN_004283b1 */

DWORD FUN_004283b1(void)

{
  uint uVar1;
  DWORD DVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  DWORD in_stack_00000004;
  DWORD DVar3;
  
  FUN_00431b68();
  FUN_00431b68();
  DAT_0049aa18 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 200) = 0;
  DVar2 = in_stack_00000004;
  uVar1 = FUN_00428280();
  *(short *)(in_stack_00000004 + 0xde) = (short)uVar1;
  DVar3 = in_stack_00000004;
  DVar2 = FUN_00428cbd(uVar1,extraout_EDX,DVar2,in_stack_00000004);
  *(DWORD *)(in_stack_00000004 + 0xc0) = DVar2;
  DVar2 = FUN_00428cd9(DVar2,extraout_EDX_00,DVar3,in_stack_00000004);
  *(DWORD *)(in_stack_00000004 + 0xc4) = DVar2;
  FUN_00428cf7();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00428441; FUN_00428441 */

void FUN_00428441(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *(undefined4 *)(in_stack_00000004 + 200) = 0;
    FUN_00431aa4();
    FUN_00431aa4();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 00428499; FUN_00428499 */

void FUN_00428499(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int in_stack_00000004;
  int local_8;
  
  local_8 = 0;
  if (0 < DAT_0049aa18) {
    DAT_0049aa18 = DAT_0049aa18 + -1;
  }
  for (; DAT_0049aa18 < 2; DAT_0049aa18 = DAT_0049aa18 + 1) {
    iVar6 = in_stack_00000004 + 0x10;
    iVar7 = *(int *)(in_stack_00000004 + 8) * 0x30 + in_stack_00000004;
    piVar8 = (int *)(iVar7 + 0x60);
    iVar1 = *piVar8;
    iVar2 = *(int *)(iVar7 + 100);
    *(undefined4 *)(iVar7 + 0x68) = 0;
    FUN_00429054();
    for (; iVar6 != in_stack_00000004 + 0x60; iVar6 = iVar6 + 0x14) {
      if ((*(byte *)(iVar6 + 4) & 1) == 0) {
        pbVar4 = *(byte **)(iVar6 + 0xc);
        pbVar3 = *(byte **)(iVar6 + 0x10);
        for (psVar5 = (short *)*piVar8; psVar5 != (short *)(iVar1 + (iVar2 >> 1));
            psVar5 = psVar5 + 1) {
          if (pbVar4 == pbVar3) {
            if ((*(byte *)(iVar6 + 4) & 2) == 0) {
              *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) | 1;
              break;
            }
            pbVar4 = *(byte **)(iVar6 + 8);
          }
          *psVar5 = *psVar5 + (*pbVar4 - 0x80) * 0x40;
          pbVar4 = pbVar4 + 1;
        }
        if (*(int *)(iVar7 + 0x68) < (int)psVar5 - *piVar8) {
          *(int *)(iVar7 + 0x68) = (int)psVar5 - *piVar8;
        }
        *(byte **)(iVar6 + 0xc) = pbVar4;
      }
    }
    if (*(int *)(in_stack_00000004 + 0x68 + *(int *)(in_stack_00000004 + 8) * 0x30) == 0) break;
    *(uint *)(in_stack_00000004 + 8) = *(int *)(in_stack_00000004 + 8) + 1U & 1;
    local_8 = local_8 + 1;
  }
  for (; 0 < local_8; local_8 = local_8 + -1) {
    FUN_00428d71();
    *(uint *)(in_stack_00000004 + 0xc) = *(int *)(in_stack_00000004 + 0xc) + 1U & 1;
  }
  if (DAT_0049aa18 == 0) {
    FUN_0042836a();
  }
  return;
}


/* Ghidra address: 004285e9; FUN_004285e9 */

void FUN_004285e9(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int in_stack_00000004;
  int local_8;
  
  local_8 = 0;
  if (0 < DAT_0049aa18) {
    DAT_0049aa18 = DAT_0049aa18 + -1;
  }
  for (; DAT_0049aa18 < 2; DAT_0049aa18 = DAT_0049aa18 + 1) {
    iVar6 = in_stack_00000004 + 0x10;
    iVar7 = *(int *)(in_stack_00000004 + 8) * 0x30 + in_stack_00000004;
    piVar8 = (int *)(iVar7 + 0x60);
    iVar1 = *piVar8;
    iVar2 = *(int *)(iVar7 + 100);
    *(undefined4 *)(iVar7 + 0x68) = 0;
    FUN_00429054();
    for (; iVar6 != in_stack_00000004 + 0x60; iVar6 = iVar6 + 0x14) {
      if ((*(byte *)(iVar6 + 4) & 1) == 0) {
        pbVar4 = *(byte **)(iVar6 + 0xc);
        pbVar3 = *(byte **)(iVar6 + 0x10);
        for (pcVar5 = (char *)*piVar8; pcVar5 != (char *)(iVar1 + iVar2); pcVar5 = pcVar5 + 1) {
          if (pbVar4 == pbVar3) {
            if ((*(byte *)(iVar6 + 4) & 2) == 0) {
              *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) | 1;
              break;
            }
            pbVar4 = *(byte **)(iVar6 + 8);
          }
          *pcVar5 = *pcVar5 + (char)((int)(*pbVar4 - 0x80) >> 2);
          pbVar4 = pbVar4 + 1;
        }
        if (*(int *)(iVar7 + 0x68) < (int)pcVar5 - *piVar8) {
          *(int *)(iVar7 + 0x68) = (int)pcVar5 - *piVar8;
        }
        *(byte **)(iVar6 + 0xc) = pbVar4;
      }
    }
    if (*(int *)(in_stack_00000004 + 0x68 + *(int *)(in_stack_00000004 + 8) * 0x30) == 0) break;
    *(uint *)(in_stack_00000004 + 8) = *(int *)(in_stack_00000004 + 8) + 1U & 1;
    local_8 = local_8 + 1;
  }
  for (; 0 < local_8; local_8 = local_8 + -1) {
    FUN_00428d71();
    *(uint *)(in_stack_00000004 + 0xc) = *(int *)(in_stack_00000004 + 0xc) + 1U & 1;
  }
  if (DAT_0049aa18 == 0) {
    FUN_0042836a();
  }
  return;
}


/* Ghidra address: 00428733; FUN_00428733 */

void FUN_00428733(void)

{
  int *piVar1;
  int in_stack_00000004;
  int *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  int *in_stack_00000010;
  
  for (piVar1 = (int *)(in_stack_00000004 + 0xc); *piVar1 != 0x20746d66;
      piVar1 = (int *)((int)piVar1 + 1)) {
  }
  *in_stack_00000008 = (int)(piVar1 + 2);
  for (; *piVar1 != 0x61746164; piVar1 = (int *)((int)piVar1 + 1)) {
  }
  *in_stack_00000010 = piVar1[1];
  *in_stack_0000000c = piVar1 + 2;
  return;
}


/* Ghidra address: 0042877b; FUN_0042877b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042877b(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_stack_00000004;
  
  FUN_00428d97();
  FUN_00428733();
  iVar3 = 0;
  do {
    if ((*(byte *)(in_stack_00000004 + 0x14 + iVar3 * 0x14) & 1) != 0) {
      FUN_00428c01();
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  _DAT_0043765c = 4;
  iVar1 = 0;
  do {
    if ((*(byte *)(in_stack_00000004 + 0x14 + iVar1 * 0x14) & 1) != 0) {
      _DAT_0043765c = _DAT_0043765c + -1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (iVar3 == 4) {
    uVar2 = 0;
  }
  else {
    if (DAT_0049aa18 == 0) {
      FUN_004282d6();
      FUN_00428c26();
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* Ghidra address: 0042882d; FUN_0042882d */

undefined4 FUN_0042882d(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = 0;
  while ((in_stack_00000008 != *(int *)(in_stack_00000004 + 0x10 + iVar1 * 0x14) ||
         ((*(byte *)(in_stack_00000004 + 0x14 + iVar1 * 0x14) & 1) != 0))) {
    iVar1 = iVar1 + 1;
    if (3 < iVar1) {
      return 0;
    }
  }
  return CONCAT22((short)((uint)iVar1 >> 0x10),1);
}


/* Ghidra address: 0042885e; FUN_0042885e */

void FUN_0042885e(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = 0;
  do {
    if (in_stack_00000008 == *(int *)(in_stack_00000004 + 0x10 + iVar1 * 0x14)) {
      *(undefined4 *)(in_stack_00000004 + 0x14 + iVar1 * 0x14) = 1;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}


/* Ghidra address: 0042888a; FUN_0042888a */

void FUN_0042888a(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int in_stack_00000004;
  
  bVar1 = FUN_00428da2();
  if ((short)CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = 0;
    do {
      *(undefined4 *)(in_stack_00000004 + 0x14 + iVar2 * 0x14) = 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    waveOutReset(*(HWAVEOUT *)(in_stack_00000004 + 200));
  }
  return;
}


/* Ghidra address: 004288be; FUN_004288be */

int * FUN_004288be(void)

{
  undefined2 uVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  undefined4 local_28;
  
  FUN_0042b4b4(0x437670);
  FUN_00428db4();
  *in_stack_00000004 = (int)&PTR_FUN_004376cc;
  in_stack_00000004[1] = 0;
  uVar1 = (**(code **)(*in_stack_00000004 + 4))();
  *(undefined2 *)(in_stack_00000004 + 2) = uVar1;
  FUN_0040a6d8();
  puVar2 = FUN_00431988();
  if (puVar2 != (uint *)0x0) {
    FUN_004283b1();
    *DAT_0049aa2c = *DAT_0049aa2c + -7;
  }
  *(uint **)((int)in_stack_00000004 + 10) = puVar2;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_28;
  return in_stack_00000004;
}


/* Ghidra address: 00428949; FUN_00428949 */

void FUN_00428949(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4376a0);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (int *)0x0) {
    *in_stack_00000004 = (int)&PTR_FUN_004376cc;
    piVar1 = (int *)FUN_0040a6d0();
    if (in_stack_00000004 == piVar1) {
      (**(code **)(*in_stack_00000004 + 0x1c))();
      FUN_0040a6d8();
    }
    if (*(int *)((int)in_stack_00000004 + 10) != 0) {
      *DAT_0049aa2c = *DAT_0049aa2c + 7;
      FUN_00428441();
    }
    FUN_00404fd6();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 004289dc; FUN_004289dc */

void FUN_004289dc(void)

{
  FUN_00428de9();
  return;
}


/* Ghidra address: 004289ed; FUN_004289ed */

bool FUN_004289ed(void)

{
  bool bVar1;
  int in_stack_00000004;
  
  if (*(short *)(in_stack_00000004 + 8) != 0) {
    bVar1 = FUN_00428da2();
    return bVar1;
  }
  return false;
}


/* Ghidra address: 00428aba; FUN_00428aba */

void FUN_00428aba(void)

{
  int in_stack_00000004;
  
  if (*(short *)(in_stack_00000004 + 8) != 0) {
    *(undefined4 *)(in_stack_00000004 + 4) = 0;
    FUN_0042888a();
  }
  return;
}


/* Ghidra address: 00428ad7; FUN_00428ad7 */

void FUN_00428ad7(void)

{
  int in_stack_00000004;
  
  if (*(short *)(in_stack_00000004 + 8) != 0) {
    FUN_0042885e();
  }
  return;
}


/* Ghidra address: 00428c01; FUN_00428c01 */

void FUN_00428c01(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  in_stack_00000004[3] = in_stack_00000008;
  in_stack_00000004[2] = in_stack_00000008;
  in_stack_00000004[4] = in_stack_00000004[2] + in_stack_0000000c;
  in_stack_00000004[1] = in_stack_00000010;
  *in_stack_00000004 = in_stack_00000014;
  return;
}


/* Ghidra address: 00428c26; FUN_00428c26 */

void FUN_00428c26(void)

{
  int *in_stack_00000004;
  
  if (*in_stack_00000004 == 0x10) {
    FUN_00428499();
    return;
  }
  FUN_004285e9();
  return;
}


/* Ghidra address: 00428c43; FUN_00428c43 */

void FUN_00428c43(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  
  in_stack_00000004[2] = 0;
  if (0 < in_stack_0000000c) {
    if (DAT_00437658 < in_stack_0000000c) {
      in_stack_0000000c = DAT_00437658;
    }
    in_stack_00000004[1] = in_stack_0000000c;
    in_stack_00000004[2] = in_stack_0000000c;
  }
  in_stack_00000004[3] = in_stack_00000008;
  in_stack_00000004[5] = in_stack_00000004[1];
  in_stack_00000004[4] = *in_stack_00000004;
  return;
}


/* Ghidra address: 00428c7c; FUN_00428c7c */

void FUN_00428c7c(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x24) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x20) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = *(undefined4 *)(in_stack_00000004 + 8);
  waveOutPrepareHeader
            (*(HWAVEOUT *)(in_stack_00000004 + 0xc),(LPWAVEHDR)(in_stack_00000004 + 0x10),0x20);
  return;
}


/* Ghidra address: 00428ca2; FUN_00428ca2 */

void FUN_00428ca2(void)

{
  return;
}


/* Ghidra address: 00428ca7; FUN_00428ca7 */

void FUN_00428ca7(void)

{
  int in_stack_00000004;
  
  waveOutUnprepareHeader
            (*(HWAVEOUT *)(in_stack_00000004 + 0xc),(LPWAVEHDR)(in_stack_00000004 + 0x10),0x20);
  return;
}


/* Ghidra address: 00428cbd; FUN_00428cbd */

DWORD FUN_00428cbd(undefined4 param_1,undefined4 param_2,DWORD param_3,int param_4)

{
  DWORD local_8;
  
  local_8 = param_3;
  waveOutGetVolume(*(HWAVEOUT *)(param_4 + 200),&local_8);
  return local_8;
}


/* Ghidra address: 00428cd9; FUN_00428cd9 */

DWORD FUN_00428cd9(undefined4 param_1,undefined4 param_2,DWORD param_3,int param_4)

{
  DWORD local_8;
  
  local_8 = param_3;
  auxGetVolume((uint)*(ushort *)(param_4 + 0xde),&local_8);
  return local_8;
}


/* Ghidra address: 00428cf7; FUN_00428cf7 */

void FUN_00428cf7(void)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  
  uVar1 = 8;
  if (in_stack_00000008 == 0x10) {
    uVar1 = 0x10;
  }
  *in_stack_00000004 = uVar1;
  return;
}


/* Ghidra address: 00428d0f; FUN_00428d0f */

void FUN_00428d0f(void)

{
  HGLOBAL pvVar1;
  int *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (int *)0x0) {
    if (*in_stack_00000004 != 0) {
      pvVar1 = GlobalHandle((LPCVOID)*in_stack_00000004);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)*in_stack_00000004);
      GlobalFree(pvVar1);
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 00428d71; FUN_00428d71 */

void FUN_00428d71(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x24) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = *(undefined4 *)(in_stack_00000004 + 8);
  waveOutWrite(*(HWAVEOUT *)(in_stack_00000004 + 0xc),(LPWAVEHDR)(in_stack_00000004 + 0x10),0x20);
  return;
}


/* Ghidra address: 00428d97; FUN_00428d97 */

undefined4 FUN_00428d97(void)

{
  int in_stack_00000004;
  
  return *(undefined4 *)(in_stack_00000004 + 0x14);
}


/* Ghidra address: 00428da2; FUN_00428da2 */

bool FUN_00428da2(void)

{
  return 0 < DAT_0049aa18;
}


/* Ghidra address: 00428db4; FUN_00428db4 */

void FUN_00428db4(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = &PTR_FUN_004347b4;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return;
}


/* Ghidra address: 00428de9; FUN_00428de9 */

void FUN_00428de9(void)

{
  waveOutGetNumDevs();
  return;
}


/* Ghidra address: 00428df3; FUN_00428df3 */

void FUN_00428df3(void)

{
  int in_stack_00000004;
  
  waveOutPause(*(HWAVEOUT *)(in_stack_00000004 + 200));
  return;
}


/* Ghidra address: 00428e06; FUN_00428e06 */

void FUN_00428e06(void)

{
  int in_stack_00000004;
  
  waveOutRestart(*(HWAVEOUT *)(in_stack_00000004 + 200));
  return;
}


/* Ghidra address: 00428eb1; FUN_00428eb1 */

undefined4 * FUN_00428eb1(void)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *in_stack_00000004;
  
  hMem = GlobalAlloc(0x2002,DAT_00437658);
  pvVar1 = GlobalLock(hMem);
  *in_stack_00000004 = pvVar1;
  FUN_00428c43();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00428fc4; FUN_00428fc4 */

char * FUN_00428fc4(void)

{
  char *pcVar1;
  undefined1 in_ZF;
  char *in_stack_00000004;
  char in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_0000000c != 0) {
    do {
      pcVar1 = in_stack_00000004;
      if (in_stack_0000000c == 0) break;
      in_stack_0000000c = in_stack_0000000c + -1;
      pcVar1 = in_stack_00000004 + 1;
      in_ZF = in_stack_00000008 == *in_stack_00000004;
      in_stack_00000004 = pcVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return pcVar1 + -1;
    }
  }
  return (char *)0x0;
}


/* Ghidra address: 00428fe4; FUN_00428fe4 */

undefined4 * FUN_00428fe4(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  uint in_stack_0000000c;
  
  puVar2 = in_stack_00000004;
  for (uVar1 = in_stack_0000000c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)in_stack_00000008;
    in_stack_00000008 = (undefined4 *)((int)in_stack_00000008 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return in_stack_00000004;
}


/* Ghidra address: 00429008; FUN_00429008 */

undefined4 * FUN_00429008(void)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  uint in_stack_0000000c;
  
  if (in_stack_00000004 < in_stack_00000008) {
    puVar3 = in_stack_00000004;
    for (uVar1 = in_stack_0000000c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)in_stack_00000008;
      in_stack_00000008 = (undefined4 *)((int)in_stack_00000008 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  else if (in_stack_00000004 != in_stack_00000008) {
    puVar2 = (undefined1 *)((int)in_stack_00000008 + (in_stack_0000000c - 1));
    puVar4 = (undefined1 *)((int)in_stack_00000004 + (in_stack_0000000c - 1));
    for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar4 = puVar4 + -1;
    }
    puVar3 = (undefined4 *)(puVar2 + -3);
    puVar5 = (undefined4 *)(puVar4 + -3);
    for (uVar1 = in_stack_0000000c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + -1;
      puVar5 = puVar5 + -1;
    }
  }
  return in_stack_00000004;
}


/* Ghidra address: 00429054; FUN_00429054 */

undefined4 * FUN_00429054(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000004;
  undefined1 in_stack_00000008;
  uint in_stack_0000000c;
  
  puVar2 = in_stack_00000004;
  for (uVar1 = in_stack_0000000c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = CONCAT22(CONCAT11(in_stack_00000008,in_stack_00000008),
                       CONCAT11(in_stack_00000008,in_stack_00000008));
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = in_stack_00000008;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return in_stack_00000004;
}


/* Ghidra address: 00429084; FUN_00429084 */

char * FUN_00429084(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  iVar2 = -1;
  pcVar5 = in_stack_00000004;
  do {
    pcVar6 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  do {
    pcVar5 = in_stack_00000008;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = in_stack_00000008 + 1;
    cVar1 = *in_stack_00000008;
    in_stack_00000008 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = pcVar6 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return in_stack_00000004;
}


/* Ghidra address: 004290c0; FUN_004290c0 */

char * FUN_004290c0(void)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  char *in_stack_00000004;
  char in_stack_00000008;
  
  uVar2 = 0xffffffff;
  bVar3 = true;
  pcVar1 = in_stack_00000004;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    bVar3 = *pcVar1 == '\0';
    pcVar1 = pcVar1 + 1;
  } while (!bVar3);
  uVar2 = ~uVar2;
  do {
    pcVar1 = in_stack_00000004;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = in_stack_00000004 + 1;
    bVar3 = in_stack_00000008 == *in_stack_00000004;
    in_stack_00000004 = pcVar1;
  } while (!bVar3);
  if (bVar3) {
    pcVar1 = pcVar1 + -1;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}


/* Ghidra address: 004290e8; FUN_004290e8 */

int FUN_004290e8(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  uVar3 = 0xffffffff;
  pcVar4 = in_stack_00000008;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  do {
    pcVar4 = in_stack_00000004;
    pcVar5 = in_stack_00000008;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = in_stack_00000008 + 1;
    pcVar4 = in_stack_00000004 + 1;
    cVar2 = *in_stack_00000008;
    cVar1 = *in_stack_00000004;
    in_stack_00000004 = pcVar4;
    in_stack_00000008 = pcVar5;
  } while (cVar1 == cVar2);
  return (uint)(byte)pcVar4[-1] - (uint)(byte)pcVar5[-1];
}


/* Ghidra address: 00429114; FUN_00429114 */

int FUN_00429114(void)

{
  char cVar1;
  uint uVar2;
  char *in_stack_00000004;
  
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *in_stack_00000004;
    in_stack_00000004 = in_stack_00000004 + 1;
  } while (cVar1 != '\0');
  return ~uVar2 - 1;
}


/* Ghidra address: 004291bc; FUN_004291bc */

undefined4 FUN_004291bc(void)

{
  uint uVar1;
  undefined4 in_stack_00000004;
  uint in_stack_0000000c;
  
  uVar1 = FUN_00429114();
  if (in_stack_0000000c < uVar1) {
    FUN_00428fe4();
  }
  else {
    FUN_00428fe4();
    FUN_00429054();
  }
  return in_stack_00000004;
}


/* Ghidra address: 0042920c; FUN_0042920c */

int FUN_0042920c(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *in_stack_00000004;
  int in_stack_0000000c;
  
  while( true ) {
    uVar1 = FUN_0042f944();
    uVar2 = FUN_0042f944();
    if (((uVar1 != uVar2) || (*in_stack_00000004 == '\0')) || (in_stack_0000000c == 0)) break;
    in_stack_0000000c = in_stack_0000000c + -1;
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  if (in_stack_0000000c == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_0042f944();
    uVar2 = FUN_0042f944();
    iVar3 = uVar1 - uVar2;
  }
  return iVar3;
}


/* Ghidra address: 0042926c; FUN_0042926c */

char * FUN_0042926c(void)

{
  int iVar1;
  char *pcVar2;
  char *in_stack_00000004;
  char in_stack_00000008;
  
  iVar1 = FUN_00429114();
  pcVar2 = in_stack_00000004 + iVar1;
  while( true ) {
    if (in_stack_00000008 == *pcVar2) {
      return pcVar2;
    }
    if (in_stack_00000004 == pcVar2) break;
    pcVar2 = pcVar2 + -1;
  }
  return (char *)0x0;
}


/* Ghidra address: 00429298; FUN_00429298 */

int FUN_00429298(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_00429114();
  FUN_00428fe4();
  return iVar1 + in_stack_00000004;
}


/* Ghidra address: 004292ec; FUN_004292ec */

void FUN_004292ec(void)

{
  FUN_0042b4b4(0x43771c);
  FUN_004294a0();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  FUN_0042a068();
  return;
}


/* Ghidra address: 00429438; FUN_00429438 */

undefined4 * FUN_00429438(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  undefined4 local_28;
  
  FUN_0042b4b4(0x437740);
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_004325cc();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  *in_stack_00000004 = puVar1;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_28;
  return in_stack_00000004;
}


/* Ghidra address: 004294a0; FUN_004294a0 */

undefined4 * FUN_004294a0(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  undefined4 local_28;
  
  FUN_0042b4b4(0x437770);
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_004325cc();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  *in_stack_00000004 = puVar1;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_28;
  return in_stack_00000004;
}


/* Ghidra address: 0042950c; FUN_0042950c */

void FUN_0042950c(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_004327b0();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 00429544; FUN_00429544 */

void FUN_00429544(void)

{
  FUN_0042b4b4(0x437798);
  FUN_004294a0();
  FUN_0042a068();
  return;
}


/* Ghidra address: 0042958c; FUN_0042958c */

undefined4 * FUN_0042958c(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4377b0);
  if (in_stack_00000008 != in_stack_00000004) {
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_004327b0();
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_004325cc();
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
    }
    *in_stack_00000004 = puVar1;
  }
  *in_FS_OFFSET = local_28;
  return in_stack_00000004;
}


/* Ghidra address: 00429664; FUN_00429664 */

void FUN_00429664(undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00429668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


/* Ghidra address: 0042966b; FUN_0042966b */

char * FUN_0042966b(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 == 0) {
    return s_<notype>_004378c8;
  }
  return (char *)(in_stack_00000004 + (uint)*(ushort *)(in_stack_00000004 + 6));
}


/* Ghidra address: 00429684; FUN_00429684 */

void FUN_00429684(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int in_FS_OFFSET;
  
  if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x30) = 0;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x2c) = 0;
    if (**(int **)(*(int *)(in_FS_OFFSET + 4) + -8) == 0) {
      ___lockDebuggerData_qv();
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x14) = 0xb;
      (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 8))();
      ___unlockDebuggerData_qv();
      return;
    }
    ___lockDebuggerData_qv();
    for (piVar3 = (int *)**(undefined4 **)(*(int *)(in_FS_OFFSET + 4) + -8); piVar3 != (int *)0x0;
        piVar3 = (int *)*piVar3) {
      uVar4 = 10;
      if (*piVar3 == 0) {
        uVar4 = 9;
      }
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x14) = uVar4;
      if ((char)piVar3[0x11] == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)piVar3 + 0x46;
      }
      *(int *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x18) = iVar5;
      if (piVar3[1] == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = FUN_0042966b();
      }
      *(char **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x28) = pcVar6;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x24) = 0;
      pcVar6 = *(char **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x28);
      while ((pcVar6 != (char *)0x0 && (cVar2 = *pcVar6, pcVar6 = pcVar6 + 1, cVar2 != '\0'))) {
        piVar1 = (int *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x24);
        *piVar1 = *piVar1 + 1;
      }
      *(int **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x20) = piVar3;
      (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 8))();
    }
    ___unlockDebuggerData_qv();
  }
  return;
}


/* Ghidra address: 004297d6; FUN_004297d6 */

undefined4 FUN_004297d6(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  if (in_stack_00000008 == in_stack_00000004) {
    return 1;
  }
  if (((short)in_stack_00000004[1] == (short)in_stack_00000008[1]) &&
     (*in_stack_00000004 == *in_stack_00000008)) {
    if (((*(ushort *)(in_stack_00000004 + 1) | *(ushort *)(in_stack_00000008 + 1)) & 0x80) != 0) {
      return 0;
    }
    pcVar3 = (char *)((int)in_stack_00000004 + (uint)*(ushort *)((int)in_stack_00000004 + 6));
    pcVar4 = (char *)((int)in_stack_00000008 + (uint)*(ushort *)((int)in_stack_00000008 + 6));
    do {
      cVar1 = *pcVar3;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
      if (cVar2 != cVar1) {
        return 0;
      }
    } while (cVar1 != '\0');
    return 1;
  }
  return 0;
}


/* Ghidra address: 0042983c; FUN_0042983c */

undefined4 FUN_0042983c(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int in_stack_00000004;
  int in_stack_00000010;
  
  piVar4 = (int *)((uint)*(ushort *)(in_stack_00000004 + 0x12) + in_stack_00000004);
  do {
    iVar2 = *piVar4;
    if (iVar2 == 0) {
      piVar4 = (int *)((uint)*(ushort *)(in_stack_00000004 + 0x10) + in_stack_00000004);
      while( true ) {
        iVar2 = *piVar4;
        if (iVar2 == 0) {
          return 0;
        }
        if ((in_stack_00000010 == 0) || ((piVar4[2] & 3U) != 3)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        iVar1 = FUN_004297d6();
        if ((iVar1 != 0) && (bVar3)) break;
        if (((*(byte *)(iVar2 + 0xc) & 4) != 0) && (iVar2 = FUN_0042983c(), iVar2 != 0)) {
          return 1;
        }
        piVar4 = piVar4 + 3;
      }
      return 1;
    }
    if ((*(byte *)(piVar4 + 2) & 8) == 0) {
      if ((in_stack_00000010 == 0) || ((piVar4[2] & 3U) != 3)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      iVar1 = FUN_004297d6();
      if ((iVar1 != 0) && (bVar3)) {
        return 1;
      }
      if (((*(byte *)(iVar2 + 0xc) & 4) != 0) && (iVar2 = FUN_0042983c(), iVar2 != 0)) {
        return 1;
      }
    }
    piVar4 = piVar4 + 3;
  } while( true );
}


/* Ghidra address: 00429936; FUN_00429936 */

undefined4 FUN_00429936(void)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  while( true ) {
    while( true ) {
      if (in_stack_00000008 == in_stack_00000004) {
        return 1;
      }
      uVar2 = *(ushort *)(in_stack_00000004 + 4);
      uVar3 = *(ushort *)(in_stack_00000008 + 4);
      if ((uVar3 & uVar2 & 0x10) == 0) break;
      uVar6 = uVar2 & 0x300;
      uVar1 = uVar3 & 0x300;
      if (uVar6 != uVar1) {
        if ((in_stack_0000000c != 0) || (uVar6 == uVar1)) {
          return 0;
        }
        if ((byte)(~(byte)(uVar1 >> 8) & (byte)(uVar6 >> 8)) != 0) {
          return 0;
        }
      }
      in_stack_0000000c = 1;
      in_stack_00000004 = *(int *)(in_stack_00000004 + 8);
      in_stack_00000008 = *(int *)(in_stack_00000008 + 8);
    }
    if ((uVar3 & uVar2 & 0x400) == 0) break;
    if ((*(int *)(in_stack_00000004 + 0xc) != *(int *)(in_stack_00000008 + 0xc)) &&
       ((in_stack_0000000c != 0 ||
        (*(int *)(in_stack_00000004 + 0xc) != 0 || *(int *)(in_stack_00000008 + 0xc) != 0)))) {
      return 0;
    }
    in_stack_0000000c = 1;
    in_stack_00000004 = *(int *)(in_stack_00000004 + 8);
    in_stack_00000008 = *(int *)(in_stack_00000008 + 8);
  }
  iVar4 = FUN_004297d6();
  if (iVar4 != 0) {
    return 1;
  }
  if ((((uVar2 & 2) != 0) && ((uVar3 & 1) != 0)) && ((*(byte *)(in_stack_00000004 + 0xc) & 4) != 0))
  {
    uVar5 = FUN_0042983c();
    return uVar5;
  }
  return 0;
}


/* Ghidra address: 00429a45; FUN_00429a45 */

uint * FUN_00429a45(void)

{
  uint *puVar1;
  int in_FS_OFFSET;
  uint in_stack_00000004;
  
  puVar1 = FUN_00431428();
  if (puVar1 == (uint *)0x0) {
    if ((0x80 < in_stack_00000004) ||
       ((*(byte *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 4) & 1) != 0)) {
      FUN_00431fd4();
    }
    puVar1 = (uint *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 4);
    *puVar1 = *puVar1 | 1;
    return *(uint **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x28);
  }
  return puVar1;
}


/* Ghidra address: 00429a94; FUN_00429a94 */

void FUN_00429a94(void)

{
  uint *puVar1;
  int in_FS_OFFSET;
  int in_stack_00000004;
  
  if (in_stack_00000004 == *(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x28)) {
    puVar1 = (uint *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 4);
    *puVar1 = *puVar1 & 0xfffffffe;
    return;
  }
  FUN_00431320();
  return;
}


/* Ghidra address: 00429ac1; FUN_00429ac1 */

bool FUN_00429ac1(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_0000000c;
  byte in_stack_00000010;
  
  iVar3 = FUN_00429936();
  if (iVar3 != 0) {
    return true;
  }
  uVar1 = *(ushort *)(in_stack_00000004 + 4);
  uVar2 = *(ushort *)(in_stack_0000000c + 4);
  if ((uVar2 & 0x20) != 0) {
    iVar3 = FUN_00429936();
    if (iVar3 != 0) {
      return true;
    }
    uVar2 = *(ushort *)(*(int *)(in_stack_0000000c + 8) + 4);
    if ((uVar2 & 0x10) == 0) {
      return false;
    }
    iVar3 = FUN_00429936();
    if (iVar3 != 0) {
      return true;
    }
  }
  if ((uVar2 & 0x10) != 0) {
    if ((in_stack_00000010 & 1) != 0) {
      return true;
    }
    if ((uVar1 & 0x10) == 0) {
      return false;
    }
    if ((uVar2 & 0x40) != 0) {
      return (uVar1 & 0x300) == (uVar2 & 0x300);
    }
  }
  return false;
}


/* Ghidra address: 00429b83; FUN_00429b83 */

void FUN_00429b83(void)

{
  uint uVar1;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  code *in_stack_0000000c;
  uint in_stack_00000010;
  
  if ((in_stack_00000010 & 0x1000) == 0) {
    uVar1 = in_stack_00000010 & 7;
    if (uVar1 == 1) {
      (*in_stack_0000000c)();
      return;
    }
    if (uVar1 == 2) {
      (*in_stack_0000000c)();
      return;
    }
    if (uVar1 == 3) {
      (*in_stack_0000000c)(in_stack_00000004,in_stack_00000008);
      return;
    }
    if (uVar1 != 5) {
      return;
    }
    (*in_stack_0000000c)();
  }
  else {
    uVar1 = in_stack_00000010 & 7;
    if (uVar1 == 1) {
      (*in_stack_0000000c)();
      return;
    }
    if (uVar1 == 2) {
      (*in_stack_0000000c)();
      return;
    }
    if (uVar1 == 3) {
      (*in_stack_0000000c)(0,in_stack_00000008,in_stack_00000004);
      return;
    }
    if (uVar1 == 5) {
      (*in_stack_0000000c)();
      return;
    }
  }
  return;
}


/* Ghidra address: 00429c0a; FUN_00429c0a */

void FUN_00429c0a(void)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_FS_OFFSET;
  undefined4 in_stack_00000004;
  code *in_stack_0000000c;
  uint in_stack_00000010;
  int in_stack_00000014;
  
  uVar5 = 2;
  if (in_stack_00000014 == 0) {
    uVar5 = 0;
  }
  if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
    ___lockDebuggerData_qv();
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x14) = 3;
    *(code **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x18) =
         in_stack_0000000c;
    pcVar3 = FUN_0042966b();
    *(char **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x28) = pcVar3;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x24) = 0;
    pcVar3 = *(char **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x28);
    while ((pcVar3 != (char *)0x0 && (cVar2 = *pcVar3, pcVar3 = pcVar3 + 1, cVar2 != '\0'))) {
      piVar1 = (int *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x24);
      *piVar1 = *piVar1 + 1;
    }
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x1c) =
         in_stack_00000004;
    (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 8))();
    ___unlockDebuggerData_qv();
  }
  uVar4 = in_stack_00000010 & 7;
  if (uVar4 == 1) {
    (*in_stack_0000000c)();
  }
  else if (uVar4 == 2) {
    (*in_stack_0000000c)();
  }
  else if (uVar4 == 3) {
    (*in_stack_0000000c)(uVar5,in_stack_00000004);
  }
  else if (uVar4 == 5) {
    (*in_stack_0000000c)();
  }
  return;
}


/* Ghidra address: 00429d0e; FUN_00429d0e */

void FUN_00429d0e(void)

{
  uint uVar1;
  undefined4 in_stack_00000004;
  code *in_stack_00000008;
  uint in_stack_0000000c;
  
  uVar1 = in_stack_0000000c & 7;
  if (uVar1 == 1) {
    (*in_stack_00000008)();
    return;
  }
  if (uVar1 == 2) {
    (*in_stack_00000008)();
    return;
  }
  if (uVar1 == 3) {
    (*in_stack_00000008)(in_stack_00000004);
    return;
  }
  if (uVar1 != 5) {
    return;
  }
  (*in_stack_00000008)();
  return;
}


/* Ghidra address: 00429d48; FUN_00429d48 */

void FUN_00429d48(void)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  uint *in_stack_00000004;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  ULONG_PTR local_40 [2];
  uint *local_38;
  undefined4 local_34;
  uint *local_30;
  uint local_2c;
  uint *local_28;
  undefined4 local_24;
  undefined2 local_14;
  
  FUN_0042b4b4(0x437814);
  local_28 = in_stack_00000004;
  *(uint *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x24) =
       (uint)*(ushort *)((int)in_stack_00000004 + 6) + (int)in_stack_00000004;
  *(uint *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x20) = in_stack_0000001c;
  *(uint *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x1c) = in_stack_00000020;
  uVar5 = *in_stack_00000004;
  uVar3 = (ushort)in_stack_00000004[1];
  if ((uVar3 & 2) == 0) {
    local_2c = 0;
  }
  else {
    local_2c = in_stack_00000004[3];
  }
  if ((uVar3 & 0x30) != 0) {
    in_stack_00000004 = (uint *)in_stack_00000004[2];
  }
  local_30 = FUN_00429a45();
  *local_30 = **(uint **)(in_FS_OFFSET[1] + -8);
  **(undefined4 **)(in_FS_OFFSET[1] + -8) = local_30;
  local_30[1] = (uint)local_28;
  local_30[3] = in_stack_00000018;
  local_30[4] = uVar5;
  *(ushort *)(local_30 + 6) = uVar3;
  *(undefined2 *)((int)local_30 + 0x1a) = (undefined2)local_2c;
  local_30[5] = (uint)in_stack_00000004;
  local_30[2] = in_stack_0000000c;
  local_30[10] = 0;
  local_30[0xb] = 0;
  local_30[7] = (uint)FUN_00429a94;
  local_30[0xd] = in_stack_0000001c;
  local_30[0xe] = in_stack_00000020;
  local_30[8] = in_stack_00000010;
  local_30[9] = in_stack_00000014;
  *(undefined1 *)((int)local_30 + 0x45) = 0;
  *(undefined1 *)(local_30 + 0x11) = 1;
  FUN_00428fe4();
  if (**(int **)(*(int *)(in_FS_OFFSET[1] + -8) + 0xc) != 0) {
    FUN_00429684();
    if (in_stack_00000028 == 0) {
      ___lockDebuggerData_qv();
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x30) = 0;
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x2c) = 0;
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x14) = 1;
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x18) = in_stack_00000024;
      *(uint **)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x20) = local_30;
      pcVar4 = FUN_0042966b();
      *(char **)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x28) = pcVar4;
      if ((char)local_30[0x11] == '\0') {
        uVar5 = local_30[0x10];
      }
      else {
        uVar5 = (int)local_30 + 0x46;
      }
      *(uint *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x1c) = uVar5;
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x24) = 0;
      pcVar4 = *(char **)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x28);
      while (pcVar4 != (char *)0x0) {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        if (cVar2 == '\0') break;
        piVar1 = (int *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x24);
        *piVar1 = *piVar1 + 1;
      }
      (**(code **)(*(int *)(in_FS_OFFSET[1] + -8) + 8))();
      ___unlockDebuggerData_qv();
    }
  }
  if ((local_2c & 1) != 0) {
    local_34 = *DAT_0049aa2c;
    local_14 = 8;
    FUN_00429b83();
    local_14 = 0;
    *DAT_0049aa2c = local_34;
  }
  if ((in_stack_00000028 == 0) && ((local_2c & 2) != 0)) {
    local_14 = 0x14;
    FUN_00429c0a();
    local_14 = 0;
  }
  local_40[0] = *(ULONG_PTR *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x24);
  local_38 = local_30;
  RaiseException(0xeefface,1,3,local_40);
  *in_FS_OFFSET = local_24;
  return;
}


/* Ghidra address: 0042a068; FUN_0042a068 */

void FUN_0042a068(void)

{
  FUN_00429d48();
  return;
}


/* Ghidra address: 0042a0e6; FUN_0042a0e6 */

void FUN_0042a0e6(void)

{
  PVOID in_stack_00000004;
  PEXCEPTION_RECORD in_stack_00000008;
  EXCEPTION_RECORD local_54;
  
  if (in_stack_00000008 == (PEXCEPTION_RECORD)0x0) {
    local_54.ExceptionCode = 0x26;
    local_54.ExceptionFlags = 2;
    in_stack_00000008 = &local_54;
    local_54.NumberParameters = 0;
  }
  in_stack_00000008->ExceptionFlags = in_stack_00000008->ExceptionFlags | 2;
  FUN_0042b922(in_stack_00000004,in_stack_00000008);
  return;
}


/* Ghidra address: 0042a125; FUN_0042a125 */

void FUN_0042a125(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_24;
  
  FUN_0042b4b4(0x437854);
  FUN_00429c0a();
  *in_FS_OFFSET = local_24;
  return;
}


/* Ghidra address: 0042a177; FUN_0042a177 */

void FUN_0042a177(void)

{
  undefined4 uVar1;
  int in_FS_OFFSET;
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + 0x44) != '\0') {
    if ((*(byte *)(in_stack_00000004 + 0x1a) & 2) != 0) {
      uVar1 = *DAT_0049aa2c;
      FUN_0042a125();
      *DAT_0049aa2c = uVar1;
    }
    *(undefined1 *)(in_stack_00000004 + 0x44) = 0;
  }
  if (*(char *)(in_stack_00000004 + 0x45) != '\0') {
    if (((*(byte *)(*(int *)(in_stack_00000004 + 0x3c) + 4) & 2) != 0) &&
       ((*(byte *)(*(int *)(in_stack_00000004 + 0x3c) + 0xc) & 2) != 0)) {
      FUN_0042a125();
    }
    *(undefined1 *)(in_stack_00000004 + 0x45) = 0;
  }
  if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
    FUN_00429684();
  }
  return;
}


/* Ghidra address: 0042a250; FUN_0042a250 */

undefined4 FUN_0042a250(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  int *in_stack_00000010;
  int *local_8;
  
  while( true ) {
    iVar2 = *in_stack_00000004;
    if (iVar2 == 0) {
      return 0;
    }
    local_8 = (int *)(*in_stack_00000010 + in_stack_00000004[1]);
    if (in_stack_00000008 != 0) {
      local_8 = (int *)*local_8;
    }
    iVar1 = FUN_004297d6();
    if (iVar1 != 0) break;
    if ((((*(byte *)(iVar2 + 4) & 2) != 0) && ((uint)*(ushort *)(iVar2 + 0x10) + iVar2 != 0)) &&
       (iVar2 = FUN_0042a250(), iVar2 != 0)) {
      *in_stack_00000010 = (int)local_8;
      return 1;
    }
    in_stack_00000004 = in_stack_00000004 + 3;
  }
  *in_stack_00000010 = (int)local_8;
  return 1;
}


/* Ghidra address: 0042a2d6; FUN_0042a2d6 */

int FUN_0042a2d6(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (((in_stack_00000004 != 0) && (iVar1 = FUN_0042a250(), iVar1 == 0)) &&
     (iVar1 = FUN_0042a250(), iVar1 == 0)) {
    in_stack_00000004 = 0;
  }
  return in_stack_00000004;
}


/* Ghidra address: 0042a330; FUN_0042a330 */

void FUN_0042a330(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort uVar4;
  int iVar5;
  int in_FS_OFFSET;
  bool bVar6;
  bool bVar7;
  int in_stack_00000004;
  int in_stack_0000000c;
  int *in_stack_00000010;
  int in_stack_00000014;
  undefined4 *local_8;
  
  iVar5 = *(int *)(in_stack_00000004 + 4);
  *(int *)(in_stack_0000000c + 0x3c) = iVar5;
  if ((iVar5 != 0) && ((*(byte *)(in_stack_00000004 + 8) & 0x80) == 0)) {
    bVar6 = (*(byte *)(in_stack_00000004 + 8) & 1) == 0;
    local_8 = (undefined4 *)(in_stack_0000000c + 0x46);
    *(undefined1 *)(in_stack_0000000c + 0x45) = 1;
    *(int *)(in_stack_0000000c + 0x40) = *in_stack_00000010 + in_stack_00000014;
    uVar1 = *(ushort *)(iVar5 + 4);
    uVar4 = uVar1;
    if ((uVar1 & 0x30) != 0) {
      iVar5 = *(int *)(iVar5 + 8);
      uVar4 = *(ushort *)(iVar5 + 4);
    }
    if (((uVar1 & 0x10) == 0) || ((*(byte *)(in_stack_0000000c + 0xc) & 1) == 0)) {
      if (((uVar4 & 1) == 0) || ((uVar1 & 0x30) == 0)) {
        if ((*(byte *)(in_stack_0000000c + 0x18) & 1) == 0) {
          if ((uVar1 & 0x20) == 0) {
            FUN_00428fe4();
          }
          else {
            FUN_00428fe4();
            bVar6 = true;
          }
        }
        else {
          iVar2 = FUN_004297d6();
          if (iVar2 == 0) {
            FUN_0042a2d6();
          }
          bVar6 = iVar2 == 0 || bVar6;
          if ((*(byte *)(iVar5 + 0xc) & 1) == 0) {
            FUN_00428fe4();
          }
          else {
            FUN_00429b83();
            bVar6 = true;
          }
        }
      }
      else {
        bVar7 = (uVar1 & 0x20) == 0;
        if (bVar7) {
          local_8 = (undefined4 *)*local_8;
        }
        bVar6 = !bVar7 || bVar6;
        iVar2 = FUN_004297d6();
        if ((iVar2 == 0) && (puVar3 = (undefined4 *)FUN_0042a2d6(), puVar3 != local_8)) {
          bVar6 = true;
        }
        FUN_00428fe4();
      }
    }
    else {
      FUN_00429054();
      bVar6 = true;
    }
    if (!bVar6) {
      if ((*(byte *)(iVar5 + 0xc) & 2) != 0) {
        FUN_0042a125();
      }
      *(undefined1 *)(in_stack_0000000c + 0x44) = 0;
    }
    if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
      FUN_00429684();
    }
  }
  return;
}


/* Ghidra address: 0042a4f9; FUN_0042a4f9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0042a4f9(void)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int in_FS_OFFSET;
  int in_stack_00000004;
  uint in_stack_00000008;
  
  iVar2 = *(int *)(in_stack_00000004 + 8);
  uVar1 = *(ushort *)(in_stack_00000004 + 0x10);
  do {
    while( true ) {
      do {
        while( true ) {
          uVar6 = (uint)uVar1;
          if ((uVar6 == 0) || (uVar6 == in_stack_00000008)) {
            return;
          }
          uVar1 = *(ushort *)(iVar2 + uVar6);
          uVar5 = (uint)*(ushort *)(iVar2 + uVar6 + 2);
          *(ushort *)(in_stack_00000004 + 0x10) = uVar1;
          if (uVar5 != 0) break;
          _DAT_0049aa1c = *(undefined4 *)(iVar2 + uVar6 + 8);
          *(undefined2 *)(in_stack_00000004 + 0x12) = 1;
          FUN_0042b937();
          *(undefined2 *)(in_stack_00000004 + 0x12) = 0;
        }
      } while (uVar5 - 1 < 3);
      if (uVar5 == 4) break;
      if (uVar5 - 1 == 4) {
        FUN_0042adbe();
      }
    }
    piVar3 = *(int **)(*(int *)(in_FS_OFFSET + 4) + -8);
    do {
      piVar4 = piVar3;
      piVar3 = (int *)*piVar4;
      if (piVar3 == (int *)0x0) break;
    } while ((piVar3[10] != in_stack_00000004) || (uVar6 != piVar3[0xc]));
    *piVar4 = *piVar3;
    if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
      FUN_00429684();
    }
    FUN_0042a177();
    (*(code *)piVar3[7])();
  } while( true );
}


/* Ghidra address: 0042a658; FUN_0042a658 */

int * FUN_0042a658(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int in_stack_00000004;
  
  piVar2 = (int *)(in_stack_00000004 + 8);
  while( true ) {
    if (*piVar2 == 0) {
      return (int *)0x0;
    }
    if (piVar2[1] == 0) break;
    bVar1 = FUN_00429ac1();
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return piVar2;
    }
    piVar2 = piVar2 + 5;
  }
  return piVar2;
}


/* Ghidra address: 0042aab4; FUN_0042aab4 */

void FUN_0042aab4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_24;
  
  FUN_0042b4b4(0x4378a8);
  FUN_00429c0a();
  *in_FS_OFFSET = local_24;
  return;
}


/* Ghidra address: 0042ab22; FUN_0042ab22 */

void FUN_0042ab22(void)

{
  int *in_stack_00000008;
  int *in_stack_0000000c;
  
  while (in_stack_00000008 = in_stack_00000008 + -3, in_stack_0000000c <= in_stack_00000008) {
    if ((*(byte *)(*in_stack_00000008 + 0xc) & 2) != 0) {
      FUN_0042ab67();
    }
  }
  return;
}


/* Ghidra address: 0042ab67; FUN_0042ab67 */

void FUN_0042ab67(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  uint local_18;
  int *local_10;
  
  if (in_stack_00000010 == 0) {
    uVar2 = *(uint *)(in_stack_00000008 + 0x24);
  }
  else {
    uVar2 = *(uint *)(in_stack_00000008 + 0x20);
  }
  if ((in_stack_0000000c == 0) || (uVar2 <= in_stack_0000000c)) {
    FUN_0042aab4();
  }
  else {
    local_10 = (int *)((uint)*(ushort *)(in_stack_00000008 + 0x12) + in_stack_00000008);
    if (in_stack_00000010 != 0) {
      for (; iVar1 = *local_10, iVar1 != 0; local_10 = local_10 + 3) {
        if ((*(byte *)(iVar1 + 0xc) & 2) != 0) {
          if (in_stack_0000000c <= *(uint *)(iVar1 + 0x24)) {
            FUN_0042ab22();
            return;
          }
          in_stack_0000000c = in_stack_0000000c - *(uint *)(iVar1 + 0x24);
        }
      }
    }
    for (piVar4 = (int *)((uint)*(ushort *)(in_stack_00000008 + 0x10) + in_stack_00000008);
        iVar1 = *piVar4, iVar1 != 0; piVar4 = piVar4 + 3) {
      if ((*(byte *)(iVar1 + 0xc) & 2) != 0) {
        if (in_stack_0000000c <= *(uint *)(iVar1 + 0x24)) {
          FUN_0042ab22();
          if (in_stack_00000010 == 0) {
            return;
          }
          FUN_0042ab22();
          return;
        }
        in_stack_0000000c = in_stack_0000000c - *(uint *)(iVar1 + 0x24);
      }
    }
    piVar3 = (int *)((uint)*(ushort *)(in_stack_00000008 + 0x2e) + in_stack_00000008);
    piVar4 = piVar3;
    while( true ) {
      iVar1 = *piVar4;
      local_18 = 1;
      if ((*(byte *)(iVar1 + 5) & 4) != 0) {
        local_18 = *(uint *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 8);
      }
      uVar2 = *(int *)(iVar1 + 0x20) * local_18;
      if (in_stack_0000000c <= uVar2) break;
      in_stack_0000000c = in_stack_0000000c - uVar2;
      piVar4 = piVar4 + 2;
    }
    do {
      if (local_18 < 2) {
        FUN_0042ab67();
      }
      else {
        FUN_0042ad0d();
      }
      piVar4 = piVar4 + -2;
    } while (piVar3 <= piVar4);
    FUN_0042ab22();
    if (in_stack_00000010 != 0) {
      FUN_0042ab22();
    }
  }
  return;
}


/* Ghidra address: 0042ad0d; FUN_0042ad0d */

void FUN_0042ad0d(void)

{
  uint uVar1;
  int in_stack_00000008;
  uint in_stack_0000000c;
  undefined4 local_8;
  
  uVar1 = *(uint *)(*(int *)(in_stack_00000008 + 8) + 0x20);
  if (in_stack_0000000c == 0) {
    in_stack_0000000c = uVar1 * *(int *)(in_stack_00000008 + 0xc);
  }
  local_8 = in_stack_0000000c / uVar1;
  if (in_stack_0000000c != local_8 * uVar1) {
    FUN_0042ab67();
  }
  while (local_8 != 0) {
    FUN_0042ab67();
    local_8 = local_8 - 1;
  }
  return;
}


/* Ghidra address: 0042ad80; FUN_0042ad80 */

int FUN_0042ad80(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  iVar1 = *in_stack_00000008;
  if ((*(uint *)(iVar1 + 0xc) & 0x50) != 0x50) {
    return in_stack_00000004;
  }
  if (*(int *)(iVar1 + 8) == -1) {
    return in_stack_00000004;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 8) + in_stack_00000004);
  iVar2 = *(int *)(iVar1 + -8);
  *in_stack_00000008 = *(int *)((iVar1 - *(int *)(iVar1 + -4)) + -0xc);
  return in_stack_00000004 - iVar2;
}


/* Ghidra address: 0042adbe; FUN_0042adbe */

undefined4 FUN_0042adbe(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_14;
  int local_c;
  
  bVar2 = false;
  if (in_stack_00000004 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar7 = (*DAT_0049aa2c - *(int *)(in_stack_0000000c + 0x1c)) - in_stack_00000008;
    if ((*(byte *)(in_stack_00000004 + 1) & 0x20) != 0) {
      uVar7 = *(uint *)(*(int *)(*in_stack_00000004 + 8) + 0x20);
    }
    if ((*(byte *)((int)in_stack_00000004 + 5) & 1) == 0) {
      piVar4 = in_stack_00000004;
      if ((int)uVar7 < 1) {
        if ((in_stack_00000004[1] & 3U) != 3) {
          return 0;
        }
        bVar2 = true;
      }
      else {
        for (; *piVar4 != 0; piVar4 = piVar4 + 3) {
          local_c = *piVar4;
          iVar5 = 1;
          if (((((*(byte *)(local_c + 4) & 0x10) != 0) &&
               (local_c = *(int *)(local_c + 8), (*(byte *)(local_c + 4) & 2) != 0)) &&
              ((*(byte *)(local_c + 0xc) & 0x20) != 0)) && ((*(byte *)(piVar4 + 1) & 8) != 0)) {
            FUN_0042ad80();
          }
          if ((*(byte *)(local_c + 5) & 4) != 0) {
            iVar5 = *(int *)(local_c + 0xc);
            local_c = *(int *)(local_c + 8);
          }
          uVar6 = iVar5 * *(int *)(local_c + 0x20);
          if (uVar7 <= uVar6) goto LAB_0042aedd;
          uVar7 = uVar7 - uVar6;
        }
        piVar4 = piVar4 + -3;
      }
LAB_0042aedd:
      do {
        local_14 = *piVar4;
        uVar7 = piVar4[1];
        if ((((uVar7 & 0x11) != 0) &&
            (local_14 = *(int *)(local_14 + 8), (*(byte *)(local_14 + 4) & 2) != 0)) &&
           (((*(byte *)(local_14 + 0xc) & 0x20) != 0 && ((uVar7 & 8) != 0)))) {
          FUN_0042ad80();
        }
        if (!bVar2) {
          if ((*(byte *)(local_14 + 5) & 4) == 0) {
            FUN_0042ab67();
          }
          else {
            FUN_0042ad0d();
          }
        }
        if ((uVar7 & 3) == 3) {
          if ((*(byte *)(local_14 + 5) & 4) == 0) {
            if (*(int *)(local_14 + 0x14) == 0) {
              FUN_00431954();
            }
            else {
              FUN_00429d0e();
            }
          }
          else if (*(int *)(*(int *)(local_14 + 8) + 0x1c) == 0) {
            FUN_00431964();
          }
          else {
            FUN_00429d0e();
          }
        }
        bVar1 = in_stack_00000004 < piVar4;
        piVar4 = piVar4 + -3;
      } while (bVar1);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*in_stack_00000004 + 0x24);
    }
  }
  return uVar3;
}


/* Ghidra address: 0042b4b4; FUN_0042b4b4 */

void FUN_0042b4b4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined2 in_FS;
  
  puVar2 = (undefined4 *)(unaff_EBP + *(int *)(param_1 + 4));
  puVar2[2] = param_1;
  puVar2[3] = &stack0x00000004;
  puVar2[1] = &LAB_0042a6a5;
  puVar2[4] = 0;
  *(undefined4 *)((int)puVar2 + 0x12) = 0;
  puVar2[7] = *DAT_0049aa2c;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar2 = *puVar1;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = puVar2;
  return;
}


/* Ghidra address: 0042b4fa; FUN_0042b4fa */

undefined4 FUN_0042b4fa(void)

{
  undefined4 uVar1;
  int in_FS_OFFSET;
  int in_stack_00000004;
  
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x14);
  if (in_stack_00000004 != 0) {
    *(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x14) = in_stack_00000004;
  }
  return uVar1;
}


/* Ghidra address: 0042b51f; FUN_0042b51f */

void FUN_0042b51f(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_24;
  
  FUN_0042b4b4(0x4379bc);
  if ((**(int **)(*(int *)(in_FS_OFFSET[1] + -8) + 0xc) != 0) && (DAT_004377d0 == 0)) {
    ___lockDebuggerData_qv();
    *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x14) = 5;
    *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x18) =
         *(undefined4 *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x14);
    (**(code **)(*(int *)(in_FS_OFFSET[1] + -8) + 8))();
    ___unlockDebuggerData_qv();
    DAT_004377d0 = 0;
  }
  thunk_FUN_0042d8dc();
  (**(code **)(*(int *)(in_FS_OFFSET[1] + -8) + 0x14))();
  FUN_00431fd4();
  *in_FS_OFFSET = local_24;
  return;
}


/* Ghidra address: 0042b5de; FUN_0042b5de */

undefined4 FUN_0042b5de(void)

{
  undefined4 uVar1;
  int in_FS_OFFSET;
  int in_stack_00000004;
  
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x18);
  if (in_stack_00000004 != 0) {
    *(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x18) = in_stack_00000004;
  }
  return uVar1;
}


/* Ghidra address: 0042b603; FUN_0042b603 */

void FUN_0042b603(void)

{
  int in_FS_OFFSET;
  
  if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
    ___lockDebuggerData_qv();
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x14) = 4;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x18) =
         *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x18);
    DAT_004377d0 = 1;
    (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 8))();
    ___unlockDebuggerData_qv();
  }
  (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x18))();
  FUN_00431fd4();
  return;
}


/* Ghidra address: 0042b677; FUN_0042b677 */

undefined4 FUN_0042b677(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000004 == 0) {
    return 0;
  }
  return *(undefined4 *)
          (*(int *)((*(int *)(in_stack_00000004 + in_stack_00000008) -
                    *(int *)(*(int *)(in_stack_00000004 + in_stack_00000008) + -4)) + -0xc) + 0x20);
}


/* Ghidra address: 0042b696; FUN_0042b696 */

void FUN_0042b696(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int in_FS_OFFSET;
  bool bVar2;
  int in_stack_00000004;
  uint local_c;
  int local_8;
  
  bVar2 = in_stack_00000004 == 0;
  if (in_stack_00000004 == 0) {
    if (DAT_00434058 != '\0') {
      pFVar1 = (FARPROC)0x0;
      hModule = GetModuleHandleA((LPCSTR)0x0);
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,s___GetExceptDLLinfo_00437a4c);
      }
      if (((pFVar1 != (FARPROC)0x0) && ((*pFVar1)(), 0x82727348 < local_c)) &&
         (local_c < 0x8272735a)) {
        in_stack_00000004 = local_8;
      }
    }
    if (in_stack_00000004 == 0) {
      FUN_0042b778();
      in_stack_00000004 = local_8;
    }
  }
  else {
    *(undefined1 **)(in_stack_00000004 + 0x14) = &LAB_0042b4f4;
    *(undefined1 **)(in_stack_00000004 + 0x18) = &LAB_0042b5d8;
  }
  *(int *)(*(int *)(in_FS_OFFSET + 4) + -8) = in_stack_00000004;
  if (bVar2) {
    DAT_0049aa2c = *(int *)(in_FS_OFFSET + 4) + -4;
  }
  else {
    *(undefined **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) = &DAT_004379e4;
    *(undefined **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) = &__DebuggerHookData;
  }
  *(undefined4 *)(*(int *)(in_FS_OFFSET + 4) + -4) = 0;
  *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 4) = 0;
  return;
}


/* Ghidra address: 0042b778; FUN_0042b778 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b778(void)

{
  int in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  
  _DAT_00437914 = *(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x30;
  _DAT_004378f8 = &DAT_004379e4;
  _DAT_004378fc = &__DebuggerHookData;
  *in_stack_00000004 = 0x82727349;
  in_stack_00000004[1] = &DAT_004378ec;
  return;
}


/* Ghidra address: 0042b7b4; @__lockDebuggerData$qv */

void ___lockDebuggerData_qv(void)

{
                    /* 0x2b7b4  4  @__lockDebuggerData$qv */
  if (DAT_0049aa48 == 0) {
    DAT_0049aa48 = 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0049aa30);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0049aa30);
  return;
}


/* Ghidra address: 0042b7dc; @__unlockDebuggerData$qv */

void ___unlockDebuggerData_qv(void)

{
                    /* 0x2b7dc  5  @__unlockDebuggerData$qv */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0049aa30);
  return;
}


/* Ghidra address: 0042b890; FUN_0042b890 */

void FUN_0042b890(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = &LAB_0042b7f4;
  FUN_0042b940();
  return;
}


/* Ghidra address: 0042b8ac; FUN_0042b8ac */

void FUN_0042b8ac(void)

{
  FUN_0042b955();
  return;
}


/* Ghidra address: 0042b8bc; FUN_0042b8bc */

undefined4 FUN_0042b8bc(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000004;
  
  uVar1 = DAT_0049aa50;
  DAT_0049aa50 = in_stack_00000004;
  return uVar1;
}


/* Ghidra address: 0042b908; FUN_0042b908 */

void FUN_0042b908(void)

{
  if (DAT_0049acb0 != 0) {
    FUN_0042b890();
  }
  return;
}


/* Ghidra address: 0042b922; FUN_0042b922 */

void FUN_0042b922(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x42b933,param_2,(PVOID)0x0);
  return;
}


/* Ghidra address: 0042b937; FUN_0042b937 */

void FUN_0042b937(void)

{
  undefined4 *unaff_EBX;
  
  (*(code *)*unaff_EBX)();
  return;
}


/* Ghidra address: 0042b940; FUN_0042b940 */

void FUN_0042b940(void)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  undefined4 *in_stack_00000004;
  
  puVar1 = (undefined4 *)segment(in_FS,0);
  *in_stack_00000004 = *puVar1;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = in_stack_00000004;
  return;
}


/* Ghidra address: 0042b955; FUN_0042b955 */

void FUN_0042b955(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined2 in_FS;
  undefined4 *in_stack_00000004;
  
  piVar1 = (int *)segment(in_FS,0);
  puVar2 = (undefined4 *)*piVar1;
  if (in_stack_00000004 == puVar2) {
    puVar2 = (undefined4 *)segment(in_FS,0);
    *puVar2 = *in_stack_00000004;
  }
  else {
    for (; puVar2 != (undefined4 *)0xffffffff; puVar2 = (undefined4 *)*puVar2) {
      if ((undefined4 *)*puVar2 == in_stack_00000004) {
        *puVar2 = *in_stack_00000004;
        return;
      }
    }
  }
  return;
}


/* Ghidra address: 0042b988; thunk_FUN_0042e178 */

undefined4 thunk_FUN_0042e178(void)

{
  undefined4 uVar1;
  BOOL BVar2;
  uint in_stack_00000004;
  
  if (DAT_00437f24 <= in_stack_00000004) {
    uVar1 = FUN_0042dfc8();
    return uVar1;
  }
  BVar2 = CloseHandle(*(HANDLE *)(&DAT_0049ab1c + in_stack_00000004 * 4));
  if (BVar2 == 1) {
    (&DAT_00437f28)[in_stack_00000004] = 0;
    *(undefined4 *)(&DAT_0049ab1c + in_stack_00000004 * 4) = 0xffffffff;
    return 0;
  }
  uVar1 = FUN_0042e02c();
  return uVar1;
}


/* Ghidra address: 0042b990; thunk_FUN_0042d8dc */

int thunk_FUN_0042d8dc(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = &DAT_00437a74;
  iVar2 = DAT_00437f24;
  while (iVar2 != 0) {
    if (((*(byte *)((int)puVar1 + 0x12) & 3) != 0) && (puVar1[2] != 0)) {
      FUN_0042bad4();
      iVar3 = iVar3 + 1;
    }
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return iVar3;
}


/* Ghidra address: 0042b998; thunk_FUN_0042cddc */

uint thunk_FUN_0042cddc(void)

{
  int iVar1;
  char *pcVar2;
  char *extraout_ECX;
  char *pcVar3;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_EDX;
  char *pcVar4;
  char *extraout_EDX_00;
  char *extraout_EDX_01;
  char *extraout_EDX_02;
  char *extraout_EDX_03;
  char *pcVar5;
  int iVar7;
  uint uVar8;
  char *in_stack_00000008;
  undefined1 *in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000014;
  char acStack_10b [263];
  char *pcVar6;
  
  uVar8 = 0;
  if (in_stack_00000008 != (char *)0x0) {
    *in_stack_00000008 = '\0';
  }
  if (in_stack_0000000c != (undefined1 *)0x0) {
    *in_stack_0000000c = 0;
  }
  if (in_stack_00000010 != (char *)0x0) {
    *in_stack_00000010 = '\0';
  }
  if (in_stack_00000014 != (char *)0x0) {
    *in_stack_00000014 = '\0';
  }
  iVar1 = FUN_00429114();
  if (0x104 < iVar1) {
    iVar1 = 0x104;
  }
  FUN_004291bc();
  acStack_10b[iVar1] = '\0';
  iVar7 = 0;
  pcVar3 = extraout_ECX;
  pcVar4 = extraout_EDX;
  pcVar5 = acStack_10b + iVar1;
LAB_0042ce51:
  pcVar6 = pcVar5;
  pcVar5 = pcVar6 + -1;
  iVar1 = (int)*pcVar5;
  if (iVar1 < 0x30) {
    if (iVar1 != 0x2f) {
      pcVar2 = (char *)(iVar1 + -1);
      if (iVar1 == 0) goto LAB_0042cecd;
      if (iVar1 == 0x2a) goto LAB_0042cf37;
      if (pcVar2 == (char *)0x2d) {
        if ((iVar7 == 0) && (*pcVar6 == '\0')) {
          pcVar3 = pcVar5;
          iVar7 = FUN_0042cda4();
          pcVar4 = extraout_EDX_00;
        }
        if ((iVar7 == 0) && ((uVar8 & 2) == 0)) {
          uVar8 = uVar8 | 2;
          FUN_0042cd4c(in_stack_00000014,pcVar4,pcVar3,in_stack_00000014,pcVar5,0xff);
          *pcVar5 = '\0';
          pcVar3 = extraout_ECX_00;
          pcVar4 = extraout_EDX_01;
        }
      }
      goto LAB_0042ce51;
    }
  }
  else if (iVar1 == 0x3a) {
    pcVar4 = acStack_10b + 1;
    pcVar2 = (char *)0x0;
    if (pcVar5 != pcVar4) goto LAB_0042ce51;
LAB_0042cecd:
    if (iVar7 != 0) {
      if (*pcVar6 != '\0') {
        uVar8 = uVar8 | 8;
      }
      FUN_0042cd4c(pcVar2,pcVar4,in_stack_0000000c,in_stack_0000000c,pcVar6,0xff);
      *pcVar6 = '\0';
      pcVar4 = extraout_EDX_02;
LAB_0042cf47:
      if (pcVar6[-1] == ':') {
        if (acStack_10b[0] != '\0') {
          uVar8 = uVar8 | 0x10;
        }
        FUN_0042cd4c(in_stack_00000008,pcVar4,acStack_10b,in_stack_00000008,acStack_10b,2);
      }
      return uVar8;
    }
  }
  else {
    if (iVar1 == 0x3f) {
LAB_0042cf37:
      if (iVar7 == 0) {
        uVar8 = uVar8 | 1;
      }
      goto LAB_0042ce51;
    }
    if (iVar1 != 0x5c) goto LAB_0042ce51;
  }
  if (iVar7 == 0) {
    iVar7 = 1;
    if (*pcVar6 != '\0') {
      uVar8 = uVar8 | 4;
    }
    FUN_0042cd4c(in_stack_00000010,pcVar4,pcVar3,in_stack_00000010,pcVar6,0xff);
    *pcVar6 = '\0';
    pcVar5 = pcVar6 + -1;
    pcVar4 = extraout_EDX_03;
    if ((*pcVar5 == '\0') ||
       ((pcVar3 = extraout_ECX_01, *pcVar5 == ':' && (pcVar4 = acStack_10b + 1, pcVar5 == pcVar4))))
    goto LAB_0042cf47;
  }
  goto LAB_0042ce51;
}


/* Ghidra address: 0042b9a0; thunk_FUN_0042e20c */

DWORD thunk_FUN_0042e20c(void)

{
  DWORD DVar1;
  uint in_stack_00000004;
  LONG in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_00000004 < DAT_00437f24) {
    if (in_stack_0000000c == 0) {
      DVar1 = 0;
    }
    else if (in_stack_0000000c == 1) {
      DVar1 = 1;
    }
    else {
      if (in_stack_0000000c != 2) {
        DVar1 = FUN_0042dfc8();
        return DVar1;
      }
      DVar1 = 2;
    }
    (&DAT_00437f28)[in_stack_00000004] = (&DAT_00437f28)[in_stack_00000004] & 0xfffffdff;
    DVar1 = SetFilePointer(*(HANDLE *)(&DAT_0049ab1c + in_stack_00000004 * 4),in_stack_00000008,
                           (PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_0042e02c();
    }
  }
  else {
    DVar1 = FUN_0042dfc8();
  }
  return DVar1;
}


/* Ghidra address: 0042b9a8; thunk_FUN_0042e284 */

int thunk_FUN_0042e284(void)

{
  int iVar1;
  HANDLE hObject;
  uint uVar2;
  DWORD dwFlagsAndAttributes;
  DWORD dwCreationDisposition;
  LPCSTR in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  _SECURITY_ATTRIBUTES _Stack_18;
  DWORD DStack_c;
  DWORD DStack_8;
  
  uVar2 = in_stack_00000008 & 0x700;
  if (uVar2 < 0x501) {
    if (uVar2 == 0x500) {
LAB_0042e2ef:
      dwCreationDisposition = 1;
      goto LAB_0042e310;
    }
    if (uVar2 == 0x100) {
      dwCreationDisposition = 4;
      goto LAB_0042e310;
    }
    if (uVar2 != 0x200) {
      if (uVar2 == 0x300) {
        dwCreationDisposition = 2;
        goto LAB_0042e310;
      }
      goto LAB_0042e30b;
    }
  }
  else if (uVar2 != 0x600) {
    if (uVar2 != 0x700) {
LAB_0042e30b:
      dwCreationDisposition = 3;
      goto LAB_0042e310;
    }
    goto LAB_0042e2ef;
  }
  dwCreationDisposition = 5;
LAB_0042e310:
  if ((in_stack_00000008 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(in_stack_00000004);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((in_stack_0000000c & DAT_00438570 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar2 = in_stack_00000008 & 3;
  if (uVar2 == 0) {
    DStack_8 = 0x80000000;
  }
  else if (uVar2 == 1) {
    DStack_8 = 0x40000000;
  }
  else {
    if (uVar2 != 2) {
      iVar1 = FUN_0042dfc8();
      return iVar1;
    }
    DStack_8 = 0xc0000000;
  }
  uVar2 = in_stack_00000008 & 0x70;
  if (uVar2 == 0x10) {
    DStack_c = 0;
  }
  else if (uVar2 == 0x20) {
    DStack_c = 1;
  }
  else if (uVar2 == 0x30) {
    DStack_c = 2;
  }
  else {
    DStack_c = 3;
  }
  _Stack_18.nLength = 0xc;
  _Stack_18.lpSecurityDescriptor = (LPVOID)0x0;
  _Stack_18.bInheritHandle = (BOOL)((in_stack_00000008 & 0x80) == 0);
  hObject = CreateFileA(in_stack_00000004,DStack_8,DStack_c,&_Stack_18,dwCreationDisposition,
                        dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    GetLastError();
    iVar1 = FUN_0042dfc8();
  }
  else {
    FUN_0042e1f4();
    iVar1 = FUN_0042dd24();
    if (iVar1 == -1) {
      FUN_0042dfc8();
      CloseHandle(hObject);
    }
  }
  return iVar1;
}


/* Ghidra address: 0042b9b0; thunk_FUN_0042da20 */

char * thunk_FUN_0042da20(void)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  DWORD extraout_ECX;
  uint in_stack_00000004;
  LPVOID in_stack_00000008;
  char *in_stack_0000000c;
  
  if (in_stack_00000004 < DAT_00437f24) {
    if (in_stack_0000000c + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_0042e074(in_stack_00000004,in_stack_00000004,(DWORD)in_stack_0000000c,
                                    in_stack_00000004,in_stack_00000008,(DWORD)in_stack_0000000c);
    }
    else if ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (in_stack_0000000c != (char *)0x0) {
        while( true ) {
          uVar6 = (int)in_stack_0000000c - (int)pcVar1;
          uVar2 = FUN_0042e074(uVar6,in_stack_00000004,uVar6,in_stack_00000004,in_stack_00000008,
                               uVar6);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          pcVar3 = FUN_00428fc4();
          if (pcVar3 != (char *)0x0) {
            (&DAT_00437f28)[in_stack_00000004] = (&DAT_00437f28)[in_stack_00000004] | 0x200;
            uVar2 = (int)pcVar3 - (int)in_stack_00000008;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((*(char *)((int)in_stack_00000008 + (uVar2 - 1)) == '\r') &&
             (iVar4 = (uVar2 - 1) + (int)in_stack_00000008,
             iVar4 = FUN_0042e074(iVar4,in_stack_00000004,extraout_ECX,in_stack_00000004,
                                  (LPVOID)iVar4,1), iVar4 == -1)) break;
          pcVar5 = FUN_0042d9b4();
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < uVar6) &&
             ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 0x20) != 0)) {
            return pcVar1;
          }
          if (pcVar3 != (char *)0x0) {
            return pcVar1;
          }
          if (pcVar5 != (char *)0x0) {
            return pcVar1;
          }
          if (in_stack_0000000c <= pcVar1) {
            return pcVar1;
          }
        }
        pcVar1 = (char *)0xffffffff;
      }
    }
    else {
      pcVar1 = (char *)0x0;
    }
  }
  else {
    pcVar1 = (char *)FUN_0042dfc8();
  }
  return pcVar1;
}


/* Ghidra address: 0042b9b8; thunk_FUN_0042dc08 */

int thunk_FUN_0042dc08(void)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD extraout_ECX;
  uint in_stack_00000004;
  DWORD in_stack_00000008;
  int in_stack_0000000c;
  undefined1 auStack_8c [128];
  DWORD DStack_c;
  int iStack_8;
  
  if (in_stack_00000004 < DAT_00437f24) {
    if (in_stack_0000000c + 1U < 2) {
      in_stack_0000000c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 8) != 0) {
        FUN_0042e20c();
      }
      iVar1 = in_stack_0000000c;
      DVar2 = in_stack_00000008;
      if ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 0x40) == 0) {
        in_stack_0000000c =
             FUN_0042e0d8(in_stack_00000004,in_stack_0000000c,in_stack_00000008,in_stack_00000004,
                          (LPCVOID)in_stack_00000008,in_stack_0000000c);
      }
      else {
        for (; iVar1 != 0; iVar1 = iVar1 - iStack_8) {
          iStack_8 = iVar1;
          DVar3 = FUN_0042db50();
          DStack_c = FUN_0042e0d8(auStack_8c,in_stack_00000004,extraout_ECX,in_stack_00000004,
                                  auStack_8c,DVar3);
          if (DVar3 != DStack_c) {
            if (DStack_c == 0xffffffff) {
              return -1;
            }
            return (DVar2 - in_stack_00000008) + DStack_c;
          }
          DVar2 = DVar2 + iStack_8;
        }
      }
    }
  }
  else {
    in_stack_0000000c = FUN_0042dfc8();
  }
  return in_stack_0000000c;
}


/* Ghidra address: 0042b9c0; FUN_0042b9c0 */

undefined4 FUN_0042b9c0(void)

{
  int *in_stack_00000004;
  uint *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if ((*(byte *)((int)in_stack_00000004 + 0x12) & 4) != 0) {
    FUN_00431320();
  }
  *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) & 0xfff3;
  in_stack_00000004[3] = 0;
  in_stack_00000004[1] = (int)in_stack_00000004 + 0x17;
  *in_stack_00000004 = (int)in_stack_00000004 + 0x17;
  if ((in_stack_0000000c != 2) && (in_stack_00000010 != 0)) {
    PTR_FUN_00438ce4 = &LAB_0042d8a0;
    if (in_stack_00000008 == (uint *)0x0) {
      in_stack_00000008 = FUN_00431428();
      if (in_stack_00000008 == (uint *)0x0) {
        return 0xffffffff;
      }
      *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 4;
    }
    *in_stack_00000004 = (int)in_stack_00000008;
    in_stack_00000004[1] = (int)in_stack_00000008;
    in_stack_00000004[3] = in_stack_00000010;
    if (in_stack_0000000c == 1) {
      *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 8;
    }
  }
  return 0;
}


/* Ghidra address: 0042ba40; FUN_0042ba40 */

undefined4 FUN_0042ba40(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000004;
  
  if ((in_stack_00000004 == 0) || (*(short *)(in_stack_00000004 + 0x14) != (short)in_stack_00000004)
     ) {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)(in_stack_00000004 + 0xc) != 0) {
      if ((*(int *)(in_stack_00000004 + 8) < 0) && (iVar2 = FUN_0042bad4(), iVar2 != 0)) {
        return 0xffffffff;
      }
      if ((*(byte *)(in_stack_00000004 + 0x12) & 4) != 0) {
        FUN_00431320();
      }
    }
    uVar1 = FUN_0042e178();
    *(undefined2 *)(in_stack_00000004 + 0x12) = 0;
    *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
    *(undefined4 *)(in_stack_00000004 + 8) = 0;
    *(undefined1 *)(in_stack_00000004 + 0x16) = 0xff;
    if (*(short *)(in_stack_00000004 + 0x10) != 0) {
      FUN_0042c478();
      FUN_0042e47c();
      *(undefined2 *)(in_stack_00000004 + 0x10) = 0;
    }
  }
  return uVar1;
}


/* Ghidra address: 0042bad4; FUN_0042bad4 */

undefined4 FUN_0042bad4(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *in_stack_00000004;
  
  if (in_stack_00000004 == (int *)0x0) {
    FUN_0042bc88();
    uVar1 = 0;
  }
  else if ((short)in_stack_00000004[5] == (short)in_stack_00000004) {
    if (in_stack_00000004[2] < 0) {
      iVar3 = in_stack_00000004[3] + in_stack_00000004[2] + 1;
      in_stack_00000004[2] = in_stack_00000004[2] - iVar3;
      *in_stack_00000004 = in_stack_00000004[1];
      iVar2 = FUN_0042dc08();
      if ((iVar3 == iVar2) || ((*(byte *)((int)in_stack_00000004 + 0x13) & 2) != 0)) {
        uVar1 = 0;
      }
      else {
        *(ushort *)((int)in_stack_00000004 + 0x12) =
             *(ushort *)((int)in_stack_00000004 + 0x12) | 0x10;
        uVar1 = 0xffffffff;
      }
    }
    else {
      if ((((*(byte *)((int)in_stack_00000004 + 0x12) & 8) != 0) ||
          ((int)in_stack_00000004 + 0x17 == *in_stack_00000004)) &&
         (in_stack_00000004[2] = 0, (int)in_stack_00000004 + 0x17 == *in_stack_00000004)) {
        *in_stack_00000004 = in_stack_00000004[1];
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* Ghidra address: 0042bb58; FUN_0042bb58 */

undefined1 * FUN_0042bb58(void)

{
  int *piVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint unaff_EDI;
  undefined1 *in_stack_00000004;
  int in_stack_00000008;
  int *in_stack_0000000c;
  char *local_8;
  
  puVar5 = in_stack_00000004;
  if (in_stack_0000000c[3] == 0) {
    unaff_EDI = 0;
    while ((unaff_EDI != 10 && (in_stack_00000008 = in_stack_00000008 + -1, 0 < in_stack_00000008)))
    {
      piVar1 = in_stack_0000000c + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        unaff_EDI = FUN_0042c220();
      }
      else {
        pbVar3 = (byte *)*in_stack_0000000c;
        *in_stack_0000000c = *in_stack_0000000c + 1;
        unaff_EDI = (uint)*pbVar3;
      }
      if (unaff_EDI == 0xffffffff) break;
      *puVar5 = (char)unaff_EDI;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    pcVar2 = (char *)(in_stack_00000008 - 1);
    do {
      while( true ) {
        if ((int)pcVar2 < 0) goto LAB_0042bc5d;
        local_8 = (char *)in_stack_0000000c[2];
        if ((int)local_8 < 1) break;
        if (pcVar2 <= local_8) {
          local_8 = pcVar2;
        }
        pcVar4 = FUN_00428fc4();
        if (pcVar4 != (char *)0x0) {
          local_8 = pcVar4 + (1 - *in_stack_0000000c);
        }
        FUN_00428fe4();
        *in_stack_0000000c = (int)(local_8 + *in_stack_0000000c);
        in_stack_0000000c[2] = in_stack_0000000c[2] - (int)local_8;
        puVar5 = puVar5 + (int)local_8;
        pcVar2 = pcVar2 + -(int)local_8;
        if ((pcVar4 != (char *)0x0) || (pcVar2 == (char *)0x0)) {
          unaff_EDI = 10;
          goto LAB_0042bc5d;
        }
      }
      piVar1 = in_stack_0000000c + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        unaff_EDI = FUN_0042c220();
      }
      else {
        pbVar3 = (byte *)*in_stack_0000000c;
        *in_stack_0000000c = *in_stack_0000000c + 1;
        unaff_EDI = (uint)*pbVar3;
      }
      if (unaff_EDI == 0xffffffff) {
        *(ushort *)((int)in_stack_0000000c + 0x12) =
             *(ushort *)((int)in_stack_0000000c + 0x12) | 0x20;
        break;
      }
      *puVar5 = (char)unaff_EDI;
      puVar5 = puVar5 + 1;
      pcVar2 = pcVar2 + -1;
    } while (unaff_EDI != 10);
  }
LAB_0042bc5d:
  if ((unaff_EDI == 0xffffffff) && (puVar5 == in_stack_00000004)) {
    in_stack_00000004 = (undefined1 *)0x0;
  }
  else {
    *puVar5 = 0;
    if ((*(byte *)((int)in_stack_0000000c + 0x12) & 0x10) != 0) {
      in_stack_00000004 = (undefined1 *)0x0;
    }
  }
  return in_stack_00000004;
}


/* Ghidra address: 0042bc88; FUN_0042bc88 */

int FUN_0042bc88(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  puVar2 = &DAT_00437a74;
  iVar5 = DAT_00437f24;
  while (iVar5 != 0) {
    if ((int)puVar2[2] < 0) {
      iVar4 = puVar2[3] + puVar2[2] + 1;
      puVar2[2] = puVar2[2] - iVar4;
      *puVar2 = puVar2[1];
      iVar1 = FUN_0042dc08();
      if ((iVar4 != iVar1) && ((*(byte *)((int)puVar2 + 0x13) & 2) == 0)) {
        *(ushort *)((int)puVar2 + 0x12) = *(ushort *)((int)puVar2 + 0x12) | 0x10;
      }
      iVar3 = iVar3 + 1;
    }
    puVar2 = puVar2 + 6;
    iVar5 = iVar5 + -1;
  }
  return iVar3;
}


/* Ghidra address: 0042bce8; FUN_0042bce8 */

void FUN_0042bce8(void)

{
  undefined *in_stack_00000004;
  
  PTR_DAT_00437ff4 = in_stack_00000004;
  return;
}


/* Ghidra address: 0042bcf8; FUN_0042bcf8 */

void FUN_0042bcf8(void)

{
  FUN_0042c3f8();
  return;
}


/* Ghidra address: 0042bd1c; FUN_0042bd1c */

uint FUN_0042bd1c(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *in_stack_00000004;
  uint *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  
  uVar4 = 0;
  cVar1 = *in_stack_00000004;
  if (cVar1 == 'r') {
    uVar3 = 0;
    uVar2 = 1;
  }
  else if (cVar1 == 'w') {
    uVar3 = 0x301;
    uVar4 = 0x80;
    uVar2 = 2;
  }
  else {
    if (cVar1 != 'a') {
      return 0;
    }
    uVar3 = 0x901;
    uVar4 = 0x80;
    uVar2 = 2;
  }
  cVar1 = in_stack_00000004[1];
  if ((cVar1 == '+') || ((in_stack_00000004[2] == '+' && ((cVar1 == 't' || (cVar1 == 'b')))))) {
    if (cVar1 == '+') {
      cVar1 = in_stack_00000004[2];
    }
    uVar4 = 0x180;
    uVar3 = uVar3 & 0xfffffffe | 2;
    uVar2 = 3;
  }
  if (cVar1 == 't') {
    uVar3 = uVar3 | 0x4000;
  }
  else if (cVar1 == 'b') {
    uVar3 = uVar3 | 0x8000;
    uVar2 = uVar2 | 0x40;
  }
  else {
    if ((cVar1 != '+') && (cVar1 != '\0')) {
      return 0;
    }
    uVar3 = uVar3 | *(uint *)PTR_DAT_00437ff4 & 0xc000;
    if ((*(uint *)PTR_DAT_00437ff4 & 0x8000) != 0) {
      uVar2 = uVar2 | 0x40;
    }
  }
  PTR_FUN_00438ce8 = &LAB_0042d870;
  *in_stack_00000008 = uVar3;
  *in_stack_0000000c = uVar4;
  return uVar2;
}


/* Ghidra address: 0042bde8; FUN_0042bde8 */

int FUN_0042bde8(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000004;
  
  uVar1 = FUN_0042bd1c();
  *(short *)(in_stack_00000004 + 0x12) = (short)uVar1;
  if ((short)uVar1 == 0) {
LAB_0042be33:
    *(undefined1 *)(in_stack_00000004 + 0x16) = 0xff;
    *(undefined2 *)(in_stack_00000004 + 0x12) = 0;
    in_stack_00000004 = 0;
  }
  else {
    if (*(char *)(in_stack_00000004 + 0x16) < '\0') {
      iVar2 = FUN_0042e284();
      *(char *)(in_stack_00000004 + 0x16) = (char)iVar2;
      if ((char)iVar2 < '\0') goto LAB_0042be33;
    }
    if ((*(byte *)((int)&DAT_00437f28 + *(char *)(in_stack_00000004 + 0x16) * 4 + 1) & 0x20) != 0) {
      *(ushort *)(in_stack_00000004 + 0x12) = *(ushort *)(in_stack_00000004 + 0x12) | 0x200;
    }
    iVar2 = FUN_0042ccf8();
    if (iVar2 == 0) {
      *(undefined2 *)(in_stack_00000004 + 0x10) = 0;
    }
    else {
      FUN_0042ba40();
      in_stack_00000004 = 0;
    }
  }
  return in_stack_00000004;
}


/* Ghidra address: 0042be90; FUN_0042be90 */

undefined4 * FUN_0042be90(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00437a74;
  while( true ) {
    if (*(char *)((int)puVar1 + 0x16) < '\0') {
      return puVar1;
    }
    if (&DAT_00437a74 + DAT_00437f24 * 6 <= puVar1) break;
    puVar1 = puVar1 + 6;
  }
  return (undefined4 *)0x0;
}


/* Ghidra address: 0042bebc; FUN_0042bebc */

int FUN_0042bebc(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_0042be90();
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_0042bde8();
  }
  return iVar2;
}


/* Ghidra address: 0042bee8; FUN_0042bee8 */

void FUN_0042bee8(void)

{
  FUN_0042d210();
  return;
}


/* Ghidra address: 0042bf08; FUN_0042bf08 */

uint FUN_0042bf08(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint in_stack_00000008;
  int *in_stack_0000000c;
  
  uVar3 = in_stack_00000008;
  if ((*(byte *)((int)in_stack_0000000c + 0x12) & 8) == 0) {
    uVar3 = in_stack_0000000c[3];
    if ((uVar3 == 0) || (uVar3 < in_stack_00000008)) {
      if ((in_stack_0000000c[3] == 0) ||
         ((in_stack_0000000c[2] == 0 || (iVar2 = FUN_0042bad4(), iVar2 == 0)))) {
        uVar3 = FUN_0042dc08();
        if ((uVar3 == 0xffffffff) || (uVar3 < in_stack_00000008)) {
          in_stack_00000008 = 0;
        }
      }
      else {
        in_stack_00000008 = 0;
      }
    }
    else {
      if (-1 < (int)(in_stack_0000000c[2] + in_stack_00000008)) {
        if (in_stack_0000000c[2] == 0) {
          in_stack_0000000c[2] = -1 - uVar3;
        }
        else {
          iVar2 = FUN_0042bad4();
          if (iVar2 != 0) {
            return 0;
          }
        }
      }
      FUN_00428fe4();
      in_stack_0000000c[2] = in_stack_0000000c[2] + in_stack_00000008;
      *in_stack_0000000c = *in_stack_0000000c + in_stack_00000008;
    }
  }
  else {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = FUN_0042c304();
      if (uVar1 == 0xffffffff) {
        return 0;
      }
    }
  }
  return in_stack_00000008;
}


/* Ghidra address: 0042bfe4; FUN_0042bfe4 */

uint FUN_0042bfe4(void)

{
  int iVar1;
  uint uVar2;
  int in_stack_00000004;
  
  if ((in_stack_00000004 != 0) && (iVar1 = FUN_00429114(), iVar1 != 0)) {
    uVar2 = FUN_0042bf08();
    if (uVar2 != 0) {
      return (uint)*(byte *)(in_stack_00000004 + -1 + iVar1);
    }
    return 0xffffffff;
  }
  return 0;
}


/* Ghidra address: 0042c024; FUN_0042c024 */

void FUN_0042c024(void)

{
  FUN_0042c5a8();
  return;
}


/* Ghidra address: 0042c048; FUN_0042c048 */

int FUN_0042c048(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *in_stack_00000004;
  
  iVar2 = in_stack_00000004[2];
  if (iVar2 < 0) {
    iVar2 = in_stack_00000004[3] + iVar2 + 1;
  }
  if ((*(byte *)((int)in_stack_00000004 + 0x12) & 0x40) == 0) {
    pcVar6 = (char *)*in_stack_00000004;
    iVar3 = iVar2;
    iVar5 = iVar2;
    if ((int)in_stack_00000004[2] < 0) {
      while (iVar3 = iVar2 + -1, iVar2 != 0) {
        pcVar6 = pcVar6 + -1;
        iVar2 = iVar3;
        if (*pcVar6 == '\n') {
          iVar5 = iVar5 + 1;
        }
      }
    }
    else {
      while (iVar4 = iVar3 + -1, iVar5 = iVar2, iVar3 != 0) {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        iVar3 = iVar4;
        if (cVar1 == '\n') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    return iVar5;
  }
  return iVar2;
}


/* Ghidra address: 0042c0a4; FUN_0042c0a4 */

undefined4 FUN_0042c0a4(void)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  
  iVar1 = FUN_0042bad4();
  if (iVar1 == 0) {
    if ((in_stack_0000000c == 1) && (0 < (int)in_stack_00000004[2])) {
      FUN_0042c048();
    }
    *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) & 0xfe5f
    ;
    in_stack_00000004[2] = 0;
    *in_stack_00000004 = in_stack_00000004[1];
    DVar3 = FUN_0042e20c();
    if (DVar3 == 0xffffffff) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* Ghidra address: 0042c108; FUN_0042c108 */

DWORD FUN_0042c108(void)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  int in_stack_00000004;
  
  DVar1 = FUN_0042e20c();
  if (DVar1 != 0xffffffff) {
    if (*(int *)(in_stack_00000004 + 8) < 0) {
      if ((*(byte *)((int)&DAT_00437f28 + *(char *)(in_stack_00000004 + 0x16) * 4 + 1) & 8) != 0) {
        DVar1 = FUN_0042e20c();
        if (DVar1 == 0xffffffff) {
          return 0xffffffff;
        }
        DVar2 = FUN_0042e20c();
        if (DVar2 == 0xffffffff) {
          return 0xffffffff;
        }
      }
      iVar3 = FUN_0042c048();
      DVar1 = DVar1 + iVar3;
    }
    else {
      iVar3 = FUN_0042c048();
      DVar1 = DVar1 - iVar3;
    }
  }
  return DVar1;
}


/* Ghidra address: 0042c188; FUN_0042c188 */

void FUN_0042c188(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_00437a74;
  iVar2 = 0x32;
  while (iVar2 != 0) {
    if ((*(ushort *)((int)puVar1 + 0x12) & 0x300) == 0x300) {
      FUN_0042bad4();
    }
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return;
}


/* Ghidra address: 0042c1bc; FUN_0042c1bc */

undefined4 FUN_0042c1bc(void)

{
  char *pcVar1;
  undefined4 *in_stack_00000004;
  
  if ((*(byte *)((int)in_stack_00000004 + 0x13) & 2) != 0) {
    FUN_0042c188();
  }
  *in_stack_00000004 = in_stack_00000004[1];
  pcVar1 = FUN_0042da20();
  in_stack_00000004[2] = pcVar1;
  if (0 < (int)pcVar1) {
    *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) & 0xffdf
    ;
    return 0;
  }
  if (in_stack_00000004[2] == 0) {
    *(ushort *)((int)in_stack_00000004 + 0x12) =
         *(ushort *)((int)in_stack_00000004 + 0x12) & 0xfe7f | 0x20;
  }
  else {
    in_stack_00000004[2] = 0;
    *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 0x10;
  }
  return 0xffffffff;
}


/* Ghidra address: 0042c220; FUN_0042c220 */

void FUN_0042c220(void)

{
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 8) = *(int *)(in_stack_00000004 + 8) + 1;
  FUN_0042c234();
  return;
}


/* Ghidra address: 0042c234; FUN_0042c234 */

uint FUN_0042c234(void)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int *in_stack_00000004;
  
  if (in_stack_00000004 == (int *)0x0) {
    return 0xffffffff;
  }
  if (0 < in_stack_00000004[2]) {
    in_stack_00000004[2] = in_stack_00000004[2] + -1;
    pbVar1 = (byte *)*in_stack_00000004;
    *in_stack_00000004 = *in_stack_00000004 + 1;
    return (uint)*pbVar1;
  }
  if (((in_stack_00000004[2] < 0) || ((*(ushort *)((int)in_stack_00000004 + 0x12) & 0x110) != 0)) ||
     ((*(byte *)((int)in_stack_00000004 + 0x12) & 1) == 0)) {
    *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 0x10;
    return 0xffffffff;
  }
  *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 0x80;
  if (in_stack_00000004[3] != 0) {
    iVar2 = FUN_0042c1bc();
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    in_stack_00000004[2] = in_stack_00000004[2] + -1;
    pbVar1 = (byte *)*in_stack_00000004;
    *in_stack_00000004 = *in_stack_00000004 + 1;
    return (uint)*pbVar1;
  }
  if ((*(byte *)((int)in_stack_00000004 + 0x13) & 2) != 0) {
    FUN_0042c188();
  }
  pcVar3 = FUN_0042da20();
  if (pcVar3 == (char *)0x0) {
    uVar4 = FUN_0042d92c();
    if (uVar4 == 1) {
      *(ushort *)((int)in_stack_00000004 + 0x12) =
           *(ushort *)((int)in_stack_00000004 + 0x12) & 0xfe7f | 0x20;
    }
    else {
      *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 0x10
      ;
    }
    return 0xffffffff;
  }
  *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) & 0xffdf;
  return (uint)DAT_0049abe4;
}


/* Ghidra address: 0042c304; FUN_0042c304 */

uint FUN_0042c304(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte in_stack_00000004;
  int *in_stack_00000008;
  
  if (in_stack_00000008[2] < -1) {
    in_stack_00000008[2] = in_stack_00000008[2] + 1;
    pbVar1 = (byte *)*in_stack_00000008;
    *in_stack_00000008 = *in_stack_00000008 + 1;
    *pbVar1 = in_stack_00000004;
    if ((((*(byte *)((int)in_stack_00000008 + 0x12) & 8) != 0) &&
        ((in_stack_00000004 == 10 || (in_stack_00000004 == 0xd)))) &&
       (iVar2 = FUN_0042bad4(), iVar2 != 0)) {
      return 0xffffffff;
    }
    uVar3 = (uint)in_stack_00000004;
  }
  else if (((*(ushort *)((int)in_stack_00000008 + 0x12) & 0x90) == 0) &&
          ((*(ushort *)((int)in_stack_00000008 + 0x12) & 2) != 0)) {
    *(ushort *)((int)in_stack_00000008 + 0x12) = *(ushort *)((int)in_stack_00000008 + 0x12) | 0x100;
    if (in_stack_00000008[3] == 0) {
      iVar2 = FUN_0042dc08();
      if ((iVar2 == 1) || ((*(byte *)((int)in_stack_00000008 + 0x13) & 2) != 0)) {
        uVar3 = (uint)in_stack_00000004;
      }
      else {
        *(ushort *)((int)in_stack_00000008 + 0x12) =
             *(ushort *)((int)in_stack_00000008 + 0x12) | 0x10;
        uVar3 = 0xffffffff;
      }
    }
    else {
      if ((in_stack_00000008[2] != 0) && (iVar2 = FUN_0042bad4(), iVar2 != 0)) {
        return 0xffffffff;
      }
      in_stack_00000008[2] = -in_stack_00000008[3];
      pbVar1 = (byte *)*in_stack_00000008;
      *in_stack_00000008 = *in_stack_00000008 + 1;
      *pbVar1 = in_stack_00000004;
      if (((*(byte *)((int)in_stack_00000008 + 0x12) & 8) != 0) &&
         (((in_stack_00000004 == 10 || (in_stack_00000004 == 0xd)) &&
          (iVar2 = FUN_0042bad4(), iVar2 != 0)))) {
        return 0xffffffff;
      }
      uVar3 = (uint)in_stack_00000004;
    }
  }
  else {
    *(ushort *)((int)in_stack_00000008 + 0x12) = *(ushort *)((int)in_stack_00000008 + 0x12) | 0x10;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* Ghidra address: 0042c3f8; FUN_0042c3f8 */

void FUN_0042c3f8(void)

{
  char *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  int in_stack_00000010;
  char *in_stack_00000014;
  
  if ((in_stack_00000008 != (char *)0x0) && (*in_stack_00000008 != '\0')) {
    *in_stack_00000004 = *in_stack_00000008;
    in_stack_00000004[1] = ':';
    in_stack_00000004 = in_stack_00000004 + 2;
  }
  if ((in_stack_0000000c != (char *)0x0) && (*in_stack_0000000c != '\0')) {
    in_stack_00000004 = (char *)FUN_00429298();
    if ((in_stack_00000004[-1] != '\\') && (in_stack_00000004[-1] != '/')) {
      *in_stack_00000004 = '\\';
      in_stack_00000004 = in_stack_00000004 + 1;
    }
  }
  if (in_stack_00000010 != 0) {
    in_stack_00000004 = (char *)FUN_00429298();
  }
  if ((in_stack_00000014 != (char *)0x0) && (*in_stack_00000014 != '\0')) {
    if (*in_stack_00000014 != '.') {
      *in_stack_00000004 = '.';
    }
    in_stack_00000004 = (char *)FUN_00429298();
  }
  *in_stack_00000004 = '\0';
  return;
}


/* Ghidra address: 0042c478; FUN_0042c478 */

undefined * FUN_0042c478(void)

{
  undefined *in_stack_00000004;
  
  if (in_stack_00000004 == (undefined *)0x0) {
    in_stack_00000004 = &DAT_0049abee;
  }
  FUN_00429298();
  FUN_0042ff9c();
  FUN_00429084();
  return in_stack_00000004;
}


/* Ghidra address: 0042c4c8; FUN_0042c4c8 */

undefined * FUN_0042c4c8(void)

{
  undefined *puVar1;
  int iVar2;
  short *in_stack_00000008;
  
  do {
    *in_stack_00000008 = *in_stack_00000008 + 1;
    if (*in_stack_00000008 == 0) {
      *in_stack_00000008 = 1;
    }
    puVar1 = FUN_0042c478();
    iVar2 = FUN_0042e13c();
  } while (iVar2 == 0);
  return puVar1;
}


/* Ghidra address: 0042c50c; FUN_0042c50c */

void FUN_0042c50c(void)

{
  char *in_stack_00000004;
  
  if ((in_stack_00000004 != (char *)0x0) && (*in_stack_00000004 != '\0')) {
    FUN_0042bfe4();
    FUN_0042bfe4();
  }
  FUN_0042bfe4();
  FUN_0042bfe4();
  return;
}


/* Ghidra address: 0042c5a8; FUN_0042c5a8 */

int FUN_0042c5a8(void)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  code *in_stack_00000004;
  code *in_stack_00000008;
  char *in_stack_0000000c;
  byte *in_stack_00000010;
  char *in_stack_00000014;
  byte local_54 [32];
  int local_34;
  char *local_24;
  byte local_1d;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  local_c = 0;
  local_10 = 0;
LAB_0042c5be:
  do {
    local_1d = *in_stack_00000010;
    if (local_1d == 0) {
      return local_c;
    }
    pbVar1 = in_stack_00000010 + 1;
    if (local_1d == 0x25) {
      local_1d = in_stack_00000010[1];
      uVar6 = (uint)local_1d;
      in_stack_00000010 = in_stack_00000010 + 2;
      pbVar1 = in_stack_00000010;
      if (local_1d != 0x25) {
        local_5 = 0x20;
        pcVar9 = (char *)0x25;
        pcVar11 = (char *)0xffffffff;
LAB_0042c66e:
        if ((local_1d & 0x80) == 0) {
          uVar6 = (uint)(char)local_1d;
          iVar5 = (int)(char)(&DAT_00438480)[uVar6];
        }
        else {
          iVar5 = 2;
        }
        switch(iVar5) {
        default:
          goto switchD_0042c68f_caseD_0;
        case 2:
          goto switchD_0042c68f_caseD_2;
        case 4:
          local_5 = local_5 | 1;
          local_1d = *in_stack_00000010;
          uVar6 = (uint)local_1d;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042c66e;
        case 5:
          if ((int)pcVar11 < 0) {
            iVar5 = (int)(char)local_1d;
          }
          else {
            iVar5 = (int)pcVar11 * 10 + (int)(char)local_1d;
          }
          pcVar9 = (char *)(iVar5 + -0x30);
          local_1d = *in_stack_00000010;
          uVar6 = (uint)local_1d;
          in_stack_00000010 = in_stack_00000010 + 1;
          pcVar11 = pcVar9;
          goto LAB_0042c66e;
        case 6:
          if ((local_5 & 1) == 0) {
            local_24 = *(char **)in_stack_00000014;
            in_stack_00000014 = in_stack_00000014 + 4;
          }
          if ((int)pcVar11 < 0) {
            pcVar11 = (char *)0x1;
          }
          if (pcVar11 == (char *)0x0) goto LAB_0042c9da;
          goto LAB_0042c9b2;
        case 7:
        case 8:
          local_18 = 10;
          goto switchD_0042c68f_caseD_0;
        case 9:
          local_18 = 0;
          goto switchD_0042c68f_caseD_0;
        case 10:
          thunk_FUN_0042fe0c();
          if (local_14 < 0) goto LAB_0042cb1c;
          if (local_14 == 0) goto switchD_0042c68f_caseD_2;
          if ((local_5 & 1) == 0) {
            in_stack_00000014 = in_stack_00000014 + 4;
            thunk_FUN_0042fe0c();
            local_c = local_c + 1;
          }
          goto LAB_0042c5be;
        case 0xb:
          local_5 = local_5 | 8;
          local_1d = *in_stack_00000010;
          uVar6 = (uint)local_1d;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042c66e;
        case 0xc:
          local_5 = local_5 | 2;
          local_1d = *in_stack_00000010;
          pcVar9 = (char *)(uint)local_1d;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042c66e;
        case 0xd:
          local_5 = local_5 | 4;
          local_1d = *in_stack_00000010;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042c66e;
        case 0xe:
          local_18 = 8;
          goto switchD_0042c68f_caseD_0;
        case 0xf:
          goto switchD_0042c68f_caseD_f;
        case 0x10:
          FUN_00429054();
          local_1c = 0;
          bVar3 = *in_stack_00000010;
          pbVar1 = in_stack_00000010 + 1;
          if (bVar3 == 0x5e) {
            local_1c = 1;
            bVar3 = in_stack_00000010[1];
            pbVar1 = in_stack_00000010 + 2;
          }
          goto LAB_0042ca13;
        case 0x11:
          uVar6 = local_10;
          goto LAB_0042c7d4;
        case 0x12:
          goto switchD_0042c68f_caseD_12;
        case 0x13:
          uVar6 = FUN_0042cb40();
          if (local_14 < 1) goto switchD_0042c68f_caseD_2;
          if ((local_5 & 1) == 0) {
            **(uint **)in_stack_00000014 = uVar6;
            local_c = local_c + 1;
            in_stack_00000014 = in_stack_00000014 + 4;
          }
          goto LAB_0042c5be;
        case 0x14:
          local_5 = local_5 & 0xdf;
          local_1d = *in_stack_00000010;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042c66e;
        case 0x15:
          local_5 = local_5 | 0x20;
          local_1d = *in_stack_00000010;
          uVar6 = (uint)local_1d;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042c66e;
        }
      }
    }
    in_stack_00000010 = pbVar1;
    local_10 = local_10 + 1;
    bVar3 = (*in_stack_00000004)();
    if (bVar3 == 0xff) goto LAB_0042cb1c;
    if (((local_1d & 0x80) == 0) && ((&DAT_00438480)[(char)local_1d] == '\x01')) {
      while (((bVar3 & 0x80) == 0 && ((&DAT_00438480)[(char)bVar3] == '\x01'))) {
        local_10 = local_10 + 1;
        bVar3 = (*in_stack_00000004)();
        if (bVar3 == 0xff) goto LAB_0042cb1c;
      }
      (*in_stack_00000008)();
      local_10 = local_10 - 1;
    }
    else if (bVar3 != local_1d) {
      (*in_stack_00000008)();
      goto switchD_0042c68f_caseD_2;
    }
  } while( true );
switchD_0042c68f_caseD_12:
  local_18 = 0x10;
switchD_0042c68f_caseD_0:
  uVar6 = FUN_0042cb40();
  if (local_14 < 0) goto LAB_0042cb1c;
  if (local_14 == 0) goto switchD_0042c68f_caseD_2;
LAB_0042c7d4:
  if ((('@' < (char)local_1d) && ((char)local_1d < '[')) && (local_1d != 0x58)) {
    local_5 = local_5 | 4;
  }
  if ((local_5 & 1) == 0) {
    if ((local_5 & 4) == 0) {
      if ((local_5 & 2) == 0) {
        **(uint **)in_stack_00000014 = uVar6;
      }
      else {
        **(undefined2 **)in_stack_00000014 = (short)uVar6;
      }
    }
    else {
      **(uint **)in_stack_00000014 = uVar6;
    }
    in_stack_00000014 = in_stack_00000014 + 4;
    if (local_1d != 0x6e) {
      local_c = local_c + 1;
    }
  }
  goto LAB_0042c5be;
LAB_0042ca13:
  pbVar10 = pbVar1;
  local_1d = bVar3;
  if (bVar3 == 0) goto switchD_0042c68f_caseD_2;
  local_54[(int)(char)bVar3 >> 3 & 0x1f] =
       local_54[(int)(char)bVar3 >> 3 & 0x1f] | '\x01' << (bVar3 & 7);
  bVar3 = *pbVar10;
  in_stack_00000010 = pbVar10 + 1;
  if (bVar3 != 0x5d) {
    pbVar1 = in_stack_00000010;
    if (((bVar3 == 0x2d) && ((char)local_1d < (char)*in_stack_00000010)) &&
       (*in_stack_00000010 != 0x5d)) {
      bVar3 = *in_stack_00000010;
      while( true ) {
        local_1d = local_1d + 1;
        pbVar1 = pbVar10 + 2;
        if ((char)bVar3 <= (char)local_1d) break;
        local_54[(int)(char)local_1d >> 3 & 0x1f] =
             local_54[(int)(char)local_1d >> 3 & 0x1f] | '\x01' << (local_1d & 7);
      }
    }
    goto LAB_0042ca13;
  }
  if (pcVar11 == (char *)0xffffffff) {
    pcVar11 = (char *)0x7fff;
  }
  if ((local_5 & 1) == 0) {
    local_24 = *(char **)in_stack_00000014;
    in_stack_00000014 = in_stack_00000014 + 4;
  }
  local_34 = 0;
  cVar4 = ']';
  pcVar9 = (char *)0x0;
  while (pcVar11 = pcVar11 + -1, -1 < (int)pcVar11) {
    local_10 = local_10 + 1;
    pcVar9 = in_stack_0000000c;
    cVar4 = (*in_stack_00000004)();
    if ((cVar4 == -1) ||
       (pcVar9 = (char *)((int)cVar4 & 7),
       ((1 << (sbyte)pcVar9 & (int)(char)local_54[(int)cVar4 >> 3 & 0x1f]) != 0) == local_1c))
    break;
    local_34 = local_34 + 1;
    if ((local_5 & 1) == 0) {
      *local_24 = cVar4;
      pcVar9 = local_24;
      local_24 = local_24 + 1;
    }
  }
  if (-1 < (int)pcVar11) {
    (*in_stack_00000008)(in_stack_0000000c,(int)cVar4,pcVar9,(int)cVar4,in_stack_0000000c);
    local_10 = local_10 - 1;
  }
  if ((local_34 != 0) && ((local_5 & 1) == 0)) {
    *local_24 = '\0';
    local_24 = local_24 + 1;
    local_c = local_c + 1;
  }
  if (cVar4 == -1) {
LAB_0042cb1c:
    (*in_stack_00000008)();
    if (local_c == 0) {
      local_c = -1;
    }
    else {
switchD_0042c68f_caseD_2:
    }
    return local_c;
  }
  goto LAB_0042c5be;
  while ((((uint)pcVar7 & 0x80) == 0 &&
         (uVar6 = (uint)(char)pcVar7, (&DAT_00438480)[uVar6] == '\x01'))) {
switchD_0042c68f_caseD_f:
    local_10 = local_10 + 1;
    pcVar8 = in_stack_0000000c;
    pcVar7 = (char *)(*in_stack_00000004)(in_stack_0000000c,uVar6,pcVar9);
    pcVar9 = pcVar8;
    if ((char)pcVar7 == -1) goto LAB_0042cb1c;
  }
  pcVar8 = pcVar7;
  if ((local_5 & 1) == 0) {
    pcVar9 = in_stack_00000014 + 4;
    pcVar8 = *(char **)in_stack_00000014;
    local_c = local_c + 1;
    in_stack_00000014 = pcVar9;
    local_24 = pcVar8;
  }
  if (pcVar11 == (char *)0xffffffff) {
    pcVar11 = (char *)0x7fff;
  }
  do {
    if ((local_5 & 1) == 0) {
      *local_24 = (char)pcVar7;
      pcVar8 = local_24;
      local_24 = local_24 + 1;
    }
    local_10 = local_10 + 1;
    pcVar2 = in_stack_0000000c;
    pcVar7 = (char *)(*in_stack_00000004)(pcVar8,in_stack_0000000c,pcVar9);
    pcVar9 = pcVar2;
    cVar4 = (char)pcVar7;
  } while ((((cVar4 != -1) && (cVar4 != '\0')) &&
           ((pcVar8 = pcVar7, ((uint)pcVar7 & 0x80) != 0 ||
            (pcVar8 = (char *)(int)cVar4, pcVar8[0x438480] != '\x01')))) &&
          (pcVar11 = pcVar11 + -1, 0 < (int)pcVar11));
  (*in_stack_00000008)();
  local_10 = local_10 - 1;
  if ((local_5 & 1) == 0) {
    *local_24 = '\0';
  }
  goto LAB_0042c5be;
  while( true ) {
    if ((local_5 & 1) == 0) {
      *local_24 = cVar4;
      local_24 = local_24 + 1;
    }
    pcVar11 = pcVar11 + -1;
    if ((int)pcVar11 < 1) break;
LAB_0042c9b2:
    local_10 = local_10 + 1;
    cVar4 = (*in_stack_00000004)();
    if (cVar4 == -1) goto LAB_0042cb1c;
  }
LAB_0042c9da:
  if ((local_5 & 1) == 0) {
    local_c = local_c + 1;
  }
  goto LAB_0042c5be;
}


/* Ghidra address: 0042cb40; FUN_0042cb40 */

uint FUN_0042cb40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  code *in_stack_00000004;
  code *in_stack_00000008;
  uint in_stack_00000010;
  int in_stack_00000014;
  int *in_stack_00000018;
  int *in_stack_0000001c;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  iVar5 = 0;
  bVar6 = false;
  local_c = 0;
  local_10 = 1;
  local_14 = 0;
  local_18 = 0;
  iVar1 = local_c;
LAB_0042cb68:
  do {
    local_c = iVar1;
    iVar1 = local_c + 1;
    iVar3 = (*in_stack_00000004)();
    if (iVar5 == 0) {
      if (((-1 < iVar3) && (iVar3 < 0x80)) && (((&DAT_00438815)[iVar3] & 1) != 0))
      goto LAB_0042cb68;
      iVar5 = 1;
    }
    iVar2 = in_stack_00000014 + -1;
    if (iVar2 < 0) goto LAB_0042ccaf;
    if ((iVar5 != 1) || ((iVar5 = 2, iVar3 != 0x2b && (iVar3 != 0x2d)))) {
      if (iVar5 == 2) {
        iVar5 = 3;
        if ((iVar3 == 0x30) &&
           ((local_18 = 1, in_stack_00000010 == 0 || (in_stack_00000010 == 0x10)))) {
          iVar1 = local_c + 2;
          iVar3 = (*in_stack_00000004)();
          in_stack_00000014 = in_stack_00000014 + -2;
          if (in_stack_00000014 < 0) goto LAB_0042ccaf;
          if ((iVar3 == 0x78) || (iVar3 == 0x58)) {
            in_stack_00000010 = 0x10;
            goto LAB_0042cb68;
          }
          iVar2 = in_stack_00000014;
          if (in_stack_00000010 == 0) {
            in_stack_00000010 = 8;
          }
        }
        local_c = iVar1;
        in_stack_00000014 = iVar2;
        iVar2 = in_stack_00000014;
        iVar1 = local_c;
        if (in_stack_00000010 == 0) {
          in_stack_00000010 = 10;
        }
        else if (((int)in_stack_00000010 < 1) || (0x24 < (int)in_stack_00000010)) goto LAB_0042ccaf;
      }
      local_c = iVar1;
      in_stack_00000014 = iVar2;
      iVar1 = local_c;
      if (iVar5 == 3) {
        if ((iVar3 < 0x30) || (0x39 < iVar3)) {
          if ((iVar3 < 0x61) || (0x7a < iVar3)) {
            if ((iVar3 < 0x41) || (0x5a < iVar3)) goto LAB_0042ccaf;
            local_1c = iVar3 + -0x37;
          }
          else {
            local_1c = iVar3 + -0x57;
          }
        }
        else {
          local_1c = iVar3 + -0x30;
        }
        if ((int)in_stack_00000010 <= local_1c) goto LAB_0042ccaf;
        local_18 = local_18 + 1;
        uVar4 = local_14 * in_stack_00000010 + local_1c;
        bVar7 = local_14 != (uVar4 - local_1c) / in_stack_00000010;
        local_14 = uVar4;
        if (bVar7) {
          local_10 = 2;
          local_14 = 0x80000000;
          if (!bVar6) {
            local_14 = 0x7fffffff;
          }
LAB_0042ccaf:
          local_c = iVar1;
          if (local_10 != 2) {
            (*in_stack_00000008)();
            local_c = local_c + -1;
            if (bVar6) {
              local_14 = -local_14;
            }
          }
          if ((local_18 == 0) && (local_10 = -1, iVar3 != -1)) {
            local_10 = 0;
          }
          *in_stack_0000001c = local_10;
          *in_stack_00000018 = *in_stack_00000018 + local_c;
          return local_14;
        }
      }
      goto LAB_0042cb68;
    }
    bVar6 = iVar3 == 0x2d;
    in_stack_00000014 = iVar2;
  } while( true );
}


/* Ghidra address: 0042ccf8; FUN_0042ccf8 */

undefined4 FUN_0042ccf8(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  int in_stack_0000000c;
  uint in_stack_00000010;
  
  if (((*(short *)(in_stack_00000004 + 0x14) == (short)in_stack_00000004) && (in_stack_0000000c < 3)
      ) && (in_stack_00000010 < 0x80000000)) {
    if (*(int *)(in_stack_00000004 + 8) != 0) {
      FUN_0042c0a4();
    }
    uVar1 = FUN_0042b9c0();
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* Ghidra address: 0042cd4c; FUN_0042cd4c */

char * FUN_0042cd4c(char *param_1,undefined4 param_2,undefined4 param_3,char *param_4,char *param_5,
                   uint param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (param_4 != (char *)0x0) {
    uVar2 = FUN_00429114();
    if (uVar2 < param_6) {
      uVar2 = 0xffffffff;
      do {
        pcVar4 = param_5;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar4 = param_5 + (uint)bVar6 * -2 + 1;
        cVar1 = *param_5;
        param_5 = pcVar4;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar4 = pcVar4 + -uVar2;
      pcVar5 = param_4;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + (uint)bVar6 * -8 + 4;
        pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
      }
      for (uVar2 = uVar2 & 3; param_1 = param_4, uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
      }
    }
    else {
      param_1 = (char *)FUN_004291bc();
      param_4[param_6] = '\0';
    }
  }
  return param_1;
}


/* Ghidra address: 0042cda4; FUN_0042cda4 */

undefined4 FUN_0042cda4(void)

{
  char cVar1;
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + -1) == '.') {
    in_stack_00000004 = in_stack_00000004 + -1;
  }
  cVar1 = *(char *)(in_stack_00000004 + -1);
  if ((cVar1 != '\0') && (cVar1 != '/')) {
    if (cVar1 == ':') {
      if (*(char *)(in_stack_00000004 + -3) != '\0') {
        return 0;
      }
    }
    else if (cVar1 != '\\') {
      return 0;
    }
  }
  return 1;
}


/* Ghidra address: 0042cddc; FUN_0042cddc */

uint FUN_0042cddc(void)

{
  int iVar1;
  char *pcVar2;
  char *extraout_ECX;
  char *pcVar3;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_EDX;
  char *pcVar4;
  char *extraout_EDX_00;
  char *extraout_EDX_01;
  char *extraout_EDX_02;
  char *extraout_EDX_03;
  char *pcVar5;
  int iVar7;
  uint uVar8;
  char *in_stack_00000008;
  undefined1 *in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000014;
  char local_10b [263];
  char *pcVar6;
  
  uVar8 = 0;
  if (in_stack_00000008 != (char *)0x0) {
    *in_stack_00000008 = '\0';
  }
  if (in_stack_0000000c != (undefined1 *)0x0) {
    *in_stack_0000000c = 0;
  }
  if (in_stack_00000010 != (char *)0x0) {
    *in_stack_00000010 = '\0';
  }
  if (in_stack_00000014 != (char *)0x0) {
    *in_stack_00000014 = '\0';
  }
  iVar1 = FUN_00429114();
  if (0x104 < iVar1) {
    iVar1 = 0x104;
  }
  FUN_004291bc();
  local_10b[iVar1] = '\0';
  iVar7 = 0;
  pcVar3 = extraout_ECX;
  pcVar4 = extraout_EDX;
  pcVar5 = local_10b + iVar1;
LAB_0042ce51:
  pcVar6 = pcVar5;
  pcVar5 = pcVar6 + -1;
  iVar1 = (int)*pcVar5;
  if (iVar1 < 0x30) {
    if (iVar1 != 0x2f) {
      pcVar2 = (char *)(iVar1 + -1);
      if (iVar1 == 0) goto LAB_0042cecd;
      if (iVar1 == 0x2a) goto LAB_0042cf37;
      if (pcVar2 == (char *)0x2d) {
        if ((iVar7 == 0) && (*pcVar6 == '\0')) {
          pcVar3 = pcVar5;
          iVar7 = FUN_0042cda4();
          pcVar4 = extraout_EDX_00;
        }
        if ((iVar7 == 0) && ((uVar8 & 2) == 0)) {
          uVar8 = uVar8 | 2;
          FUN_0042cd4c(in_stack_00000014,pcVar4,pcVar3,in_stack_00000014,pcVar5,0xff);
          *pcVar5 = '\0';
          pcVar3 = extraout_ECX_00;
          pcVar4 = extraout_EDX_01;
        }
      }
      goto LAB_0042ce51;
    }
  }
  else if (iVar1 == 0x3a) {
    pcVar4 = local_10b + 1;
    pcVar2 = (char *)0x0;
    if (pcVar5 != pcVar4) goto LAB_0042ce51;
LAB_0042cecd:
    if (iVar7 != 0) {
      if (*pcVar6 != '\0') {
        uVar8 = uVar8 | 8;
      }
      FUN_0042cd4c(pcVar2,pcVar4,in_stack_0000000c,in_stack_0000000c,pcVar6,0xff);
      *pcVar6 = '\0';
      pcVar4 = extraout_EDX_02;
LAB_0042cf47:
      if (pcVar6[-1] == ':') {
        if (local_10b[0] != '\0') {
          uVar8 = uVar8 | 0x10;
        }
        FUN_0042cd4c(in_stack_00000008,pcVar4,local_10b,in_stack_00000008,local_10b,2);
      }
      return uVar8;
    }
  }
  else {
    if (iVar1 == 0x3f) {
LAB_0042cf37:
      if (iVar7 == 0) {
        uVar8 = uVar8 | 1;
      }
      goto LAB_0042ce51;
    }
    if (iVar1 != 0x5c) goto LAB_0042ce51;
  }
  if (iVar7 == 0) {
    iVar7 = 1;
    if (*pcVar6 != '\0') {
      uVar8 = uVar8 | 4;
    }
    FUN_0042cd4c(in_stack_00000010,pcVar4,pcVar3,in_stack_00000010,pcVar6,0xff);
    *pcVar6 = '\0';
    pcVar5 = pcVar6 + -1;
    pcVar4 = extraout_EDX_03;
    if ((*pcVar5 == '\0') ||
       ((pcVar3 = extraout_ECX_01, *pcVar5 == ':' && (pcVar4 = local_10b + 1, pcVar5 == pcVar4))))
    goto LAB_0042cf47;
  }
  goto LAB_0042ce51;
}


/* Ghidra address: 0042cf78; FUN_0042cf78 */

void FUN_0042cf78(void)

{
  FUN_0042cddc();
  return;
}


/* Ghidra address: 0042cfc4; FUN_0042cfc4 */

void FUN_0042cfc4(void)

{
  undefined1 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  FUN_0042d210();
  return;
}


/* Ghidra address: 0042d020; FUN_0042d020 */

void FUN_0042d020(void)

{
  undefined1 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  FUN_0042d210();
  return;
}


/* Ghidra address: 0042d184; FUN_0042d184 */

void FUN_0042d184(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x50) != 0) {
    iVar1 = (**(code **)(in_stack_00000004 + 0x54))();
    if (iVar1 == 0) {
      *(undefined4 *)(in_stack_00000004 + 0x60) = 1;
    }
    *(undefined4 *)(in_stack_00000004 + 0x50) = 0;
  }
  return;
}


/* Ghidra address: 0042d1b4; FUN_0042d1b4 */

void FUN_0042d1b4(void)

{
  undefined1 in_stack_00000004;
  int in_stack_00000008;
  
  if (0x4f < *(int *)(in_stack_00000008 + 0x50)) {
    FUN_0042d184();
  }
  *(undefined1 *)(in_stack_00000008 + *(int *)(in_stack_00000008 + 0x50)) = in_stack_00000004;
  *(int *)(in_stack_00000008 + 0x50) = *(int *)(in_stack_00000008 + 0x50) + 1;
  *(int *)(in_stack_00000008 + 0x5c) = *(int *)(in_stack_00000008 + 0x5c) + 1;
  return;
}


/* Ghidra address: 0042d1dc; FUN_0042d1dc */

void FUN_0042d1dc(void)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  uint in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = 7;
  pcVar1 = (char *)(in_stack_00000008 + 7);
  do {
    cVar3 = (char)(in_stack_00000004 & 0xf);
    if ((in_stack_00000004 & 0xf) < 10) {
      *pcVar1 = cVar3 + '0';
    }
    else {
      *pcVar1 = cVar3 + '7';
    }
    in_stack_00000004 = in_stack_00000004 >> 4;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar1 + -1;
  } while (-1 < iVar2);
  return;
}


/* Ghidra address: 0042d210; FUN_0042d210 */

/* WARNING: Removing unreachable block (ram,0x0042d85e) */

undefined4 FUN_0042d210(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  char cVar10;
  char *pcVar11;
  uint uVar12;
  bool bVar13;
  char *in_stack_0000000c;
  uint *in_stack_00000010;
  char local_5c [8];
  undefined1 local_54;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  char *local_20;
  char local_19;
  char *local_18;
  int local_14;
  char local_d;
  uint local_c;
  uint local_8;
  
LAB_0042d236:
  pcVar11 = in_stack_0000000c;
  in_stack_0000000c = pcVar11 + 1;
  if (*pcVar11 != '\0') {
    if (*pcVar11 == '%') {
      if (*in_stack_0000000c != '%') {
        uVar9 = 0;
        local_d = '\0';
        local_14 = 0;
        local_c = 0xffffffff;
        local_8 = 0xffffffff;
        uVar12 = 0;
        bVar7 = false;
        bVar13 = false;
        bVar6 = false;
        bVar5 = false;
switchD_0042d29d_default:
        bVar4 = false;
        cVar10 = *in_stack_0000000c;
        in_stack_0000000c = in_stack_0000000c + 1;
        local_18 = pcVar11;
        if (cVar10 < ' ') goto switchD_0042d29d_caseD_13;
        switch((&DAT_004384e7)[cVar10]) {
        case 0:
          local_18 = pcVar11;
          if (uVar9 != 0) goto switchD_0042d29d_caseD_13;
          if (local_d != '+') {
            local_d = cVar10;
          }
          goto switchD_0042d29d_default;
        case 1:
          local_18 = pcVar11;
          if (uVar9 != 0) goto switchD_0042d29d_caseD_13;
          uVar12 = 1;
          goto switchD_0042d29d_default;
        case 2:
          uVar3 = *in_stack_00000010;
          if (uVar9 < 2) {
            local_8 = uVar3;
            if ((int)uVar3 < 0) {
              bVar5 = true;
              local_8 = -uVar3;
            }
            uVar9 = 3;
            in_stack_00000010 = in_stack_00000010 + 1;
          }
          else {
            local_18 = pcVar11;
            if (uVar9 != 4) goto switchD_0042d29d_caseD_13;
            uVar9 = 5;
            in_stack_00000010 = in_stack_00000010 + 1;
            local_c = uVar3;
          }
          goto switchD_0042d29d_default;
        case 3:
          local_18 = pcVar11;
          if (uVar9 != 0) goto switchD_0042d29d_caseD_13;
          bVar5 = true;
          goto switchD_0042d29d_default;
        case 4:
          local_18 = pcVar11;
          if (3 < uVar9) goto switchD_0042d29d_caseD_13;
          uVar9 = 4;
          local_c = local_c + 1;
          goto switchD_0042d29d_default;
        case 5:
          goto switchD_0042d29d_caseD_5;
        case 6:
          bVar6 = true;
          uVar9 = 5;
          goto switchD_0042d29d_default;
        case 7:
          uVar9 = 5;
          bVar6 = false;
          goto switchD_0042d29d_default;
        case 8:
          uVar9 = 5;
          bVar7 = true;
          bVar6 = false;
          goto switchD_0042d29d_default;
        case 9:
          if (uVar9 == 0) {
            if (!bVar5) {
              bVar13 = true;
              uVar9 = 1;
            }
          }
          else {
switchD_0042d29d_caseD_5:
            cVar10 = cVar10 + -0x30;
            if (uVar9 < 3) {
              uVar9 = 2;
              if (local_8 == 0xffffffff) {
                local_8 = (uint)cVar10;
              }
              else {
                local_8 = local_8 * 10 + (int)cVar10;
              }
            }
            else {
              local_18 = pcVar11;
              if (uVar9 != 4) goto switchD_0042d29d_caseD_13;
              local_c = local_c * 10 + (int)cVar10;
            }
          }
          goto switchD_0042d29d_default;
        case 10:
          goto switchD_0042d29d_caseD_a;
        case 0xb:
          local_24 = 8;
          break;
        case 0xc:
          local_24 = 10;
          break;
        case 0xd:
          local_24 = 0x10;
          local_19 = cVar10 + -0x17;
          break;
        case 0xe:
          local_20 = (char *)*in_stack_00000010;
          FUN_0042d1dc();
          local_54 = 0;
          local_20 = local_5c;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042d630;
        case 0xf:
          local_20 = local_5c + 1;
          thunk_FUN_0042fe00();
          in_stack_00000010 = (uint *)thunk_FUN_0042fe00();
          goto LAB_0042d630;
        case 0x10:
          local_20 = local_5c;
          local_5c[0] = (char)*in_stack_00000010;
          local_5c[1] = 0;
          local_2c = 1;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042d6a1;
        case 0x11:
          puVar1 = in_stack_00000010 + 1;
          local_20 = (char *)*in_stack_00000010;
          if (local_20 == (char *)0x0) {
            local_20 = &DAT_00438500;
          }
          local_2c = FUN_00429114();
          in_stack_00000010 = puVar1;
          if (((int)local_c < (int)local_2c) && (-1 < (int)local_c)) {
            local_2c = local_c;
          }
          goto LAB_0042d6a1;
        case 0x12:
          puVar1 = in_stack_00000010 + 1;
          local_20 = (char *)*in_stack_00000010;
          in_stack_00000010 = puVar1;
          if (bVar6) {
            local_20[0] = '\0';
            local_20[1] = '\0';
            local_20[2] = '\0';
            local_20[3] = '\0';
          }
          else if (bVar7) {
            local_20[0] = '\0';
            local_20[1] = '\0';
          }
          else {
            local_20[0] = '\0';
            local_20[1] = '\0';
            local_20[2] = '\0';
            local_20[3] = '\0';
          }
          goto LAB_0042d236;
        case 0x13:
        case 0x14:
        case 0x15:
          goto switchD_0042d29d_caseD_13;
        case 0x16:
          uVar9 = 5;
          goto switchD_0042d29d_default;
        case 0x17:
          uVar9 = 5;
        default:
          goto switchD_0042d29d_default;
        }
        local_d = '\0';
        bVar8 = false;
        goto LAB_0042d47d;
      }
      in_stack_0000000c = pcVar11 + 2;
    }
    FUN_0042d1b4();
    goto LAB_0042d236;
  }
  goto LAB_0042d84b;
switchD_0042d29d_caseD_a:
  local_24 = 10;
  bVar8 = true;
LAB_0042d47d:
  if (bVar6) {
    uVar9 = *in_stack_00000010;
  }
  else if (bVar7) {
    if (bVar8) {
      uVar9 = (uint)(short)(ushort)*in_stack_00000010;
    }
    else {
      uVar9 = (uint)(ushort)*in_stack_00000010;
    }
  }
  else {
    uVar9 = *in_stack_00000010;
  }
  in_stack_00000010 = in_stack_00000010 + 1;
  local_20 = local_5c + 1;
  if (uVar9 == 0) {
    if (local_c == 0) {
      local_5c[1] = 0;
      goto LAB_0042d4f1;
    }
  }
  else {
    uVar12 = uVar12 | 4;
  }
  FUN_0042ff28();
LAB_0042d4f1:
  if ((int)local_c < 0) {
LAB_0042d630:
    if ((bVar13) && (0 < (int)local_8)) {
      local_2c = FUN_00429114();
      if (*local_20 == '-') {
        local_2c = local_2c + -1;
      }
      if ((int)local_2c < (int)local_8) {
        local_14 = local_8 - local_2c;
      }
    }
    if ((*local_20 == '-') || (local_d != '\0')) {
      if (*local_20 != '-') {
        local_20 = local_20 + -1;
        *local_20 = local_d;
      }
      if ((0 < local_14) && ((int)local_c < 0)) {
        local_14 = local_14 + -1;
      }
    }
    local_2c = FUN_00429114();
  }
  else {
    local_28 = FUN_00429114();
    local_2c = local_28;
    if (*local_20 == '-') {
      local_28 = local_28 - 1;
    }
    else if (local_d != '\0') {
      local_2c = local_28 + 1;
      local_20 = local_20 + -1;
      *local_20 = local_d;
    }
    if ((int)local_28 < (int)local_c) {
      local_14 = local_c - local_28;
    }
  }
LAB_0042d6a1:
  if (uVar12 == 5) {
    if (cVar10 == 'o') {
      if (local_14 < 1) {
        local_14 = 1;
      }
    }
    else if ((cVar10 == 'x') || (cVar10 == 'X')) {
      bVar4 = true;
      local_8 = local_8 - 2;
      local_14 = local_14 + -2;
      if (local_14 < 0) {
        local_14 = 0;
      }
    }
  }
  local_2c = local_2c + local_14;
  if ((!bVar5) && ((int)local_2c < (int)local_8)) {
    do {
      FUN_0042d1b4();
      local_8 = local_8 - 1;
    } while ((int)local_2c < (int)local_8);
  }
  if (bVar4) {
    FUN_0042d1b4();
    FUN_0042d1b4();
  }
  if (0 < local_14) {
    local_2c = local_2c - local_14;
    local_8 = local_8 - local_14;
    cVar10 = *local_20;
    if (((cVar10 == '-') || (cVar10 == ' ')) || (cVar10 == '+')) {
      local_20 = local_20 + 1;
      FUN_0042d1b4();
      local_2c = local_2c + -1;
      local_8 = local_8 - 1;
    }
    while (iVar2 = local_14 + -1, bVar13 = local_14 != 0, local_14 = iVar2, bVar13) {
      FUN_0042d1b4();
    }
  }
  if (local_2c != 0) {
    local_8 = local_8 - local_2c;
    while (local_2c != 0) {
      local_20 = local_20 + 1;
      local_2c = local_2c + -1;
      FUN_0042d1b4();
    }
    local_2c = -1;
  }
  while (uVar12 = local_8 - 1, bVar13 = 0 < (int)local_8, local_8 = uVar12, bVar13) {
    FUN_0042d1b4();
  }
  goto LAB_0042d236;
switchD_0042d29d_caseD_13:
  while (pcVar11 = local_18 + 1, cVar10 = *local_18, local_18 = pcVar11, cVar10 != '\0') {
    FUN_0042d1b4();
  }
LAB_0042d84b:
  FUN_0042d184();
  return 0;
}


/* Ghidra address: 0042d8dc; FUN_0042d8dc */

int FUN_0042d8dc(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = &DAT_00437a74;
  iVar2 = DAT_00437f24;
  while (iVar2 != 0) {
    if (((*(byte *)((int)puVar1 + 0x12) & 3) != 0) && (puVar1[2] != 0)) {
      FUN_0042bad4();
      iVar3 = iVar3 + 1;
    }
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return iVar3;
}


/* Ghidra address: 0042d914; FUN_0042d914 */

uint FUN_0042d914(void)

{
  uint uVar1;
  uint in_stack_00000004;
  
  uVar1 = ~DAT_00438570;
  DAT_00438570 = ~in_stack_00000004;
  return uVar1;
}


/* Ghidra address: 0042d92c; FUN_0042d92c */

uint FUN_0042d92c(void)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  uint in_stack_00000004;
  
  if (in_stack_00000004 < DAT_00437f24) {
    if (((&DAT_00437f28)[in_stack_00000004] & 0x200) == 0) {
      if (((&DAT_00437f28)[in_stack_00000004] & 0x2000) == 0) {
        DVar2 = FUN_0042e20c();
        if (DVar2 == 0xffffffff) {
          uVar1 = 0xffffffff;
        }
        else {
          DVar3 = FUN_0042e20c();
          if (DVar3 == 0xffffffff) {
            uVar1 = 0xffffffff;
          }
          else {
            DVar4 = FUN_0042e20c();
            if (DVar4 == 0xffffffff) {
              uVar1 = 0xffffffff;
            }
            else {
              uVar1 = (uint)((int)DVar3 <= (int)DVar2);
            }
          }
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = FUN_0042dfc8();
  }
  return uVar1;
}


/* Ghidra address: 0042d9b4; FUN_0042d9b4 */

char * FUN_0042d9b4(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000004;
  int in_stack_00000008;
  
  pcVar3 = in_stack_00000004;
  pcVar4 = in_stack_00000004;
  while( true ) {
    pcVar1 = FUN_00428fc4();
    if (pcVar1 == (char *)0x0) {
      pcVar1 = in_stack_00000004 + in_stack_00000008;
    }
    iVar2 = (int)pcVar1 - (int)pcVar3;
    if (pcVar4 != pcVar3) {
      FUN_00428fe4();
    }
    if (in_stack_00000004 + in_stack_00000008 + -1 <= pcVar1) break;
    pcVar3 = pcVar1 + 1;
    pcVar4 = pcVar4 + iVar2;
  }
  return pcVar4 + (iVar2 - (int)in_stack_00000004);
}


/* Ghidra address: 0042da20; FUN_0042da20 */

char * FUN_0042da20(void)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  DWORD extraout_ECX;
  uint in_stack_00000004;
  LPVOID in_stack_00000008;
  char *in_stack_0000000c;
  
  if (in_stack_00000004 < DAT_00437f24) {
    if (in_stack_0000000c + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_0042e074(in_stack_00000004,in_stack_00000004,(DWORD)in_stack_0000000c,
                                    in_stack_00000004,in_stack_00000008,(DWORD)in_stack_0000000c);
    }
    else if ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (in_stack_0000000c != (char *)0x0) {
        while( true ) {
          uVar6 = (int)in_stack_0000000c - (int)pcVar1;
          uVar2 = FUN_0042e074(uVar6,in_stack_00000004,uVar6,in_stack_00000004,in_stack_00000008,
                               uVar6);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          pcVar3 = FUN_00428fc4();
          if (pcVar3 != (char *)0x0) {
            (&DAT_00437f28)[in_stack_00000004] = (&DAT_00437f28)[in_stack_00000004] | 0x200;
            uVar2 = (int)pcVar3 - (int)in_stack_00000008;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((*(char *)((int)in_stack_00000008 + (uVar2 - 1)) == '\r') &&
             (iVar4 = (uVar2 - 1) + (int)in_stack_00000008,
             iVar4 = FUN_0042e074(iVar4,in_stack_00000004,extraout_ECX,in_stack_00000004,
                                  (LPVOID)iVar4,1), iVar4 == -1)) break;
          pcVar5 = FUN_0042d9b4();
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < uVar6) &&
             ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 0x20) != 0)) {
            return pcVar1;
          }
          if (pcVar3 != (char *)0x0) {
            return pcVar1;
          }
          if (pcVar5 != (char *)0x0) {
            return pcVar1;
          }
          if (in_stack_0000000c <= pcVar1) {
            return pcVar1;
          }
        }
        pcVar1 = (char *)0xffffffff;
      }
    }
    else {
      pcVar1 = (char *)0x0;
    }
  }
  else {
    pcVar1 = (char *)FUN_0042dfc8();
  }
  return pcVar1;
}


/* Ghidra address: 0042db50; FUN_0042db50 */

/* WARNING: Type propagation algorithm not settling */

int FUN_0042db50(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  int in_stack_00000004;
  int *in_stack_00000008;
  undefined1 *in_stack_0000000c;
  int in_stack_00000010;
  int local_14;
  
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = 0;
  local_14 = 0;
  puVar5 = in_stack_0000000c;
  iVar6 = in_stack_00000004;
  while( true ) {
    pcVar4 = (char *)(in_stack_00000004 + (iVar1 - iVar6));
    pcVar2 = FUN_00428fc4();
    if (pcVar2 != (char *)0x0) {
      pcVar4 = pcVar2 + -iVar6;
    }
    pcVar3 = in_stack_0000000c + (in_stack_00000010 - (int)puVar5);
    if (pcVar3 < pcVar4) break;
    FUN_00428fe4();
    puVar5 = puVar5 + (int)pcVar4;
    if ((pcVar2 == (char *)0x0) ||
       ((int)(in_stack_0000000c + (in_stack_00000010 - (int)puVar5)) < 2)) {
      *in_stack_00000008 = (int)(pcVar4 + *in_stack_00000008);
LAB_0042dc00:
      return local_14 + (int)pcVar4;
    }
    *puVar5 = 0xd;
    puVar5[1] = 10;
    puVar5 = puVar5 + 2;
    local_14 = local_14 + (int)(pcVar4 + 2);
    iVar6 = iVar6 + (int)(pcVar4 + 1);
    *in_stack_00000008 = (int)(pcVar4 + 1 + *in_stack_00000008);
  }
  FUN_00428fe4();
  *in_stack_00000008 = (int)(pcVar3 + *in_stack_00000008);
  pcVar4 = pcVar3;
  goto LAB_0042dc00;
}


/* Ghidra address: 0042dc08; FUN_0042dc08 */

int FUN_0042dc08(void)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD extraout_ECX;
  uint in_stack_00000004;
  DWORD in_stack_00000008;
  int in_stack_0000000c;
  undefined1 local_8c [128];
  DWORD local_c;
  int local_8;
  
  if (in_stack_00000004 < DAT_00437f24) {
    if (in_stack_0000000c + 1U < 2) {
      in_stack_0000000c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 8) != 0) {
        FUN_0042e20c();
      }
      iVar1 = in_stack_0000000c;
      DVar2 = in_stack_00000008;
      if ((*(byte *)((int)&DAT_00437f28 + in_stack_00000004 * 4 + 1) & 0x40) == 0) {
        in_stack_0000000c =
             FUN_0042e0d8(in_stack_00000004,in_stack_0000000c,in_stack_00000008,in_stack_00000004,
                          (LPCVOID)in_stack_00000008,in_stack_0000000c);
      }
      else {
        for (; iVar1 != 0; iVar1 = iVar1 - local_8) {
          local_8 = iVar1;
          DVar3 = FUN_0042db50();
          local_c = FUN_0042e0d8(local_8c,in_stack_00000004,extraout_ECX,in_stack_00000004,local_8c,
                                 DVar3);
          if (DVar3 != local_c) {
            if (local_c == 0xffffffff) {
              return -1;
            }
            return (DVar2 - in_stack_00000008) + local_c;
          }
          DVar2 = DVar2 + local_8;
        }
      }
    }
  }
  else {
    in_stack_0000000c = FUN_0042dfc8();
  }
  return in_stack_0000000c;
}


/* Ghidra address: 0042dce8; FUN_0042dce8 */

DWORD FUN_0042dce8(void)

{
  DWORD DVar1;
  uint in_stack_00000004;
  
  if (in_stack_00000004 < DAT_00437f24) {
    DVar1 = GetFileSize(*(HANDLE *)(&DAT_0049ab1c + in_stack_00000004 * 4),(LPDWORD)0x0);
    if (DVar1 == 0xffffffff) {
      DVar1 = FUN_0042e02c();
    }
  }
  else {
    DVar1 = FUN_0042dfc8();
  }
  return DVar1;
}


/* Ghidra address: 0042dd24; FUN_0042dd24 */

int FUN_0042dd24(void)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  iVar1 = 0;
  for (piVar2 = &DAT_00437f28; (iVar1 < DAT_00437f24 && (*piVar2 != 0)); piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == DAT_00437f24) {
    return -1;
  }
  (&DAT_00437f28)[iVar1] = in_stack_00000008;
  *(undefined4 *)(&DAT_0049ab1c + iVar1 * 4) = in_stack_00000004;
  return iVar1;
}


/* Ghidra address: 0042dde8; FUN_0042dde8 */

int FUN_0042dde8(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  int *in_stack_00000004;
  uint *local_c;
  int local_8;
  
  iVar2 = DAT_00437f24;
  for (piVar4 = &DAT_00437f24 + DAT_00437f24; (iVar2 != 0 && (*piVar4 == 0)); piVar4 = piVar4 + -1)
  {
    iVar2 = iVar2 + -1;
  }
  if (in_stack_00000004 == (int *)0x0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 * 5 + 4;
    }
  }
  else {
    *in_stack_00000004 = iVar2;
    local_8 = 0;
    pbVar5 = (byte *)(in_stack_00000004 + 1);
    local_c = &DAT_00437f28;
    if (0 < iVar2) {
      do {
        bVar3 = 1;
        uVar1 = *local_c;
        if ((uVar1 & 0x800) != 0) {
          bVar3 = 0x21;
        }
        if ((uVar1 & 0x8000) == 0) {
          bVar3 = bVar3 | 0x80;
        }
        if ((uVar1 & 0x2000) != 0) {
          bVar3 = bVar3 | 0x40;
        }
        *pbVar5 = bVar3;
        pbVar5 = pbVar5 + 1;
        local_8 = local_8 + 1;
        local_c = local_c + 1;
      } while (local_8 < iVar2);
    }
    FUN_00428fe4();
    iVar2 = 0;
  }
  return iVar2;
}


/* Ghidra address: 0042de84; FUN_0042de84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042de84(void)

{
  uint uVar1;
  bool bVar2;
  UINT UVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  _STARTUPINFOA local_50;
  
  UVar3 = SetHandleCount(DAT_00437f24);
  if (UVar3 < DAT_00437f24) {
    DAT_00437f24 = UVar3;
  }
  PTR_LAB_0043856c = FUN_0042dde8;
  bVar2 = false;
  GetStartupInfoA(&local_50);
  if (local_50.cbReserved2 != 0) {
    uVar7 = *(uint *)local_50.lpReserved2;
    puVar8 = (uint *)((int)local_50.lpReserved2 + 4);
    if (uVar7 * 5 + 4 == (uint)local_50.cbReserved2) {
      bVar2 = true;
      iVar6 = 0;
      puVar9 = &DAT_00437f28;
      if (0 < (int)uVar7) {
        do {
          uVar1 = *puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          uVar4 = 0;
          if ((uVar1 & 0x20) != 0) {
            uVar4 = 0x800;
          }
          if ((uVar1 & 0x40) != 0) {
            uVar4 = uVar4 | 0x2000;
          }
          if ((uVar1 & 0x80) == 0) {
            uVar4 = uVar4 | 0x8000;
          }
          else {
            uVar4 = uVar4 | 0x4000;
          }
          iVar6 = iVar6 + 1;
          *puVar9 = *puVar9 & 3 | uVar4;
          puVar9 = puVar9 + 1;
        } while (iVar6 < (int)uVar7);
      }
      puVar5 = &DAT_00437f28 + uVar7;
      for (; uVar7 < DAT_00437f24; uVar7 = uVar7 + 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      FUN_00429008();
    }
  }
  if (!bVar2) {
    _DAT_0049ab1c = GetStdHandle(0xfffffff6);
    DAT_0049ab20 = GetStdHandle(0xfffffff5);
    _DAT_0049ab24 = GetStdHandle(0xfffffff4);
    iVar6 = 0;
    puVar8 = &DAT_00437f28;
    do {
      bVar2 = FUN_0042e1c4();
      if (CONCAT31(extraout_var,bVar2) == 0) {
        *puVar8 = *puVar8 & 0xffffdfff;
      }
      else {
        *puVar8 = *puVar8 | 0x2000;
      }
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar6 < 3);
  }
  return;
}


/* Ghidra address: 0042dfc8; FUN_0042dfc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042dfc8(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 < 0) {
    if (-in_stack_00000004 < DAT_004380c8) {
      DAT_00438c44 = -in_stack_00000004;
      _DAT_0049ac00 = 0xffffffff;
      return 0xffffffff;
    }
  }
  else if (in_stack_00000004 < 299) goto LAB_0042dfde;
  in_stack_00000004 = 1;
LAB_0042dfde:
  _DAT_0049ac00 = in_stack_00000004;
  DAT_00438c44 = (int)(char)(&DAT_00438574)[in_stack_00000004];
  return 0xffffffff;
}


/* Ghidra address: 0042e02c; FUN_0042e02c */

void FUN_0042e02c(void)

{
  GetLastError();
  FUN_0042dfc8();
  return;
}


/* Ghidra address: 0042e040; FUN_0042e040 */

undefined4 FUN_0042e040(void)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  LPCSTR in_stack_00000004;
  
  BVar1 = CreateDirectoryA(in_stack_00000004,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 1) {
    return 0;
  }
  DVar2 = GetLastError();
  if (DVar2 == 0xb7) {
    uVar3 = FUN_0042dfc8();
    return uVar3;
  }
  uVar3 = FUN_0042e02c();
  return uVar3;
}


/* Ghidra address: 0042e074; FUN_0042e074 */

undefined4
FUN_0042e074(undefined4 param_1,undefined4 param_2,DWORD param_3,uint param_4,LPVOID param_5,
            DWORD param_6)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  local_8 = param_3;
  if (DAT_00437f24 <= param_4) {
    uVar1 = FUN_0042dfc8();
    return uVar1;
  }
  BVar2 = ReadFile(*(HANDLE *)(&DAT_0049ab1c + param_4 * 4),param_5,param_6,&local_8,
                   (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_0042e02c();
    return uVar1;
  }
  return local_8;
}


/* Ghidra address: 0042e0bc; FUN_0042e0bc */

void FUN_0042e0bc(void)

{
  DWORD in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0042e074(in_stack_0000000c,in_stack_00000008,in_stack_00000004,in_stack_00000004,
               (LPVOID)in_stack_00000008,in_stack_0000000c);
  return;
}


/* Ghidra address: 0042e0d8; FUN_0042e0d8 */

undefined4
FUN_0042e0d8(undefined4 param_1,undefined4 param_2,DWORD param_3,uint param_4,LPCVOID param_5,
            DWORD param_6)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  local_8 = param_3;
  if (DAT_00437f24 <= param_4) {
    uVar1 = FUN_0042dfc8();
    return uVar1;
  }
  BVar2 = WriteFile(*(HANDLE *)(&DAT_0049ab1c + param_4 * 4),param_5,param_6,&local_8,
                    (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_0042e02c();
    return uVar1;
  }
  return local_8;
}


/* Ghidra address: 0042e120; FUN_0042e120 */

void FUN_0042e120(void)

{
  DWORD in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0042e0d8(in_stack_0000000c,in_stack_00000008,in_stack_00000004,in_stack_00000004,
               (LPCVOID)in_stack_00000008,in_stack_0000000c);
  return;
}


/* Ghidra address: 0042e13c; FUN_0042e13c */

undefined4 FUN_0042e13c(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  LPCSTR in_stack_00000004;
  byte in_stack_00000008;
  
  DVar1 = GetFileAttributesA(in_stack_00000004);
  if (DVar1 == 0xffffffff) {
    uVar2 = FUN_0042e02c();
    return uVar2;
  }
  if (((in_stack_00000008 & 2) != 0) && ((DVar1 & 1) != 0)) {
    DAT_00438c44 = 5;
    return 0xffffffff;
  }
  return 0;
}


/* Ghidra address: 0042e178; FUN_0042e178 */

undefined4 FUN_0042e178(void)

{
  undefined4 uVar1;
  BOOL BVar2;
  uint in_stack_00000004;
  
  if (DAT_00437f24 <= in_stack_00000004) {
    uVar1 = FUN_0042dfc8();
    return uVar1;
  }
  BVar2 = CloseHandle(*(HANDLE *)(&DAT_0049ab1c + in_stack_00000004 * 4));
  if (BVar2 == 1) {
    (&DAT_00437f28)[in_stack_00000004] = 0;
    *(undefined4 *)(&DAT_0049ab1c + in_stack_00000004 * 4) = 0xffffffff;
    return 0;
  }
  uVar1 = FUN_0042e02c();
  return uVar1;
}


/* Ghidra address: 0042e1c4; FUN_0042e1c4 */

bool FUN_0042e1c4(void)

{
  DWORD DVar1;
  uint in_stack_00000004;
  
  if (DAT_00437f24 <= in_stack_00000004) {
    return false;
  }
  DVar1 = GetFileType(*(HANDLE *)(&DAT_0049ab1c + in_stack_00000004 * 4));
  return DVar1 == 2;
}


/* Ghidra address: 0042e1f4; FUN_0042e1f4 */

bool FUN_0042e1f4(void)

{
  DWORD DVar1;
  HANDLE in_stack_00000004;
  
  DVar1 = GetFileType(in_stack_00000004);
  return DVar1 == 2;
}


/* Ghidra address: 0042e20c; FUN_0042e20c */

DWORD FUN_0042e20c(void)

{
  DWORD DVar1;
  uint in_stack_00000004;
  LONG in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_00000004 < DAT_00437f24) {
    if (in_stack_0000000c == 0) {
      DVar1 = 0;
    }
    else if (in_stack_0000000c == 1) {
      DVar1 = 1;
    }
    else {
      if (in_stack_0000000c != 2) {
        DVar1 = FUN_0042dfc8();
        return DVar1;
      }
      DVar1 = 2;
    }
    (&DAT_00437f28)[in_stack_00000004] = (&DAT_00437f28)[in_stack_00000004] & 0xfffffdff;
    DVar1 = SetFilePointer(*(HANDLE *)(&DAT_0049ab1c + in_stack_00000004 * 4),in_stack_00000008,
                           (PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_0042e02c();
    }
  }
  else {
    DVar1 = FUN_0042dfc8();
  }
  return DVar1;
}


/* Ghidra address: 0042e284; FUN_0042e284 */

int FUN_0042e284(void)

{
  int iVar1;
  HANDLE hObject;
  uint uVar2;
  DWORD dwFlagsAndAttributes;
  DWORD dwCreationDisposition;
  LPCSTR in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  _SECURITY_ATTRIBUTES local_18;
  DWORD local_c;
  DWORD local_8;
  
  uVar2 = in_stack_00000008 & 0x700;
  if (uVar2 < 0x501) {
    if (uVar2 == 0x500) {
LAB_0042e2ef:
      dwCreationDisposition = 1;
      goto LAB_0042e310;
    }
    if (uVar2 == 0x100) {
      dwCreationDisposition = 4;
      goto LAB_0042e310;
    }
    if (uVar2 != 0x200) {
      if (uVar2 == 0x300) {
        dwCreationDisposition = 2;
        goto LAB_0042e310;
      }
      goto LAB_0042e30b;
    }
  }
  else if (uVar2 != 0x600) {
    if (uVar2 != 0x700) {
LAB_0042e30b:
      dwCreationDisposition = 3;
      goto LAB_0042e310;
    }
    goto LAB_0042e2ef;
  }
  dwCreationDisposition = 5;
LAB_0042e310:
  if ((in_stack_00000008 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(in_stack_00000004);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((in_stack_0000000c & DAT_00438570 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar2 = in_stack_00000008 & 3;
  if (uVar2 == 0) {
    local_8 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_8 = 0x40000000;
  }
  else {
    if (uVar2 != 2) {
      iVar1 = FUN_0042dfc8();
      return iVar1;
    }
    local_8 = 0xc0000000;
  }
  uVar2 = in_stack_00000008 & 0x70;
  if (uVar2 == 0x10) {
    local_c = 0;
  }
  else if (uVar2 == 0x20) {
    local_c = 1;
  }
  else if (uVar2 == 0x30) {
    local_c = 2;
  }
  else {
    local_c = 3;
  }
  local_18.nLength = 0xc;
  local_18.lpSecurityDescriptor = (LPVOID)0x0;
  local_18.bInheritHandle = (BOOL)((in_stack_00000008 & 0x80) == 0);
  hObject = CreateFileA(in_stack_00000004,local_8,local_c,&local_18,dwCreationDisposition,
                        dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    GetLastError();
    iVar1 = FUN_0042dfc8();
  }
  else {
    FUN_0042e1f4();
    iVar1 = FUN_0042dd24();
    if (iVar1 == -1) {
      FUN_0042dfc8();
      CloseHandle(hObject);
    }
  }
  return iVar1;
}


/* Ghidra address: 0042e47c; FUN_0042e47c */

undefined4 FUN_0042e47c(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  LPCSTR in_stack_00000004;
  
  BVar1 = DeleteFileA(in_stack_00000004);
  if (BVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0042e02c();
  }
  return uVar2;
}


/* Ghidra address: 0042e498; FUN_0042e498 */

int * FUN_0042e498(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    *in_stack_00000004 = (int)in_stack_00000004 + 0x4a;
    *(int *)((int)in_stack_00000004 + 0x3e) = (int)in_stack_00000004 + 0x4a;
    FUN_0042f7f4();
  }
  FUN_0042f3b8();
  FUN_0042e654();
  in_stack_00000004[1] = (int)&PTR_LAB_004386b0;
  *(undefined ***)((int)in_stack_00000004 + 0x42) = &PTR_LAB_004386bc;
  *(undefined ***)*in_stack_00000004 = &PTR_LAB_004386c8;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0042e500; FUN_0042e500 */

int * FUN_0042e500(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    *in_stack_00000004 = (int)in_stack_00000004 + 0x4a;
    *(int *)((int)in_stack_00000004 + 0x3e) = (int)in_stack_00000004 + 0x4a;
    FUN_0042f7f4();
  }
  FUN_0042f3b8();
  FUN_0042e654();
  in_stack_00000004[1] = (int)&PTR_LAB_004386b0;
  *(undefined ***)((int)in_stack_00000004 + 0x42) = &PTR_LAB_004386bc;
  *(undefined ***)*in_stack_00000004 = &PTR_LAB_004386c8;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0042e568; FUN_0042e568 */

int * FUN_0042e568(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    *in_stack_00000004 = (int)in_stack_00000004 + 0x4a;
    *(int *)((int)in_stack_00000004 + 0x3e) = (int)in_stack_00000004 + 0x4a;
    FUN_0042f7f4();
  }
  FUN_0042f3b8();
  FUN_0042e654();
  in_stack_00000004[1] = (int)&PTR_LAB_004386b0;
  *(undefined ***)((int)in_stack_00000004 + 0x42) = &PTR_LAB_004386bc;
  *(undefined ***)*in_stack_00000004 = &PTR_LAB_004386c8;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0042e654; FUN_0042e654 */

int * FUN_0042e654(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    *in_stack_00000004 = (int)(in_stack_00000004 + 3);
    FUN_0042f7f4();
  }
  in_stack_00000004[1] = (int)&PTR_FUN_004386d8;
  *(undefined ***)*in_stack_00000004 = &PTR_LAB_004386e4;
  FUN_0042f8c4();
  in_stack_00000004[2] = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0042e6a4; FUN_0042e6a4 */

uint FUN_0042e6a4(void)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int *in_stack_00000004;
  
  piVar1 = *(int **)(*in_stack_00000004 + 4);
  if ((uint)piVar1[9] <= (uint)piVar1[8]) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    if (iVar3 == -1) {
      uVar4 = 0xffffffff;
      goto LAB_0042e6d2;
    }
  }
  pbVar2 = (byte *)piVar1[8];
  piVar1[8] = piVar1[8] + 1;
  uVar4 = (uint)*pbVar2;
LAB_0042e6d2:
  if (uVar4 == 0xffffffff) {
    FUN_0042f90c();
  }
  else {
    in_stack_00000004[2] = in_stack_00000004[2] + 1;
  }
  return uVar4;
}


/* Ghidra address: 0042e6f4; FUN_0042e6f4 */

bool FUN_0042e6f4(void)

{
  int iVar1;
  int *in_stack_00000004;
  int in_stack_00000008;
  
  in_stack_00000004[2] = 0;
  if (*(int *)(*in_stack_00000004 + 0xc) != 0) {
    FUN_0042f90c();
    return false;
  }
  if (*(int *)(*in_stack_00000004 + 8) != 0) {
    if (in_stack_00000008 != 0) {
      iVar1 = *(int *)(*in_stack_00000004 + 4);
      if (*(uint *)(iVar1 + 0x20) < *(uint *)(iVar1 + 0x24)) {
        iVar1 = *(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x20);
      }
      else {
        iVar1 = 0;
      }
      if (in_stack_00000008 <= iVar1) goto LAB_0042e74e;
    }
    FUN_0042eee4();
  }
LAB_0042e74e:
  if (((in_stack_00000008 == 0) && ((*(byte *)(*in_stack_00000004 + 0x11) & 1) != 0)) &&
     (FUN_0042e7d4(), *(int *)(*in_stack_00000004 + 0xc) != 0)) {
    FUN_0042f90c();
  }
  return *(int *)(*in_stack_00000004 + 0xc) == 0;
}


/* Ghidra address: 0042e784; FUN_0042e784 */

void FUN_0042e784(void)

{
  undefined4 *in_stack_00000004;
  uint in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    in_stack_00000004[1] = &PTR_FUN_004386d8;
    *(undefined ***)*in_stack_00000004 = &PTR_LAB_004386e4;
    if ((in_stack_00000008 & 2) != 0) {
      FUN_0042f814();
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 0042e7d4; FUN_0042e7d4 */

void FUN_0042e7d4(void)

{
  int *piVar1;
  uint uVar2;
  int *in_stack_00000004;
  
  while( true ) {
    piVar1 = *(int **)(*in_stack_00000004 + 4);
    if ((uint)piVar1[8] < (uint)piVar1[9]) {
      uVar2 = (uint)*(byte *)piVar1[8];
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0xc))();
    }
    if (((&DAT_00438815)[uVar2] & 1) == 0) break;
    piVar1 = *(int **)(*in_stack_00000004 + 4);
    if ((uint)piVar1[8] < (uint)piVar1[9]) {
      piVar1[8] = piVar1[8] + 1;
    }
    else {
      (**(code **)(*piVar1 + 0xc))();
    }
    in_stack_00000004[2] = in_stack_00000004[2] + 1;
  }
  if (uVar2 == 0xffffffff) {
    FUN_0042f90c();
  }
  return;
}


/* Ghidra address: 0042e838; FUN_0042e838 */

int * FUN_0042e838(void)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int *in_stack_00000004;
  undefined1 *in_stack_00000008;
  int local_c;
  
  bVar2 = FUN_0042e6f4();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    uVar3 = 0;
    local_c = *(int *)(*in_stack_00000004 + 0x20);
    *(undefined4 *)(*in_stack_00000004 + 0x20) = 0;
    while (local_c = local_c + -1, local_c != 0) {
      piVar1 = *(int **)(*in_stack_00000004 + 4);
      if ((uint)piVar1[8] < (uint)piVar1[9]) {
        uVar3 = (uint)*(byte *)piVar1[8];
      }
      else {
        uVar3 = (**(code **)(*piVar1 + 0xc))();
      }
      if ((((&DAT_00438815)[uVar3] & 1) != 0) || (uVar3 == 0xffffffff)) break;
      *in_stack_00000008 = (char)uVar3;
      in_stack_00000008 = in_stack_00000008 + 1;
      piVar1 = *(int **)(*in_stack_00000004 + 4);
      if ((uint)piVar1[8] < (uint)piVar1[9]) {
        piVar1[8] = piVar1[8] + 1;
      }
      else {
        (**(code **)(*piVar1 + 0xc))();
      }
    }
    if (uVar3 == 0xffffffff) {
      FUN_0042f90c();
    }
  }
  *in_stack_00000008 = 0;
  return in_stack_00000004;
}


/* Ghidra address: 0042e8f8; FUN_0042e8f8 */

int * FUN_0042e8f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                  undefined4 *param_5)

{
  FUN_0042eacc();
  if ((*(byte *)(*param_4 + 0xc) & 0x86) == 0) {
    *param_5 = param_3;
  }
  return param_4;
}


/* Ghidra address: 0042e924; FUN_0042e924 */

int FUN_0042e924(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  uint in_stack_00000008;
  
  iVar2 = 0;
  if (((&DAT_00438815)[in_stack_00000008] & 2) == 0) {
    if (in_stack_00000008 == 0xffffffff) {
      FUN_0042f7b8();
    }
    else {
      FUN_0042f7b8();
    }
  }
  else {
    do {
      iVar2 = iVar2 * 10 + in_stack_00000008 + -0x30;
      iVar1 = *(int *)(*in_stack_00000004 + 4);
      if ((*(int *)(iVar1 + 0x20) == 0) ||
         (*(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1,
         *(uint *)(iVar1 + 0x24) <= *(uint *)(iVar1 + 0x20))) {
        in_stack_00000008 = FUN_0042f500();
      }
      else {
        in_stack_00000008 = (uint)**(byte **)(iVar1 + 0x20);
      }
    } while (((&DAT_00438815)[in_stack_00000008] & 2) != 0);
  }
  return iVar2;
}


/* Ghidra address: 0042e9ac; FUN_0042e9ac */

int FUN_0042e9ac(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  uint in_stack_00000008;
  
  iVar2 = 0;
  if (((int)in_stack_00000008 < 0x30) || (0x37 < (int)in_stack_00000008)) {
    if (in_stack_00000008 == 0xffffffff) {
      FUN_0042f7b8();
    }
    else {
      FUN_0042f7b8();
    }
  }
  else {
    do {
      iVar1 = *(int *)(*in_stack_00000004 + 4);
      iVar2 = iVar2 * 8 + in_stack_00000008 + -0x30;
      if ((*(int *)(iVar1 + 0x20) == 0) ||
         (*(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1,
         *(uint *)(iVar1 + 0x24) <= *(uint *)(iVar1 + 0x20))) {
        in_stack_00000008 = FUN_0042f500();
      }
      else {
        in_stack_00000008 = (uint)**(byte **)(iVar1 + 0x20);
      }
    } while ((0x2f < (int)in_stack_00000008) && ((int)in_stack_00000008 < 0x38));
  }
  return iVar2;
}


/* Ghidra address: 0042ea30; FUN_0042ea30 */

int FUN_0042ea30(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  uint in_stack_00000008;
  
  iVar2 = 0;
  if (((&DAT_00438815)[in_stack_00000008] & 0x10) == 0) {
    if (in_stack_00000008 == 0xffffffff) {
      FUN_0042f7b8();
    }
    else {
      FUN_0042f7b8();
    }
  }
  else {
    do {
      if (((&DAT_00438815)[in_stack_00000008] & 4) == 0) {
        if (((&DAT_00438815)[in_stack_00000008] & 8) == 0) {
          iVar1 = in_stack_00000008 - 0x30;
        }
        else {
          iVar1 = in_stack_00000008 - 0x57;
        }
      }
      else {
        iVar1 = in_stack_00000008 - 0x37;
      }
      iVar2 = iVar2 * 0x10 + iVar1;
      iVar1 = *(int *)(*in_stack_00000004 + 4);
      if ((*(int *)(iVar1 + 0x20) == 0) ||
         (*(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1,
         *(uint *)(iVar1 + 0x24) <= *(uint *)(iVar1 + 0x20))) {
        in_stack_00000008 = FUN_0042f500();
      }
      else {
        in_stack_00000008 = (uint)**(byte **)(iVar1 + 0x20);
      }
    } while (((&DAT_00438815)[in_stack_00000008] & 0x10) != 0);
  }
  return iVar2;
}


/* Ghidra address: 0042eacc; FUN_0042eacc */

int * FUN_0042eacc(void)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  bVar2 = FUN_0042e6f4();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    piVar1 = *(int **)(*in_stack_00000004 + 4);
    if ((uint)piVar1[8] < (uint)piVar1[9]) {
      uVar3 = (uint)*(byte *)piVar1[8];
    }
    else {
      uVar3 = (**(code **)(*piVar1 + 0xc))();
    }
    bVar2 = uVar3 == 0x2d;
    if ((uVar3 == 0x2b) || (bVar2)) {
      iVar4 = *(int *)(*in_stack_00000004 + 4);
      if ((*(int *)(iVar4 + 0x20) == 0) ||
         (*(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1,
         *(uint *)(iVar4 + 0x24) <= *(uint *)(iVar4 + 0x20))) {
        uVar3 = FUN_0042f500();
      }
      else {
        uVar3 = (uint)**(byte **)(iVar4 + 0x20);
      }
    }
    if ((*(byte *)(*in_stack_00000004 + 0x18) & 0x40) == 0) {
      if ((*(byte *)(*in_stack_00000004 + 0x18) & 0x20) == 0) {
        if (((*(byte *)(*in_stack_00000004 + 0x18) & 0x10) == 0) && (uVar3 == 0x30)) {
          iVar4 = *(int *)(*in_stack_00000004 + 4);
          if ((*(int *)(iVar4 + 0x20) == 0) ||
             (*(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1,
             *(uint *)(iVar4 + 0x24) <= *(uint *)(iVar4 + 0x20))) {
            uVar3 = FUN_0042f500();
          }
          else {
            uVar3 = (uint)**(byte **)(iVar4 + 0x20);
          }
          if ((uVar3 == 0x78) || (uVar3 == 0x58)) {
            iVar4 = *(int *)(*in_stack_00000004 + 4);
            if ((*(int *)(iVar4 + 0x20) == 0) ||
               (*(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1,
               *(uint *)(iVar4 + 0x24) <= *(uint *)(iVar4 + 0x20))) {
              FUN_0042f500();
            }
            iVar4 = FUN_0042ea30();
          }
          else if (((int)uVar3 < 0x30) || (0x37 < (int)uVar3)) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_0042e9ac();
          }
        }
        else {
          iVar4 = FUN_0042e924();
        }
      }
      else {
        iVar4 = FUN_0042e9ac();
      }
    }
    else {
      iVar4 = FUN_0042ea30();
    }
    if (bVar2) {
      iVar4 = -iVar4;
    }
    *in_stack_00000008 = iVar4;
  }
  return in_stack_00000004;
}


/* Ghidra address: 0042ec18; FUN_0042ec18 */

int * FUN_0042ec18(void)

{
  int *piVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  int *in_stack_00000004;
  undefined1 *in_stack_00000008;
  
  bVar3 = FUN_0042e6f4();
  if (CONCAT31(extraout_var,bVar3) != 0) {
    iVar5 = *(int *)(*in_stack_00000004 + 4);
    if (*(uint *)(iVar5 + 0x20) < *(uint *)(iVar5 + 0x24)) {
      iVar5 = *(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x20);
    }
    else {
      iVar5 = 0;
    }
    if (iVar5 == 0) {
      uVar4 = FUN_0042e6a4();
      uVar6 = (undefined1)uVar4;
    }
    else {
      piVar1 = *(int **)(*in_stack_00000004 + 4);
      if (((uint)piVar1[8] < (uint)piVar1[9]) ||
         (iVar5 = (**(code **)(*piVar1 + 0xc))(), iVar5 != -1)) {
        puVar2 = (undefined1 *)piVar1[8];
        piVar1[8] = piVar1[8] + 1;
        uVar6 = *puVar2;
      }
      else {
        uVar6 = 0xff;
      }
    }
    *in_stack_00000008 = uVar6;
    return in_stack_00000004;
  }
  return in_stack_00000004;
}


/* Ghidra address: 0042ec88; FUN_0042ec88 */

int * FUN_0042ec88(undefined4 param_1,undefined4 param_2,undefined2 param_3,int *param_4,
                  undefined2 *param_5)

{
  FUN_0042eacc();
  if ((*(byte *)(*param_4 + 0xc) & 0x86) == 0) {
    *param_5 = param_3;
  }
  return param_4;
}


/* Ghidra address: 0042ecb8; FUN_0042ecb8 */

int * FUN_0042ecb8(void)

{
  int *piVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  int *in_stack_00000004;
  undefined1 *in_stack_00000008;
  
  bVar3 = FUN_0042e6f4();
  if (CONCAT31(extraout_var,bVar3) != 0) {
    iVar5 = *(int *)(*in_stack_00000004 + 4);
    if (*(uint *)(iVar5 + 0x20) < *(uint *)(iVar5 + 0x24)) {
      iVar5 = *(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x20);
    }
    else {
      iVar5 = 0;
    }
    if (iVar5 == 0) {
      uVar4 = FUN_0042e6a4();
      uVar6 = (undefined1)uVar4;
    }
    else {
      piVar1 = *(int **)(*in_stack_00000004 + 4);
      if (((uint)piVar1[8] < (uint)piVar1[9]) ||
         (iVar5 = (**(code **)(*piVar1 + 0xc))(), iVar5 != -1)) {
        puVar2 = (undefined1 *)piVar1[8];
        piVar1[8] = piVar1[8] + 1;
        uVar6 = *puVar2;
      }
      else {
        uVar6 = 0xff;
      }
    }
    *in_stack_00000008 = uVar6;
    return in_stack_00000004;
  }
  return in_stack_00000004;
}


/* Ghidra address: 0042ed28; FUN_0042ed28 */

int * FUN_0042ed28(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                  undefined4 *param_5)

{
  FUN_0042eacc();
  if ((*(byte *)(*param_4 + 0xc) & 0x86) == 0) {
    *param_5 = param_3;
  }
  return param_4;
}


/* Ghidra address: 0042ed54; FUN_0042ed54 */

int * FUN_0042ed54(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                  undefined2 *param_5)

{
  undefined4 local_8;
  
  local_8 = param_3;
  FUN_0042ed28(&local_8,param_2,param_3,param_4,&local_8);
  if ((*(byte *)(*param_4 + 0xc) & 0x86) == 0) {
    *param_5 = (undefined2)local_8;
  }
  return param_4;
}


/* Ghidra address: 0042ed84; FUN_0042ed84 */

int * FUN_0042ed84(void)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int *in_stack_00000004;
  undefined1 *in_stack_00000008;
  int in_stack_0000000c;
  byte in_stack_00000010;
  
  bVar2 = FUN_0042e6f4();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    uVar3 = 0;
    while (in_stack_0000000c = in_stack_0000000c + -1, 0 < in_stack_0000000c) {
      piVar1 = *(int **)(*in_stack_00000004 + 4);
      if ((uint)piVar1[8] < (uint)piVar1[9]) {
        uVar3 = (uint)*(byte *)piVar1[8];
      }
      else {
        uVar3 = (**(code **)(*piVar1 + 0xc))();
      }
      if (uVar3 == 0xffffffff) break;
      in_stack_00000004[2] = in_stack_00000004[2] + 1;
      piVar1 = *(int **)(*in_stack_00000004 + 4);
      if ((uint)piVar1[8] < (uint)piVar1[9]) {
        piVar1[8] = piVar1[8] + 1;
      }
      else {
        (**(code **)(*piVar1 + 0xc))();
      }
      if (uVar3 == in_stack_00000010) break;
      *in_stack_00000008 = (char)uVar3;
      in_stack_00000008 = in_stack_00000008 + 1;
    }
    if (uVar3 == 0xffffffff) {
      FUN_0042f90c();
    }
  }
  *in_stack_00000008 = 0;
  return in_stack_00000004;
}


/* Ghidra address: 0042ee34; FUN_0042ee34 */

int * FUN_0042ee34(void)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int *in_stack_00000004;
  undefined1 *in_stack_00000008;
  int in_stack_0000000c;
  char in_stack_00000010;
  
  bVar2 = FUN_0042e6f4();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    uVar3 = 0;
    while (in_stack_0000000c = in_stack_0000000c + -1, 0 < in_stack_0000000c) {
      piVar1 = *(int **)(*in_stack_00000004 + 4);
      if ((uint)piVar1[8] < (uint)piVar1[9]) {
        uVar3 = (uint)*(byte *)piVar1[8];
      }
      else {
        uVar3 = (**(code **)(*piVar1 + 0xc))();
      }
      if ((uVar3 == (int)in_stack_00000010) || (uVar3 == 0xffffffff)) break;
      *in_stack_00000008 = (char)uVar3;
      in_stack_00000008 = in_stack_00000008 + 1;
      in_stack_00000004[2] = in_stack_00000004[2] + 1;
      piVar1 = *(int **)(*in_stack_00000004 + 4);
      if ((uint)piVar1[8] < (uint)piVar1[9]) {
        piVar1[8] = piVar1[8] + 1;
      }
      else {
        (**(code **)(*piVar1 + 0xc))();
      }
    }
    if (uVar3 == 0xffffffff) {
      FUN_0042f90c();
    }
  }
  *in_stack_00000008 = 0;
  return in_stack_00000004;
}


/* Ghidra address: 0042eee4; FUN_0042eee4 */

int * FUN_0042eee4(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  iVar1 = (**(code **)(**(int **)(*in_stack_00000004 + 4) + 0x24))();
  if (iVar1 == -1) {
    FUN_0042f90c();
  }
  return in_stack_00000004;
}


/* Ghidra address: 0042ef0c; FUN_0042ef0c */

undefined4 * FUN_0042ef0c(void)

{
  undefined4 *in_stack_00000004;
  
  FUN_0042f4b4();
  *in_stack_00000004 = &PTR_FUN_004386f4;
  FUN_0042f000();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0042ef41; FUN_0042ef41 */

void FUN_0042ef41(void)

{
  return;
}


/* Ghidra address: 0042efa8; FUN_0042efa8 */

void FUN_0042efa8(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_004386f4;
    if ((*(ushort *)(in_stack_00000004 + 0xc) & 3) == 1) {
      if (in_stack_00000004[0xb] == 0) {
        FUN_00431964();
      }
      else {
        (*(code *)in_stack_00000004[0xb])();
      }
    }
    FUN_0042f608();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 0042f000; FUN_0042f000 */

void FUN_0042f000(void)

{
  int in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  *(undefined2 *)(in_stack_00000004 + 0x30) = 0;
  if (in_stack_0000000c == 0) {
    FUN_00429114();
  }
  else if (in_stack_0000000c < 0) {
    *(ushort *)(in_stack_00000004 + 0x30) = *(ushort *)(in_stack_00000004 + 0x30) | 4;
  }
  FUN_0042f678();
  if (in_stack_00000010 == 0) {
    FUN_0042f6e0();
  }
  else {
    FUN_0042f714();
    FUN_0042f6e0();
  }
  *(undefined4 *)(in_stack_00000004 + 0x28) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x2c) = 0;
  return;
}


/* Ghidra address: 0042f094; FUN_0042f094 */

uint FUN_0042f094(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int *in_stack_00000004;
  byte in_stack_00000008;
  
  if ((*(ushort *)(in_stack_00000004 + 0xc) & 3) == 1) {
    if (in_stack_00000004[2] == 0) {
      (**(code **)(*in_stack_00000004 + 0x30))();
    }
    if (in_stack_00000004[4] == 0) {
      FUN_0042f714();
    }
  }
  if (in_stack_00000004[4] != 0) {
    if (((uint)in_stack_00000004[6] <= (uint)in_stack_00000004[5]) &&
       ((*(ushort *)(in_stack_00000004 + 0xc) & 3) == 1)) {
      iVar1 = in_stack_00000004[2];
      iVar4 = FUN_004319bc();
      if (iVar4 == 0) {
        return 0xffffffff;
      }
      FUN_00428fe4();
      iVar4 = in_stack_00000004[5];
      iVar2 = in_stack_00000004[8];
      FUN_0042f678();
      FUN_0042f714();
      in_stack_00000004[5] = in_stack_00000004[5] + (iVar4 - iVar1);
      if (iVar2 != 0) {
        FUN_0042f6e0();
      }
      FUN_00431964();
    }
    if ((uint)in_stack_00000004[5] < (uint)in_stack_00000004[6]) {
      if ((uint)in_stack_00000004[6] <= (uint)in_stack_00000004[5]) {
        uVar5 = (**(code **)(*in_stack_00000004 + 0x18))();
        return uVar5;
      }
      pbVar3 = (byte *)in_stack_00000004[5];
      in_stack_00000004[5] = in_stack_00000004[5] + 1;
      *pbVar3 = in_stack_00000008;
      return (uint)in_stack_00000008;
    }
  }
  return 0xffffffff;
}


/* Ghidra address: 0042f3b8; FUN_0042f3b8 */

int * FUN_0042f3b8(void)

{
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    *in_stack_00000004 = (int)in_stack_00000004 + 0x3e;
    FUN_0042f7f4();
  }
  in_stack_00000004[1] = (int)&PTR_FUN_00438734;
  *(undefined ***)*in_stack_00000004 = &PTR_LAB_00438740;
  FUN_0042ef0c();
  FUN_0042f8c4();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 0042f420; FUN_0042f420 */

void FUN_0042f420(void)

{
  undefined4 *in_stack_00000004;
  uint in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    in_stack_00000004[1] = &PTR_FUN_00438734;
    *(undefined ***)*in_stack_00000004 = &PTR_LAB_00438740;
    FUN_0042efa8();
    if ((in_stack_00000008 & 2) != 0) {
      FUN_0042f814();
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 0042f47c; FUN_0042f47c */

undefined4 FUN_0042f47c(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_004319bc();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *(int *)(in_stack_00000004 + 8) = iVar1;
  *(int *)(in_stack_00000004 + 0xc) = iVar1 + 0x400;
  *(undefined2 *)(in_stack_00000004 + 4) = 1;
  return 1;
}


/* Ghidra address: 0042f4b4; FUN_0042f4b4 */

void FUN_0042f4b4(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = &PTR_FUN_00438750;
  *(undefined2 *)(in_stack_00000004 + 1) = 0;
  *(undefined2 *)((int)in_stack_00000004 + 6) = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[4] = 0;
  in_stack_00000004[5] = 0;
  in_stack_00000004[6] = 0;
  in_stack_00000004[8] = 0;
  in_stack_00000004[9] = 0;
  in_stack_00000004[7] = 0;
  in_stack_00000004[3] = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return;
}


/* Ghidra address: 0042f500; FUN_0042f500 */

uint FUN_0042f500(void)

{
  int iVar1;
  uint uVar2;
  int *in_stack_00000004;
  
  iVar1 = (**(code **)(*in_stack_00000004 + 0xc))();
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(byte *)in_stack_00000004[8];
  }
  return uVar2;
}


/* Ghidra address: 0042f520; FUN_0042f520 */

int FUN_0042f520(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *in_stack_00000004;
  undefined1 *in_stack_00000008;
  int in_stack_0000000c;
  undefined1 local_8;
  
  if ((uint)in_stack_00000004[8] < (uint)in_stack_00000004[9]) {
    iVar4 = in_stack_00000004[9] - in_stack_00000004[8];
  }
  else {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    FUN_00428fe4();
    in_stack_00000008 = in_stack_00000008 + iVar4;
    in_stack_00000004[8] = in_stack_00000004[8] + iVar4;
  }
  while( true ) {
    if (in_stack_0000000c <= iVar4) {
      return iVar4;
    }
    if (((uint)in_stack_00000004[8] < (uint)in_stack_00000004[9]) ||
       (iVar2 = (**(code **)(*in_stack_00000004 + 0xc))(), iVar2 != -1)) {
      pbVar1 = (byte *)in_stack_00000004[8];
      in_stack_00000004[8] = in_stack_00000004[8] + 1;
      uVar3 = (uint)*pbVar1;
    }
    else {
      uVar3 = 0xffffffff;
    }
    if (uVar3 == 0xffffffff) break;
    local_8 = (undefined1)uVar3;
    *in_stack_00000008 = local_8;
    in_stack_00000008 = in_stack_00000008 + 1;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}


/* Ghidra address: 0042f608; FUN_0042f608 */

void FUN_0042f608(void)

{
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00438750;
    if (*(short *)(in_stack_00000004 + 1) != 0) {
      FUN_00431964();
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}


/* Ghidra address: 0042f678; FUN_0042f678 */

void FUN_0042f678(void)

{
  undefined2 uVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  
  if (((*(short *)(in_stack_00000004 + 4) != 0) && (*(int *)(in_stack_00000004 + 8) != 0)) &&
     (in_stack_00000008 != *(uint *)(in_stack_00000004 + 8))) {
    FUN_00431964();
  }
  *(uint *)(in_stack_00000004 + 8) = in_stack_00000008;
  if (((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) ||
     (in_stack_0000000c < in_stack_00000008)) {
    in_stack_0000000c = in_stack_00000008;
  }
  *(uint *)(in_stack_00000004 + 0xc) = in_stack_0000000c;
  *(ushort *)(in_stack_00000004 + 6) = (ushort)(in_stack_00000008 == 0);
  if ((in_stack_00000010 == 0) || (in_stack_00000008 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined2 *)(in_stack_00000004 + 4) = uVar1;
  return;
}


/* Ghidra address: 0042f6e0; FUN_0042f6e0 */

void FUN_0042f6e0(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  
  if ((in_stack_0000000c == 0) || (in_stack_00000008 == 0)) {
    in_stack_00000008 = in_stack_0000000c;
  }
  *(uint *)(in_stack_00000004 + 0x1c) = in_stack_00000008;
  *(uint *)(in_stack_00000004 + 0x20) = in_stack_0000000c;
  if (((in_stack_0000000c == 0) || (in_stack_00000010 == 0)) ||
     (in_stack_00000010 < in_stack_0000000c)) {
    in_stack_00000010 = in_stack_0000000c;
  }
  *(uint *)(in_stack_00000004 + 0x24) = in_stack_00000010;
  return;
}


/* Ghidra address: 0042f714; FUN_0042f714 */

void FUN_0042f714(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  *(uint *)(in_stack_00000004 + 0x14) = in_stack_00000008;
  *(uint *)(in_stack_00000004 + 0x10) = in_stack_00000008;
  if (((in_stack_00000008 == 0) || (in_stack_0000000c == 0)) ||
     (in_stack_0000000c < in_stack_00000008)) {
    in_stack_0000000c = in_stack_00000008;
  }
  *(uint *)(in_stack_00000004 + 0x18) = in_stack_0000000c;
  return;
}


/* Ghidra address: 0042f7b8; FUN_0042f7b8 */

void FUN_0042f7b8(void)

{
  uint uVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  
  uVar1 = in_stack_00000008 & 0xff | *(uint *)(in_stack_00000004 + 0xc) & 0x80;
  *(uint *)(in_stack_00000004 + 0xc) = uVar1;
  *(uint *)(in_stack_00000004 + 0x10) = *(uint *)(in_stack_00000004 + 0x10) & 0xffffff00 | uVar1;
  *(uint *)(in_stack_00000004 + 0x14) =
       *(uint *)(in_stack_00000004 + 0x14) & 0xffffff00 | *(uint *)(in_stack_00000004 + 0xc);
  return;
}


/* Ghidra address: 0042f7f4; FUN_0042f7f4 */

void FUN_0042f7f4(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = &PTR_FUN_00438790;
  in_stack_00000004[0xe] = 0;
  in_stack_00000004[0xc] = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return;
}


/* Ghidra address: 0042f814; FUN_0042f814 */

void FUN_0042f814(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4387a4);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = &PTR_FUN_00438790;
    if (in_stack_00000004[0xe] != 0) {
      FUN_00431964();
    }
    if (in_stack_00000004[0xc] == 2) {
      puVar1 = (undefined4 *)in_stack_00000004[1];
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = FUN_0042b677();
        *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
        (**(code **)*puVar1)();
      }
      in_stack_00000004[1] = 0;
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}


/* Ghidra address: 0042f8c4; FUN_0042f8c4 */

void FUN_0042f8c4(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x3c) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0x100;
  *(undefined4 *)(in_stack_00000004 + 0x18) = 1;
  *(undefined4 *)(in_stack_00000004 + 0x1c) = 6;
  *(undefined4 *)(in_stack_00000004 + 0x20) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x24) = 0x20;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x30) = 1;
  *(undefined4 *)(in_stack_00000004 + 4) = in_stack_00000008;
  return;
}


/* Ghidra address: 0042f90c; FUN_0042f90c */

void FUN_0042f90c(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  
  *(uint *)(in_stack_00000004 + 0xc) = *(uint *)(in_stack_00000004 + 0xc) | in_stack_00000008 & 0xff
  ;
  *(uint *)(in_stack_00000004 + 0x10) =
       *(uint *)(in_stack_00000004 + 0x10) | in_stack_00000008 & 0xfffffcff;
  *(uint *)(in_stack_00000004 + 0x14) =
       *(uint *)(in_stack_00000004 + 0x14) | in_stack_00000008 & 0xfffffdff;
  return;
}


/* Ghidra address: 0042f944; FUN_0042f944 */

uint FUN_0042f944(void)

{
  uint uVar1;
  uint in_stack_00000004;
  
  if (in_stack_00000004 == 0xffffffff) {
    return 0xffffffff;
  }
  uVar1 = in_stack_00000004 & 0xff;
  if (((&DAT_00438815)[uVar1] & 8) != 0) {
    return uVar1 - 0x20;
  }
  return uVar1;
}


/* Ghidra address: 0042f96c; FUN_0042f96c */

void FUN_0042f96c(void)

{
  ushort uVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined2 in_stack_00000008;
  double *in_stack_0000000c;
  
  *(byte *)((int)in_stack_0000000c + 7) = *(byte *)((int)in_stack_0000000c + 7) & 0x7f;
  fVar3 = (float10)*in_stack_0000000c;
  uVar1 = *(short *)((int)in_stack_0000000c + 6) * 2;
  bVar2 = (byte)in_stack_00000008;
  if (uVar1 == 0) {
    if (bVar2 != 0xff) {
      return;
    }
  }
  else {
    if (uVar1 < 0x7fe0) {
      fVar4 = SQRT((float10)1 - fVar3 * fVar3);
      fVar5 = fVar4;
      if (fVar4 < fVar3 || (fVar4 == fVar3) != 0) {
        if ((short)((ushort)(byte)((fVar4 < fVar3 |
                                   (byte)((ushort)((ushort)(fVar4 == fVar3) << 0xe) >> 8)) * '\x02')
                   << 8) < 0) {
          fscale((float10)3.141592653589793,(float10)-2);
          return;
        }
        bVar2 = ~bVar2;
        fVar5 = fVar3;
        fVar3 = fVar4;
      }
      fpatan(fVar3,fVar5);
      if (bVar2 == 0) {
        return;
      }
      fscale((float10)3.141592653589793,(float10)-1);
      return;
    }
    if ((0x7fe0 < uVar1) ||
       ((*(short *)((int)in_stack_0000000c + 4) != 0 || *(short *)((int)in_stack_0000000c + 2) != 0)
        || *(short *)in_stack_0000000c != 0)) {
      *(byte *)((int)in_stack_0000000c + 7) =
           *(byte *)((int)in_stack_0000000c + 7) |
           (byte)((ushort)in_stack_00000008 >> 9) |
           (*(short *)((int)in_stack_0000000c + 6) < 0) << 7;
      FUN_00430ac8();
      return;
    }
    if (bVar2 == 0xff) {
      return;
    }
  }
  fscale((float10)3.141592653589793,(float10)-1);
  return;
}


/* Ghidra address: 0042fa55; FUN_0042fa55 */

void FUN_0042fa55(void)

{
  FUN_0042f96c();
  return;
}


/* Ghidra address: 0042fa88; FUN_0042fa88 */

undefined2 FUN_0042fa88(void)

{
  undefined2 in_FPUStatusWord;
  
  return in_FPUStatusWord;
}


/* Ghidra address: 0042fa9c; FUN_0042fa9c */

void FUN_0042fa9c(void)

{
  ushort in_stack_0000000a;
  
  if ((in_stack_0000000a & 0x7ff0) < 0x4340) {
    FUN_0042fb24();
  }
  else {
    FUN_00430ac8();
  }
  return;
}


/* Ghidra address: 0042fae0; FUN_0042fae0 */

void FUN_0042fae0(void)

{
  return;
}


/* Ghidra address: 0042fb08; thunk_FUN_0042fe00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0042fe00(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042fb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00438960)();
  return;
}


/* Ghidra address: 0042fb0e; thunk_FUN_0042fe00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0042fe00(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042fb0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00438964)();
  return;
}


/* Ghidra address: 0042fb14; thunk_FUN_0042fe0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0042fe0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042fb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00438968)();
  return;
}


/* Ghidra address: 0042fb1a; thunk_FUN_0042fe0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0042fe0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0042fb1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_0043896c)();
  return;
}


/* Ghidra address: 0042fb20; FUN_0042fb20 */

void FUN_0042fb20(void)

{
  FUN_0042fb2a();
  return;
}


/* Ghidra address: 0042fb24; FUN_0042fb24 */

void FUN_0042fb24(void)

{
  FUN_0042fb2a();
  return;
}


/* Ghidra address: 0042fb2a; FUN_0042fb2a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042fb2a(void)

{
  float10 fVar1;
  byte bVar2;
  float10 in_ST0;
  float10 fVar3;
  byte bStack_3;
  
  if (in_ST0 != (float10)0) {
    fVar1 = (float10)0;
    bVar2 = NAN(_DAT_00439024) | (byte)((ushort)((ushort)(_DAT_00439024 < fVar1) << 9) >> 8);
    bStack_3 = bVar2 | (byte)((ushort)((ushort)(_DAT_00439024 != fVar1) << 10) >> 8) |
               (byte)((ushort)((ushort)(_DAT_00439024 == fVar1) << 0xe) >> 8);
    fVar3 = ABS(in_ST0) - (float10)(unkint10)(ABS(in_ST0) / _DAT_00439024) * _DAT_00439024;
    if ((_DAT_00439024 != fVar1) == 0) {
      if (3 < (byte)(bVar2 << 1 | (char)(bStack_3 << 1) < '\0')) {
        fVar3 = _DAT_00439024 - fVar3;
      }
      fptan(fVar3);
    }
  }
  return;
}


/* Ghidra address: 0042fc14; FUN_0042fc14 */

void FUN_0042fc14(void)

{
  FUN_0042fae0();
  return;
}


/* Ghidra address: 0042fc2c; FUN_0042fc2c */

undefined4 FUN_0042fc2c(void)

{
  float10 in_ST0;
  undefined4 local_10;
  
  local_10 = (undefined4)(longlong)ROUND(in_ST0);
  return local_10;
}


/* Ghidra address: 0042fc84; FUN_0042fc84 */

void FUN_0042fc84(void)

{
  longlong *in_stack_00000004;
  float10 *in_stack_00000008;
  
  if (*(short *)((int)in_stack_00000008 + 8) != 0x403e) {
    *in_stack_00000004 = (longlong)ROUND(*in_stack_00000008);
    return;
  }
  *(undefined4 *)in_stack_00000004 = *(undefined4 *)in_stack_00000008;
  *(undefined4 *)((int)in_stack_00000004 + 4) = *(undefined4 *)((int)in_stack_00000008 + 4);
  return;
}


/* Ghidra address: 0042fca8; FUN_0042fca8 */

ushort FUN_0042fca8(void)

{
  float10 fVar1;
  float10 fVar2;
  float10 *in_stack_00000004;
  
  fVar1 = *in_stack_00000004;
  fVar2 = (float10)0;
  return (ushort)NAN(fVar1) << 8 | (ushort)(fVar1 < fVar2) << 9 | (ushort)(fVar1 != fVar2) << 10 |
         (ushort)(fVar1 == fVar2) << 0xe;
}


/* Ghidra address: 0042fcbc; FUN_0042fcbc */

undefined4 FUN_0042fcbc(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_stack_00000004;
  
  uVar1 = in_stack_00000004[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar1 % 10;
    in_stack_00000004[1] = uVar1 / 10;
  }
  uVar2 = *in_stack_00000004;
  *in_stack_00000004 = (int)(CONCAT44(uVar3,uVar2) / 10);
  return (int)(CONCAT44(uVar3,uVar2) % 10);
}


/* Ghidra address: 0042fd14; FUN_0042fd14 */

void FUN_0042fd14(void)

{
  ushort in_stack_0000000a;
  
  if ((in_stack_0000000a & 0x7ff0) < 0x4340) {
    FUN_0042fb20();
  }
  else {
    FUN_00430ac8();
  }
  return;
}


/* Ghidra address: 0042fd58; FUN_0042fd58 */

void FUN_0042fd58(void)

{
  ushort in_stack_0000000a;
  
  if (((in_stack_0000000a & 0x7fff) != 0) && ((short)in_stack_0000000a < 0)) {
    FUN_00430ac8();
  }
  return;
}


/* Ghidra address: 0042fd94; FUN_0042fd94 */

int FUN_0042fd94(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  char *in_stack_00000004;
  
  iVar2 = 0;
  do {
    pcVar3 = in_stack_00000004;
    cVar1 = *pcVar3;
    in_stack_00000004 = pcVar3 + 1;
  } while (((&DAT_00438815)[cVar1] & 1) != 0);
  if ((cVar1 == '+') || (cVar1 == '-')) {
    bVar4 = cVar1 == '-';
    cVar1 = *in_stack_00000004;
    in_stack_00000004 = pcVar3 + 2;
  }
  else {
    bVar4 = false;
  }
  while (('/' < cVar1 && (cVar1 < ':'))) {
    iVar2 = iVar2 * 10 + (int)cVar1 + -0x30;
    cVar1 = *in_stack_00000004;
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  if (bVar4) {
    iVar2 = -iVar2;
  }
  return iVar2;
}


/* Ghidra address: 0042fe00; FUN_0042fe00 */

void FUN_0042fe00(void)

{
  FUN_00431e98();
  return;
}


/* Ghidra address: 0042fe0c; FUN_0042fe0c */

void FUN_0042fe0c(void)

{
  FUN_00431e98();
  return;
}


/* Ghidra address: 0042fe18; FUN_0042fe18 */

int FUN_0042fe18(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 < 0) {
    in_stack_00000004 = -in_stack_00000004;
  }
  return in_stack_00000004;
}


/* Ghidra address: 0042fe30; FUN_0042fe30 */

void FUN_0042fe30(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int in_stack_00000004;
  short in_stack_00000008;
  short in_stack_0000000a;
  short in_stack_0000000c;
  short in_stack_0000000e;
  ushort in_stack_00000010;
  
  if (in_stack_00000004 == 0) {
    uVar1 = 0x407e;
    uVar3 = 0x3f6a;
  }
  else {
    uVar1 = 0x43fe;
    uVar3 = 0x3bcd;
  }
  uVar2 = in_stack_00000010 & 0x7fff;
  if (uVar2 == 0x7fff) {
    return;
  }
  if (uVar2 <= uVar1) {
    if (uVar1 == uVar2) {
      FUN_0042fae0();
      FUN_0042fae0();
      FUN_0042fae0();
      return;
    }
    if ((((in_stack_00000008 == 0 && uVar2 == 0) && in_stack_0000000a == 0) &&
        in_stack_0000000c == 0) && in_stack_0000000e == 0) {
      return;
    }
    if (uVar3 <= uVar2) {
      return;
    }
  }
  DAT_00438c44 = 0x22;
  return;
}


/* Ghidra address: 0042ff28; FUN_0042ff28 */

char * FUN_0042ff28(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint in_stack_00000004;
  char *in_stack_00000008;
  uint in_stack_0000000c;
  char in_stack_00000010;
  char in_stack_00000014;
  char local_28 [36];
  
  pcVar3 = in_stack_00000008;
  if ((1 < (int)in_stack_0000000c) && ((int)in_stack_0000000c < 0x25)) {
    if (((int)in_stack_00000004 < 0) && (in_stack_00000010 != '\0')) {
      *in_stack_00000008 = '-';
      pcVar3 = in_stack_00000008 + 1;
      in_stack_00000004 = -in_stack_00000004;
    }
    pcVar2 = local_28;
    do {
      *pcVar2 = (char)(in_stack_00000004 % in_stack_0000000c);
      pcVar2 = pcVar2 + 1;
      in_stack_00000004 = in_stack_00000004 / in_stack_0000000c;
    } while (in_stack_00000004 != 0);
    while (pcVar2 != local_28) {
      pcVar2 = pcVar2 + -1;
      cVar1 = *pcVar2;
      if (cVar1 < '\n') {
        *pcVar3 = cVar1 + '0';
        pcVar3 = pcVar3 + 1;
      }
      else {
        *pcVar3 = cVar1 + in_stack_00000014 + -10;
        pcVar3 = pcVar3 + 1;
      }
    }
  }
  *pcVar3 = '\0';
  return in_stack_00000008;
}


/* Ghidra address: 0042ff9c; FUN_0042ff9c */

void FUN_0042ff9c(void)

{
  FUN_0042ff28();
  return;
}


/* Ghidra address: 0042ffb8; FUN_0042ffb8 */

undefined4 FUN_0042ffb8(void)

{
  int *in_stack_00000004;
  
  if (*in_stack_00000004 == 4) {
    in_stack_00000004[6] = 0;
    in_stack_00000004[7] = 0;
    return 1;
  }
  if (*in_stack_00000004 == 5) {
    return 1;
  }
  return 0;
}


/* Ghidra address: 00430014; FUN_00430014 */

void FUN_00430014(void)

{
  undefined *in_stack_00000004;
  undefined *in_stack_00000008;
  
  PTR_FUN_004389f8 = in_stack_00000004;
  PTR_LAB_004389fc = in_stack_00000008;
  return;
}


/* Ghidra address: 00430030; FUN_00430030 */

uint FUN_00430030(void)

{
  char in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((in_stack_00000004 == 'G') || (in_stack_00000004 == 'g')) {
    while (*(char *)(in_stack_0000000c - 1) == '0') {
      in_stack_0000000c = in_stack_0000000c - 1;
      if (in_stack_0000000c <= in_stack_00000008) {
        return in_stack_00000008;
      }
    }
  }
  if (*PTR_DAT_004387d8 == *(char *)(in_stack_0000000c - 1)) {
    in_stack_0000000c = in_stack_0000000c - 1;
  }
  return in_stack_0000000c;
}


/* Ghidra address: 00430068; FUN_00430068 */

byte * FUN_00430068(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  int in_stack_00000008;
  byte *in_stack_0000000c;
  byte in_stack_00000010;
  char in_stack_00000014;
  byte local_3c [46];
  byte local_e;
  byte local_d;
  int local_c;
  int local_8;
  
  bVar11 = 0;
  local_e = *PTR_DAT_004387d8;
  if (0x28 < in_stack_00000008) {
    in_stack_00000008 = 0x28;
  }
  local_c = in_stack_00000008;
  local_d = in_stack_00000010 & 0xdf;
  if (local_d == 0x46) {
    if (0 < -in_stack_00000008) {
      in_stack_00000008 = 0;
    }
  }
  else if ((0 < in_stack_00000008) && (local_d == 0x45)) {
    in_stack_00000008 = in_stack_00000008 + 1;
  }
  iVar2 = FUN_004307f8();
  if (iVar2 == 0x7fff) {
    if (local_8 == 0) {
      pcVar3 = &DAT_00438a49;
    }
    else {
      pcVar3 = &DAT_00438a44;
    }
    uVar5 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pbVar7 = (byte *)(pcVar10 + -uVar5);
    pbVar4 = in_stack_0000000c;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar4 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + (uint)bVar11 * -8 + 4;
      pbVar4 = pbVar4 + (uint)bVar11 * -8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar4 = *pbVar7;
      pbVar7 = pbVar7 + (uint)bVar11 * -2 + 1;
      pbVar4 = pbVar4 + (uint)bVar11 * -2 + 1;
    }
    return in_stack_0000000c;
  }
  if (iVar2 == 0x7ffe) {
    if (local_8 == 0) {
      pcVar3 = &DAT_00438a53;
    }
    else {
      pcVar3 = &DAT_00438a4e;
    }
    uVar5 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pbVar7 = (byte *)(pcVar10 + -uVar5);
    pbVar4 = in_stack_0000000c;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar4 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + (uint)bVar11 * -8 + 4;
      pbVar4 = pbVar4 + (uint)bVar11 * -8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar4 = *pbVar7;
      pbVar7 = pbVar7 + (uint)bVar11 * -2 + 1;
      pbVar4 = pbVar4 + (uint)bVar11 * -2 + 1;
    }
    return in_stack_0000000c;
  }
  pbVar7 = in_stack_0000000c;
  if (local_8 != 0) {
    *in_stack_0000000c = 0x2d;
    pbVar7 = in_stack_0000000c + 1;
  }
  if (local_d != 0x46) {
    if ((local_d != 0x47) || (iVar2 < -3)) goto LAB_0043022d;
    iVar9 = in_stack_00000008;
    if (in_stack_00000008 == 0) {
      iVar9 = 1;
    }
    if (iVar9 < iVar2) goto LAB_0043022d;
  }
  if (iVar2 < 0x29) {
    if (iVar2 < 1) {
      *pbVar7 = 0x30;
      pbVar7[1] = local_e;
      pbVar7 = pbVar7 + 2;
      for (iVar9 = iVar2; iVar2 = 0, iVar9 != 0; iVar9 = iVar9 + 1) {
        *pbVar7 = 0x30;
        pbVar7 = pbVar7 + 1;
      }
    }
    iVar9 = 0;
    for (pbVar4 = local_3c; *pbVar4 != 0; pbVar4 = pbVar4 + 1) {
      *pbVar7 = *pbVar4;
      pbVar8 = pbVar7 + 1;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        *pbVar8 = local_e;
        pbVar8 = pbVar7 + 2;
        iVar9 = iVar9 + 1;
      }
      pbVar7 = pbVar8;
    }
    iVar9 = iVar9 + local_c;
    if (iVar9 < in_stack_00000008) {
      pbVar4 = (byte *)FUN_00429054();
      pbVar7 = pbVar7 + (in_stack_00000008 - iVar9);
    }
    else if ((iVar2 != 1) && (in_stack_00000014 == '\0')) {
      pbVar4 = (byte *)FUN_00430030();
      pbVar7 = pbVar4;
    }
    if (pbVar7 == in_stack_0000000c) {
      *pbVar7 = 0x30;
      pbVar7 = pbVar7 + 1;
    }
    *pbVar7 = 0;
    return pbVar4;
  }
LAB_0043022d:
  *pbVar7 = local_3c[0];
  pbVar4 = pbVar7 + 1;
  if (local_3c[1] == 0) {
    if (in_stack_00000014 != '\0') {
      *pbVar4 = local_e;
      pbVar4 = pbVar7 + 2;
    }
  }
  else {
    *pbVar4 = local_e;
    pbVar4 = pbVar7 + 2;
    pbVar7 = local_3c + 2;
    while (local_3c[1] != 0) {
      *pbVar4 = local_3c[1];
      pbVar4 = pbVar4 + 1;
      local_3c[1] = *pbVar7;
      pbVar7 = pbVar7 + 1;
    }
    if (in_stack_00000014 == '\0') {
      pbVar4 = (byte *)FUN_00430030();
    }
  }
  *pbVar4 = in_stack_00000010 & 0x20 | 0x45;
  pbVar7 = (byte *)(iVar2 + -1);
  if ((int)pbVar7 < 0) {
    pbVar7 = (byte *)-(int)pbVar7;
    pbVar4[1] = 0x2d;
  }
  else {
    pbVar4[1] = 0x2b;
  }
  if ((int)pbVar7 < 1000) {
    if ((int)pbVar7 < 100) {
      iVar2 = 2;
    }
    else {
      iVar2 = 3;
    }
  }
  else {
    iVar2 = 4;
  }
  pbVar4[iVar2 + 2] = 0;
  pbVar4 = pbVar4 + iVar2 + 2;
  pbVar8 = pbVar4;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    pbVar4 = pbVar4 + -1;
    *pbVar4 = (char)((int)pbVar7 % 10) + 0x30;
    pbVar8 = (byte *)((int)pbVar7 / 10);
    pbVar7 = pbVar8;
  }
  return pbVar8;
}


/* Ghidra address: 0043076c; FUN_0043076c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043076c(void)

{
  float10 in_ST0;
  float *in_stack_00000004;
  double *in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((in_stack_0000000c & 4) == 0) {
    if ((in_stack_0000000c & 8) == 0) {
      FUN_0042fe30();
      *(float *)in_stack_00000008 = (float)in_ST0;
    }
    else {
      *(float *)in_stack_00000008 = *in_stack_00000004;
      *(float *)((int)in_stack_00000008 + 4) = in_stack_00000004[1];
      *(undefined2 *)(in_stack_00000008 + 1) = *(undefined2 *)(in_stack_00000004 + 2);
    }
  }
  else {
    FUN_0042fe30();
    *in_stack_00000008 = (double)in_ST0;
  }
  return;
}


/* Ghidra address: 004307f8; FUN_004307f8 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_004307f8(void)

{
  float10 fVar1;
  float10 fVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 *in_stack_00000004;
  int in_stack_00000008;
  uint *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined1 *local_28;
  int local_18;
  undefined1 local_10 [8];
  ushort uStack_8;
  
  if (in_stack_00000014 == 2) {
    _local_10 = (float10)*(float *)in_stack_00000004;
  }
  else if (in_stack_00000014 == 6) {
    _local_10 = (float10)*(double *)in_stack_00000004;
  }
  else if (in_stack_00000014 == 8) {
    _local_10 = *in_stack_00000004;
  }
  fVar1 = _local_10;
  uVar3 = uStack_8;
  uVar4 = (uint)uStack_8;
  _local_10 = (float10)CONCAT28(uStack_8 & 0x7fff,local_10);
  fVar2 = _local_10;
  *in_stack_0000000c = (uint)((uVar3 & 0x8000) != 0);
  uVar3 = FUN_0042fca8();
  uVar3 = uVar3 & 0x4700;
  if (uVar3 != 0x4000) {
    if (uVar3 == 0x500) {
      return 0x7fff;
    }
    if (uVar3 == 0x100) {
      return 0x7ffe;
    }
    local_10[7] = SUB101(fVar1,7);
    uVar4 = ((uVar4 & 0x7fff) - 0x3fff) * 0x4d10 + ((uint)local_10[7] * 2 & 0xff) * 0x4d;
    local_18 = (int)uVar4 >> 0x10;
    if ((uVar4 & 0xffff) != 0) {
      local_18 = local_18 + 1;
    }
    iVar10 = in_stack_00000008;
    if ((0 < in_stack_00000008) || (iVar10 = local_18 - in_stack_00000008, -1 < iVar10)) {
      if (0x13 < iVar10) {
        iVar10 = 0x13;
      }
      _local_10 = fVar2;
      for (iVar9 = iVar10 - local_18; iVar9 != 0; iVar9 = iVar9 + iVar6) {
        iVar6 = iVar9;
        if (iVar9 < 0) {
          iVar6 = -iVar9;
        }
        if (0x1344 < iVar6) {
          iVar6 = 0x1344;
        }
        FUN_00430b74();
        if (iVar9 < 0) {
          _local_10 = _local_10 / in_ST0;
        }
        else {
          _local_10 = _local_10 * in_ST0;
          iVar6 = -iVar6;
        }
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
      }
      FUN_00430b74();
      if (_local_10 <= in_ST0) {
        FUN_00430b74();
        iVar9 = iVar10;
        if (_local_10 < in_ST1) {
          local_18 = local_18 + -1;
          iVar9 = iVar10 + -1;
          if (0 < in_stack_00000008) {
            _local_10 = _local_10 * (float10)10;
            iVar9 = iVar10;
          }
        }
      }
      else {
        local_18 = local_18 + 1;
        iVar9 = iVar10 + 1;
        if ((iVar9 < 0x14) && (0 < in_stack_00000008)) {
          _local_10 = _local_10 / (float10)10;
          iVar9 = iVar10;
        }
      }
      if (-1 < iVar9) {
        FUN_0042fc84();
        local_28 = (undefined1 *)(in_stack_00000010 + iVar9);
        bVar8 = 0;
        *local_28 = 0;
        pcVar7 = local_28 + -1;
        if (iVar9 == 0) {
          if (local_10[0] != '\x01') goto LAB_0043087f;
          bVar8 = 0;
        }
        else {
          do {
            uVar5 = FUN_0042fcbc();
            bVar8 = bVar8 | (byte)uVar5;
            *pcVar7 = (byte)uVar5 + 0x30;
            pcVar7 = pcVar7 + -1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        if (bVar8 == 0) {
          local_18 = local_18 + 1;
          if (in_stack_00000008 < 1) {
            *local_28 = 0x30;
          }
          local_28 = local_28 + 1;
          pcVar7[1] = '1';
        }
        if (in_stack_00000008 < 1) {
          in_stack_00000008 = local_18 - in_stack_00000008;
        }
        if (0x28 < in_stack_00000008) {
          in_stack_00000008 = 0x28;
        }
        *local_28 = 0;
        iVar10 = in_stack_00000008 - ((int)local_28 - in_stack_00000010);
        if (iVar10 < 1) {
          return local_18;
        }
        FUN_00429054();
        local_28[iVar10] = 0;
        return local_18;
      }
    }
  }
LAB_0043087f:
  if (in_stack_00000008 < 1) {
    in_stack_00000008 = 1 - in_stack_00000008;
  }
  if (0x28 < in_stack_00000008) {
    in_stack_00000008 = 0x28;
  }
  FUN_00429054();
  *(undefined1 *)(in_stack_00000010 + in_stack_00000008) = 0;
  *in_stack_0000000c = 0;
  return 1;
}


/* Ghidra address: 00430ac8; FUN_00430ac8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430ac8(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = (*(code *)PTR_FUN_004389f8)();
  if (iVar1 == 0) {
    FUN_0042cfc4();
    if (in_stack_00000004 - 2U < 3) {
      DAT_00438c44 = 0x22;
    }
    else {
      DAT_00438c44 = 0x21;
    }
    FUN_00431da8();
  }
  return;
}


/* Ghidra address: 00430b74; FUN_00430b74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430b74(void)

{
  return;
}


/* Ghidra address: 00430cec; FUN_00430cec */

uint * FUN_00430cec(void)

{
  uint *puVar1;
  
  puVar1 = FUN_00431428();
  if (puVar1 != (uint *)0x0) {
    FUN_00429054();
  }
  return puVar1;
}


/* Ghidra address: 00430d18; FUN_00430d18 */

void FUN_00430d18(void)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0xc; uVar2 < DAT_00438b60; uVar2 = uVar2 + 4) {
    iVar1 = uVar2 * 2 + DAT_00438b74;
    *(int *)(iVar1 + -8) = iVar1 + -0xc;
    *(int *)(iVar1 + -4) = iVar1 + -0xc;
  }
  iVar1 = DAT_00438b60 * 2 + DAT_00438b74;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -4) = 0;
  return;
}


/* Ghidra address: 00430d58; FUN_00430d58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00430d58(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  iVar4 = 0;
  if (in_stack_00000008 < 0x1000) {
    uVar1 = 0xffffffff;
  }
  else {
    in_stack_00000004[2] = 1;
    in_stack_00000004[3] = (uint)in_stack_00000004;
    *in_stack_00000004 = in_stack_00000008;
    in_stack_00000004[1] = in_stack_0000000c;
    in_stack_00000004[0x23] = (uint)DAT_00438b6c;
    in_stack_00000004[0x24] = 0;
    if (DAT_00438b6c == (uint *)0x0) {
      _DAT_00438b70 = in_stack_00000004;
    }
    else {
      DAT_00438b6c[0x24] = (uint)in_stack_00000004;
    }
    DAT_00438b6c = in_stack_00000004;
    in_stack_00000004[0x25] = 0;
    puVar3 = in_stack_00000004 + 0x26;
    if (DAT_00438b74 == (uint *)0x0) {
      uVar5 = DAT_00438b60 * 2 + 3 & 0xfffffffc;
      DAT_00438b74 = in_stack_00000004 + 0x27;
      *puVar3 = uVar5;
      puVar3 = (uint *)((int)puVar3 + uVar5 + 4);
      FUN_00430d18();
      iVar4 = uVar5 + 4;
    }
    uVar5 = (in_stack_00000008 - 0xa0) - iVar4;
    *puVar3 = uVar5 + 1;
    *(undefined4 *)((int)puVar3 + (uVar5 + 1 & 0xfffffffc) + 4) = 2;
    puVar2 = PTR_DAT_00438b84;
    if (uVar5 < DAT_00438b60) {
      puVar2 = (undefined *)((int)DAT_00438b74 + uVar5 * 2 + -0xc);
    }
    puVar3[1] = *(uint *)(puVar2 + 4);
    puVar3[2] = (uint)puVar2;
    *(uint **)(puVar3[1] + 8) = puVar3;
    *(uint **)(puVar2 + 4) = puVar3;
    *(uint *)((int)puVar3 + uVar5) = uVar5 + 4;
    uVar1 = 0;
  }
  return uVar1;
}


/* Ghidra address: 00430e58; FUN_00430e58 */

undefined4 FUN_00430e58(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *in_stack_00000004;
  uint in_stack_00000008;
  
  uVar4 = in_stack_00000008 & 0xfffff000;
  uVar1 = *in_stack_00000004;
  puVar3 = (uint *)((int)in_stack_00000004 + (uVar1 - 4));
  if (uVar4 < uVar1) {
    if ((*puVar3 & 2) == 0) {
      return 0xffffffff;
    }
    puVar3 = (uint *)((int)puVar3 - *(int *)((int)in_stack_00000004 + (uVar1 - 8)));
    if ((*puVar3 & 0xfffffffc) - 0xc < uVar1 - uVar4) {
      return 0xffffffff;
    }
    *puVar3 = *puVar3 - (uVar1 - uVar4);
    *(uint *)((int)puVar3 + (*puVar3 & 0xfffffffc)) = (*puVar3 & 0xfffffffc) + 4;
    *(undefined4 *)((int)puVar3 + (*puVar3 & 0xfffffffc) + 4) = 2;
    if ((*puVar3 & 0xfffffffc) < DAT_00438b60) {
      uVar1 = puVar3[1];
      *(uint *)(uVar1 + 8) = puVar3[2];
      *(uint *)(puVar3[2] + 4) = uVar1;
      puVar3[1] = *(uint *)(DAT_00438b74 + -8 + (*puVar3 & 0xfffffffc) * 2);
      puVar3[2] = ((*puVar3 & 0xfffffffc) * 2 + DAT_00438b74) - 0xc;
      *(uint **)(puVar3[1] + 8) = puVar3;
      *(uint **)(DAT_00438b74 + -8 + (*puVar3 & 0xfffffffc) * 2) = puVar3;
    }
  }
  else {
    uVar2 = *in_stack_00000004;
    *puVar3 = *puVar3 + (uVar4 - uVar2) + -4;
    *(undefined4 *)((int)in_stack_00000004 + (*puVar3 & 0xfffffffc) + uVar1) = 0;
    FUN_00431320();
    *in_stack_00000004 = *in_stack_00000004 + (uVar4 - uVar2);
  }
  return 0;
}


/* Ghidra address: 00430f44; FUN_00430f44 */

undefined4 FUN_00430f44(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_stack_00000004;
  int local_c;
  int local_8;
  
  uVar5 = in_stack_00000004 + 0xfffU & 0xfffff000;
  if (DAT_00438b88 == 0) {
    DAT_00438b88 = FUN_00431704();
  }
  piVar1 = DAT_00438b6c;
  if (DAT_00438b74 == 0) {
    uVar5 = uVar5 + (DAT_00438b60 * 2 + 0x109fU & 0xfffff000);
  }
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x23]) {
    if (uVar5 < (uint)(piVar1[1] - *piVar1)) {
      iVar3 = DAT_00438b58;
      if ((uint)(DAT_00438b8c + DAT_00438b54) < DAT_00438b88) {
        iVar3 = DAT_00438b54;
      }
      iVar2 = DAT_00438b58;
      if ((uint)(DAT_00438b8c + DAT_00438b54) < DAT_00438b88) {
        iVar2 = DAT_00438b54;
      }
      if ((uint)piVar1[1] < (iVar3 + -1 + uVar5 & ~(iVar2 - 1U)) + *piVar1) {
        iVar3 = piVar1[1];
      }
      else {
        iVar3 = DAT_00438b58;
        if ((uint)(DAT_00438b8c + DAT_00438b54) < DAT_00438b88) {
          iVar3 = DAT_00438b54;
        }
        iVar2 = DAT_00438b58;
        if ((uint)(DAT_00438b8c + DAT_00438b54) < DAT_00438b88) {
          iVar2 = DAT_00438b54;
        }
        iVar3 = (iVar3 + -1 + uVar5 & ~(iVar2 - 1U)) + *piVar1;
      }
      iVar2 = FUN_00431c9c();
      if (iVar2 != 0) {
        DAT_00438b8c = DAT_00438b8c + (iVar3 - *piVar1);
        FUN_00430e58();
        return 0;
      }
      iVar3 = FUN_00431c9c();
      if (iVar3 != 0) {
        DAT_00438b8c = DAT_00438b8c + 0x1000;
        FUN_00430e58();
        return 0;
      }
      return 0xffffffff;
    }
  }
  iVar3 = FUN_00431c30();
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = DAT_00438b58;
    if ((uint)(DAT_00438b8c + DAT_00438b54) < DAT_00438b88) {
      iVar3 = DAT_00438b54;
    }
    iVar2 = DAT_00438b58;
    if ((uint)(DAT_00438b8c + DAT_00438b54) < DAT_00438b88) {
      iVar2 = DAT_00438b54;
    }
    uVar5 = uVar5 + iVar3 + 0xfff & ~(iVar2 - 1U);
    for (piVar1 = DAT_00438b6c; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x23]) {
      if ((piVar1[1] + (int)piVar1 == local_8) && (piVar1[2] < 0x20)) {
        iVar3 = piVar1[1] - *piVar1;
        if (iVar3 != 0) {
          iVar2 = FUN_00431c9c();
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          DAT_00438b8c = DAT_00438b8c + iVar3;
          FUN_00430e58();
        }
        iVar2 = FUN_00431c9c();
        if (iVar2 != 0) {
          DAT_00438b8c = DAT_00438b8c + (uVar5 - iVar3);
          iVar3 = piVar1[2];
          piVar1[2] = piVar1[2] + 1;
          piVar1[iVar3 + 3] = local_8;
          piVar1[1] = piVar1[1] + local_c;
          FUN_00430e58();
          return 0;
        }
        return 0xffffffff;
      }
    }
    iVar3 = FUN_00431c9c();
    if (iVar3 == 0) {
      FUN_00431d14();
      uVar4 = 0xffffffff;
    }
    else {
      DAT_00438b8c = DAT_00438b8c + uVar5;
      FUN_00430d58();
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* Ghidra address: 0043121c; FUN_0043121c */

undefined4 FUN_0043121c(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint *in_stack_00000004;
  
  uVar4 = DAT_00438b68;
  if (DAT_00438b8c < DAT_00438b88) {
    uVar4 = DAT_00438b64;
  }
  if (uVar4 <= *in_stack_00000004 - 0xc) {
    for (piVar3 = DAT_00438b6c; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x23]) {
      if ((int)in_stack_00000004 + (*in_stack_00000004 & 0xfffffffc) + 4 ==
          (int)piVar3 + *piVar3 + -4) {
        iVar5 = *piVar3 - (*in_stack_00000004 - 0xc & ~(uVar4 - 1));
        FUN_00430e58();
        while ((uint)(iVar5 + (int)piVar3) <= (uint)piVar3[piVar3[2] + 2]) {
          piVar3[2] = piVar3[2] + -1;
          iVar1 = piVar3[piVar3[2] + 3];
          iVar2 = *piVar3;
          FUN_00431cf0();
          DAT_00438b8c = DAT_00438b8c - (iVar2 - (iVar1 - (int)piVar3));
          FUN_00431d14();
          iVar1 = piVar3[piVar3[2] + 3];
          piVar3[1] = iVar1 - (int)piVar3;
          *piVar3 = iVar1 - (int)piVar3;
        }
        FUN_00431cf0();
        DAT_00438b8c = DAT_00438b8c - (*piVar3 - iVar5);
        *piVar3 = iVar5;
        return 1;
      }
    }
  }
  return 0;
}


/* Ghidra address: 00431320; FUN_00431320 */

void FUN_00431320(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    puVar2 = (uint *)(in_stack_00000004 + -4);
    uVar3 = *puVar2;
    if ((uVar3 & 2) == 0) {
      *puVar2 = *puVar2 | 1;
    }
    else {
      puVar2 = (uint *)((int)puVar2 - *(int *)(in_stack_00000004 + -8));
      *puVar2 = *puVar2 + (uVar3 & 0xfffffffc) + 4;
      if (puVar2 == (uint *)PTR_DAT_00438b84) {
        PTR_DAT_00438b84 = *(undefined **)(PTR_DAT_00438b84 + 4);
      }
      uVar3 = puVar2[1];
      *(uint *)(uVar3 + 8) = puVar2[2];
      *(uint *)(puVar2[2] + 4) = uVar3;
    }
    uVar3 = *puVar2 & 0xfffffffc;
    puVar4 = (uint *)((int)puVar2 + uVar3 + 4);
    if ((*puVar4 & 1) != 0) {
      *puVar2 = *puVar2 + (*puVar4 & 0xfffffffc) + 4;
      if (puVar4 == (uint *)PTR_DAT_00438b84) {
        PTR_DAT_00438b84 = *(undefined **)((int)puVar2 + uVar3 + 8);
      }
      iVar1 = *(int *)((int)puVar2 + uVar3 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)puVar2 + uVar3 + 0xc);
      *(int *)(*(int *)((int)puVar2 + uVar3 + 0xc) + 4) = iVar1;
    }
    puVar4 = (uint *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4);
    *puVar4 = *puVar4 | 2;
    uVar3 = *puVar2 & 0xfffffffc;
    if (uVar3 < DAT_00438b60) {
      uVar5 = (uVar3 * 2 + DAT_00438b74) - 0xc;
    }
    else {
      uVar5 = *(uint *)(PTR_DAT_00438b84 + 4);
    }
    puVar2[1] = *(uint *)(uVar5 + 4);
    puVar2[2] = uVar5;
    *(uint **)(puVar2[1] + 8) = puVar2;
    *(uint **)(uVar5 + 4) = puVar2;
    *(uint *)((int)puVar2 + uVar3) = uVar3 + 4;
    if (*(int *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4) == 2) {
      uVar3 = DAT_00438b68;
      if (DAT_00438b8c < DAT_00438b88) {
        uVar3 = DAT_00438b64;
      }
      if (uVar3 < *puVar2) {
        FUN_0043121c();
      }
    }
  }
  return;
}


/* Ghidra address: 00431428; FUN_00431428 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint * FUN_00431428(void)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint in_stack_00000004;
  
  if (in_stack_00000004 == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    if (in_stack_00000004 < 0xc) {
      uVar7 = 0xc;
    }
    else {
      uVar7 = in_stack_00000004 + 3 & 0xfffffffc;
    }
    if (DAT_00438b74 == 0) {
      FUN_00430f44();
    }
    puVar1 = PTR_DAT_00438b84;
    puVar5 = (uint *)PTR_DAT_00438b84;
    if (uVar7 < DAT_00438b60) {
      iVar3 = uVar7 * 2 + DAT_00438b74;
      puVar2 = *(uint **)(iVar3 + -8);
      if ((uint *)(iVar3 + -0xc) != puVar2) {
        *puVar2 = *puVar2 & 0xfffffffe;
        puVar5 = (uint *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4);
        *puVar5 = *puVar5 & 0xfffffffd;
        uVar7 = puVar2[1];
        *(uint *)(uVar7 + 8) = puVar2[2];
        *(uint *)(puVar2[2] + 4) = uVar7;
        return puVar2 + 1;
      }
      if ((undefined4 *)PTR_DAT_00438b84 == &DAT_00438b78) {
        puVar5 = (uint *)PTR_DAT_00438b7c;
      }
      if ((undefined4 *)PTR_DAT_00438b7c == &DAT_00438b78) {
        for (iVar3 = uVar7 * 2 + DAT_00438b74 + -4;
            (((iVar4 = iVar3, iVar3 == *(int *)(iVar3 + 4) &&
              (iVar4 = iVar3 + 8, iVar4 == *(int *)(iVar3 + 0xc))) &&
             ((iVar4 = iVar3 + 0x10, iVar4 == *(int *)(iVar3 + 0x14) &&
              ((((iVar4 = iVar3 + 0x18, iVar4 == *(int *)(iVar3 + 0x1c) &&
                 (iVar4 = iVar3 + 0x20, iVar4 == *(int *)(iVar3 + 0x24))) &&
                (iVar4 = iVar3 + 0x28, iVar4 == *(int *)(iVar3 + 0x2c))) &&
               ((iVar4 = iVar3 + 0x30, iVar4 == *(int *)(iVar3 + 0x34) &&
                (iVar4 = iVar3 + 0x38, iVar4 == *(int *)(iVar3 + 0x3c))))))))) &&
            (((iVar4 = iVar3 + 0x40, iVar4 == *(int *)(iVar3 + 0x44) &&
              ((iVar4 = iVar3 + 0x48, iVar4 == *(int *)(iVar3 + 0x4c) &&
               (iVar4 = iVar3 + 0x50, iVar4 == *(int *)(iVar3 + 0x54))))) &&
             (((iVar4 = iVar3 + 0x58, iVar4 == *(int *)(iVar3 + 0x5c) &&
               (((iVar4 = iVar3 + 0x60, iVar4 == *(int *)(iVar3 + 100) &&
                 (iVar4 = iVar3 + 0x68, iVar4 == *(int *)(iVar3 + 0x6c))) &&
                (iVar4 = iVar3 + 0x70, iVar4 == *(int *)(iVar3 + 0x74))))) &&
              (iVar4 = iVar3 + 0x78, iVar4 == *(int *)(iVar3 + 0x7c))))))); iVar3 = iVar3 + 0x80) {
        }
        puVar5 = (uint *)PTR_DAT_00438b84;
        if (*(uint **)(iVar4 + 4) != (uint *)0x0) {
          puVar5 = *(uint **)(iVar4 + 4);
        }
      }
    }
    else {
      uVar9 = *(uint *)PTR_DAT_00438b84;
      if (uVar9 < uVar7) {
        *(undefined4 *)PTR_DAT_00438b84 = 0xfffffffd;
        puVar5 = *(uint **)(puVar1 + 4);
        while ((((((*puVar5 < uVar7 && (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                  (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                 (((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                   (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                  ((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                   ((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                    (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)))))))) &&
                ((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                 (((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                   (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                  (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)))))) &&
               (((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                 (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                ((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                 (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7))))))) {
          puVar5 = (uint *)puVar5[1];
        }
        *(uint *)PTR_DAT_00438b84 = uVar9;
        if (puVar5 == (uint *)PTR_DAT_00438b84) {
          puVar5 = &DAT_00438b78;
        }
      }
    }
    if (puVar5 == &DAT_00438b78) {
      iVar3 = FUN_00430f44();
      if (iVar3 == 0) {
        puVar2 = FUN_00431428();
      }
      else {
        puVar2 = (uint *)0x0;
      }
    }
    else {
      uVar9 = *puVar5;
      uVar8 = (uVar9 & 0xfffffffc) - uVar7;
      if (uVar8 < 0x10) {
        *puVar5 = *puVar5 & 0xfffffffe;
        puVar2 = (uint *)((int)puVar5 + (*puVar5 & 0xfffffffc) + 4);
        *puVar2 = *puVar2 & 0xfffffffd;
        if (DAT_00438b60 <= (uVar9 & 0xfffffffc)) {
          PTR_DAT_00438b84 = (undefined *)puVar5[1];
        }
        uVar7 = puVar5[1];
        *(uint *)(uVar7 + 8) = puVar5[2];
        puVar2 = puVar5 + 1;
        *(uint *)(puVar5[2] + 4) = uVar7;
      }
      else {
        uVar9 = uVar8 - 4;
        *puVar5 = uVar7;
        piVar6 = (int *)((int)puVar5 + uVar7 + 4);
        *piVar6 = uVar8 - 3;
        *(uint *)((int)piVar6 + uVar9) = uVar8;
        if (uVar9 < DAT_00438b60) {
          iVar3 = uVar9 * 2 + DAT_00438b74;
          *(undefined4 *)((int)puVar5 + uVar7 + 8) = *(undefined4 *)(iVar3 + -8);
          *(int *)((int)puVar5 + uVar7 + 0xc) = iVar3 + -0xc;
          *(int **)(*(int *)((int)puVar5 + uVar7 + 8) + 8) = piVar6;
          *(int **)(iVar3 + -8) = piVar6;
          if (puVar5 == (uint *)PTR_DAT_00438b84) {
            PTR_DAT_00438b84 = (undefined *)puVar5[1];
          }
          uVar7 = puVar5[1];
          *(uint *)(uVar7 + 8) = puVar5[2];
          *(uint *)(puVar5[2] + 4) = uVar7;
        }
        else {
          uVar9 = puVar5[2];
          *(int **)(uVar9 + 4) = piVar6;
          *(uint *)((int)puVar5 + uVar7 + 0xc) = uVar9;
          uVar9 = puVar5[1];
          *(int **)(uVar9 + 8) = piVar6;
          *(uint *)((int)puVar5 + uVar7 + 8) = uVar9;
          PTR_DAT_00438b84 = (undefined *)piVar6;
        }
        puVar2 = puVar5 + 1;
      }
    }
  }
  return puVar2;
}


/* Ghidra address: 00431704; FUN_00431704 */

SIZE_T FUN_00431704(void)

{
  _MEMORYSTATUS local_20;
  
  local_20.dwLength = 0x20;
  GlobalMemoryStatus(&local_20);
  return local_20.dwAvailPhys;
}


/* Ghidra address: 00431794; FUN_00431794 */

int FUN_00431794(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int in_stack_00000004;
  uint in_stack_00000008;
  int local_8;
  
  puVar4 = (uint *)(in_stack_00000004 + -4);
  uVar1 = *puVar4 & 0xfffffffc;
  puVar2 = (uint *)((int)puVar4 + uVar1 + 4);
  if (in_stack_00000008 < 0xc) {
    uVar3 = 0xc;
  }
  else {
    uVar3 = in_stack_00000008 + 3 & 0xfffffffc;
  }
  uVar6 = *puVar4 & 0xfffffffc;
  if (uVar3 != uVar6) {
    if ((*puVar2 & 1) != 0) {
      uVar6 = uVar6 + (*puVar2 & 0xfffffffc) + 4;
    }
    if (uVar6 < uVar3) {
      in_stack_00000004 = 0;
    }
    else {
      local_8 = 0;
      if ((*puVar2 & 1) != 0) {
        if (DAT_00438b60 <= (*puVar2 & 0xfffffffc)) {
          local_8 = *(int *)((int)puVar4 + uVar1 + 0xc);
        }
        if (puVar2 == (uint *)PTR_DAT_00438b84) {
          PTR_DAT_00438b84 = *(undefined **)((int)puVar4 + uVar1 + 8);
        }
        *(undefined4 *)(*(int *)((int)puVar4 + uVar1 + 8) + 8) =
             *(undefined4 *)((int)puVar4 + uVar1 + 0xc);
        *(undefined4 *)(*(int *)((int)puVar4 + uVar1 + 0xc) + 4) =
             *(undefined4 *)((int)puVar4 + uVar1 + 8);
        puVar2 = (uint *)((int)puVar4 + (*puVar2 & 0xfffffffc) + uVar1 + 8);
        *puVar2 = *puVar2 & 0xfffffffd;
        *puVar4 = (*puVar4 & 2) + uVar6;
      }
      uVar6 = uVar6 - uVar3;
      if (0xf < uVar6) {
        uVar1 = uVar6 - 4;
        uVar3 = (*puVar4 & 2) + uVar3;
        *puVar4 = uVar3;
        uVar3 = uVar3 & 0xfffffffc;
        piVar5 = (int *)((int)puVar4 + uVar3 + 4);
        *piVar5 = uVar6 - 3;
        puVar2 = (uint *)((int)puVar4 + uVar6 + 4 + uVar3);
        *puVar2 = *puVar2 | 2;
        if (uVar1 < DAT_00438b60) {
          local_8 = uVar1 * 2 + DAT_00438b74 + -0xc;
        }
        else if (local_8 == 0) {
          local_8 = *(int *)(PTR_DAT_00438b84 + 4);
        }
        *(undefined4 *)((int)puVar4 + uVar3 + 8) = *(undefined4 *)(local_8 + 4);
        *(int *)((int)puVar4 + uVar3 + 0xc) = local_8;
        *(int **)(*(int *)((int)puVar4 + uVar3 + 8) + 8) = piVar5;
        *(int **)(local_8 + 4) = piVar5;
        *(uint *)((int)piVar5 + uVar1) = uVar6;
      }
    }
  }
  return in_stack_00000004;
}


/* Ghidra address: 004318bc; FUN_004318bc */

uint * FUN_004318bc(void)

{
  int iVar1;
  uint *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    FUN_00431320();
    in_stack_00000004 = (uint *)0x0;
  }
  else if (in_stack_00000004 == (uint *)0x0) {
    in_stack_00000004 = FUN_00431428();
  }
  else {
    iVar1 = FUN_00431794();
    if ((iVar1 == 0) && (in_stack_00000004 = FUN_00431428(), in_stack_00000004 != (uint *)0x0)) {
      FUN_00429008();
      FUN_00431320();
    }
  }
  return in_stack_00000004;
}


/* Ghidra address: 00431954; FUN_00431954 */

void FUN_00431954(void)

{
  FUN_00431320();
  return;
}


/* Ghidra address: 00431964; FUN_00431964 */

void FUN_00431964(void)

{
  FUN_00431954();
  return;
}


/* Ghidra address: 00431988; FUN_00431988 */

uint * FUN_00431988(void)

{
  uint *puVar1;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  
  if (in_stack_00000004 == 0) {
    in_stack_00000004 = 1;
  }
  while( true ) {
    puVar1 = FUN_00431428();
    if ((puVar1 != (uint *)0x0) || (DAT_0049ac08 == (code *)0x0)) break;
    (*DAT_0049ac08)(0,extraout_EDX,in_stack_00000004);
  }
  return puVar1;
}


/* Ghidra address: 004319bc; FUN_004319bc */

void FUN_004319bc(void)

{
  FUN_00431988();
  return;
}


/* Ghidra address: 00431aa4; FUN_00431aa4 */

int FUN_00431aa4(void)

{
  int iVar1;
  uint uVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  code *in_stack_00000014;
  
  if (in_stack_00000004 == 0) {
    in_stack_00000004 = 0;
  }
  else {
    if ((in_stack_00000010 & 0x10) != 0) {
      in_stack_0000000c = *(int *)(in_stack_00000004 + -4);
    }
    uVar2 = in_stack_00000010 & 7;
    iVar1 = (in_stack_0000000c + -1) * in_stack_00000008 + in_stack_00000004;
    while (in_stack_0000000c != 0) {
      if (uVar2 == 1) {
        (*in_stack_00000014)();
      }
      else if (uVar2 == 2) {
        (*in_stack_00000014)();
      }
      else if (uVar2 == 3) {
        (*in_stack_00000014)(iVar1,2);
      }
      else if (uVar2 == 5) {
        (*in_stack_00000014)();
      }
      else {
        FUN_00431e98();
      }
      iVar1 = iVar1 - in_stack_00000008;
      in_stack_0000000c = in_stack_0000000c + -1;
    }
    if ((in_stack_00000010 & 0x10) != 0) {
      in_stack_00000004 = in_stack_00000004 + -4;
    }
    if ((in_stack_00000010 & 8) != 0) {
      FUN_00431964();
      in_stack_00000004 = 0;
    }
  }
  return in_stack_00000004;
}


/* Ghidra address: 00431b68; FUN_00431b68 */

int * FUN_00431b68(void)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  code *in_stack_00000014;
  
  uVar1 = *DAT_0049aa2c;
  if ((in_stack_00000004 == (int *)0x0) &&
     (in_stack_00000004 = (int *)FUN_004319bc(), in_stack_00000004 == (int *)0x0)) {
    in_stack_00000004 = (int *)0x0;
  }
  else {
    if ((in_stack_00000010 & 0x10) != 0) {
      *in_stack_00000004 = in_stack_0000000c;
      in_stack_00000004 = in_stack_00000004 + 1;
    }
    piVar3 = in_stack_00000004;
    if (in_stack_00000014 != (code *)0x0) {
      while (in_stack_0000000c != 0) {
        uVar2 = in_stack_00000010 & 7;
        if (uVar2 == 1) {
          (*in_stack_00000014)();
        }
        else if (uVar2 == 2) {
          (*in_stack_00000014)();
        }
        else if (uVar2 == 3) {
          (*in_stack_00000014)(piVar3);
        }
        else if (uVar2 == 5) {
          (*in_stack_00000014)();
        }
        else {
          FUN_00431e98();
        }
        piVar3 = (int *)((int)piVar3 + in_stack_00000008);
        in_stack_0000000c = in_stack_0000000c + -1;
      }
      if ((in_stack_00000010 & 0x200) != 0) {
        *DAT_0049aa2c = uVar1;
      }
    }
  }
  return in_stack_00000004;
}


/* Ghidra address: 00431c30; FUN_00431c30 */

undefined4 FUN_00431c30(void)

{
  LPVOID pvVar1;
  uint dwSize;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  uint *in_stack_0000000c;
  
  if (DAT_00438c40 == 0) {
    if ((DAT_0049ac24 == 1) || (DAT_0049ac24 == 2)) {
      DAT_00438c40 = 0x100000;
    }
    else {
      DAT_00438c40 = 0x400000;
    }
  }
  dwSize = (in_stack_00000004 + DAT_00438c40) - 1U & ~(DAT_00438c40 - 1U);
  pvVar1 = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *in_stack_00000008 = pvVar1;
  if (pvVar1 == (LPVOID)0x0) {
    return 0;
  }
  *in_stack_0000000c = dwSize;
  return 1;
}


/* Ghidra address: 00431c9c; FUN_00431c9c */

undefined4 FUN_00431c9c(void)

{
  LPVOID pvVar1;
  LPVOID in_stack_00000004;
  int in_stack_00000008;
  
  while( true ) {
    if (in_stack_00000008 == 0) {
      return 1;
    }
    pvVar1 = VirtualAlloc(in_stack_00000004,0x1000,0x1000,4);
    if (pvVar1 == (LPVOID)0x0) break;
    in_stack_00000004 = (LPVOID)((int)in_stack_00000004 + 0x1000);
    in_stack_00000008 = in_stack_00000008 + -0x1000;
  }
  FUN_00431cf0();
  return 0;
}


/* Ghidra address: 00431cf0; FUN_00431cf0 */

undefined4 FUN_00431cf0(void)

{
  BOOL BVar1;
  LPVOID in_stack_00000004;
  SIZE_T in_stack_00000008;
  
  BVar1 = VirtualFree(in_stack_00000004,in_stack_00000008,0x4000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}


/* Ghidra address: 00431d14; FUN_00431d14 */

undefined4 FUN_00431d14(void)

{
  BOOL BVar1;
  LPVOID in_stack_00000004;
  
  BVar1 = VirtualFree(in_stack_00000004,0,0x8000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}


/* Ghidra address: 00431d60; FUN_00431d60 */

undefined4 FUN_00431d60(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  WNDENUMPROC lpfn;
  int *lParam;
  int local_4;
  
  lParam = &local_4;
  local_4 = 0;
  DVar1 = GetVersion();
  if ((DVar1 & 0x80000000) == 0) {
    return 0x2000;
  }
  lpfn = (WNDENUMPROC)&LAB_00431d4c;
  DVar1 = GetCurrentThreadId();
  EnumThreadWindows(DVar1,lpfn,(LPARAM)lParam);
  uVar2 = 0x2000;
  if (local_4 == 0) {
    uVar2 = 0x1000;
  }
  return uVar2;
}


/* Ghidra address: 00431da8; FUN_00431da8 */

void FUN_00431da8(void)

{
  char *pcVar1;
  uint uVar2;
  HANDLE hFile;
  DWORD nNumberOfBytesToWrite;
  LPCSTR lpCaption;
  LPCSTR in_stack_00000004;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_58 [80];
  DWORD local_8;
  
  if (DAT_00438c68 == (char *)0x0) {
    if (DAT_00434059 != '\0') {
      GetModuleFileNameA((HMODULE)0x0,local_58,0x50);
      pcVar1 = FUN_0042926c();
      if ((pcVar1 == (char *)0x0) && (pcVar1 = FUN_0042926c(), pcVar1 == (char *)0x0)) {
        lpCaption = local_58;
      }
      else {
        lpCaption = pcVar1 + 1;
      }
      uVar2 = FUN_00431d60();
      MessageBoxA((HWND)0x0,in_stack_00000004,lpCaption,uVar2 | 0x10010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,&DAT_00438c6c,2,&local_8,(LPOVERLAPPED)0x0);
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_8;
    nNumberOfBytesToWrite = FUN_00429114();
    WriteFile(hFile,in_stack_00000004,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    WriteFile(hFile,&DAT_00438c6f,2,&local_8,(LPOVERLAPPED)0x0);
    return;
  }
  if (DAT_00438c68 == (char *)0xffffffff) {
    return;
  }
  if (DAT_00438c68 == (char *)0x0) {
    return;
  }
  if (*DAT_00438c68 == '\0') {
    return;
  }
  FUN_00431f10();
  return;
}


/* Ghidra address: 00431e88; FUN_00431e88 */

void FUN_00431e88(void)

{
  FUN_00431da8();
  return;
}


/* Ghidra address: 00431e98; FUN_00431e98 */

void FUN_00431e98(void)

{
  FUN_00431da8();
  FUN_00432058();
  return;
}


/* Ghidra address: 00431eb0; FUN_00431eb0 */

undefined * FUN_00431eb0(void)

{
  FUN_00432e3c();
  FUN_00432e68();
  FUN_0042cfc4();
  return &DAT_0049ac0c;
}


/* Ghidra address: 00431f10; FUN_00431f10 */

void FUN_00431f10(void)

{
  int iVar1;
  
  iVar1 = FUN_0042e284();
  if (iVar1 != -1) {
    FUN_00431eb0();
    FUN_00429114();
    FUN_0042dc08();
    FUN_00429114();
    FUN_0042dc08();
    FUN_0042e178();
  }
  return;
}


/* Ghidra address: 00431fc0; FUN_00431fc0 */

void FUN_00431fc0(void)

{
  FUN_00431da8();
  FUN_00432058();
  return;
}


/* Ghidra address: 00431fd4; FUN_00431fd4 */

void FUN_00431fd4(void)

{
  FUN_004322ac();
  FUN_00431fc0();
  return;
}


/* Ghidra address: 00431fe4; FUN_00431fe4 */

void FUN_00431fe4(void)

{
  return;
}


/* Ghidra address: 00431fe8; FUN_00431fe8 */

void FUN_00431fe8(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000004 == 0) {
    while (DAT_00438ce0 != 0) {
      DAT_00438ce0 = DAT_00438ce0 + -1;
      (**(code **)(&DAT_0049ac28 + DAT_00438ce0 * 4))();
    }
    FUN_00432540();
    (*(code *)PTR_FUN_00438ce4)();
  }
  if (in_stack_00000008 == 0) {
    if (in_stack_00000004 == 0) {
      (*(code *)PTR_FUN_00438ce8)();
      (*(code *)PTR_FUN_00438cec)();
    }
    FUN_004325b8();
  }
  return;
}


/* Ghidra address: 00432040; FUN_00432040 */

void FUN_00432040(void)

{
  FUN_00431fe8();
  return;
}


/* Ghidra address: 00432058; FUN_00432058 */

void FUN_00432058(void)

{
  FUN_00431fe8();
  return;
}


/* Ghidra address: 00432090; FUN_00432090 */

void FUN_00432090(void)

{
  return;
}


/* Ghidra address: 00432094; FUN_00432094 */

int FUN_00432094(void)

{
  int iVar1;
  int *piVar2;
  int in_stack_00000004;
  
  iVar1 = 0;
  piVar2 = &DAT_00438d1c;
  do {
    if (in_stack_00000004 == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 10);
  return -1;
}


/* Ghidra address: 004320b4; FUN_004320b4 */

undefined4 FUN_004320b4(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *in_stack_00000004;
  int in_stack_0000000c;
  
  uVar4 = 0;
  iVar3 = *in_stack_00000004;
  if (iVar3 < -0x3fffff6e) {
    if (iVar3 == -0x3fffff6f) {
      iVar3 = 2;
      uVar4 = 8;
    }
    else if (iVar3 == -0x3ffffffb) {
      iVar3 = 3;
    }
    else if (iVar3 == -0x3fffffe3) {
      iVar3 = 1;
    }
    else if (iVar3 == -0x3fffff72) {
      iVar3 = 2;
      uVar4 = 4;
    }
    else {
      if (iVar3 != -0x3fffff70) {
        return 1;
      }
      iVar3 = 2;
      uVar4 = 1;
    }
  }
  else if (iVar3 == -0x3fffff6e) {
    iVar3 = 2;
    uVar4 = 0x49;
  }
  else if (iVar3 == -0x3fffff6d) {
    iVar3 = 2;
    uVar4 = 0x10;
  }
  else if (iVar3 == -0x3fffff6c) {
    iVar3 = 2;
  }
  else {
    if (iVar3 != -0x3fffff6a) {
      return 1;
    }
    iVar3 = 1;
  }
  pcVar1 = *(code **)(&DAT_00438cf4 + iVar3 * 4);
  if (pcVar1 == (code *)0x1) {
    uVar2 = 0;
  }
  else if (pcVar1 == (code *)0x0) {
    uVar2 = 1;
  }
  else {
    *(undefined4 *)(&DAT_00438cf4 + iVar3 * 4) = 0;
    if (((iVar3 == 1) || (iVar3 == 3)) || (iVar3 == 2)) {
      FUN_0042fa88();
      FUN_0042fae0();
      (*pcVar1)();
      *(uint *)(in_stack_0000000c + 0x20) = *(uint *)(in_stack_0000000c + 0x20) & ~uVar4;
    }
    else {
      (*pcVar1)();
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* Ghidra address: 00432228; FUN_00432228 */

undefined4 FUN_00432228(void)

{
  FUN_004322ac();
  return 1;
}


/* Ghidra address: 0043224c; FUN_0043224c */

undefined4 FUN_0043224c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000008;
  
  if (DAT_00438cf0 == '\0') {
    DAT_0049aa4c = FUN_004320b4;
    SetConsoleCtrlHandler(FUN_00432228,1);
    DAT_00438cf0 = '\x01';
  }
  iVar2 = FUN_00432094();
  if (iVar2 == -1) {
    DAT_00438c44 = 0x13;
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(&DAT_00438cf4 + iVar2 * 4);
  *(undefined4 *)(&DAT_00438cf4 + iVar2 * 4) = in_stack_00000008;
  return uVar1;
}


/* Ghidra address: 004322ac; FUN_004322ac */

undefined4 FUN_004322ac(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000004;
  
  iVar2 = FUN_00432094();
  if (iVar2 == -1) {
    uVar3 = 1;
  }
  else {
    pcVar1 = *(code **)(&DAT_00438cf4 + iVar2 * 4);
    if (pcVar1 != (code *)0x1) {
      if (pcVar1 == (code *)0x0) {
        if ((1 < in_stack_00000004 - 0x10U) && (in_stack_00000004 != 0x14)) {
          if (in_stack_00000004 == 0x16) {
            FUN_00431fc0();
          }
          else {
            FUN_00432058();
          }
        }
      }
      else {
        *(undefined4 *)(&DAT_00438cf4 + iVar2 * 4) = 0;
        if ((&DAT_00438d44)[iVar2] == '\0') {
          (*pcVar1)(pcVar1,0,in_stack_00000004);
        }
        else {
          (*pcVar1)();
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* Ghidra address: 00432324; FUN_00432324 */

undefined4 FUN_00432324(void)

{
  return 0;
}


/* Ghidra address: 00432328; FUN_00432328 */

undefined4 FUN_00432328(void)

{
  return 0;
}


/* Ghidra address: 0043232c; FUN_0043232c */

undefined4 FUN_0043232c(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int *in_stack_00000004;
  uint in_stack_00000008;
  int *local_10;
  int local_c;
  char *local_8;
  
  uVar4 = 0;
  if (in_stack_00000008 == 0) {
    uVar4 = 0xffff;
  }
  local_8 = (char *)0x0;
  local_10 = in_stack_00000004;
  for (local_c = 0; local_10 = local_10 + 1, local_c < *in_stack_00000004; local_c = local_c + 1) {
    puVar1 = (undefined4 *)*local_10;
    if (in_stack_00000008 == 0) {
      pcVar2 = (char *)*puVar1;
      pcVar5 = (char *)puVar1[1];
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar5 = (char *)puVar1[3];
    }
    for (; (pcVar2 < pcVar5 && (*(int *)(pcVar2 + 2) != 0)); pcVar2 = pcVar2 + 6) {
      if ((*pcVar2 == '\0') && (in_stack_00000008 == uVar4 <= (byte)pcVar2[1])) {
        uVar4 = (uint)(byte)pcVar2[1];
        local_8 = pcVar2;
      }
    }
  }
  if (local_8 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    *local_8 = '\x01';
    uVar3 = *(undefined4 *)(local_8 + 2);
  }
  return uVar3;
}


/* Ghidra address: 004323d8; FUN_004323d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004323d8(void)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  int in_stack_00000004;
  int local_10;
  undefined1 local_c [8];
  
  _DAT_0049acd4 = *(uint *)(in_stack_00000004 + 0x10) & 1;
  FUN_0042fc14();
  FUN_00430014();
  FUN_0042bce8();
  _DAT_0049acc8 = 1;
  _DAT_0049accc = in_stack_00000004;
  DAT_0049acb0 = local_c;
  FUN_0042b908();
  _DAT_0049acb4 = GetEnvironmentStrings();
  DAT_0049acb8 = GetCommandLineA();
  FUN_00432090();
  piVar2 = (int *)FUN_00432324();
  if (piVar2 != (int *)0x0) {
    piVar2[*piVar2 + 1] = -1;
    while (pcVar3 = (code *)FUN_0043232c(), pcVar3 != (code *)0x0) {
      (*pcVar3)();
    }
    piVar5 = piVar2;
    for (local_10 = 0; piVar5 = piVar5 + 1, local_10 < *piVar2; local_10 = local_10 + 1) {
      (**(code **)(*piVar5 + 0x18))();
    }
  }
  while (pcVar3 = (code *)FUN_0043232c(), pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  pcVar6 = DAT_0049acb8;
  if ((*(byte *)(in_stack_00000004 + 0x10) & 1) == 0) {
    (**(code **)(in_stack_00000004 + 0x18))();
    FUN_00432040();
  }
  else {
    for (; (*pcVar6 == ' ' || (*pcVar6 == '\t')); pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      cVar4 = '\"';
      pcVar6 = pcVar6 + 1;
    }
    else {
      cVar4 = ' ';
    }
    for (; ((cVar1 = *pcVar6, cVar1 != '\0' && (cVar4 != cVar1)) && (cVar1 != '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      pcVar6 = pcVar6 + 1;
    }
    for (; ((cVar4 = *pcVar6, cVar4 != '\0' && (cVar4 == ' ')) || (cVar4 == '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    GetModuleHandleA((LPCSTR)0x0);
    (**(code **)(in_stack_00000004 + 0x18))();
    FUN_00432040();
  }
  return;
}


/* Ghidra address: 00432540; FUN_00432540 */

void FUN_00432540(void)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  while (pcVar1 = (code *)FUN_0043232c(), pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  while (pcVar1 = (code *)FUN_0043232c(), pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  piVar2 = (int *)FUN_00432328();
  if (piVar2 != (int *)0x0) {
    while (pcVar1 = (code *)FUN_0043232c(), pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    piVar3 = piVar2;
    for (iVar4 = 0; piVar3 = piVar3 + 1, iVar4 < *piVar2; iVar4 = iVar4 + 1) {
      (**(code **)(*piVar3 + 0x18))();
    }
  }
  return;
}


/* Ghidra address: 004325b8; FUN_004325b8 */

void FUN_004325b8(void)

{
  UINT in_stack_00000004;
  
                    /* WARNING: Subroutine does not return */
  ExitProcess(in_stack_00000004);
}


/* Ghidra address: 004325cc; FUN_004325cc */

undefined4 * FUN_004325cc(void)

{
  short *psVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 local_24;
  
  FUN_0042b4b4(0x438d5c);
  psVar1 = (short *)*in_stack_00000008;
  *in_stack_00000004 = psVar1;
  *psVar1 = *psVar1 + 1;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_24;
  return in_stack_00000004;
}


/* Ghidra address: 00432604; FUN_00432604 */

undefined4 * FUN_00432604(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x438d80);
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    if (in_stack_00000008 != 0) {
      FUN_00429114();
    }
    FUN_004329d4();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  *in_stack_00000004 = puVar1;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_28;
  return in_stack_00000004;
}


/* Ghidra address: 004327b0; FUN_004327b0 */

void FUN_004327b0(void)

{
  short *psVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_24;
  
  FUN_0042b4b4(0x438da4);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != (undefined4 *)0x0) {
    psVar1 = (short *)*in_stack_00000004;
    *psVar1 = *psVar1 + -1;
    if (*psVar1 == 0) {
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      FUN_00432a60();
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_24;
  return;
}


/* Ghidra address: 00432810; FUN_00432810 */

void FUN_00432810(void)

{
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  uint in_stack_00000008;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x438de0);
  if (*(uint *)(*in_stack_00000004 + 6) <= in_stack_00000008) {
    FUN_00432604();
    FUN_00429438();
    FUN_004327b0();
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_0042a068();
  }
  *in_FS_OFFSET = local_2c;
  return;
}


/* Ghidra address: 004328a8; FUN_004328a8 */

void FUN_004328a8(void)

{
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  uint in_stack_00000008;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x438e34);
  if (*(uint *)(*in_stack_00000004 + 6) < in_stack_00000008) {
    FUN_00432604();
    FUN_00429438();
    FUN_004327b0();
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_0042a068();
  }
  *in_FS_OFFSET = local_2c;
  return;
}


/* Ghidra address: 00432940; FUN_00432940 */

void FUN_00432940(void)

{
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  uint in_stack_00000008;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x438e88);
  if (*(uint *)(in_stack_00000004 + 8) <= in_stack_00000008) {
    FUN_00432604();
    FUN_00429438();
    FUN_004327b0();
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_0042a068();
  }
  *in_FS_OFFSET = local_2c;
  return;
}


/* Ghidra address: 004329d4; FUN_004329d4 */

undefined2 * FUN_004329d4(void)

{
  int iVar1;
  uint *puVar2;
  undefined2 *in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000014;
  
  *in_stack_00000004 = 1;
  *(undefined4 *)(in_stack_00000004 + 7) = 0;
  *(int *)(in_stack_00000004 + 3) = in_stack_00000014 + in_stack_0000000c;
  iVar1 = FUN_00432ba4();
  *(int *)(in_stack_00000004 + 5) = iVar1;
  puVar2 = FUN_00431428();
  *(uint **)(in_stack_00000004 + 1) = puVar2;
  if (*(int *)(in_stack_00000004 + 1) == 0) {
    FUN_004292ec();
  }
  FUN_00428fe4();
  FUN_00428fe4();
  *(undefined1 *)(*(int *)(in_stack_00000004 + 1) + in_stack_00000014 + in_stack_0000000c) = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}


/* Ghidra address: 00432a60; FUN_00432a60 */

void FUN_00432a60(void)

{
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_24;
  
  FUN_0042b4b4(0x438eac);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    FUN_00431320();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_24;
  return;
}


/* Ghidra address: 00432aa8; FUN_00432aa8 */

void FUN_00432aa8(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 local_24;
  
  FUN_0042b4b4(0x438ec0);
  *(uint *)(in_stack_00000004 + 0xe) = *(uint *)(in_stack_00000004 + 0xe) | 1;
  iVar1 = FUN_00432ba4();
  if (DAT_00438f1c < (uint)(*(int *)(in_stack_00000004 + 10) - iVar1)) {
    puVar2 = FUN_004318bc();
    *(uint **)(in_stack_00000004 + 2) = puVar2;
    *(int *)(in_stack_00000004 + 10) = iVar1;
  }
  *in_FS_OFFSET = local_24;
  return;
}


/* Ghidra address: 00432b54; FUN_00432b54 */

void FUN_00432b54(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_24;
  
  FUN_0042b4b4(0x438ee0);
  *(undefined4 *)(in_stack_00000004 + 10) = in_stack_00000008;
  puVar1 = FUN_004318bc();
  *(uint **)(in_stack_00000004 + 2) = puVar1;
  if (puVar1 == (uint *)0x0) {
    FUN_004292ec();
  }
  *in_FS_OFFSET = local_24;
  return;
}


/* Ghidra address: 00432ba4; FUN_00432ba4 */

int FUN_00432ba4(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 local_24;
  
  FUN_0042b4b4(0x438eec);
  iVar1 = ((((in_stack_00000004 - DAT_00438f14) + DAT_00438f18) - 1) / DAT_00438f18) * DAT_00438f18
          + DAT_00438f14;
  *in_FS_OFFSET = local_24;
  return iVar1;
}


/* Ghidra address: 00432d08; FUN_00432d08 */

undefined4 FUN_00432d08(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000004;
  
  uVar1 = DAT_00438f08;
  DAT_00438f08 = in_stack_00000004;
  return uVar1;
}


/* Ghidra address: 00432d1c; FUN_00432d1c */

undefined4 FUN_00432d1c(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000004;
  
  uVar1 = DAT_00438f0c;
  DAT_00438f0c = in_stack_00000004;
  return uVar1;
}


/* Ghidra address: 00432d30; FUN_00432d30 */

undefined4 FUN_00432d30(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000004;
  
  uVar1 = DAT_00438f10;
  DAT_00438f10 = in_stack_00000004;
  return uVar1;
}


/* Ghidra address: 00432d44; FUN_00432d44 */

undefined4 FUN_00432d44(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000004;
  
  uVar1 = DAT_00438f14;
  DAT_00438f14 = in_stack_00000004;
  return uVar1;
}


/* Ghidra address: 00432d58; FUN_00432d58 */

undefined4 FUN_00432d58(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  uVar1 = DAT_00438f18;
  DAT_00438f18 = in_stack_00000004;
  if (in_stack_00000004 == 0) {
    DAT_00438f18 = 1;
  }
  return uVar1;
}


/* Ghidra address: 00432d7c; FUN_00432d7c */

undefined4 FUN_00432d7c(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000004;
  
  uVar1 = DAT_00438f1c;
  DAT_00438f1c = in_stack_00000004;
  return uVar1;
}


/* Ghidra address: 00432e3c; FUN_00432e3c */

void FUN_00432e3c(void)

{
  uint *in_stack_00000004;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  *(undefined1 *)(in_stack_00000004 + 1) = (undefined1)local_14.wDay;
  *(undefined1 *)((int)in_stack_00000004 + 5) = (undefined1)local_14.wMonth;
  *in_stack_00000004 = (uint)local_14.wYear;
  return;
}


/* Ghidra address: 00432e68; FUN_00432e68 */

void FUN_00432e68(void)

{
  undefined1 *in_stack_00000004;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  in_stack_00000004[1] = (undefined1)local_14.wHour;
  *in_stack_00000004 = (undefined1)local_14.wMinute;
  in_stack_00000004[3] = (undefined1)local_14.wSecond;
  in_stack_00000004[2] = (char)((ulonglong)local_14.wMilliseconds / 10);
  return;
}


/* Ghidra address: 00432ea6; GetStdHandle */

HANDLE __stdcall GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}


/* Ghidra address: 00432eac; CreateFileA */

HANDLE __stdcall
CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
           LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
           DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}


/* Ghidra address: 00432eb2; GetFileAttributesA */

DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesA(lpFileName);
  return DVar1;
}


/* Ghidra address: 00432eb8; GetTickCount */

DWORD __stdcall GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}


/* Ghidra address: 00432ebe; DeleteFileA */

BOOL __stdcall DeleteFileA(LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432ebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileA(lpFileName);
  return BVar1;
}


/* Ghidra address: 00432ec4; GetLocalTime */

void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x00432ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLocalTime(lpSystemTime);
  return;
}


/* Ghidra address: 00432eca; GlobalUnlock */

BOOL __stdcall GlobalUnlock(HGLOBAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GlobalUnlock(hMem);
  return BVar1;
}


/* Ghidra address: 00432ed0; GlobalLock */

LPVOID __stdcall GlobalLock(HGLOBAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalLock(hMem);
  return pvVar1;
}


/* Ghidra address: 00432ed6; GlobalAlloc */

HGLOBAL __stdcall GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432ed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalAlloc(uFlags,dwBytes);
  return pvVar1;
}


/* Ghidra address: 00432edc; ReadFile */

BOOL __stdcall
ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,
        LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}


/* Ghidra address: 00432ee2; SetConsoleCtrlHandler */

BOOL __stdcall SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432ee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleCtrlHandler(HandlerRoutine,Add);
  return BVar1;
}


/* Ghidra address: 00432ee8; VirtualAlloc */

LPVOID __stdcall VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}


/* Ghidra address: 00432eee; SetHandleCount */

UINT __stdcall SetHandleCount(UINT uNumber)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432eee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetHandleCount(uNumber);
  return UVar1;
}


/* Ghidra address: 00432ef4; EnterCriticalSection */

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00432ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}


/* Ghidra address: 00432efa; GetModuleHandleA */

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432efa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}


/* Ghidra address: 00432f00; LeaveCriticalSection */

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00432f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}


/* Ghidra address: 00432f06; GetLastError */

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


/* Ghidra address: 00432f0c; GetProcAddress */

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


/* Ghidra address: 00432f12; GetFileType */

DWORD __stdcall GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}


/* Ghidra address: 00432f18; GlobalHandle */

HGLOBAL __stdcall GlobalHandle(LPCVOID pMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalHandle(pMem);
  return pvVar1;
}


/* Ghidra address: 00432f1e; VirtualFree */

BOOL __stdcall VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualFree(lpAddress,dwSize,dwFreeType);
  return BVar1;
}


/* Ghidra address: 00432f24; RaiseException */

void __stdcall
RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments,
              ULONG_PTR *lpArguments)

{
                    /* WARNING: Could not recover jumptable at 0x00432f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}


/* Ghidra address: 00432f2a; GetModuleFileNameA */

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}


/* Ghidra address: 00432f30; RtlUnwind */

void __stdcall
RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x00432f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


/* Ghidra address: 00432f36; SetFilePointer */

DWORD __stdcall
SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}


/* Ghidra address: 00432f3c; ExitProcess */

void __stdcall ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x00432f3c. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}


/* Ghidra address: 00432f42; GetPrivateProfileStringA */

DWORD __stdcall
GetPrivateProfileStringA
          (LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,DWORD nSize,
          LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,nSize,lpFileName);
  return DVar1;
}


/* Ghidra address: 00432f48; WriteFile */

BOOL __stdcall
WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten,
         LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return BVar1;
}


/* Ghidra address: 00432f4e; GetPrivateProfileIntA */

UINT __stdcall
GetPrivateProfileIntA(LPCSTR lpAppName,LPCSTR lpKeyName,INT nDefault,LPCSTR lpFileName)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetPrivateProfileIntA(lpAppName,lpKeyName,nDefault,lpFileName);
  return UVar1;
}


/* Ghidra address: 00432f5a; CloseHandle */

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


/* Ghidra address: 00432f60; GetVersion */

DWORD __stdcall GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}


/* Ghidra address: 00432f66; CreateDirectoryA */

BOOL __stdcall CreateDirectoryA(LPCSTR lpPathName,LPSECURITY_ATTRIBUTES lpSecurityAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateDirectoryA(lpPathName,lpSecurityAttributes);
  return BVar1;
}


/* Ghidra address: 00432f72; GetCurrentThreadId */

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


/* Ghidra address: 00432f78; GetEnvironmentStrings */

LPCH __stdcall GetEnvironmentStrings(void)

{
  LPCH pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetEnvironmentStrings();
  return pCVar1;
}


/* Ghidra address: 00432f7e; InitializeCriticalSection */

void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00432f7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}


/* Ghidra address: 00432f8a; GetStartupInfoA */

void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00432f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetStartupInfoA(lpStartupInfo);
  return;
}


/* Ghidra address: 00432f96; GlobalMemoryStatus */

void __stdcall GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer)

{
                    /* WARNING: Could not recover jumptable at 0x00432f96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GlobalMemoryStatus(lpBuffer);
  return;
}


/* Ghidra address: 00432f9c; GetCommandLineA */

LPSTR __stdcall GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}


/* Ghidra address: 00432fa2; UnhandledExceptionFilter */

LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}


/* Ghidra address: 00432fa8; GetFileSize */

DWORD __stdcall GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}


/* Ghidra address: 00432fae; GlobalFree */

HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalFree(hMem);
  return pvVar1;
}


/* Ghidra address: 00432fba; waveOutReset */

MMRESULT __stdcall waveOutReset(HWAVEOUT hwo)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutReset(hwo);
  return MVar1;
}


/* Ghidra address: 00432fc0; waveOutPause */

MMRESULT __stdcall waveOutPause(HWAVEOUT hwo)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutPause(hwo);
  return MVar1;
}


/* Ghidra address: 00432fcc; mixerSetControlDetails */

MMRESULT __stdcall
mixerSetControlDetails(HMIXEROBJ hmxobj,LPMIXERCONTROLDETAILS pmxcd,DWORD fdwDetails)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerSetControlDetails(hmxobj,pmxcd,fdwDetails);
  return MVar1;
}


/* Ghidra address: 00432fd2; mixerOpen */

MMRESULT __stdcall
mixerOpen(LPHMIXER phmx,UINT uMxId,DWORD_PTR dwCallback,DWORD_PTR dwInstance,DWORD fdwOpen)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerOpen(phmx,uMxId,dwCallback,dwInstance,fdwOpen);
  return MVar1;
}


/* Ghidra address: 00432fd8; mixerGetNumDevs */

UINT __stdcall mixerGetNumDevs(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = mixerGetNumDevs();
  return UVar1;
}


/* Ghidra address: 00432fde; waveOutWrite */

MMRESULT __stdcall waveOutWrite(HWAVEOUT hwo,LPWAVEHDR pwh,UINT cbwh)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutWrite(hwo,pwh,cbwh);
  return MVar1;
}


/* Ghidra address: 00432fe4; mixerGetLineControlsA */

MMRESULT __stdcall
mixerGetLineControlsA(HMIXEROBJ hmxobj,LPMIXERLINECONTROLSA pmxlc,DWORD fdwControls)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerGetLineControlsA(hmxobj,pmxlc,fdwControls);
  return MVar1;
}


/* Ghidra address: 00432fea; mixerGetDevCapsA */

MMRESULT __stdcall mixerGetDevCapsA(UINT_PTR uMxId,LPMIXERCAPSA pmxcaps,UINT cbmxcaps)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432fea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerGetDevCapsA(uMxId,pmxcaps,cbmxcaps);
  return MVar1;
}


/* Ghidra address: 00432ff0; mixerGetControlDetailsA */

MMRESULT __stdcall
mixerGetControlDetailsA(HMIXEROBJ hmxobj,LPMIXERCONTROLDETAILS pmxcd,DWORD fdwDetails)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerGetControlDetailsA(hmxobj,pmxcd,fdwDetails);
  return MVar1;
}


/* Ghidra address: 00432ff6; mciSendCommandA */

MCIERROR __stdcall
mciSendCommandA(MCIDEVICEID mciId,UINT uMsg,DWORD_PTR dwParam1,DWORD_PTR dwParam2)

{
  MCIERROR MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432ff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mciSendCommandA(mciId,uMsg,dwParam1,dwParam2);
  return MVar1;
}


/* Ghidra address: 00432ffc; mciGetErrorStringA */

BOOL __stdcall mciGetErrorStringA(MCIERROR mcierr,LPSTR pszText,UINT cchText)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00432ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = mciGetErrorStringA(mcierr,pszText,cchText);
  return BVar1;
}


/* Ghidra address: 00433008; auxGetVolume */

MMRESULT __stdcall auxGetVolume(UINT uDeviceID,LPDWORD pdwVolume)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = auxGetVolume(uDeviceID,pdwVolume);
  return MVar1;
}


/* Ghidra address: 0043300e; auxGetNumDevs */

UINT __stdcall auxGetNumDevs(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043300e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = auxGetNumDevs();
  return UVar1;
}


/* Ghidra address: 00433014; auxGetDevCapsA */

MMRESULT __stdcall auxGetDevCapsA(UINT_PTR uDeviceID,LPAUXCAPSA pac,UINT cbac)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = auxGetDevCapsA(uDeviceID,pac,cbac);
  return MVar1;
}


/* Ghidra address: 0043301a; mixerGetLineInfoA */

MMRESULT __stdcall mixerGetLineInfoA(HMIXEROBJ hmxobj,LPMIXERLINEA pmxl,DWORD fdwInfo)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043301a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerGetLineInfoA(hmxobj,pmxl,fdwInfo);
  return MVar1;
}


/* Ghidra address: 00433020; waveOutGetNumDevs */

UINT __stdcall waveOutGetNumDevs(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = waveOutGetNumDevs();
  return UVar1;
}


/* Ghidra address: 00433026; waveOutGetVolume */

MMRESULT __stdcall waveOutGetVolume(HWAVEOUT hwo,LPDWORD pdwVolume)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutGetVolume(hwo,pdwVolume);
  return MVar1;
}


/* Ghidra address: 0043302c; timeGetTime */

DWORD __stdcall timeGetTime(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043302c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = timeGetTime();
  return DVar1;
}


/* Ghidra address: 00433032; waveOutPrepareHeader */

MMRESULT __stdcall waveOutPrepareHeader(HWAVEOUT hwo,LPWAVEHDR pwh,UINT cbwh)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutPrepareHeader(hwo,pwh,cbwh);
  return MVar1;
}


/* Ghidra address: 00433038; waveopen */

void waveopen(void)

{
                    /* WARNING: Could not recover jumptable at 0x00433038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  waveopen();
  return;
}


/* Ghidra address: 0043303e; waveOutUnprepareHeader */

MMRESULT __stdcall waveOutUnprepareHeader(HWAVEOUT hwo,LPWAVEHDR pwh,UINT cbwh)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043303e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutUnprepareHeader(hwo,pwh,cbwh);
  return MVar1;
}


/* Ghidra address: 00433044; waveOutRestart */

MMRESULT __stdcall waveOutRestart(HWAVEOUT hwo)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = waveOutRestart(hwo);
  return MVar1;
}


/* Ghidra address: 0043304a; mixerClose */

MMRESULT __stdcall mixerClose(HMIXER hmx)

{
  MMRESULT MVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043304a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MVar1 = mixerClose(hmx);
  return MVar1;
}


/* Ghidra address: 00433056; StretchDIBits */

int __stdcall
StretchDIBits(HDC hdc,int xDest,int yDest,int DestWidth,int DestHeight,int xSrc,int ySrc,
             int SrcWidth,int SrcHeight,void *lpBits,BITMAPINFO *lpbmi,UINT iUsage,DWORD rop)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = StretchDIBits(hdc,xDest,yDest,DestWidth,DestHeight,xSrc,ySrc,SrcWidth,SrcHeight,lpBits,
                        lpbmi,iUsage,rop);
  return iVar1;
}


/* Ghidra address: 0043305c; SetDIBits */

int __stdcall
SetDIBits(HDC hdc,HBITMAP hbm,UINT start,UINT cLines,void *lpBits,BITMAPINFO *lpbmi,UINT ColorUse)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043305c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetDIBits(hdc,hbm,start,cLines,lpBits,lpbmi,ColorUse);
  return iVar1;
}


/* Ghidra address: 00433062; GetStockObject */

HGDIOBJ __stdcall GetStockObject(int i)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStockObject(i);
  return pvVar1;
}


/* Ghidra address: 00433068; GetBitmapBits */

LONG __stdcall GetBitmapBits(HBITMAP hbit,LONG cb,LPVOID lpvBits)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetBitmapBits(hbit,cb,lpvBits);
  return LVar1;
}


/* Ghidra address: 0043306e; DeleteObject */

BOOL __stdcall DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043306e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteObject(ho);
  return BVar1;
}


/* Ghidra address: 00433074; CreateCompatibleBitmap */

HBITMAP __stdcall CreateCompatibleBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleBitmap(hdc,cx,cy);
  return pHVar1;
}


/* Ghidra address: 0043307a; DirectDrawCreate */

void DirectDrawCreate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0043307a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DirectDrawCreate();
  return;
}


/* Ghidra address: 00433080; GetClientRect */

BOOL __stdcall GetClientRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClientRect(hWnd,lpRect);
  return BVar1;
}


/* Ghidra address: 00433086; GetAsyncKeyState */

SHORT __stdcall GetAsyncKeyState(int vKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetAsyncKeyState(vKey);
  return SVar1;
}


/* Ghidra address: 0043308c; FindWindowA */

HWND __stdcall FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043308c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindWindowA(lpClassName,lpWindowName);
  return pHVar1;
}


/* Ghidra address: 00433092; EnumThreadWindows */

BOOL __stdcall EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumThreadWindows(dwThreadId,lpfn,lParam);
  return BVar1;
}


/* Ghidra address: 00433098; DispatchMessageA */

LRESULT __stdcall DispatchMessageA(MSG *lpMsg)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DispatchMessageA(lpMsg);
  return LVar1;
}


/* Ghidra address: 0043309e; DestroyWindow */

BOOL __stdcall DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043309e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}


/* Ghidra address: 004330a4; DefWindowProcA */

LRESULT __stdcall DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcA(hWnd,Msg,wParam,lParam);
  return LVar1;
}


/* Ghidra address: 004330aa; CreateWindowExA */

HWND __stdcall
CreateWindowExA(DWORD dwExStyle,LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,int Y,
               int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam
               )

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateWindowExA(dwExStyle,lpClassName,lpWindowName,dwStyle,X,Y,nWidth,nHeight,hWndParent,
                           hMenu,hInstance,lpParam);
  return pHVar1;
}


/* Ghidra address: 004330b6; wvsprintfA */

int __stdcall wvsprintfA(LPSTR param_1,LPCSTR param_2,va_list arglist)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = wvsprintfA(param_1,param_2,arglist);
  return iVar1;
}


/* Ghidra address: 004330bc; UpdateWindow */

BOOL __stdcall UpdateWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UpdateWindow(hWnd);
  return BVar1;
}


/* Ghidra address: 004330c2; TranslateMessage */

BOOL __stdcall TranslateMessage(MSG *lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMessage(lpMsg);
  return BVar1;
}


/* Ghidra address: 004330c8; ShowWindow */

BOOL __stdcall ShowWindow(HWND hWnd,int nCmdShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowWindow(hWnd,nCmdShow);
  return BVar1;
}


/* Ghidra address: 004330ce; ShowCursor */

int __stdcall ShowCursor(BOOL bShow)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowCursor(bShow);
  return iVar1;
}


/* Ghidra address: 004330d4; SetWindowLongA */

LONG __stdcall SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongA(hWnd,nIndex,dwNewLong);
  return LVar1;
}


/* Ghidra address: 004330da; SetKeyboardState */

BOOL __stdcall SetKeyboardState(LPBYTE lpKeyState)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetKeyboardState(lpKeyState);
  return BVar1;
}


/* Ghidra address: 004330e0; SetCursorPos */

BOOL __stdcall SetCursorPos(int X,int Y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetCursorPos(X,Y);
  return BVar1;
}


/* Ghidra address: 004330e6; RegisterClassA */

ATOM __stdcall RegisterClassA(WNDCLASSA *lpWndClass)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = RegisterClassA(lpWndClass);
  return AVar1;
}


/* Ghidra address: 004330ec; PostQuitMessage */

void __stdcall PostQuitMessage(int nExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x004330ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage(nExitCode);
  return;
}


/* Ghidra address: 004330f2; PostMessageA */

BOOL __stdcall PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PostMessageA(hWnd,Msg,wParam,lParam);
  return BVar1;
}


/* Ghidra address: 004330f8; PeekMessageA */

BOOL __stdcall
PeekMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PeekMessageA(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg);
  return BVar1;
}


/* Ghidra address: 004330fe; MessageBoxA */

int __stdcall MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004330fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(hWnd,lpText,lpCaption,uType);
  return iVar1;
}


/* Ghidra address: 00433104; LoadIconA */

HICON __stdcall LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadIconA(hInstance,lpIconName);
  return pHVar1;
}


/* Ghidra address: 0043310a; LoadCursorA */

HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043310a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadCursorA(hInstance,lpCursorName);
  return pHVar1;
}


/* Ghidra address: 00433110; GetWindowLongA */

LONG __stdcall GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongA(hWnd,nIndex);
  return LVar1;
}


/* Ghidra address: 00433116; GetSystemMetrics */

int __stdcall GetSystemMetrics(int nIndex)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(nIndex);
  return iVar1;
}


/* Ghidra address: 0043311c; GetMessageA */

BOOL __stdcall GetMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043311c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetMessageA(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax);
  return BVar1;
}


/* Ghidra address: 00433122; GetKeyState */

SHORT __stdcall GetKeyState(int nVirtKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetKeyState(nVirtKey);
  return SVar1;
}


/* Ghidra address: 00433128; GetDC */

HDC __stdcall GetDC(HWND hWnd)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00433128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDC(hWnd);
  return pHVar1;
}


/* Ghidra address: 0043312e; GetCursorPos */

BOOL __stdcall GetCursorPos(LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0043312e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCursorPos(lpPoint);
  return BVar1;
}


/* Ghidra address: 004a3000; FUN_004a3000 */

uint FUN_004a3000(void)

{
  SHORT SVar1;
  uint uVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  uint uVar5;
  short sVar6;
  int unaff_EBP;
  short sVar7;
  
  if (*(int *)(unaff_EBP + 4) != 0x425411) {
    uVar2 = FUN_0040fc08();
    return uVar2;
  }
  uVar2 = 0;
  sVar6 = DAT_004346b4;
  if (0x100 < DAT_004346b4) {
    sVar6 = 0x100;
  }
  if (sVar6 < -0x100) {
    sVar6 = -0x100;
  }
  sVar7 = DAT_004346b8;
  if (0x100 < DAT_004346b8) {
    sVar7 = 0x100;
  }
  if (sVar7 < -0x100) {
    sVar7 = -0x100;
  }
  if (sVar7 < 1) {
    if (sVar7 < 0) {
      FUN_00424d20();
    }
  }
  else {
    FUN_00424d90();
  }
  if (sVar6 != 0) {
    if (sVar6 < 1) {
      uVar2 = 0x40000008;
    }
    else {
      uVar2 = 0x40000004;
    }
    iVar3 = FUN_004a320c();
    DAT_00435808 = (undefined2)iVar3;
  }
  SVar1 = GetAsyncKeyState(1);
  if (SVar1 != 0) {
    uVar2 = uVar2 | 0x200;
  }
  hModule = GetModuleHandleA(s_USER32_dll_004a3234);
  if (hModule != (HMODULE)0x0) {
    pFVar4 = GetProcAddress(hModule,s_MapVirtualKeyA_004a323f);
    if (pFVar4 != (FARPROC)0x0) {
      uVar5 = FUN_004a31fc();
      if ((uVar5 & 0x8000) != 0) {
        uVar2 = uVar2 | 0x400;
      }
      uVar5 = FUN_004a31fc();
      if ((uVar5 & 0x8000) != 0) {
        uVar2 = uVar2 | 0x20;
      }
      uVar5 = FUN_004a31fc();
      if ((uVar5 & 0x8000) != 0) {
        uVar2 = uVar2 | 0x80000;
      }
      uVar5 = FUN_004a31fc();
      if ((uVar5 & 0x8000) != 0) {
        uVar2 = uVar2 | 0x100000;
      }
    }
  }
  if (DAT_00434278 == 1) {
    DAT_00434278 = 0;
    uVar2 = uVar2 | 0x20000000;
  }
  return uVar2;
}


/* Ghidra address: 004a300e; FUN_004a300e */

uint FUN_004a300e(void)

{
  SHORT SVar1;
  int iVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  
  uVar7 = 0;
  sVar5 = DAT_004346b4;
  if (0x100 < DAT_004346b4) {
    sVar5 = 0x100;
  }
  if (sVar5 < -0x100) {
    sVar5 = -0x100;
  }
  sVar6 = DAT_004346b8;
  if (0x100 < DAT_004346b8) {
    sVar6 = 0x100;
  }
  if (sVar6 < -0x100) {
    sVar6 = -0x100;
  }
  if (sVar6 < 1) {
    if (sVar6 < 0) {
      FUN_00424d20();
    }
  }
  else {
    FUN_00424d90();
  }
  if (sVar5 != 0) {
    if (sVar5 < 1) {
      uVar7 = 0x40000008;
    }
    else {
      uVar7 = 0x40000004;
    }
    iVar2 = FUN_004a320c();
    DAT_00435808 = (undefined2)iVar2;
  }
  SVar1 = GetAsyncKeyState(1);
  if (SVar1 != 0) {
    uVar7 = uVar7 | 0x200;
  }
  hModule = GetModuleHandleA(s_USER32_dll_004a3234);
  if (hModule != (HMODULE)0x0) {
    pFVar3 = GetProcAddress(hModule,s_MapVirtualKeyA_004a323f);
    if (pFVar3 != (FARPROC)0x0) {
      uVar4 = FUN_004a31fc();
      if ((uVar4 & 0x8000) != 0) {
        uVar7 = uVar7 | 0x400;
      }
      uVar4 = FUN_004a31fc();
      if ((uVar4 & 0x8000) != 0) {
        uVar7 = uVar7 | 0x20;
      }
      uVar4 = FUN_004a31fc();
      if ((uVar4 & 0x8000) != 0) {
        uVar7 = uVar7 | 0x80000;
      }
      uVar4 = FUN_004a31fc();
      if ((uVar4 & 0x8000) != 0) {
        uVar7 = uVar7 | 0x100000;
      }
    }
  }
  if (DAT_00434278 == 1) {
    DAT_00434278 = 0;
    uVar7 = uVar7 | 0x20000000;
  }
  return uVar7;
}


/* Ghidra address: 004a3145; FUN_004a3145 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a3145(void)

{
  undefined4 uVar1;
  short *psVar2;
  short sVar3;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  
  if ((unaff_ESI & 0x40000000) != 0) {
    *(undefined2 *)(unaff_EBX + 0x9c) = DAT_00435808;
    DAT_00435808 = 0;
    _DAT_0043580a = 0;
    psVar2 = (short *)((*(int *)(unaff_EBX + 0x44) * *(int *)(unaff_EBX + 0xa6)) / 0xfa);
    *(short *)(unaff_EBX + 0x9e) = (short)psVar2;
    if ((unaff_ESI & 0x2000) != 0) {
      *(short *)(unaff_EBX + 0x9e) = *(short *)(unaff_EBX + 0x9e) << 1;
    }
    if ((unaff_ESI & 4) == 0) {
      if ((unaff_ESI & 8) == 0) {
        *(undefined2 *)(unaff_EBX + 0x9c) = 0;
      }
      else {
        *(undefined2 *)(unaff_EBP + -8) = *(undefined2 *)(unaff_EBX + 0x9c);
        psVar2 = (short *)(unaff_EBX + 0x3c);
        *psVar2 = *psVar2 - *(short *)(unaff_EBP + -8);
        if (*psVar2 < 0) {
          sVar3 = *psVar2 + 0x168;
        }
        else {
          sVar3 = *psVar2;
        }
        *psVar2 = sVar3;
      }
    }
    else {
      *(undefined2 *)(unaff_EBP + -6) = *(undefined2 *)(unaff_EBX + 0x9c);
      psVar2 = (short *)(unaff_EBX + 0x3c);
      *psVar2 = *psVar2 + *(short *)(unaff_EBP + -6);
      if (*psVar2 < 0x168) {
        sVar3 = *psVar2;
      }
      else {
        sVar3 = *psVar2 + -0x168;
      }
      *psVar2 = sVar3;
    }
    if (((((unaff_ESI & 0x10) == 0) || ((unaff_ESI & 0x20) != 0)) || ((unaff_ESI & 0x100000) != 0))
       || (((unaff_ESI & 0x80000) != 0 || ((unaff_ESI & 0x400) != 0)))) {
      unaff_ESI = *(uint *)(unaff_EBX + 0xb0);
    }
    if (((unaff_ESI & 0x10) != 0) || ((unaff_ESI & 0x400) != 0)) {
      psVar2 = (short *)FUN_0041f354();
    }
    if ((unaff_ESI & 0x20) != 0) {
      psVar2 = (short *)FUN_0041f354();
    }
    if ((unaff_ESI & 0x80000) != 0) {
      psVar2 = (short *)FUN_0041f354();
    }
    if ((unaff_ESI & 0x100000) != 0) {
      psVar2 = (short *)FUN_0041f354();
    }
    if ((unaff_EDI == *(int *)(unaff_EBX + 0x30)) &&
       (psVar2 = *(short **)(unaff_EBX + 0x38), *(short **)(unaff_EBP + -4) == psVar2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = CONCAT22((short)((uint)psVar2 >> 0x10),1);
    }
    return uVar1;
  }
  uVar1 = FUN_0041ed4b();
  return uVar1;
}


/* Ghidra address: 004a318e; FUN_004a318e */

/* WARNING: Exceeded maximum restarts with more pending */

int FUN_004a318e(void)

{
  SHORT SVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  int unaff_EBP;
  int in_stack_00000004;
  
  if (*(int *)(unaff_EBP + 4) != 0x425411) {
    SVar1 = GetAsyncKeyState(in_stack_00000004);
    return (int)SVar1;
  }
  if (((in_stack_00000004 != 0x53) && (in_stack_00000004 != 0x44)) &&
     (((hModule = GetModuleHandleA(s_USER32_dll_004a3234), hModule == (HMODULE)0x0 ||
       (pFVar2 = GetProcAddress(hModule,s_MapVirtualKeyA_004a323f), pFVar2 == (FARPROC)0x0)) ||
      ((((iVar3 = (*pFVar2)(), iVar3 != 0x11 && (iVar3 != 0x1f)) && (iVar3 != 0x1e)) &&
       (iVar3 != 0x20)))))) {
    SVar1 = GetAsyncKeyState(in_stack_00000004);
    return (int)SVar1;
  }
  return 0;
}


/* Ghidra address: 004a31fc; FUN_004a31fc */

void FUN_004a31fc(void)

{
  int vKey;
  code *unaff_EBX;
  
  vKey = (*unaff_EBX)();
  if (vKey != 0) {
    GetAsyncKeyState(vKey);
  }
  return;
}


/* Ghidra address: 004a320c; FUN_004a320c */

int FUN_004a320c(void)

{
  int iVar1;
  
  iVar1 = FUN_0042fc2c();
  if (0x12 < iVar1) {
    iVar1 = 0x12;
  }
  return iVar1;
}


/* Ghidra address: 004a3250; FUN_004a3250 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3250(void)

{
  int iVar1;
  float10 in_ST0;
  float10 fVar2;
  
  fVar2 = in_ST0 + (float10)_DAT_004a3278;
  iVar1 = FUN_0042fc2c();
  _DAT_004a3278 = (double)(fVar2 - (float10)iVar1);
  return;
}


/* Ghidra address: 004a6000; FUN_004a6000 */

/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_004a6000(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  uint uVar2;
  HMODULE hModule_00;
  undefined4 uVar3;
  HANDLE hFile;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (DAT_004a7200 == (code *)0x0) {
    if (DAT_004a7204 == 0) {
      DAT_004a7204 = 1;
      hModule = GetModuleHandleA(s_kernel32_dll_004a7000);
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,s_GetModuleFileNameW_004a7010);
        if (pFVar1 != (FARPROC)0x0) {
          uVar2 = (*pFVar1)();
          if ((uVar2 != 0) && (uVar2 < 0xff0)) {
            pwVar5 = (wchar_t *)(&DAT_004a7400 + uVar2 * 2);
            do {
              pwVar6 = pwVar5;
              if (pwVar6 < (wchar_t *)0x4a7401) goto LAB_004a614d;
              pwVar5 = pwVar6 + -1;
            } while (pwVar6[-1] != L'\\');
            pwVar5 = u_smuta_music_dll_004a7054;
            DAT_004a7208 = pwVar6;
            for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
              *pwVar6 = *pwVar5;
              pwVar5 = pwVar5 + (uint)bVar7 * -2 + 1;
              pwVar6 = pwVar6 + (uint)bVar7 * -2 + 1;
            }
            pFVar1 = GetProcAddress(hModule,s_LoadLibraryExW_004a7024);
            if (pFVar1 != (FARPROC)0x0) {
              hModule_00 = (HMODULE)(*pFVar1)();
              if (hModule_00 != (HMODULE)0x0) {
                DAT_004a7200 = GetProcAddress(hModule_00,s_SmutaMusicDispatch_004a7040);
                if (DAT_004a7200 != (FARPROC)0x0) goto LAB_004a60dd;
              }
            }
            pwVar5 = u_smuta_music_log_004a7074;
            pwVar6 = DAT_004a7208;
            for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
              *pwVar6 = *pwVar5;
              pwVar5 = pwVar5 + (uint)bVar7 * -2 + 1;
              pwVar6 = pwVar6 + (uint)bVar7 * -2 + 1;
            }
            pFVar1 = GetProcAddress(hModule,s_CreateFileW_004a7034);
            if (pFVar1 != (FARPROC)0x0) {
              hFile = (HANDLE)(*pFVar1)();
              if (hFile != (HANDLE)0xffffffff) {
                WriteFile(hFile,s__music__Cannot_load_smuta_music__004a7094,0x5b,
                          (LPDWORD)&DAT_004a7210,(LPOVERLAPPED)0x0);
                CloseHandle(hFile);
              }
            }
          }
        }
      }
    }
LAB_004a614d:
    uVar3 = 0xffffffff;
  }
  else {
LAB_004a60dd:
    uVar3 = (*DAT_004a7200)();
  }
  return uVar3;
}


/* Ghidra address: 004a6160; FUN_004a6160 */

void FUN_004a6160(void)

{
  FUN_004a6000();
  return;
}


/* Ghidra address: 004a6190; FUN_004a6190 */

void FUN_004a6190(void)

{
  FUN_004a6000();
  return;
}


/* Ghidra address: 004a61b0; FUN_004a61b0 */

void FUN_004a61b0(void)

{
  FUN_004a6000();
  return;
}


/* Ghidra address: 004a61d0; FUN_004a61d0 */

void FUN_004a61d0(void)

{
  FUN_004a6000();
  return;
}


/* Ghidra address: 004a61f0; FUN_004a61f0 */

void FUN_004a61f0(void)

{
  FUN_004a6000();
  return;
}


/* Ghidra address: 004a6210; FUN_004a6210 */

void FUN_004a6210(void)

{
  FUN_004014b2();
  return;
}


/* Ghidra address: 004a6220; FUN_004a6220 */

void FUN_004a6220(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 3) {
    FUN_004a6210();
    return;
  }
  FUN_004a6000();
  return;
}


/* Ghidra address: 004a6250; FUN_004a6250 */

void FUN_004a6250(void)

{
  FUN_0040155e();
  return;
}


/* Ghidra address: 004a6260; FUN_004a6260 */

void FUN_004a6260(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 == 3) {
    FUN_004a6000();
    return;
  }
  if (in_stack_00000004 != 0) {
    FUN_004a6250();
    return;
  }
  FUN_004a6250();
  FUN_004a6000();
  FUN_004a6000();
  return;
}


/* Ghidra address: 004a62e0; FUN_004a62e0 */

void FUN_004a62e0(void)

{
  FUN_004015f2();
  return;
}


/* Ghidra address: 004a62f0; FUN_004a62f0 */

void FUN_004a62f0(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 3) {
    FUN_004a62e0();
    return;
  }
  FUN_004a6000();
  return;
}


/* Ghidra address: 004a6320; FUN_004a6320 */

void FUN_004a6320(void)

{
  FUN_0040168a();
  return;
}


/* Ghidra address: 004a6330; FUN_004a6330 */

void FUN_004a6330(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 == 3) {
    FUN_004a6000();
    return;
  }
  if (in_stack_00000004 != 0) {
    FUN_004a6320();
    return;
  }
  FUN_004a6320();
  FUN_004a6000();
  FUN_004a6000();
  return;
}


