#pragma once
#include <string>
#include <vector>
#include "Arc.h"
using namespace std;

class Nodes
{
private:
	vector<Arc*> linked;
    string name;
	int ref;
	double lattitude;
	double longitude;
public:

	Nodes(string _name, int _ref, float _lattitude, float _longitude);
	~Nodes();
	void set_linked(Arc* arc);
	string get_name(void)const;
	int get_ref(void)const;
	double get_lattitude(void)const;
	double get_longitude(void)const;
	vector<Arc*>& get_linked();

};

