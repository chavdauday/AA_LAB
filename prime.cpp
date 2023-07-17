#include <bits/stdc++.h>
using namespace std;


int power(unsigned long long int a, unsigned long long int n, int p)
{
   unsigned int res = 1;	
   a = a % p; 


   while (n > 0)
   {
   	if (n & 1)
       	res = (res*a) % p;


   	n = n>>1; // n = n/2
   	a = (a*a) % p;
   }
   return res;
}


/*Recursive function to calculate gcd of 2 numbers*/
// int gcd(int a, int b)
// {
//  if(a < b)
//  	return gcd(b, a);
//  else if(a%b == 0)
//  	return b;
//  else return gcd(b, a%b);


// }


//ietrative gcd code
int gcd(int a, int b)
{
   int r;
   while(b > 0)
   {
   	r=a%b;
   	a=b;
   	b=r;
   }
 
   return a;
}


bool isPrime(unsigned long long int n, int k)
{
if (n <= 1 || n == 4) return false;
if (n <= 3) return true;

while (k>0)
{
   int a = 2 + rand()%(n-3);


   if (gcd(n, a) != 1)
   	return false;
 
   if (power(a, n-1, n) != 1)
   	return false;

   k--;
   }

   return true;
}


int main()
{
   int k = 3;
   isPrime(1000000007, k)? cout << " true\n": cout << " false\n";
   isPrime(5, k)? cout << " true\n": cout << " false\n";
   return 0;
}