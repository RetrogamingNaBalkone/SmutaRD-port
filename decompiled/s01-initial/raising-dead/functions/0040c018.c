/* Ghidra address: 0040c018; FUN_0040c018 */

void __cdecl FUN_0040c018(int param_1)

{
  undefined4 uVar1;
  HDC pHVar2;
  PALETTEENTRY *pPVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  LOGPALETTE *pLVar7;
  LOGPALETTE local_408 [128];
  
  puVar6 = &DAT_00438f54;
  pLVar7 = local_408;
  for (iVar4 = 0x101; iVar4 != 0; iVar4 = iVar4 + -1) {
    uVar1 = *puVar6;
    pLVar7->palVersion = (short)uVar1;
    pLVar7->palNumEntries = (short)((uint)uVar1 >> 0x10);
    puVar6 = puVar6 + 1;
    pLVar7 = (LOGPALETTE *)pLVar7->palPalEntry;
  }
  pHVar2 = GetDC((HWND)0x0);
  GetSystemPaletteEntries(pHVar2,0,0x100,local_408[0].palPalEntry);
  ReleaseDC((HWND)0x0,pHVar2);
  iVar4 = 0;
  puVar5 = (undefined1 *)(param_1 + 0x2b);
  pPVar3 = local_408[0].palPalEntry;
  do {
    *puVar5 = 0;
    if ((iVar4 < 10) || (0xf5 < iVar4)) {
      puVar5[-1] = pPVar3->peRed;
      puVar5[-2] = pPVar3->peGreen;
      puVar5[-3] = pPVar3->peBlue;
      pPVar3->peFlags = '\0';
    }
    else {
      pPVar3->peRed = puVar5[0x27];
      pPVar3->peGreen = puVar5[0x26];
      pPVar3->peBlue = puVar5[0x25];
      pPVar3->peFlags = '\x01';
    }
    iVar4 = iVar4 + 1;
    pPVar3 = pPVar3 + 1;
    puVar5 = puVar5 + 4;
  } while (iVar4 < 0x100);
  if (DAT_004cf900 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_004cf900);
  }
  DAT_004cf900 = CreatePalette(local_408);
  pHVar2 = (HDC)FUN_0040b9b4();
  SelectPalette(pHVar2,DAT_004cf900,0);
  RealizePalette(pHVar2);
  return;
}

