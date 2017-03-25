#include "Map.h"



Map::Map(std::string startLocationName)
{
	CurrentLocation = new Location(startLocationName, 0, 0);
	std::string hash = "(0,0)";
	_mapLookup[hash] = CurrentLocation;

}


Map::~Map()
{
}

void Map::Move(Location *newLocation)
{
	_locationsVisited.push(newLocation);
	CurrentLocation = newLocation;
}

Location * Map::LookupLocationOnMap(int x, int y)
{
	std::string hash = "(" + std::to_string(x) + "," + std::to_string(y) + ")";
	return _mapLookup[hash];
}

std::string Map::GetPathBackToHome()
{
	std::string message = _locationsVisited.top()->GetLocationName();
	_locationsVisited.pop();
	return message;
}

std::string Map::GetPathFromStart()
{
	std::string message = _locationsToCurrent.front()->GetLocationName();
	_locationsToCurrent.pop();
	return message;
}

int Map::LocationsVistedSize()
{
	return _locationsVisited.size();
}
int Map::LocationsToCurrentSize()
{
	return _locationsToCurrent.size();
}