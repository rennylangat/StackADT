#include"Currency.h"
#include<iostream>
using namespace std;

//Constructor
Currency::Currency(int wn, int fn)
{
	Wnum = wn;
	Fnum = fn;
}
 
ostream &operator << (ostream &strm, const Currency &obj)
{
	strm << obj.getWname() << " " << obj.getWnum() << "," << obj.getFnum() << " " << obj.getFname();
	return strm;
}


bool Currency::operator<(const Currency& other)
{
	if (this->getWnum() <= other.getWnum())
	{
		if (this->getWnum() == other.getWnum())
		{
			if (this->getFnum() < other.getFnum())
				return true;
			else
				return false;
		}
		return true;
	}
	else
		return false;

}


bool Currency::operator>(const Currency& other)
{
	if (this->getWnum() >= other.getWnum())
	{
		if (this->getWnum() == other.getWnum())
		{
			if (this->getFnum() > other.getFnum())
				return true;
			else
				return false;
		}
		return true;
	}
	else
		return false;
}


bool Currency::operator==(const Currency& other)
{
	if ((this->getWnum() == other.getWnum()) && (this->getFnum() == other.getFnum()))
		return true;
	else
		return false;
}


Currency&Currency::operator=(const Currency &obj)
{


	//copy
	Wnum = obj.getWnum();
	Fnum = obj.getFnum();

	return *this;
}