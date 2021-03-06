// This code is part of the Super Play Library (http://www.superplay.info),
// and may only be used under the terms contained in the LICENSE file,
// included with the Super Play Library.
//
// THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY 
// KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.

#pragma once

#include <TinySTL/string.h>

#include "Macros.h"

NAMESPACE(SPlay)

class Timer;
class Window;

class Platform
{
	public:
		// Initialize
		static bool initialize();
		
		// Close
		static void close();
		
		// Run loop
		static bool runLoop();

		// Redraw
		static void redraw();

		// Get window
		static Window* getWindow() {return ms_pWindow;}

		// Get storage path
		static const tinystl::string& getStoragePath();

	private:
		// Timer
		static Timer*	ms_pTimer;

		// Window
		static Window*	ms_pWindow;
		
		// Storage path
		static tinystl::string ms_strStoragePath;

		// Set storage path
		static void setStoragePath();
};

ENDNAMESPACE
