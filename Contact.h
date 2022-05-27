#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
typedef struct user
{
	char name[15];
	char account[15];
	char number[20];
	char password[15];
	struct user *next;
}User;
typedef struct Mailbox
{
	int flag;
	char name[15];
	char number[20];
	char content[200];
	struct Mailbox* next;
}Mb;
typedef struct node
{
	char name[15];
	char number[20];
	char Class[4];
	int math;
	int English;
	int CL;
	int total;
	struct node* next;
}Node;
 typedef struct user_stu
{
	 char name[15];
	char number[15];
	char password[15];
	struct user_stu* next;
}User_stu;
Node *InitList();//链表初始化
void GreatbyRear(Node* head);//学生信息的录入
void Register_Tea();//注册账号
int Login_Tea();//登录账号
void Retrieve_Tea();//找回密码
void ChangePass_Tea();//修改密码
void Register_Stu();
void Login_Stu();
void Appeal(char*x,Node*head);//成绩申诉
void Analysis_stu(Node* head, char* x);
void Retrieve_Stu();
void ChangePass_Stu();
void Modify(Node*head);//修改学生信息
void OutPut(Node* head,char* i);//打印学生信息
void Delete(Node*head);//删除学生信息
void Query(Node*head);//查询学生成绩
void PartSort(Node* head, int (*campare)(Node* x, Node* y));//排序
int campare1(Node* x, Node* y);//按总分排名
int campare2(Node* x, Node* y);//按高数成绩排名
int campare3(Node* x, Node* y);//按英语成绩排名
int campare4(Node* x, Node* y);//按C语言成绩排名
void Analysis(Node* head);
void SeePhone();
void Dele_Phone();
void CheckScore(Node* head,char*x);//学生查看考试成绩
void Use_Tea();
void text1();
void text2();
void text3();
void text4();
void Empower();