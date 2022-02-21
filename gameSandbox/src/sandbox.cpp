#include<Zephyr.h>

class Sandbox :public Zephyr::Application
{
	public:
		Sandbox() { printf("constructed"); };
};

Zephyr::Application* Zephyr::CreateApplication()
{
	
	return new Sandbox();
}

