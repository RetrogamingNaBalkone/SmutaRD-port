/* Ghidra address: 0042c92c; FUN_0042c92c */

char * __cdecl FUN_0042c92c(int param_1)

{
  if (param_1 == 0) {
    return s_<notype>_0043acf4;
  }
  if (*(short *)(param_1 + 6) == 0) {
    FUN_004362c4(s_id_>tpName_0043acfd,s_XXTYPE_CPP_0043ad08,0x21);
  }
  return (char *)((uint)*(ushort *)(param_1 + 6) + param_1);
}

