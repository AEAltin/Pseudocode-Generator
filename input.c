#include <stdio.h>
void main(void)
{
	int a,b=3,d=f,Factorial=1;
	char str='d',str2;
	int i;
	int MAX;
	scanf ("%d",&MAX);
	for (i=1;i<=MAX;i++)
	{
		if(MAX<0){
			Factorial=-1;
			i=MAX+1;
		}
		else if(MAX<10){
			Factorial=Factorial*i;
		}
		else{
			Factorial=0;
			i=MAX+1;
		}
	}
	printf ("%d\n",Factorial);
	a=multFunc(a,b);
}
int multFunc( int x, int y)
{
	x= x*y;
	return x;
}
