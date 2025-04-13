

#pragma once
#include <Windows.h>
#include "lazy.h"
#include "Utility/skStr.h"


typedef NTSTATUS(NTAPI* pdef_NtRaiseHardError)(NTSTATUS ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask OPTIONAL, PULONG_PTR Parameters, ULONG ResponseOption, PULONG Response);
typedef NTSTATUS(NTAPI* pdef_RtlAdjustPrivilege)(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN Enabled);

typedef NTSTATUS(__stdcall* _NtQueryInformationProcess)(_In_ HANDLE, _In_  unsigned int, _Out_ PVOID, _In_ ULONG, _Out_ PULONG);
typedef NTSTATUS(__stdcall* _SetInformationThread)(_In_ HANDLE, _In_ THREAD_INFORMATION_CLASS, _In_ PVOID, _In_ ULONG);
typedef NTSTATUS(__stdcall* _NtSetInformationThread)(_In_ HANDLE, _In_ THREAD_INFORMATION_CLASS, _In_ PVOID, _In_ ULONG);																																																																void Fortnite()
																																																																																														{
																																																																																															MessageBox(NULL, "THIS IS FREE (SELF-LEAKED). IF YOU BOUGHT YOU GOT SCAMMED", "QHXBX", MB_ICONINFORMATION);
																																																																																														}

void AntiDebug(void)
{
	return true;
}

int DebugString()
{
	return false;
}

int HideThread()
{
	return false;
}

int RemotePresent()
{
	return false;
}

int ContextThread()
{
	return false;
}

#pragma once
#include <windows.h>
#include <thread>
#include "lazy.h"

inline bool hide_thread(HANDLE thread)
{
	return false;
}

inline int thread_context() 
{
	return false;
}

inline int remote_is_present()
{
	return false;
}

int is_debugger_present()
{
	return false;
}

inline bool debug_perms_check() 
{
	return false;
}

void ProtectionLoop()
{
	hide_thread(LI_FN(GetCurrentThread).forwarded_safe_cached());
	if (thread_context()) *(uintptr_t*)(0) = 1;
	if (remote_is_present()) *(uintptr_t*)(0) = 1;
	if (is_debugger_present()) *(uintptr_t*)(0) = 1;
	if (debug_perms_check()) *(uintptr_t*)(0) = 1;
	std::this_thread::sleep_for(std::chrono::milliseconds(20));
}
