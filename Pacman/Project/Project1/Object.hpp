#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "raylib.h"
#include <iostream>
using namespace std;

class Object
{
public:
	virtual void Awake();
	virtual void Start();
	virtual void EarlyUpdate();
	virtual void Update();
	virtual void LateUpdate();
	virtual void Render();
	virtual void Destroy();
};