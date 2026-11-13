// ===== 0x18071fa48 FUN_18071fa48 =====

longlong * FUN_18071fa48(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar3 = (param_3 - (longlong)param_2 >> 3) * -0x5555555555555555;
code_r0x00018071fa87:
  do {
    puVar7 = param_2;
    if (lVar3 < 1) {
      puVar6 = param_2;
code_r0x00018071fbac:
      *param_1 = (longlong)puVar7;
      param_1[1] = (longlong)puVar6;
      return param_1;
    }
    lVar2 = lVar3 / 2;
    puVar6 = param_2 + lVar2 * 3;
    iVar1 = FUN_180d829b0(*puVar6,*param_4);
    if (iVar1 < 0) {
      param_2 = puVar6 + 3;
      lVar3 = lVar3 + (-1 - lVar2);
      goto code_r0x00018071fa87;
    }
    iVar1 = FUN_180d829b0(*param_4,*puVar6);
    if (-1 < iVar1) {
      uVar4 = (lVar2 * 0x18 >> 3) * -0x5555555555555555;
      if (0 < (longlong)uVar4) {
        do {
          uVar5 = uVar4 >> 1;
          iVar1 = FUN_180d829b0(puVar7[uVar5 * 3],*param_4);
          if (iVar1 < 0) {
            puVar7 = puVar7 + uVar5 * 3 + 3;
            uVar5 = uVar4 + (-1 - uVar5);
          }
          uVar4 = uVar5;
        } while (0 < (longlong)uVar5);
      }
      puVar6 = puVar6 + 3;
      uVar4 = ((lVar3 * 0x18 - (longlong)puVar6) + (longlong)param_2 >> 3) * -0x5555555555555555;
      while (0 < (longlong)uVar4) {
        uVar5 = uVar4 >> 1;
        iVar1 = FUN_180d829b0(*param_4,puVar6[uVar5 * 3]);
        if (iVar1 < 0) {
          uVar4 = uVar5;
        }
        else {
          puVar6 = puVar6 + uVar5 * 3 + 3;
          uVar4 = uVar4 + (-1 - uVar5);
        }
      }
      goto code_r0x00018071fbac;
    }
    lVar3 = lVar2;
  } while( true );
}


// ===== 0x1802877fc FUN_1802877fc =====

undefined8 FUN_1802877fc(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong alStackX_10 [3];
  longlong lStack_48;
  longlong lStack_40;
  
  if (param_2 != 0) {
    alStackX_10[0] = param_2;
    iVar1 = FUN_180d82a30(param_2,&UNK_180dd8148,2);
    if (iVar1 == 0) {
      alStackX_10[0] = param_2 + 2;
    }
    FUN_180287904(&lStack_48,param_1 + 0xa8,param_1 + 0x228,alStackX_10,0);
    if (lStack_48 != lStack_40) {
      uVar2 = func_0x000180287d44(lStack_48,param_3,param_4);
      return uVar2;
    }
    FUN_1802879bc(&lStack_48,param_1 + 0x228,param_1 + 0xa20,alStackX_10,0);
    if (lStack_48 != lStack_40) {
      uVar2 = FUN_180287b40(lStack_48,param_3,param_4,0);
      return uVar2;
    }
    FUN_180288094(&lStack_48,param_1 + 0xa20,param_1 + 0x63d0,alStackX_10,0);
    if (lStack_48 != lStack_40) {
      uVar2 = FUN_1802881a8(lStack_48,param_3,param_4,0);
      return uVar2;
    }
  }
  return 0;
}


