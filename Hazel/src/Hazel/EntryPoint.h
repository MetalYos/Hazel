#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	// For now (will change)
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int a = 7;
	HZ_INFO("Hello! Var={0}", a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#else
	#error Hazel only support Windows!
#endif // HZ_PLATFORM_WINDOWS
