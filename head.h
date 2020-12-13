#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Base
{
public:
	vector <wstring> x;
	vector <wstring> y;
	Base();
	virtual void Print(ostream& obj);
	virtual ~Base();
};
class SmallObject : public Base
{
public:
	SmallObject();
	SmallObject(vector <wstring> xobj, vector<wstring>yobj);
	~SmallObject();
};
class BigObject : public Base
{
public:
	BigObject();
	BigObject(vector<wstring> xobj, vector<wstring> yobj);
	~BigObject();
};
class DB:public vector<Base*>
{
public:
	DB();
	~DB();
};