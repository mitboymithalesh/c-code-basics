// Online C compiler to run C program online
#include<stdio.h>
int main()
{
	int a[3][3];
	for(int i=0;i<3;i++)
	{
	    for(int j=0;j<3;j++)
	    {
		    printf("%d\n",&a[i][j]);
	    }
	}
	printf("Second Array \n");
	for(int i=0;i<3;i++)
	{
	    for(int j=0;j<3;j++)
	    {
		    printf("%d\n",&a[j][i]);
	    }
	}
}
