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

