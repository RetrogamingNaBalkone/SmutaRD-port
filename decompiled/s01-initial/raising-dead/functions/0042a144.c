/* Ghidra address: 0042a144; FUN_0042a144 */

char * __cdecl FUN_0042a144(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
LAB_0042a14c:
    do {
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        uVar3 = uVar1 + 0xfefefeff & 0x80808080;
      } while (uVar3 == 0);
      uVar3 = uVar3 & ~uVar1;
    } while (uVar3 == 0);
    if ((char)uVar3 == '\0') {
      if ((char)(uVar3 >> 8) == '\0') {
        if ((uVar3 & 0xff0000) == 0) goto LAB_0042a196;
        goto LAB_0042a195;
      }
    }
    else {
LAB_0042a193:
      puVar2 = (uint *)((int)puVar2 + -1);
    }
LAB_0042a194:
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  else {
    puVar2 = param_1 + 1;
    if ((char)*param_1 == '\0') goto LAB_0042a193;
    if (*(char *)((int)param_1 + 1) == '\0') goto LAB_0042a194;
    if (*(char *)((int)param_1 + 2) != '\0') {
      puVar2 = (uint *)((int)param_1 + 3U & 0xfffffffc);
      goto LAB_0042a14c;
    }
  }
LAB_0042a195:
  puVar2 = (uint *)((int)puVar2 + -1);
LAB_0042a196:
  return (char *)((int)puVar2 + (-1 - (int)param_1));
}

