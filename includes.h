#include <windows.h>
#include <string>
#include <TlHelp32.h>
#include <thread>
#include <iostream>
#include <cstdio>
#include <string>

#include "Auth/auth.hpp"

#include "Mac/mac.hxx"

#include "Utility/utils.hpp"
#include "Utility/skStr.h"

#include "Files/changer.h"
#include "Files/driver.h"
#include "Files/volume.h"

#include "Protection/antidebug.h"
#include "Protection/antidump.h"
#include "Protection/lazy.h"
#include "Protection/vmprotect.h"
#include "Protection/lazy.h"
#include "Protection/xorstr.hpp"

#pragma comment(lib, "urlmon.lib")

std::string Time(tm ctx);
static std::time_t StringToTime(std::string timestamp);
static std::tm TimeTM(time_t timestamp);
const std::string compilation_date = (std::string)skCrypt(__DATE__);
const std::string compilation_time = (std::string)skCrypt(__TIME__);
typedef NTSTATUS(NTAPI* pdef_NtRaiseHardError)(NTSTATUS ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask OPTIONAL, PULONG_PTR Parameters, ULONG ResponseOption, PULONG Response);
typedef NTSTATUS(NTAPI* pdef_RtlAdjustPrivilege)(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN Enabled);