#include<iostream>

#include<string>

using namespace std;

struct player

{

 char num[4];

 char name[30];

 double pb;

};

void fun(player m[ ], int n, player np)

{

 int i,j,imin;

 struct book t, p;  //定义一个zhidao结构体变量

 for(i=0;i<9;i++)

  for(j=0;j<9-i;j++)

   if(strcmp(b[j].name,b[j+1].name)>0) 

   {

   t=b[j];

   b[j]=b[j+1];

   b[j+1]=t;

   }

 for(i=0;i<10;i++)

  cout<<b[i].name<<" "<<b[i].price<<endl;

}

int main()

{
	int m;
 

 cout<<"按最好成绩递增顺序输入3条运动员信息，再任意输入一条新的运动员信息"<<endl;

 for(i=0;i<10;i++)
	 gets(m)
fun(player m[i],3,player np)
 {

  cin>>b[i].name>>b[i].price;

 }

 order(b);  //调用函数



system("pause");

return ;}

