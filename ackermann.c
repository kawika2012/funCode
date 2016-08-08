#include <stdio.h>

int ackermann( int m, int n)
{
	int ret; // return value
	if (m==0) 
		ret = n+1;
	else if (n == 0)
		ret = ackermann(m-1, 1);
	else
		ret = ackermann(m-1, ackermann(m,n-1));
	return (ret);
}

int main(int argc, char** argv)
{
	int i, j;

	for(i = 0; i < 6; i++)
		for(j = 0; j < 6; j++)
			printf("Ackermann (%d, %d) is: %d\n", i,j, ackermann(i,j));
	return 0;
}
