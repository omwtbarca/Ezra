#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
int m,n,i,j;
int **x;
scanf("%d%d",&m,&n);
x=(int **)malloc(sizeof(int *)*m);
for(i=0;i<m;i++)
{
x[i]=(int *)malloc(sizeof(int)*n);
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&x[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d ",x[i][j]);
printf("\n");
}
system("pause");
return 0;
}