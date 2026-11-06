/* Ghidra address: 00434ec4; FUN_00434ec4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00434ec4(UINT param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  BYTE *pBVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  _cpinfo local_18;
  
  BVar1 = GetCPInfo(param_1,&local_18);
  if (BVar1 == 0) {
    FUN_0043638c((uint *)s_Error__system_code_page_access_f_0043c6b8);
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = 0;
    puVar6 = &DAT_0053e30c;
    do {
      *puVar6 = 0;
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < 0x101);
    if (local_18.MaxCharSize < 2) {
      _DAT_0053e410 = 0;
    }
    else {
      for (pBVar5 = local_18.LeadByte; (uVar4 = (uint)*pBVar5, *pBVar5 != 0 && (pBVar5[1] != 0));
          pBVar5 = pBVar5 + 2) {
        puVar6 = &DAT_0053e30d + uVar4;
        for (; (int)uVar4 <= (int)(uint)pBVar5[1]; uVar4 = uVar4 + 1) {
          *puVar6 = 4;
          puVar6 = puVar6 + 1;
        }
      }
      iVar3 = 1;
      pbVar7 = &DAT_0053e30e;
      do {
        *pbVar7 = *pbVar7 | 8;
        iVar3 = iVar3 + 1;
        pbVar7 = pbVar7 + 1;
      } while (iVar3 < 0xff);
      if (param_1 == 0x3a4) {
        uVar4 = (uint)DAT_0043c6b4;
        pbVar7 = &DAT_0053e30d + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_0043c6b5; uVar4 = uVar4 + 1) {
          *pbVar7 = *pbVar7 | 1;
          pbVar7 = pbVar7 + 1;
        }
        uVar4 = (uint)DAT_0043c6b6;
        pbVar7 = &DAT_0053e30d + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_0043c6b7; uVar4 = uVar4 + 1) {
          *pbVar7 = *pbVar7 | 2;
          pbVar7 = pbVar7 + 1;
        }
      }
      _DAT_0053e410 = param_1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

