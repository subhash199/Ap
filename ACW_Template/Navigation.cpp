#include "Navigation.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Nodes.h"

using namespace std;

// Converts latitude/longitude into eastings/northings
extern void LLtoUTM(const double Lat, const double Long, double &UTMNorthing, double &UTMEasting);

Navigation::Navigation() : _outFile("Output.txt")
{
}

Navigation::~Navigation()
{
}

bool Navigation::ProcessCommand(const string& commandString)
{
	istringstream inString(commandString);
	string command;
	inString >> command;

	// Add your code here

	return false;
}

bool Navigation::BuildNetwork(const string &fileNamePlaces, const string &fileNameLinks)
{
	fstream finPlaces(fileNamePlaces);
	fstream finLinks(fileNameLinks);
	if (finPlaces.fail() || finLinks.fail()) return false;
	
	while (finPlaces.good())
	{
		char line[255];
		string name;
		int ref;
		float lattitude;
		float longitude;

		finPlaces.getline(line, 255, ',');
		name = string(line);

		finPlaces.getline(line, 255, ',');
		istringstream sin(line);
		sin >> ref;

		finPlaces.getline(line, 255, ',');
		istringstream sin(line);
		sin >> lattitude;

		finPlaces.getline(line, 255, ',');
		istringstream sin(line);
		sin >> longitude;
	}

	// Add your code here

	return true;
}

// Add your code here
