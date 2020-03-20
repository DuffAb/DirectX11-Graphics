// DirectX11-Graphics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SystemClass.h"

int main()
{
	SystemClass* System;
	bool result;


	// Create the system object.
	System = new SystemClass;
	if (!System)
	{
		return 0;
	}

	// Initialize and run the system object.
	result = System->Initialize();
	if (result)
	{
		System->Run();
	}

	// Shutdown and release the system object.
	System->Shutdown();
	delete System;
	System = 0;

	return 0;
}