#include "SystemEvents.hpp"
#include "WindowManager.hpp"
class GameManager : public Object
{
public:
	GameManager(SystemFunctions* events_);
private:
	SystemFunctions* events;
	WindowManager windows;
};