// This code is part of the Super Play Library (http://www.superplay.info),
// and may only be used under the terms contained in the LICENSE file,
// included with the Super Play Library.
//
// THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY 
// KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.

#pragma once

#include <TinySTL/stdint.h>

#include "IInput.h"
#include "Macros.h"

NAMESPACE(SPlay)

class Input	: public IInput
{
	public:
		// Constructor
		Input();
		
		// Destructor
		~Input();
		
		// Create
		static Input* create();

		// Initialize
		bool initialize();

		// Close
		void close();
		
		// Update
		virtual bool update();

		// Get current input
		virtual uint32_t getCurrentInput() const {return m_uCurrentInput;}
		
		// Get last input
		virtual uint32_t getLastInput() const {return m_uLastInput;}
		
		// Get exit
		virtual bool getExit() const {return m_bExit;}

		// Set exit
		virtual void setExit(bool _bExit) {m_bExit = _bExit;}

		// Set 4 way
		virtual void set4Way(bool _b4Way) {m_b4Way = _b4Way;}
		
		// Device change
		virtual void deviceChange();

		// Handle key down
		void handleKeyDown(uint32_t _uKey);

		// Handle key up
		void handleKeyUp(uint32_t _uKey);

	private:
		// Exit?
		bool					m_bExit;

		// Joystick attached?
		bool					m_bJoystickAttached;

		// Limit to 4 way
		bool					m_b4Way;
		
		// Has X and Y axis
		bool					m_bHasAxis;

		// Has POV
		bool					m_bHasPOV;
		
		// Joystick buttons
		int						m_iJoystickButtons;
		
		// Joystick dead zone
		int						m_iDeadZone;

		// Current input
		uint32_t				m_uCurrentInput;
		
		// Last input
		uint32_t				m_uLastInput;
		
		// Key indexes
		int						m_iKeyUp;
		int						m_iKeyDown;
		int						m_iKeyLeft;
		int						m_iKeyRight;
		int						m_iKeyA;
		int						m_iKeyB;
		int						m_iKeyX;
		int						m_iKeyY;
		int						m_iKeyL;
		int						m_iKeyR;
		int						m_iKeySelect;
		int						m_iKeyStart;
				
		// Button indexes
		int						m_iButtonA;
		int						m_iButtonB;
		int						m_iButtonX;
		int						m_iButtonY;
		int						m_iButtonL;
		int						m_iButtonR;
		int						m_iButtonSelect;
		int						m_iButtonStart;
};

ENDNAMESPACE
