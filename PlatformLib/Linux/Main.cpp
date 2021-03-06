// This code is part of the Super Play Library (http://www.superplay.info),
// and may only be used under the terms contained in the LICENSE file,
// included with the Super Play Library.
//
// THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY 
// KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.

#include "Platform.h"
#include "System.h"

int main()
{
	int	iRetVal	= 0;
	
	if (false == SPlay::System::initialize() || false == SPlay::Platform::runLoop())
	{
		iRetVal	= 1;
	}

	SPlay::System::close();
	
	return	iRetVal;
}
