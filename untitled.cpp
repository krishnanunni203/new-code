
#include <iostream>
using namespace std;
int add(int a,int b)
{
    int c;
    
    
	c=a+b;
	return c;
}
void sub()
{
    int a,b,c;
    cout<<"\n ENTER TWO NUMBERS";
	cin>>a>>b;
	c=a-b;
	cout<<"\n"<<c ;
}
int main()
{ 
int value= add(5,7);
cout<<value;
}
