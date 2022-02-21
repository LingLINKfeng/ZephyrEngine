#pragma once

#ifdef ZEPHYR_PLATFORM_WINDOWS
#endif

extern Zephyr::Application* Zephyr::CreateApplication();

int main(int argc,char** argv) 
{
	printf("Zephyr");
	auto app = Zephyr::CreateApplication();
	app->Run();
	delete app;

}

