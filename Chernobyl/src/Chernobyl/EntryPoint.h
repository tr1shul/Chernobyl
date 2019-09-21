#pragma once

#ifdef CB_PLATFORM_WINDOWS

extern Chernobyl::Application* Chernobyl::CreateApplication();

int main(int argc, int** argv)
{
	auto app = Chernobyl::CreateApplication();
	app->Run();
	delete app;
}
#endif // CB_PLATFORM_WINDOWS
