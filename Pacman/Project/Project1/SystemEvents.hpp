#include <vector>
#include "Object.hpp"
class SystemFunctions:public Object
{
public:
	SystemFunctions();
	vector<Object*>Awake;
	vector<Object*>Start;
	vector<Object*>EarlyUpdate;
	vector<Object*>Update;
	vector<Object*>LateUpdate;
	vector<Object*>Render;
	vector<Object*>Destroy;
};
