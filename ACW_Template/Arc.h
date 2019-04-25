#pragma once
using namespace std;
#include <string>
#include<vector>
class Arc
{
private:
	int arc1;
	int arc2;
	string arcName;
public:
	Arc(int _arc1, int _arc2, string _arcName);
	~Arc();
	int get_arc1(void)const;
	int get_arc2(void)const;
	string get_arcName(void)const;

};

