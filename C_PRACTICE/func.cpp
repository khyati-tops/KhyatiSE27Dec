//array : 2-D array

#include<iostream>
using namespace std;

int main()
{
	int a[2][2];
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter elements : ";
			cin>>a[i][j];
		}
	}

	cout<<endl<<"---------------First Matrix------------------"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}

	return 0;
}
