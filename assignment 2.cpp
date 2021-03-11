#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Please, enter your age:\n";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"\n You are eligible to vote.";
	} else{
		cout<<"\n You are not eligible to vote.";
	}
	return 0;
	}
