// ===== vkGetDeviceProcAddrINTEL @ 18064e5d0 =====

void vkGetDeviceProcAddrINTEL(void)

{
                    /* 0x64e5d0  133  vkGetDeviceProcAddrINTEL */
  (*(code *)PTR__guard_dispatch_icall_180dba668)();
  return;
}


// ===== vkGetInstanceProcAddr @ 1802870a0 =====

undefined8 vkGetInstanceProcAddr(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *apcStackX_18 [2];
  longlong lStack_18;
  longlong lStack_10;
  
                    /* 0x2870a0  134  vkGetInstanceProcAddr */
  apcStackX_18[0] = (char *)0x0;
  FUN_1802877b8();
  if (param_1 == 0) {
    lVar2 = FUN_180287ce0();
    if (param_2 != (char *)0x0) {
      apcStackX_18[0] = param_2;
      iVar1 = strncmp(param_2,"vk",2);
      if (iVar1 == 0) {
        apcStackX_18[0] = param_2 + 2;
      }
      FUN_18071fa48(&lStack_18,lVar2,lVar2 + 0xa8,apcStackX_18,0);
      if ((lStack_18 != lStack_10) && (*(char *)(lStack_18 + 0x10) != '\0')) {
        return *(undefined8 *)(lStack_18 + 8);
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1802877fc(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined4 *)(param_1 + 0x188),
                          param_1 + 0x17c);
  }
  return uVar3;
}


// ===== vkCreateInstance @ 18064e5b0 =====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 vkCreateInstance(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  undefined1 auStack_d8 [32];
  undefined8 **ppuStack_b8;
  int **ppiStack_b0;
  undefined1 *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [4];
  undefined4 uStack_94;
  undefined4 auStack_90 [2];
  int *piStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_38;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  ulonglong uStack_28;
  
  uStack_28 = DAT_1818ba280 ^ (ulonglong)auStack_d8;
  uStack_94 = 0;
  puStack_48 = &DAT_181a35178;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_181a35178);
  FUN_1802877b8();
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  piStack_88 = (int *)0x0;
  cVar5 = '\0';
  auStack_98[0] = 0;
  iVar4 = 0;
  for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 2)) {
    if (*piVar2 == 0x303241c5) {
      piStack_88 = piVar2;
LAB_18028713e:
      iVar4 = iVar4 + 1;
    }
    else if (*piVar2 == 0x4190b6b9) {
      cVar5 = (char)piVar2[4];
      auStack_98[0] = 1;
      goto LAB_18028713e;
    }
    if (iVar4 == 2) break;
  }
  if ((((*(longlong *)(param_1 + 0x18) != 0) &&
       (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x2c), uVar1 != 0)) &&
      (0x400000 < (uVar1 & 0xfffff000))) && ((cVar5 == '\0' && (DAT_1819ee188 < 5)))) {
    auStack_90[0] = 0xe;
                    /* WARNING: Subroutine does not return */
    FUN_18061b740(auStack_90,&DAT_1818b54a8);
  }
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  uVar3 = FUN_1802872b8();
  puStack_a0 = &uStack_38;
  puStack_a8 = (undefined1 *)CONCAT44(puStack_a8._4_4_,*(undefined4 *)(param_1 + 0x30));
  ppiStack_b0 = *(int ***)(param_1 + 0x38);
  ppuStack_b8 = (undefined8 **)CONCAT44(ppuStack_b8._4_4_,*(undefined4 *)(param_1 + 0x20));
  FUN_180287314(*(undefined4 *)(param_1 + 0x20),uVar3,10);
  pcStack_70 = FUN_1802586a0;
  pcStack_68 = FUN_18077b3d0;
  pcStack_60 = FUN_18028f820;
  pcStack_58 = _guard_check_icall;
  pcStack_50 = _guard_check_icall;
  uStack_78 = 0;
  FUN_1800696b8(&uStack_78,param_2);
  puStack_80 = &uStack_38;
  puStack_a8 = auStack_98;
  ppiStack_b0 = &piStack_88;
  ppuStack_b8 = &puStack_80;
  uVar3 = FUN_180287404(&uStack_78);
  *param_3 = uVar3;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_181a35178);
  return uStack_94;
}


