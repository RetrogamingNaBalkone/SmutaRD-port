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

