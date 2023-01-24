#include<stdio.h>
char merge(char A[],char B[],int i,int j)
{
	char R[30];
	int k;
	for(int i=0 ,j=0,k=0;i<15,k<30,j<15;i++,j++,k++)
	{
		R[k]=B[i];
		k++;
		R[k]=A[j];
	}
	for(int k=0;k<30;k++)
	{
		printf("%c",R[k]);
	}
}
int main()
{
	int i,j;
	char s[15]={"COMPUTER"};
	char t[15]="ELECTRONICS",a[30];
/*	for(int i=0 ,j=0,k=0;i<15,k<30,j<15;i++,j++,k++)
	{
		a[k]=t[i];
		k++;
		a[k]=s[j];
	}
	for(int k=0;k<30;k++)
	{
		printf("%c",a[k]);
	}*/
	printf("%c",merge(s,t,i,j));
}
