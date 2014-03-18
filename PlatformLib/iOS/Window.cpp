// This code is part of the Super Play Library (http://www.superplay.info),
// and may only be used under the terms contained in the LICENSE file,
// included with the Super Play Library.
//
// THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY 
// KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.

#include "GameHeader.h"
#include "Log.h"
#include "PlatformDefines.h"
#include "System.h"
#include "Window.h"

NAMESPACE(SPlay)

Window::Window()
{
}

Window::~Window()
{
	close();
}

Window* Window::create()
{
	Window*	pWindow	= new Window();
	
	if (false == pWindow->initialize())
	{
		delete	pWindow;
		
		pWindow	= NULL;
	}	
	
	return	pWindow;
}

bool Window::initialize()
{
	const GameHeader&	gameHeader	= System::getGameHeader();
	
	bool	bFullscreen	= gameHeader.bFullScreen;

	if (false == bFullscreen)
	{
		resizeClientArea();
	}
	
	return	true;
}

void Window::close()
{
}

void Window::resizeClientArea()
{
}

ENDNAMESPACE
