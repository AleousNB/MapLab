#pragma once
#include <stack>
#include <queue>
#include "Location.h"
#include <unordered_map>

class Map
{
private:
	std::stack<Location *> _locationsVisited;
	std::queue<Location *> _locationsToCurrent;
	std::unordered_map<std::string, Location *> _mapLookup;

public:
	Map(std::string startLocationName);
	~Map();
	
	Location * CurrentLocation = nullptr;
	std::string GetPathBackToHome();
	int LocationsVistedSize();
	int LocationsToCurrentSize();
	std::string GetPathFromStart();
	void Move(Location *newLocation);
	Location * LookupLocationOnMap(int x, int y);
};
