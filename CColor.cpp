#include "CColor.h"





CColor:: CColor (int red,int green,int blue)
{
	this->red=red;
	this->green=green;
	this->blue=blue;


}

CColor:: CColor (int RGB)
{
	blue=RGB%256;
	green=(RGB/256)%256;
	red=RGB/(256*256);
	this->red=red;
	this->green=green;
	this->blue=blue;
}

string CColor:: operator ()(string s="hex")
{
	stringstream rr,gg,bb;
	rr <<hex <<this->red;
	gg <<hex <<this->green;
	bb <<hex <<this->blue;


	string res ("0x00"+ rr.str()+gg.str()+bb.str() );
	return res;
}

string CColor::getstring()
{
	char text[100];
	sprintf_s(text,"( %d , %d , %d )",red,green,blue);
	return string(text);
}

 ostream& operator<<(ostream& os, CColor& x)  
{  
	string y=x.getstring();
    os << y;  
    return os;  
}  