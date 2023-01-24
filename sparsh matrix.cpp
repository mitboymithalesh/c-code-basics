#include<stdio.h>
#include<stdlib.h>
int max=30;
int main()
{
	int s1[max][3],m=0,n=0,l=0,s2[max][3];
	printf("Enter the matrix size and no of Element ");
	scanf("%d%d%d",&m,&n,&l);
	if(l>(m*n/2))
	{
		return 0;
	}
	s1[0][0]=m;
	s1[0][1]=n;
	s1[0][2]=l;
	for(int i=1;i<=l;i++)
	{
		scanf("%d%d%d",&s1[i][0],&s1[i][1],&s1[i][2]);
	}
	s2[0][0]=s1[0][1];
	s2[0][1]=s1[0][0];
	s2[0][2]=s1[0][2];
	for(int i=1;i<=l;i++)
	{
		s2[i][0]=s1[i][1];
		s2[i][1]=s1[i][0];
		s2[i][2]=s1[i][2];
	}
}
