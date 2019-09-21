#pragma once

#include "Core.h"

namespace Chernobyl
{
	class CHERNOBYL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined by client
	Application* CreateApplication();
}

