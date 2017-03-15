#include "Map.h"



Map::Map(std::string startLocationName)
{
	CurrentLocation = new Location(startLocationName);
}


Map::~Map()
{
}

void Map::Move(Location *newLocation) 
{	
	Path.push(newLocation);
	CurrentLocation = newLocation;
}

std::string Map::GetPathBackToHome()
{
	//TODO: Implement this
	return Path;
}
