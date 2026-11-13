// ===== 0x180137024 FUN_180137024 =====

longlong FUN_180137024(longlong param_1)

{
  uint uVar1;
  
  FUN_1801381b4(param_1,1);
  uVar1 = *(uint *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = uVar1 + 1;
  return (ulonglong)uVar1 * 0x10 + *(longlong *)(param_1 + 0x10);
}


// ===== 0x1801381b4 FUN_1801381b4 =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801381b4(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 local_18 [4];
  
  uVar3 = *(uint *)(param_1 + 3);
  if (uVar3 < (uint)(*(int *)((longlong)param_1 + 0x1c) + param_2)) {
    if (*param_1 == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      local_18[0] = 0xc0000017;
                    /* WARNING: Subroutine does not return */
      FUN_18061b740(local_18,&DAT_1818b54a8);
    }
    if (uVar3 == 0) {
      uVar3 = 0x23;
    }
    else {
      uVar3 = uVar3 * 2;
    }
    uVar2 = param_2 + *(int *)((longlong)param_1 + 0x1c);
    for (; uVar3 < uVar2; uVar3 = uVar3 * 2) {
    }
    lVar1 = FUN_1802c74b4(*param_1,uVar2,uVar3);
    uVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c) << 4;
    if (uVar3 << 4 <= uVar4) {
      uVar4 = (ulonglong)(uVar3 << 4);
    }
    FUN_180d81d00(lVar1,param_1[2],uVar4);
    if (param_1[2] != 0) {
      (*(code *)((undefined8 *)*param_1)[3])(*(undefined8 *)*param_1);
    }
    *(uint *)(param_1 + 3) = uVar3;
    param_1[2] = lVar1;
  }
  return;
}


// ===== 0x180c47128 FUN_180c47128 =====

void FUN_180c47128(ulonglong param_1,undefined8 *param_2)

{
  if (*(char *)((longlong)param_2 + 0x21) != '\0') {
    FUN_1802059d0(-(ulonglong)(param_1 != 0xffffffffffffffd8) & param_1,*param_2,param_2[1],0,0,0,0,
                  0,0,0,1,param_2[2],param_2[3],*(undefined1 *)(param_2 + 4));
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
  }
  return;
}


// ===== 0x180033880 FUN_180033880 =====

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180033880(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 *local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1818ba280 ^ (ulonglong)auStack_168;
  puVar13 = *(undefined8 **)(param_1 + 0xc578);
  for (puVar7 = (undefined8 *)*puVar13; puVar7 != puVar13; puVar7 = (undefined8 *)*puVar7) {
    local_c8 = puVar7[2];
    uStack_c0 = puVar7[3];
    uStack_b0 = puVar7[5];
    local_a8 = puVar7[6];
    uStack_a0 = puVar7[7];
    local_98 = puVar7[8];
    uStack_90 = puVar7[9];
    local_88 = puVar7[10];
    uStack_80 = puVar7[0xb];
    local_78 = *(undefined4 *)(puVar7 + 0xc);
    uStack_74 = *(undefined4 *)((longlong)puVar7 + 100);
    uStack_70 = *(undefined4 *)(puVar7 + 0xd);
    uStack_6c = *(undefined4 *)((longlong)puVar7 + 0x6c);
    local_68 = puVar7[0xe];
    local_b8 = 0;
    lVar11 = param_1;
    if (param_1 == -0x28) {
      lVar11 = 0;
    }
    if (*(char *)(*(longlong *)(*(longlong *)(lVar11 + 0x48) + 0x3f8) + 0xb64) == '\0') {
      lVar6 = 0;
      if (lVar11 != -0x28) {
        lVar6 = lVar11;
      }
      local_f0 = 0;
      local_f8 = 0;
      local_100 = 0;
      local_108 = CONCAT71(local_108._1_7_,1);
      local_110 = 0;
      local_118 = 0;
      local_120 = &uStack_c0;
      local_128 = 1;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      FUN_1800a8aa0(lVar6,0,0,0);
    }
    else {
      local_100 = local_100 & 0xffffffffffffff00;
      local_108 = 0;
      local_110 = 0;
      local_118 = 1;
      local_120 = &uStack_c0;
      local_128 = 1;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      FUN_1800aaaa8(lVar11);
    }
  }
  uVar4 = *(ulonglong *)(param_1 + 0xc580);
  if (uVar4 != 0) {
    if (uVar4 < *(ulonglong *)(param_1 + 0xc5b0) >> 3) {
      plVar1 = *(longlong **)(param_1 + 0xc578);
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != plVar1) {
        lVar11 = *(longlong *)(param_1 + 0xc590);
        plVar2 = (longlong *)plVar5[1];
        local_d8 = lVar11;
        uVar4 = FUN_180033c2c(uVar4,plVar5 + 2);
        plVar12 = (longlong *)((*(ulonglong *)(param_1 + 0xc5a8) & uVar4) * 0x10 + lVar11);
        plVar10 = (longlong *)*plVar12;
        local_e8 = (longlong *)plVar12[1];
        plVar8 = plVar5;
        do {
          plVar9 = (longlong *)*plVar8;
          local_e0 = plVar9;
          uVar14 = (*(code *)(*(undefined8 **)(param_1 + 0xc570))[3])
                             (**(undefined8 **)(param_1 + 0xc570),plVar8);
          *(longlong *)(param_1 + 0xc580) = *(longlong *)(param_1 + 0xc580) + -1;
          if (plVar8 == local_e8) {
            if (plVar10 == plVar5) {
              *plVar12 = (longlong)plVar1;
              plVar5 = plVar1;
            }
            else {
              plVar5 = plVar2;
            }
            plVar12[1] = (longlong)plVar5;
            while (plVar9 != plVar1) {
              uVar4 = FUN_180033c2c(uVar14,plVar9 + 2);
              puVar13 = (undefined8 *)(local_d8 + (uVar4 & *(ulonglong *)(param_1 + 0xc5a8)) * 0x10)
              ;
              plVar5 = (longlong *)puVar13[1];
              plVar10 = plVar9;
              while( true ) {
                plVar9 = (longlong *)*plVar10;
                uVar14 = (*(code *)(*(undefined8 **)(param_1 + 0xc570))[3])
                                   (**(undefined8 **)(param_1 + 0xc570),plVar10);
                *(longlong *)(param_1 + 0xc580) = *(longlong *)(param_1 + 0xc580) + -1;
                if (plVar10 == plVar5) break;
                plVar10 = plVar9;
                if (plVar9 == plVar1) {
                  *puVar13 = plVar9;
                  *plVar2 = (longlong)plVar9;
                  plVar9[1] = (longlong)plVar2;
                  return;
                }
              }
              *puVar13 = plVar1;
              puVar13[1] = plVar1;
            }
            goto LAB_180033b76;
          }
          plVar8 = plVar9;
        } while (local_e0 != plVar1);
        if (plVar10 == plVar5) {
          *plVar12 = (longlong)plVar9;
        }
LAB_180033b76:
        *plVar2 = (longlong)plVar9;
        plVar9[1] = (longlong)plVar2;
        return;
      }
    }
    else {
      FUN_180033830(param_1 + 0xc570);
      *(undefined8 *)*(undefined8 *)(param_1 + 0xc578) = *(undefined8 *)(param_1 + 0xc578);
      *(longlong *)(*(longlong *)(param_1 + 0xc578) + 8) = *(longlong *)(param_1 + 0xc578);
      *(undefined8 *)(param_1 + 0xc580) = 0;
      puVar13 = *(undefined8 **)(param_1 + 0xc590);
      uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0xc598) + (7 - (longlong)puVar13)) >>
              3;
      if (*(undefined8 **)(param_1 + 0xc598) < puVar13) {
        uVar4 = 0;
      }
      if (uVar4 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0xc578);
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar13 = uVar3;
          puVar13 = puVar13 + 1;
        }
      }
    }
  }
  return;
}


