#pragma once

#include <fstream>
#include<vector>
#include<string>

class Navigation
{
	std::ofstream _outFile;

	// Add your code here

public:
	Navigation();
	~Navigation();

	bool BuildNetwork(const std::string& fileNamePlaces, const std::string& fileNameLinks);
	bool ProcessCommand(const std::string& commandString);
	bool Maxdistact();
	bool MaxLinks();
	bool FindDist();

//vector<string> CheckTransport(vector<string>& transportMethod, const string& CurrentTransport) const;
	// Add your code here
};