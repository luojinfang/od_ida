/* 

RegQueryValueExW ADVAPI32
RegEnumKeyExW    ADVAPI32
RegEnumValueW    ADVAPI32
RegOpenKeyExA    ADVAPI32
RegCloseKey      ADVAPI32
RegOpenKeyExW    ADVAPI32
RegQueryValueExA ADVAPI32


kernelbase.dll
	RegOpenKeyEx	
	RegSetValueEx
	RegQueryValueEx
*/


//用 RegSetValueEx 函数写注册表信息，信息类型是（BYTE*），要写入WCHAR类型的数据，直接强转会出错：

//要写入的WCHAR类型的数据
{
	WCHAR FileName[MAX_PATH];
	lstrcpy(FileName, _T("张三"));
	//注册表操作
	HKEY hKey = NULL;
	LONG lReg = RegOpenKey(HKEY_CLASSES_ROOT, _T("xx"), &hKey);
	if (lReg != ERROR_SUCCESS)
	{
		return 0;
	}

	//先定义个BYTE*类型值的保存FileName  //.faq
	BYTE *FileNameByte = (BYTE*)FileName;  
	RegSetValueEx(hKey, _T("nowFileName"), NULL, REG_SZ, FileNameByte, sizeof(FileNameByte) + 1);RegCloseKey(hKey);
	 

	//直接写也是可以
	//RegSetValueEx(hKey, _T("nowFileName"), NULL, REG_SZ, (BYTE*)_T("张三"), sizeof(_T("张三")) + 1);
	RegCloseKey(hKey);

}


//读取
{
	
	bool bIsIE6 = false;
	HKEY hKey = NULL;
	DWORD dwType;
	DWORD dwSize;
	LONG lReg = RegOpenKey(HKEY_CLASSES_ROOT, "HTTP\\shell\\open\\command", &hKey);
	if(lReg  != ERROR_SUCCESS)
	{
	<span style="white-space:pre">	</span>return false;
	}
	char* szBrowserFileInfo= new char[MAX_PATH];
	if(RegQueryValueEx(hKey, NULL, NULL, &dwType, (LPBYTE)szBrowserFileInfo, &dwSize) == ERROR_SUCCESS)
	{     
	   RegCloseKey(hKey); 
	} 
}