// ===== 0x18009dba4 FUN_18009dba4 =====

void FUN_18009dba4(ulonglong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar3 = -(ulonglong)(param_1 != 0xffffffffffffffd8) & param_1;
  if ((*(char *)(*(longlong *)(lVar1 + 0x3f8) + 0x8b8) != '\0') && (*(int *)(param_1 + 0x54) == 0))
  {
    FUN_180c65034(param_1,lVar1 + 0xee6c,*(longlong *)(lVar1 + 0xba68) + 200);
  }
  if (*(longlong *)(&DAT_0000a490 + *(longlong *)(param_1 + 0x90)) == param_1 + 0x98) {
    FUN_1802b4e98(param_1 + 0x88);
  }
  FUN_18009d3e0(param_1 + 0x88);
  FUN_18009d518(uVar3 + 0xc758);
  FUN_1800982a8(uVar3 + 0xc870);
  FUN_18009d600(param_1);
  FUN_18009d838(param_1 + 0xc100);
  FUN_18009d288(param_1 + 0xc150);
  cVar2 = FUN_18009db10(*(undefined8 *)(param_1 + 0x48));
  if ((cVar2 != '\0') && (*(char *)(uVar3 + 0xc8b5) != '\0')) {
    FUN_180c5eddc();
    *(undefined1 *)(uVar3 + 0xc8b5) = 0;
  }
  cVar2 = FUN_18009839c(*(undefined8 *)(param_1 + 0x48));
  if ((cVar2 != '\0') && (*(char *)(uVar3 + 0xc868) != '\0')) {
    FUN_180c5eca0();
  }
  FUN_18009db4c(uVar3);
  if (*(char *)(param_1 + 0x2e4) != '\0') {
    FUN_1800982e4(param_1);
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_18009dde8();
  }
  else {
    FUN_1800dc08c();
  }
  uVar4 = -(ulonglong)(uVar3 != 0xffffffffffffffd8) & uVar3;
  if (((*(int *)((-(ulonglong)(uVar4 != 0xffffffffffffffd8) & uVar4) + 0x50) != 2) ||
      (cVar2 = FUN_18006b670(*(undefined8 *)(*(longlong *)(uVar4 + 0x48) + 0x8ec0)), cVar2 == '\0'))
     && (*(int *)(uVar3 + 0x50) != 3)) {
    if (*(char *)(uVar4 + 0xc724) == '\0') {
      *(undefined1 *)(uVar4 + 0xc725) = 1;
    }
    else {
      if ((*(longlong *)(uVar4 + 0xc728) ==
           *(longlong *)(*(longlong *)(uVar4 + 0xa640) + 0x28) +
           *(longlong *)(*(longlong *)(uVar4 + 0xa640) + 0x10)) ||
         (*(longlong *)(uVar4 + 0xc728) == 0)) {
        FUN_180d823d0(*(undefined8 *)(uVar4 + 0xc718),0,*(undefined4 *)(uVar4 + 0xc720));
      }
      else {
        *(undefined1 *)(uVar4 + 0xc725) = 1;
      }
      *(undefined1 *)(uVar4 + 0xc724) = 0;
    }
  }
  FUN_18009d1ac(*(undefined8 *)(param_1 + 0x48),param_1 + 0xa8b8);
  *(undefined4 *)(param_1 + 0x23c) = 4;
  return;
}


