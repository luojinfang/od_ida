int __thiscall sub_65140CBD(HWND *this, HWND a2, UINT Msg, __int16 *wParam, LPARAM a5)
{
  int *v5; // esi@3
  wchar_t *v7; // eax@5
  int v8; // ecx@5
  char *v9; // eax@6
  bool v10; // zf@6
  int v11; // ecx@8
  int v12; // ecx@9
  int v13; // ecx@10
  int v14; // ecx@12
  signed int v15; // ecx@14
  HWND v16; // eax@16
  HWND v17; // edi@16
  HWND v18; // ebx@16
  wchar_t *v19; // eax@16
  int v20; // ecx@16
  HWND v21; // edi@16
  wchar_t *v22; // eax@16
  int v23; // ecx@16
  HWND v24; // esi@18
  HWND v25; // ebx@18
  wchar_t *v26; // eax@19
  wchar_t *v27; // eax@19
  int v28; // eax@23
  char *v29; // edi@24
  signed int v30; // ecx@24
  signed int v31; // ecx@28
  const wchar_t *v32; // edx@30
  int v33; // ecx@30
  __int16 v34; // ax@30
  int **v35; // eax@34
  int *v36; // eax@34
  int v37; // ecx@34
  char *v38; // ecx@40
  int v39; // ecx@40
  int v40; // ecx@42
  HWND v41; // eax@47
  const wchar_t *v42; // edx@55
  int v43; // ecx@55
  __int16 v44; // ax@55
  _DWORD *v45; // eax@59
  int *v46; // ecx@61
  const wchar_t *v47; // edx@68
  int v48; // ecx@68
  __int16 v49; // ax@68
  _DWORD *v50; // eax@72
  const wchar_t *v51; // edx@78
  int v52; // ecx@78
  __int16 v53; // ax@78
  _DWORD *v54; // eax@82
  int v55; // esi@88
  int v56; // eax@90
  int v57; // ecx@91
  const wchar_t *v58; // edx@94
  int v59; // ecx@94
  __int16 v60; // ax@94
  _DWORD *v61; // eax@98
  HWND v62; // esi@105
  int v63; // eax@106
  int v64; // esi@106
  int v65; // eax@106
  HWND v66; // esi@106
  int v67; // eax@106
  int v68; // esi@106
  int v69; // eax@106
  const wchar_t *v70; // edx@107
  int v71; // ecx@107
  __int16 v72; // ax@107
  _DWORD *v73; // eax@111
  int *v74; // edi@115
  int v75; // eax@116
  int v76; // esi@116
  int v77; // eax@116
  const wchar_t *v78; // edx@117
  int v79; // ecx@117
  __int16 v80; // ax@117
  _DWORD *v81; // eax@121
  int v82; // eax@123
  int v83; // esi@123
  const wchar_t *v84; // edx@131
  int v85; // ecx@131
  __int16 v86; // ax@131
  _DWORD *v87; // eax@135
  const wchar_t *v88; // edx@141
  int v89; // ecx@141
  __int16 v90; // ax@141
  _DWORD *v91; // eax@145
  signed int v92; // [sp-Ch] [bp-86Ch]@3
  char *v93; // [sp-8h] [bp-868h]@3
  IPCHandler *v94; // [sp-4h] [bp-864h]@16
  LPARAM v95; // [sp+0h] [bp-860h]@40
  char v96; // [sp+Ch] [bp-854h]@144
  int v97; // [sp+10h] [bp-850h]@144
  int v98; // [sp+14h] [bp-84Ch]@146
  LPARAM v99; // [sp+1Ch] [bp-844h]@1
  int v100; // [sp+20h] [bp-840h]@33
  int v101; // [sp+24h] [bp-83Ch]@33
  int v102; // [sp+28h] [bp-838h]@35
  int v103; // [sp+30h] [bp-830h]@33
  HWND v104; // [sp+34h] [bp-82Ch]@33
  unsigned __int8 v105; // [sp+3Bh] [bp-825h]@16
  char v106; // [sp+3Ch] [bp-824h]@35
  LPARAM lParam; // [sp+40h] [bp-820h]@9
  int v108; // [sp+44h] [bp-81Ch]@33
  HWND v109; // [sp+48h] [bp-818h]@3
  HWND hWnd; // [sp+4Ch] [bp-814h]@1
  __int16 v111[512]; // [sp+50h] [bp-810h]@143
  __int16 v112[518]; // [sp+450h] [bp-410h]@32
  int v113; // [sp+85Ch] [bp-4h]@3

  hWnd = a2;
  v99 = a5;
  if ( Msg == 2024 )
  {
    if ( wParam == (__int16 *)3 )
    {
      v99 = 0;
      v93 = (char *)&v99;
      v92 = (signed int)this;
      v109 = (HWND)&v92;
      v113 = 0;
      CTXStringW::CTXStringW(&v92, L"g_pwdEMkpicData");
      IPCHandler::GetShareInfo(v92, v93);
      v5 = (int *)v99;
      if ( !v99 )
        return 0;
      hWnd = 0;
      LOBYTE(v113) = 1;
      v7 = CTXStringW::GetBSTR((CTXStringW *)&unk_651CB068);
      v8 = *v5;
      v93 = (char *)&hWnd;
      v92 = (signed int)v7;
      (*(void (__stdcall **)(int *, wchar_t *, HWND *))(v8 + 68))(v5, v7, &hWnd);
      if ( hWnd )
      {
        lParam = 0;
        LOBYTE(v113) = 2;
        sub_65121702(&lParam);
        v93 = (char *)hWnd;
        v12 = *(_DWORD *)lParam;
        v92 = lParam;
        (*(void (__stdcall **)(LPARAM, HWND))(v12 + 32))(lParam, hWnd);
        LOBYTE(v113) = 1;
        if ( lParam )
        {
          v13 = *(_DWORD *)lParam;
          v93 = (char *)lParam;
          (*(void (__stdcall **)(LPARAM))(v13 + 8))(lParam);
        }
        LOBYTE(v113) = 0;
        if ( hWnd )
        {
          v14 = *(_DWORD *)hWnd;
          v93 = (char *)hWnd;
          (*(void (__stdcall **)(HWND))(v14 + 8))(hWnd);
        }
      }
      v9 = (char *)v99;
      v113 = -1;
      v10 = v99 == 0;
LABEL_7:
      if ( !v10 )
      {
        v11 = *(_DWORD *)v9;
        v93 = v9;
        (*(void (__stdcall **)(char *))(v11 + 8))(v9);
      }
      return 0;
    }
    if ( wParam == (__int16 *)2 )
    {
      if ( !sub_6512C926(this) )
      {
        v93 = (char *)v99;
        if ( dword_651CAB24 <= 0 )
        {
          sub_65109408(v93);
          v29 = (char *)lParam;
          v93 = (char *)lParam;
          v92 = v30;
          v109 = (HWND)&v92;
          v113 = 7;
          CTXStringW::CTXStringW(&v92, L"g_PwdGuardData");
          IPCHandler::SetShareInfo(v92, v93);
          IPCHandler::GetHwnd((IPCHandler *)1, (unsigned int)&hWnd);
          SendMessageW(hWnd, 0x7E8u, 2u, 0);
          v113 = -1;
          if ( !v29 )
            return 0;
          v28 = *(_DWORD *)v29;
          v93 = v29;
        }
        else
        {
          sub_65109408(v93);
          lParam = 0;
          v113 = 5;
          LOBYTE(v113) = 6;
          v105 = 0;
          v24 = hWnd;
          v25 = IPCHandler::GetIMHwnd(v94);
          if ( hWnd )
          {
            v26 = CTXStringW::GetBSTR((CTXStringW *)&unk_651CB054);
            (*(void (__stdcall **)(HWND, wchar_t *, LPARAM *))(*(_DWORD *)hWnd + 284))(hWnd, v26, &lParam);
            v27 = CTXStringW::GetBSTR((CTXStringW *)&unk_651CB058);
            (*(void (__stdcall **)(HWND, wchar_t *, char *))(*(_DWORD *)v24 + 32))(v24, v27, (char *)&v105);
            SendMessageW(v25, 0x7EDu, v105, lParam);
          }
          LOBYTE(v113) = 5;
          if ( lParam )
            (*(void (__stdcall **)(LPARAM))(*(_DWORD *)lParam + 8))(lParam);
          v113 = -1;
          if ( !v24 )
            return 0;
          v28 = *(_DWORD *)v24;
          v93 = (char *)v24;
        }
        (*(void (__stdcall **)(char *))(v28 + 8))(v93);
        return 0;
      }
      hWnd = 0;
      v93 = (char *)&hWnd;
      v92 = v15;
      v109 = (HWND)&v92;
      v113 = 3;
      CTXStringW::CTXStringW(&v92, L"g_PwdGuardData");
      IPCHandler::GetShareInfo(v92, v93);
      if ( !hWnd )
        goto LABEL_43;
      lParam = 0;
      LOBYTE(v113) = 4;
      v105 = 0;
      v16 = IPCHandler::GetIMHwnd(v94);
      v17 = hWnd;
      v18 = v16;
      v19 = CTXStringW::GetBSTR((CTXStringW *)&unk_651CB054);
      v20 = *(_DWORD *)v17;
      v93 = (char *)&lParam;
      v92 = (signed int)v19;
      (*(void (__stdcall **)(HWND, wchar_t *, LPARAM *))(v20 + 284))(v17, v19, &lParam);
      v21 = hWnd;
      v22 = CTXStringW::GetBSTR((CTXStringW *)&unk_651CB058);
      v23 = *(_DWORD *)v21;
      v93 = (char *)&v105;
      v92 = (signed int)v22;
      (*(void (__stdcall **)(HWND, wchar_t *, char *))(v23 + 32))(v21, v22, (char *)&v105);
      SendMessageW(v18, 0x7EDu, v105, lParam);
      LOBYTE(v113) = 3;
      goto LABEL_41;
    }
    if ( wParam == (__int16 *)4 )
    {
      if ( Util::MultiLogin::GetIfLoginProcess() )
        return 0;
      hWnd = 0;
      v93 = (char *)&hWnd;
      v92 = v31;
      v109 = (HWND)&v92;
      v113 = 8;
      CTXStringW::CTXStringW(&v92, L"g_PwdGuardErrorData");
      IPCHandler::GetShareInfo(v92, v93);
      if ( hWnd )
      {
        v32 = L"OnLoginProcessEvent(LoginProcessEvent::PwdGuard::OnServerVerifyFailed, pData)";
        v33 = 0;
        v34 = 79;
        do
        {
          if ( v34 == 40 )
            break;
          ++v32;
          v112[v33] = v34;
          v34 = *v32;
          ++v33;
        }
        while ( *v32 );
        v93 = (char *)v112;
        v92 = 0;
        v112[v33] = 0;
        sub_6512E424(&v100, v92, v93);
        LOBYTE(v113) = 9;
        sub_6512CC75(v101, &v100);
        v108 = v103;
        v109 = v104;
        while ( 1 )
        {
          sub_6512CC75(v102, &v100);
          if ( (unsigned __int8)sub_6512782E(&v106) )
            break;
          v35 = (int **)sub_6513AFD3(&v108);
          v93 = (char *)hWnd;
          v36 = *v35;
          v37 = *v36;
          v92 = 4;
          (*(void (__stdcall **)(int *, signed int, HWND))(v37 + 12))(v36, 4, hWnd);
          sub_6511149C(&v108);
        }
        sub_65112459((int)&v100);
      }
      v9 = (char *)hWnd;
      goto LABEL_53;
    }
    if ( wParam == (__int16 *)9 )
    {
      if ( !Util::MultiLogin::GetIfLoginProcess() )
        return 0;
      hWnd = 0;
      v113 = 10;
      sub_65121702(&hWnd);
      lParam = 0;
      v38 = v93;
      v93 = (char *)&lParam;
      v92 = (signed int)v38;
      v109 = (HWND)&v92;
      LOBYTE(v113) = 11;
      CTXStringW::CTXStringW(&v92, L"g_pwdGuardTypeChangeData");
      IPCHandler::GetShareInfo(v94, v95);
      v95 = lParam;
      v39 = *(_DWORD *)hWnd;
      v94 = (IPCHandler *)hWnd;
      (*(void (__cdecl **)(HWND, LPARAM))(v39 + 36))(hWnd, lParam);
      LOBYTE(v113) = 10;
LABEL_41:
      if ( lParam )
      {
        v40 = *(_DWORD *)lParam;
        v93 = (char *)lParam;
        (*(void (__stdcall **)(LPARAM))(v40 + 8))(lParam);
      }
LABEL_43:
      v9 = (char *)hWnd;
      v113 = -1;
      v10 = hWnd == 0;
      goto LABEL_7;
    }
    if ( wParam == (__int16 *)10 )
    {
      if ( Util::MultiLogin::GetIfLoginProcess() )
      {
        if ( ((int (*)(void))sub_6512C926)() )
        {
          v41 = IPCHandler::GetIMHwnd(v94);
          SendMessageW(v41, 0x7EEu, 0, 0);
        }
      }
      else
      {
        IPCHandler::SendMessageTo((IPCHandler *)1, 0x7E8u, 0xAu, 0, (__int32)v94);
      }
      return 0;
    }
    if ( wParam == (__int16 *)8 )
    {
      lParam = 0;
      v113 = 12;
      sub_65121702(&lParam);
      (*(void (__stdcall **)(LPARAM))(*(_DWORD *)lParam + 52))(lParam);
      if ( ((int (*)(void))sub_6512C926)() )
      {
        hWnd = 0;
        IPCHandler::GetHwnd(0, (unsigned int)&hWnd);
        PostMessageW(hWnd, 0x3C41u, 0, 0);
        PostQuitMessage(0);
      }
      v9 = (char *)lParam;
LABEL_53:
      v113 = -1;
      v10 = v9 == 0;
      goto LABEL_7;
    }
    if ( wParam != (__int16 *)1 )
      return 0;
    v42 = L"OnLoginPanelEvent(LoginPanelEvents::EventIDs::LoginPanel_InputPwdFrame, 0)";
    v43 = 0;
    v44 = 79;
    do
    {
      if ( v44 == 40 )
        break;
      ++v42;
      v112[v43] = v44;
      v44 = *v42;
      ++v43;
    }
    while ( *v42 );
    v93 = (char *)v112;
    v92 = 0;
    v112[v43] = 0;
    sub_6512E424(&v100, v92, v93);
    v113 = 13;
    sub_6512CC75(v101, &v100);
    v108 = v103;
    v109 = v104;
    while ( 1 )
    {
      sub_6512CC75(v102, &v100);
      if ( (unsigned __int8)sub_6512782E(&v106) )
        break;
      v45 = (_DWORD *)sub_6513AFD3(&v108);
      (*(void (__stdcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)*v45 + 16))(*v45, 4, 0);
      sub_6511149C(&v108);
    }
    goto LABEL_61;
  }
  if ( Msg != 2025 )
  {
    if ( Msg == 2026 )
    {
      if ( wParam == (__int16 *)2 )
      {
        v51 = L"OnLoginPanelEvent(LoginPanelEvents::EventIDs::Login_Cancel, 0)";
        v52 = 0;
        v53 = 79;
        do
        {
          if ( v53 == 40 )
            break;
          v112[v52++] = v53;
          ++v51;
          v53 = *v51;
        }
        while ( *v51 );
        v93 = (char *)v112;
        v92 = 0;
        v112[v52] = 0;
        sub_6512E424(&v100, v92, v93);
        v113 = 15;
        sub_6512CC75(v101, &v100);
        v108 = v103;
        v109 = v104;
        while ( 1 )
        {
          sub_6512CC75(v102, &v100);
          if ( (unsigned __int8)sub_6512782E(&v106) )
            break;
          v54 = (_DWORD *)sub_6513AFD3(&v108);
          (*(void (__stdcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)*v54 + 16))(*v54, 7, 0);
          sub_6511149C(&v108);
        }
        sub_65112459((int)&v100);
        v93 = 0;
        goto LABEL_66;
      }
      if ( wParam == (__int16 *)4 )
      {
LABEL_65:
        v93 = 0;
LABEL_66:
        PostQuitMessage((int)v93);
        return 1;
      }
    }
    else if ( Msg == 2124 )
    {
      v55 = dword_651CAB20;
      sub_6510BB10(dword_651CAB20);
      v113 = 16;
      if ( lParam )
        (*(void (__stdcall **)(LPARAM, _DWORD))(*(_DWORD *)lParam + 1220))(lParam, 0);
      v93 = (char *)v55;
      v56 = sub_65103462(L"LoginPanel_IM_Fail");
      v109 = (HWND)&v92;
      CTXStringW::CTXStringW(&v92, v56);
      sub_6512CF59(v92, v93);
      v113 = -1;
      if ( lParam )
      {
        v57 = *(_DWORD *)lParam;
        v93 = (char *)lParam;
        (*(void (__stdcall **)(LPARAM))(v57 + 8))(lParam);
      }
    }
    else
    {
      if ( Msg != 2125 )
      {
        if ( Msg == 2027 )
        {
          hWnd = 0;
          v113 = 18;
          Util::Data::CreateTXData((Util::Data *)&hWnd, (struct ITXData **)v94);
          v62 = hWnd;
          if ( hWnd )
          {
            lParam = (LPARAM)hWnd;
            v63 = CTXBSTR::CTXBSTR(&v109, L"pcFrame");
            v64 = *(_DWORD *)v62;
            v93 = (char *)wParam;
            LOBYTE(v113) = 19;
            v65 = CTXBSTR::operator wchar_t *(v63);
            (*(void (__stdcall **)(LPARAM, int))(v64 + 224))(lParam, v65);
            LOBYTE(v113) = 18;
            CTXBSTR::~CTXBSTR((CTXBSTR *)&v109);
            v66 = hWnd;
            v109 = hWnd;
            v67 = CTXBSTR::CTXBSTR(&lParam, L"nFrameLen");
            v68 = *(_DWORD *)v66;
            v93 = (char *)v99;
            LOBYTE(v113) = 20;
            v69 = CTXBSTR::operator wchar_t *(v67);
            (*(void (__stdcall **)(HWND, int))(v68 + 224))(v109, v69);
            LOBYTE(v113) = 18;
            CTXBSTR::~CTXBSTR((CTXBSTR *)&lParam);
          }
          v70 = L"OnFaceLoginEventEvent(FaceLoginEvents::UpdateView, pData)";
          v71 = 0;
          v72 = 79;
          do
          {
            if ( v72 == 40 )
              break;
            v112[v71++] = v72;
            ++v70;
            v72 = *v70;
          }
          while ( *v70 );
          v112[v71] = 0;
          sub_65140A92(&v100, 0, v112);
          LOBYTE(v113) = 21;
          sub_6512CC75(v101, &v100);
          v108 = v103;
          v109 = v104;
          while ( 1 )
          {
            sub_6512CC75(v102, &v100);
            if ( (unsigned __int8)sub_6512782E(&v106) )
              break;
            v73 = (_DWORD *)sub_6513AFD3(&v108);
            (*(void (__stdcall **)(_DWORD, signed int, HWND))(*(_DWORD *)*v73 + 12))(*v73, 2, hWnd);
            sub_6511149C(&v108);
          }
          sub_65112459((int)&v100);
          goto LABEL_43;
        }
        if ( Msg == 2127 )
        {
          lParam = 0;
          v113 = 22;
          Util::Data::CreateTXData((Util::Data *)&lParam, (struct ITXData **)v94);
          v74 = (int *)lParam;
          if ( lParam )
          {
            v75 = CTXBSTR::CTXBSTR(&v109, L"dwRet");
            v76 = *v74;
            v94 = (IPCHandler *)wParam;
            LOBYTE(v113) = 23;
            v77 = CTXBSTR::operator wchar_t *(v75);
            (*(void (__stdcall **)(int *, int))(v76 + 224))(v74, v77);
            LOBYTE(v113) = 22;
            CTXBSTR::~CTXBSTR((CTXBSTR *)&v109);
          }
          v78 = L"OnFaceLoginEventEvent(FaceLoginEvents::CheckAccountResult, pData)";
          v79 = 0;
          v80 = 79;
          do
          {
            if ( v80 == 40 )
              break;
            v112[v79++] = v80;
            ++v78;
            v80 = *v78;
          }
          while ( *v78 );
          v112[v79] = 0;
          sub_65140A92(&v100, 0, v112);
          LOBYTE(v113) = 24;
          sub_6512CC75(v101, &v100);
          v108 = v103;
          v109 = v104;
          while ( 1 )
          {
            sub_6512CC75(v102, &v100);
            if ( (unsigned __int8)sub_6512782E(&v103) )
              break;
            v81 = (_DWORD *)sub_6513AFD3(&v108);
            (*(void (__stdcall **)(_DWORD, signed int, LPARAM))(*(_DWORD *)*v81 + 12))(*v81, 3, lParam);
            sub_6511149C(&v108);
          }
          LOBYTE(v113) = 22;
          sub_65112459((int)&v100);
          v94 = (IPCHandler *)v99;
          v82 = ((int (__stdcall *)(HWND, signed int, __int16 *))dwNewLong)(hWnd, 2127, wParam);
          v113 = -1;
          v83 = v82;
          if ( lParam )
            (*(void (__stdcall **)(LPARAM))(*(_DWORD *)lParam + 8))(lParam);
          return v83;
        }
        if ( Msg == 18 )
          goto LABEL_65;
        if ( Msg == 74 )
          return sub_6513F901(hWnd, 0x4Au, (WPARAM)wParam, a5);
        if ( Msg == 2225 )
        {
          v84 = L"OnLoginPanelEvent(LoginPanelEvents::EventIDs::LoginPanel_LoadFlash, 0)";
          v85 = 0;
          v86 = 79;
          do
          {
            if ( v86 == 40 )
              break;
            v112[v85++] = v86;
            ++v84;
            v86 = *v84;
          }
          while ( *v84 );
          v93 = (char *)v112;
          v92 = 0;
          v112[v85] = 0;
          sub_6512E424(&v100, v92, v93);
          v113 = 25;
          sub_6512CC75(v101, &v100);
          v108 = v103;
          v109 = v104;
          while ( 1 )
          {
            sub_6512CC75(v102, &v100);
            if ( (unsigned __int8)sub_6512782E(&v103) )
              break;
            v87 = (_DWORD *)sub_6513AFD3(&v108);
            (*(void (__stdcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)*v87 + 16))(*v87, 9, 0);
            sub_6511149C(&v108);
          }
LABEL_61:
          v46 = &v100;
LABEL_62:
          sub_65112459((int)v46);
          return 0;
        }
        if ( Msg == 2234 )
          return sub_65140BD1(hWnd, 2234, wParam, v99);
        if ( Msg == 2236 )
        {
          v88 = L"OnLoginPanelEvent(LoginPanelEvents::EventIDs::Login_StartLogin, 0)";
          v89 = 0;
          v90 = 79;
          do
          {
            if ( v90 == 40 )
              break;
            v111[v89++] = v90;
            ++v88;
            v90 = *v88;
          }
          while ( *v88 );
          v93 = (char *)v111;
          v92 = 0;
          v111[v89] = 0;
          sub_6512E424(&v96, v92, v93);
          v113 = 26;
          sub_6512CC75(v97, &v96);
          v108 = v103;
          v109 = v104;
          while ( 1 )
          {
            sub_6512CC75(v98, &v96);
            if ( (unsigned __int8)sub_6512782E(&v103) )
              break;
            v91 = (_DWORD *)sub_6513AFD3(&v108);
            (*(void (__stdcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)*v91 + 16))(*v91, 11, 0);
            sub_6511149C(&v108);
          }
          v46 = (int *)&v96;
          goto LABEL_62;
        }
        v93 = (char *)v99;
        v92 = (signed int)wParam;
        if ( dwNewLong )
          return ((int (__thiscall *)(HWND *, HWND, UINT, signed int, char *))dwNewLong)(this, hWnd, Msg, v92, v93);
        return DefWindowProcW(hWnd, Msg, v92, (LPARAM)v93);
      }
      if ( wParam == (__int16 *)1 )
      {
        v58 = L"OnLoginProcessEvent(LoginProcessEvent::PwdGuard::OnServerVerifyCode, 0)";
        v59 = 0;
        v60 = 79;
        do
        {
          if ( v60 == 40 )
            break;
          v112[v59++] = v60;
          ++v58;
          v60 = *v58;
        }
        while ( *v58 );
        v93 = (char *)v112;
        v92 = 0;
        v112[v59] = 0;
        sub_6512E424(&v100, v92, v93);
        v113 = 17;
        sub_6512CC75(v101, &v100);
        v108 = v103;
        v109 = v104;
        while ( 1 )
        {
          sub_6512CC75(v102, &v100);
          if ( (unsigned __int8)sub_6512782E(&v106) )
            break;
          v61 = (_DWORD *)sub_6513AFD3(&v108);
          (*(void (__stdcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)*v61 + 12))(*v61, 1, 0);
          sub_6511149C(&v108);
        }
        sub_65112459((int)&v100);
      }
    }
    v93 = (char *)v99;
    v92 = (signed int)wParam;
    return DefWindowProcW(hWnd, Msg, v92, (LPARAM)v93);
  }
  if ( wParam == (__int16 *)1 )
    goto LABEL_65;
  if ( wParam == (__int16 *)2 )
  {
    v47 = L"OnLoginPanelEvent(LoginPanelEvents::EventIDs::LoginChild_Failed, 0)";
    v48 = 0;
    v49 = 79;
    do
    {
      if ( v49 == 40 )
        break;
      v112[v48++] = v49;
      ++v47;
      v49 = *v47;
    }
    while ( *v47 );
    v93 = (char *)v112;
    v92 = 0;
    v112[v48] = 0;
    sub_6512E424(&v100, v92, v93);
    v113 = 14;
    sub_6512CC75(v101, &v100);
    v108 = v103;
    v109 = v104;
    while ( 1 )
    {
      sub_6512CC75(v102, &v100);
      if ( (unsigned __int8)sub_6512782E(&v106) )
        break;
      v50 = (_DWORD *)sub_6513AFD3(&v108);
      (*(void (__stdcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)*v50 + 16))(*v50, 6, 0);
      sub_6511149C(&v108);
    }
    v113 = -1;
    sub_65112459((int)&v100);
  }
  return ((int (__thiscall *)(HWND *, HWND, signed int, __int16 *, LPARAM))dwNewLong)(this, hWnd, 2025, wParam, v99);
}