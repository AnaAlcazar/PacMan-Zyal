#include "GameManager.hpp"

GameManager::GameManager(SystemFunctions* events_)
{
	events = events_;
	events->Awake.push_back(this);
	events->Start.push_back(this);
	events->EarlyUpdate.push_back(this);
	events->Update.push_back(this);
	events->LateUpdate.push_back(this);
	events->Render.push_back(this);
	events->Destroy.push_back(this);
}