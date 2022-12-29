/*

>>How to create a class ? 

	Syntax : 
	
		class class_name
		{
			//data & data function/class method 
		};

>>How to create an object ? 
	
	Syntax : 
		
		class_name object_name;
		
	ex: 
		
		Sample obj;

*/


//class & object in C++


#include<iostream>
using namespace std;

class Sample
{
	public:
	//class variable 
	int a=45,b=13;
	
	//data functions 
	void display()
	{
		cout<<"A = "<<a<<endl;
		cout<<"B = "<<b;
	}
		
};

int main()
{
	//creating an object
	Sample obj;
	
	//accessing the class members 
	obj.display();  // . --> membership operator  --> this represent the memebership operator 
	
	return 0;
}









