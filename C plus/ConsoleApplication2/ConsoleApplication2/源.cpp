








































#include <stdio.h>
#include <string.h>
#include <iostream>
#define N 256
using namespace std;
int main()
{
    FILE *fp;
    fp = fopen("f1.txt","w");

    char s[N] = "";
    gets(s);
    int len=strlen(s);
    for(int i=len-1; i>=0; --i)
{
        fputc(s[i],fp);
    }
    fputs(s,fp);
    fclose(fp);
system("pause");
   return 0;
}
#include <stdio.h>

#include <iostream>

using namespace std;

int main()

{

    FILE *fp;

    fp = fopen("f2.txt","r");

   int plus=0, minus=0, zero=0,num;

    while(!feof(fp))

    {

        fscanf(fp,"%d",&num);

        if(num>0)

            plus++;

        if(num<0)

            minus++;

        if(num==0)

            zero++;

    }

    printf("����=%d,����=%d,��=%d\n",plus,minus,zero);

    fclose(fp);

system("pause");

    return 0;

}
#include <stdio.h>

#include <iostream>

#define N 4

using namespace std;

typedef struct student STUDENT;

struct student{

    char no[20];

    double score;

}stu[N];



int main()

{

    FILE *fp;

    

    fp = fopen("student.dat","w");

    for(int i=0; i<N; ++i){

        scanf("%s%lf",stu[i].no,&stu[i].score);

    }

    fwrite(stu, sizeof(STUDENT),4,fp);

    fclose(fp);

    

    fp = fopen("student.dat","r");

    STUDENT st[N];

   

    double max = st[0].score,min=st[0].score,total = st[0].score;

    for(int j=1; j<N; ++j){

        total += st[j].score;

        if(st[j].score>max)

            max = st[j].score;

        if(st[j].score<min)

            min = st[j].score;

    }

    printf("max=%.2f,min=%.2f,total=%.2f\n",max,min,total);

    fclose(fp);

system("pause");

    return 0;

}

#define N 100

#include <iostream>

#include <string.h>

using namespace std;

int main()

{

    FILE *fp;

    int i;

    char s[N];

    fp =fopen("alp.txt","w");//1.ֻд��һ���ļ�

    if (fp == NULL)

    {

        cout << "can't open alp.txt" << endl;

        exit(0);

    }

    gets(s);

    i=0;  //2. i ����ֵ

    while (s[i] != '\0')

    {

        if (s[i] >= 'a'&&s[i] <= 'z')

            s[i] = s[i] - 'a' + 'A';

        else if(s[i] >= 'A'&& s[i] <= 'Z')//3. else if

            s[i] = s[i] - 'A' + 'a';

        i++;

    }

    fputs(s,fp);//4.д�ļ�

    fclose(fp);

    system("pause");

    return 0;

}
#include "iostream"

#include "stdio.h"

using namespace std;

int main()

{

  FILE *fp;

char ch;

char s[100];

gets(s);

if((fp=fopen(s,"r+"))==NULL)

{

cout<<"can��t open file/n";

exit(1);

}

while(!feof(fp))

{

ch=fgetc(fp);

putchar(ch);

cout<<"("<<int(ch)<<")";

}

fclose(fp);



system("pause");

return 0;

}


#include <stdio.h>

#include <stdlib.h>

#define N 100

typedef struct student STUDENT;

struct student

{

    char  *num;

    int   score;

};

int fun(STUDENT arr[], int n)

{

    int max = arr[0].score;

    int maxi = 0;

    for(int i=1; i<n; ++i)

        if(arr[i].score>max){

            max = arr[i].score;

            maxi = i;

        }

    return maxi;

}



int main()

{

    STUDENT arr[N];

    printf("������ѧ��������\n");

    int n;

    scanf("%d",&n);

 printf("������ѧ�š��ɼ���\n");

    for(int j=0; j<n; ++j){

        arr[j].num = (char*)malloc(sizeof(char)*10);

        scanf("%s%d",arr[j].num,&arr[j].score);

    }

   int index = fun(arr,n);

    printf("num=%s,score=%d\n",arr[index].num, arr[index].score );

system("pause");

    return 0;

}
#include <stdio.h>

#include <stdlib.h>

#define N 100

typedef struct date DATE;

struct date

{

    int year;

    int month;

    int day;

};

void fun(DATE d)

{

    int months[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    int days = d.day;

    if(d.year%4==0 && d.year%100!=0 ||d.year%400==0)

        months[2]++;

    for(int i=1; i<d.month; ++i)

        days += months[i];

    printf("��%d��ĵ�%d��\n",d.year,days);

}



int main()

{

    DATE d;

    printf("����������(��/��/��)��\n");

    scanf("%d/%d/%d",&d.year,&d.month,&d.day);

    fun(d);

system ("pause");

    return 0;

}
#include<iostream>

#include<string>

using namespace std;

struct book

{

 char name[80];

 int price;

}b[10];

void order(struct book*)

{

 int i,j,imin;

 struct book t, p;  //����һ��zhidao�ṹ�����

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

void main()

{

 int i;

 //struct book ;

 cout<<"�������������ڼۣ���"<<endl;

 for(i=0;i<10;i++)

 {

  cin>>b[i].name>>b[i].price;

 }

 order(b);  //���ú���



system("pause");

return ;}

