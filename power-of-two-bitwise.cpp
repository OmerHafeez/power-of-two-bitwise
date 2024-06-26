#include<iostream>
using namespace std;
int main()
{
int a;

cout<<"Enter a number"<<endl;
cin>>a;
		//there is only one 1 in the a^n and rest are zeros
if((a&(a-1))==0)   //And operator on a and 1 less than a
{
cout<<"The number is power of 2"<<endl;
}
			//power of two in this case
else
{
cout<<"The number is not a power of 2"<<endl;
}
			//not the power of two in this case

}

