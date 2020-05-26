#include <iostream>
using namespace std;


main()
{
	int temperatura;
	
	cout<<"Digite su temperatura en grados celcius"<<endl;
	cin>>temperatura;
	if(temperatura>38 && temperatura<55)
	{
		cout<<"Tiene el segundo sintoma del covid-19";
		cout<<"  debe llamar inmediatamente al medico"<<endl;
	}
	else
	{
		if(temperatura==37)
		{
			cout<<"Su temperatura es normal"<<endl;
		}
		else
		{
			cout<<"Puede estar en peligro"<<endl;
		}
	}
	return 0;
}
