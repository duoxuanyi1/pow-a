#include <stdio.h>
#include <stdlib.h> 
int powa(int n)
{
	int m ;
	m = n*n;
	return m;
}
void test_powa()
{
	int a;
	a=1;
	if(powa(a)!=1)
		printf("error---a=1  m!=1");
	else
		printf("conform");
	a=rand();
	if(powa(a)!=a*a)
		printf("error---a=k  m!=k*k");
	else
		printf("conform");
	a++;
	if(powa(a)!=a*a)
		printf("error---a=k+1  m!=(k+1)*(k+1)");
	else
		printf("conform");
 } 

int main()
{
	//test_powa();//≤‚ ‘Õ®π˝ 
   printf("%d",powa(4));
   return 0;
} 
