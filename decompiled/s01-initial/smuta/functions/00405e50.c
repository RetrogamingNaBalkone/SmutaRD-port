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

