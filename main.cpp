#include "CColor.h"
	CColor average (CColor a,CColor b,CColor c)
{
		CColor x(0,0,0);
		x.red=(a.red+b.red+c.red)/3;
		x.green=(a.green+b.green+c.green)/3;
		x.blue=(a.blue+b.blue+c.blue)/3;
		return x;

	}
int main()
{
	CColor a(100,50,230);
	CColor b(0x00100583);
	CColor c(0x00552211);
	cout<<"a color = "<< a <<endl;
	cout<<"b color = "<< b("hex") <<endl;

	
	CColor y=average(a,b,c);
	cout<<"y color ="<<y<<endl;
	system("pause");
	return 0;
}
