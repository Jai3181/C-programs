//wap to display all palindrome from 1 to given number
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,l;
	char v;
	cout<<endl<<"enter a number";
	cin>>e;
	l=0;
	for(a=1;a<=e;a++)
	{   v='j';
		d=0;
		c=a;  //taking backup of a because it will expire(=0) after the loop
		for(;c>0;c=c/10)
		{
			b=c%10;
			d=(d*10)+b;
		}
		if(d==a && v=='j')
			{
			 cout<<endl<<a;
			 l++;
			}
		else if(d==a && v=='s')
			v='j';	
	}
	cout<<endl<<"number of palindromes = "<<l;
}
