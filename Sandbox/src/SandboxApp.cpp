#include <Chernobyl.h>

class Sandbox : public Chernobyl::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Chernobyl::Application* Chernobyl::CreateApplication()
{
	return new Sandbox();
}