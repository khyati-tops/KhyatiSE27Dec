/*

	Constructor : it call automatically when the object of such class is created
	
		Note : class name and constructor name always be the same 
			- no need to declare any data type for constructor method 
		
		>>How to create constructor method : 
	
		Syntax : class_name();
		
		>>Types of Constructor : 
			
			1.Default Constructor 
			
			2.Parameterised Constructor 
	
	Destructor : it is call when the object of such class is destroyed
	
		Note : desctructor name also always same as your class name but starts with tile(~) sign
			- no need for data type to declare destructor 
			
		Syntax : ~class_name(); 
		
		
	"Constructor and Destructor can always be defined in public mode"
	
*/ 


#include<iostream>
using namespace std;

class A
{
	public:
		
		int a,b;
		
		//creation of constructor (default Constructor)
		
		A()
		{
			cout<<"Default constructor call"<<endl;
		}
		
		//parameterised Constructor 
		
		A(int a)
		{
			cout<<"A = "<<a<<endl;
		}
		
		A(string str1, string str2)
		{
			cout<<"First Name = "<<str1<<endl;
			cout<<"Last Name = "<<str2<<endl;
		}
		
		
		~A()
		{
			cout<<"\n---------------Thank You-------------"<<endl;
		}
};

int main()
{
	A obj; //to call default constructor
	
	//to call parameterised constructor 
	A obj1(12);
	A obj2("Hitansh","Choksi");
	
	return 0;
}





















