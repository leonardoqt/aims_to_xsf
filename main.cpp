#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
	string flag_num_atom="Number of species", flag_latt_coord="Final atomic structure";
	string tmp;
	double x,y,z;
	string element;
	int num_atom;
	getline(cin,tmp);
	while(tmp.find(flag_num_atom) == string::npos)
		getline(cin,tmp);
	cin>>tmp>>tmp>>tmp>>tmp>>tmp>>num_atom;

	cout<<"PRIMVEC"<<endl;
	while(tmp.find(flag_latt_coord) == string::npos)
		getline(cin,tmp);
	getline(cin,tmp);
	cin>>tmp>>x>>y>>z;
	getline(cin,tmp);
	cout<<setw(14)<<fixed<<setprecision(8)<<x<<setw(14)<<fixed<<setprecision(8)<<y<<setw(14)<<fixed<<setprecision(8)<<z<<endl;
	cin>>tmp>>x>>y>>z;
	getline(cin,tmp);
	cout<<setw(14)<<fixed<<setprecision(8)<<x<<setw(14)<<fixed<<setprecision(8)<<y<<setw(14)<<fixed<<setprecision(8)<<z<<endl;
	cin>>tmp>>x>>y>>z;
	getline(cin,tmp);
	cout<<setw(14)<<fixed<<setprecision(8)<<x<<setw(14)<<fixed<<setprecision(8)<<y<<setw(14)<<fixed<<setprecision(8)<<z<<endl;

	cout<<"PRIMCOORD"<<endl<<num_atom<<"   "<<1<<endl;
	for(int t1=0; t1<num_atom; t1++)
	{
		getline(cin,tmp);
		cin>>tmp>>x>>y>>z>>element;
		if (element.length() == 1)
			cout<<element<<"  "<<setw(14)<<fixed<<setprecision(8)<<x<<setw(14)<<fixed<<setprecision(8)<<y<<setw(14)<<fixed<<setprecision(8)<<z<<endl;
		else
			cout<<element<<" "<<setw(14)<<fixed<<setprecision(8)<<x<<setw(14)<<fixed<<setprecision(8)<<y<<setw(14)<<fixed<<setprecision(8)<<z<<endl;
	}
	return 0;
}
