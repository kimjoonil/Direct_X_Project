#pragma once
#include "MonoBehaviour.h"

class TestDragon : public MonoBehaviour
{
public:
	virtual void Update() override;

private:
	float		_speed = 100.f;
};

