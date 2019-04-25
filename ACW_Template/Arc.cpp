#include "Arc.h"


Arc::Arc(int _arc1, int _arc2, string _arcName) :arc1(_arc1), arc2(_arc2),arcName(_arcName)
{

}
int Arc::get_arc1(void)const
{
	return arc1;
}
int Arc::get_arc2(void)const
{
	return arc2;
}
string Arc::get_arcName(void) const
{
	return arcName;
}

Arc::~Arc()
{
}
