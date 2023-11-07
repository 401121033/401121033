#include<iostream>
#include<conio.h>
using namespace std ;

class MATH {
	 public:
	 	string isPrime(int x )
	 	{
	 		int a = 0 , i=2 ;
	 		while (i<x )
	 		{
	 			if (x%i==0)
	 			a++;
	 			i++;
			 }
	 		if(a==0)
	 		return "true";
	 		else 
	 		return "false ";
		 }
		
};

int main ()
{
	MATH y ;
	int x ;
	 cout << " enter x : ";
	 cin >> x ;
	 cout << y.isPrime(x);
	 return 0 ;
	
	getch();
}