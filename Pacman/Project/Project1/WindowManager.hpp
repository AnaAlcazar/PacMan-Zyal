#include "SystemEvents.hpp"
class Window
{
private:
	float width;
	float height;
	int windowIndex;
	SystemFunctions* events;

public:
	Window(SystemFunctions* events_);
};

class WindowManager
{
public:
	WindowManager();
	Window SetPreviousWindow();
	Window SetNextWindow();
	Window SetWindow(int index);
	~WindowManager();

private:
	Window* list;
	Window currentActiveWindow;
	float windowSizeMultiplier;
	Window GetCurrentActiveWindow();
};

WindowManager::WindowManager()
{
}

WindowManager::~WindowManager()
{
}