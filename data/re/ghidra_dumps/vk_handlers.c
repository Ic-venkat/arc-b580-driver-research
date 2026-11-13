// ===== 0x180287b40 FUN_180287b40 =====

undefined8 FUN_180287b40(longlong param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  
  cVar4 = '\0';
  if (*(int *)(param_1 + 0x18) == -1) {
    iVar5 = 0;
  }
  else if ((param_3 == 0) ||
          (iVar5 = 1, *(char *)((ulonglong)*(uint *)(param_1 + 0x18) + param_3) != '\0')) {
    iVar5 = 2;
  }
  iVar1 = FUN_180287ca4(param_1 + 0x1c,param_4);
  if (((*(int *)(param_1 + 0x14) != -1) || (iVar5 != 0)) || (cVar3 = '\x01', iVar1 != 0)) {
    cVar3 = cVar4;
  }
  if ((*(char *)(param_1 + 0x10) == cVar4) ||
     ((((param_2 < *(uint *)(param_1 + 0x14) && (cVar3 == '\0')) && ((iVar5 == 0 || (iVar5 != 2))))
      && (iVar1 != 2)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  return uVar2;
}


// ===== 0x1802881a8 FUN_1802881a8 =====

undefined8 FUN_1802881a8(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  int iVar5;
  
  bVar1 = true;
  if (*(int *)(param_1 + 0x18) == -1) {
    iVar5 = 0;
  }
  else if ((param_3 == 0) ||
          (iVar5 = 1, *(char *)((ulonglong)*(uint *)(param_1 + 0x18) + param_3) != '\0')) {
    iVar5 = 2;
  }
  puVar4 = (uint *)(param_1 + 0x1c);
  if (*puVar4 == 0xffffffff) {
    iVar2 = 0;
  }
  else if (param_4 == 0) {
LAB_18028822a:
    iVar2 = 2;
  }
  else {
    for (; (puVar4 != (uint *)(param_1 + 0x24) && (*puVar4 != 0xffffffff)); puVar4 = puVar4 + 1) {
      if (*(char *)((ulonglong)*puVar4 + param_4) != '\0') goto LAB_18028822a;
    }
    iVar2 = 1;
  }
  if (((*(int *)(param_1 + 0x14) != -1) || (iVar5 != 0)) || (iVar2 != 0)) {
    bVar1 = false;
  }
  if ((*(char *)(param_1 + 0x10) == '\0') ||
     ((((param_2 < *(uint *)(param_1 + 0x14) && (!bVar1)) && ((iVar5 == 0 || (iVar5 != 2)))) &&
      (iVar2 != 2)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
  return uVar3;
}


// ===== 0x180287d44 FUN_180287d44 =====

undefined8 FUN_180287d44(longlong param_1,uint param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  if (*(int *)(param_1 + 0x18) == -1) {
    iVar2 = 0;
  }
  else if ((param_3 == 0) ||
          (iVar2 = 1, *(char *)((ulonglong)*(uint *)(param_1 + 0x18) + param_3) != '\0')) {
    iVar2 = 2;
  }
  if ((*(int *)(param_1 + 0x14) != -1) || (iVar2 != 0)) {
    bVar1 = false;
  }
  if ((*(char *)(param_1 + 0x10) != '\0') &&
     (((*(uint *)(param_1 + 0x14) <= param_2 || (bVar1)) || (iVar2 == 2)))) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}


