#include<iostream>
using namespace std;
main()
{
	string name;
	float adult,child,adult_sold,child_sold,charity;
	
	cout<<"Enter the movie name: ";
	cin>>name;
	cout<<"Enter the adult ticket price: $";
	cin>>adult;
	cout<<"Enter the child ticket price: $";
	cin>>child;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>adult_sold;
	cout<<"Enter the number of child tickets sold: ";
	cin>>child_sold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>charity;
	cout<<" "<<endl;
	cout<<" "<<endl;	
	float total,donated,remain;
	
		total=(adult*adult_sold)+(child*child_sold);
		donated=total/10;
		remain=total-donated;
	cout<<"Movie: "<<name<<endl;
	cout<<"Total amount generated from ticket sales: $"<<total<<endl;
	cout<<"Donation to charity (10%): $"<<donated<<endl;
	cout<<"Remaining amount after donation: $"<<remain;
	



}
