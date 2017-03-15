#pragma once
#include <stack>
#include "Location.h"
class Map
{
private:
	
	
public:
	Map(std::string startLocationName);
	~Map();

	Location * CurrentLocation = nullptr;
	std::string GetPathBackToHome();
	void Move(Location *newLocation);
	std::stack<Location *> Path;
};

