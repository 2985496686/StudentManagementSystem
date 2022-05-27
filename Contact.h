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
Node *InitList();//�����ʼ��
void GreatbyRear(Node* head);//ѧ����Ϣ��¼��
void Register_Tea();//ע���˺�
int Login_Tea();//��¼�˺�
void Retrieve_Tea();//�һ�����
void ChangePass_Tea();//�޸�����
void Register_Stu();
void Login_Stu();
void Appeal(char*x,Node*head);//�ɼ�����
void Analysis_stu(Node* head, char* x);
void Retrieve_Stu();
void ChangePass_Stu();
void Modify(Node*head);//�޸�ѧ����Ϣ
void OutPut(Node* head,char* i);//��ӡѧ����Ϣ
void Delete(Node*head);//ɾ��ѧ����Ϣ
void Query(Node*head);//��ѯѧ���ɼ�
void PartSort(Node* head, int (*campare)(Node* x, Node* y));//����
int campare1(Node* x, Node* y);//���ܷ�����
int campare2(Node* x, Node* y);//�������ɼ�����
int campare3(Node* x, Node* y);//��Ӣ��ɼ�����
int campare4(Node* x, Node* y);//��C���Գɼ�����
void Analysis(Node* head);
void SeePhone();
void Dele_Phone();
void CheckScore(Node* head,char*x);//ѧ���鿴���Գɼ�
void Use_Tea();
void text1();
void text2();
void text3();
void text4();
void Empower();