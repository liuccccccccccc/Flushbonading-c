#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct seq
{
    int data[10];
    int len    /* data */
}seq ,*seq_p;


typedef struct stu
{
	char name[20];
	int age;
	double score;
}S;
int main(int argc, const char *argv[])
{ 
	int n;
	printf("请输入录入几个学生的信息\n");
	scanf("%d",&n);
	S student[n];
	printf("请输入学生姓名，年龄，成绩\n");
	for(int i=0;i<n;i++)
	{
		rewind(stdin);

		gets(student[i].name);
		scanf("%d%lf",&student[i].age,&student[i].score);
	}
	S t;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(student[j].score>student[j+1].score)
			{
				t=student[j];
				student[j]=student[j+1];
				student[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%s\n%d %lf\n",student[i].name,student[i].age\
				,student[i].score);
    }
    return 0;
}


// void del_head(seq_p L)
// {
//     if(L==NULL)
//     {
//         printf("error\n");
//         return ;
//     }
//     for(int i=0;i<l->len-1;i++)
//     {
//         L->da[i]=L->da
//     }
    

// }