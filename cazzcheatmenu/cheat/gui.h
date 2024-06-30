#pragma once
#include <d3d9.h>

namespace gui
{
	// constant window size
	constexpr int WIDTH = 500;
	constexpr int HEIGHT = 300;

	inline bool exit = true; // hold state of window (when false exit)

	// winapi window vars
	inline HWND window = nullptr;
	inline WNDCLASSEX windowClass = {};

	// position points for window movement/location
	inline POINTS position = {};

	// directx state vars
	inline PDIRECT3D9 d3d = nullptr;
	inline LPDIRECT3DDEVICE9 device = nullptr;
	inline D3DPRESENT_PARAMETERS presentParameters = {};

	// handle window creation and destruction
	void CreateHWindow(
		const char* windowName,
		const char* className) noexcept;
	void DestroyHWindow() noexcept;


	// handle device creation and destruction
	bool CreateDevice() noexcept;
	void ResetDevice() noexcept;
	void DestroyDevice() noexcept;

	// handle imgui creation and destruction
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept;

	// handle rendering
	void BeginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;
}
