#include "head.h"

Base::Base()
{
}
void Base::Print(ostream& obj) {}
Base::~Base() 
{
}
SmallObject::SmallObject()
{
}
SmallObject::SmallObject(vector<wstring> &xobj, vector<wstring> &yobj)
{
	x.resize(xobj.size());
	y.resize(xobj.size());
	for (int i = 0; i < xobj.size(); i++)
	{
		x[i] = xobj[i];
		y[i] = yobj[i];
	}
}
SmallObject::~SmallObject()
{
}
BigObject::BigObject()
{
}
BigObject::BigObject(vector<wstring> &xobj, vector<wstring> &yobj)
{
	x.resize(xobj.size());
	y.resize(xobj.size());
	for (int i = 0; i < xobj.size(); i++)
	{
		x[i] = xobj[i];
		y[i] = yobj[i];
	}
}
BigObject::~BigObject() 
{
}

DB::DB()
{
}

DB::~DB()
{
	for (Base* e : *this) { delete e; }
}
