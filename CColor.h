#include <string>
#include <iostream>
#include <sstream>



using namespace std;
class CColor 
{
	int red,green,blue;
public:

	CColor(int red,int green,int blue);
	CColor(int RGB);
	string operator ()(string s);
	string getstring();
	friend ostream& operator<<(ostream& os,  CColor& x);
friend	CColor average (CColor a,CColor b,CColor c);
	//CColor operator =(CColor x);

};

