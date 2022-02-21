#pragma once
#include "core.h"
#include <stdio.h>
namespace Zephyr {
	class ZEPHYR_API  Application {
	public:
		Application();
		//virtual ~Application();
		void Run();

	};
	//to be defined 
	Application* CreateApplication();
}
