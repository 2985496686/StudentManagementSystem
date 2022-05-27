#include"Contact.h"
int main()
{
	char i[20],j[20];
	int a, b;
	int flag3 = 0;
	text1();
	while (1)
	{
		scanf("%s", i);
		if (strcmp(i, "0") == 0) return;
		if (strlen(i) != 1)
		{
			printf("\t\t\t\t选择错误！\n");
			printf("\t\t\t\t请重新输入:>");
			continue;
		}
		a = i[0] - '0';
		switch (a)
		{
		case 1://学生端
			system("cls");
			text2();
			int flag = 0;
			while (1)
			{
				if (flag == 1)
				{
					break;
				}
				scanf("%s", j);
				if (strlen(j) != 1)
				{
					printf("\t\t\t\t选择错误！\n");
					printf("\t\t\t\t请重新选择:>");
					continue;
				}
				b = j[0] - '0';
				switch (b)
				{
				case 1://注册
					Register_Stu();
					text2();
					break;
				case 2://登录
					 Login_Stu();
					text2();
					break;
				case 3://找回密码
					Retrieve_Stu();
					text2();
					break;
				case 0://返回上一页
					system("cls");
					flag = 1;
					break;
				default:
					printf("\t\t\t\t选择错误！\n");
					printf("\t\t\t\t请重新选择:>");
					break;
				}
			}
			if (flag == 1)
			{
				text1();
				break;
			}
		case 2://教师端
			system("cls");
			text2();
			flag = 0;
			while (1)
			{
				if (flag ==1)
				{
					break;
				}
				scanf("%s", j);
				if (strlen(j) != 1)
				{
					printf("\t\t\t\t选择错误！\n");
					printf("\t\t\t\t请重新选择:>");
					continue;
				}
				b = j[0] - '0';
				switch (b)
				{
				case 1://注册
					Register_Tea();
					text2();
					break;
				case 2://登录
					flag3 = Login_Tea();
					if (flag3 == 0)
					{
						text2();
						break;
					}
					text4();
					Use_Tea();
					text2();
					break;
				case 3://找回密码
					Retrieve_Tea();
					text2();
					break;
				case 4://修改密码
					ChangePass_Tea();
					text2();
					break;
				case 0://返回上一页
					system("cls");
					flag = 1;
					break;
				default:
					printf("\t\t\t\t选择错误！\n");
					printf("\t\t\t\t请重新选择:>");
					break;
				}
			}
			if (flag == 1)
			{
				text1();
				break;
			}
		case 3://管理者
			system("cls");
			if (Controller_Loge() != 1)
			{
				text1();
				break;
			}
			text11();
			flag = 0;
			while (1)
			{
				if (flag == 1)
				{
					break;
				}
				scanf("%s", j);
				if (strlen(j) != 1)
				{
					printf("\t\t\t\t选择错误！\n");
					printf("\t\t\t\t请重新选择:>");
					continue;
				}
				b = j[0] - '0';
				switch (b)
				{
				case 1://教师电话号授权
					Empower();
					text11();
					break;
				case 2://删除授权账号
					Dele_Phone();
					text11();
					break;
				case 3://找回密码
					SeePhone();
					text11();
					break;
				case 0://返回上一页
					system("cls");
					flag = 1;
					break;
				default:
					printf("\t\t\t\t选择错误！\n");
					printf("\t\t\t\t请重新选择:>");
					break;
				}
			}
			if (flag == 1)
			{
				text1();
				break;
			}
		case 0://退出
			return 0;
		default:
			printf("\t\t\t\t选择错误！\n");
			printf("\t\t\t\t请重新选择:>");
			break;
		}

	}
}
void Use_Tea()
{
	Node* head = InitList();
	system("cls");
	text4();
	while (1)
	{

		char j[20];
		int b;
		scanf("%s", j);
		if (strlen(j) != 1)
		{
			printf("\t\t\t\t选择错误！\n");
			printf("\t\t\t\t请重新选择:>");
			continue;
		}
		b = j[0] - '0';
		switch (b)
		{
		case 1://录入学生信息
			GreatbyRear(head);
			text4();
			break;
		case 2://查看学生成绩
			system("cls");
			OutPut2(head);
			text4();
			break;
		case 3://查询学生成绩
			system("cls");
			Query(head);
			text4();
			break;
		case 4://修改学生信息
			Modify(head);
			text4();
			break;
		case 5://删除学生信息
			Delete(head);
			text4();
			break;
		case 6://按成绩排序
			system("cls");
			Sort2(head);
			text4();
			break;
		case 7://成绩分析
			Analysis(head);
			text4();
			break;
		case 8://查看邮箱
			Mailbox_Tea();
			text4();
			break;
		case 0://返回上一页
			system("cls");
			return;
		default:
			printf("\t\t\t\t选择错误！\n");
			printf("\t\t\t\t请重新选择:>");
			break;
		}
	}
}
void Use_Stu(char*x)
{
	Node* head = InitList();
	system("cls");
	text3();
	while (1)
	{

		char j[20];
		int b;
		scanf("%s", j);
		if (strlen(j) != 1)
		{
			printf("\t\t\t\t选择错误！\n");
			printf("\t\t\t\t请重新选择:>");
			continue;
		}
		b = j[0] - '0';
		switch (b)
		{
		case 1://查看成绩
			CheckScore(head, x);
			text3();
			break;
		case 2://成绩分析
			system("cls");
			Analysis_stu(head, x);
			text3();
			break;
		case 3://修改密码
			ChangePass_Stu();
			text3();
			break;
		case 4://修改密码
			Appeal(x, head);
			text3();
			break;
		case 0://返回上一页
			system("cls");
			return;
		default:
			printf("\t\t\t\t选择错误！\n");
			printf("\t\t\t\t请重新选择:>");
			break;
		}
	}
}