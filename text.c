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
			printf("\t\t\t\tѡ�����\n");
			printf("\t\t\t\t����������:>");
			continue;
		}
		a = i[0] - '0';
		switch (a)
		{
		case 1://ѧ����
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
					printf("\t\t\t\tѡ�����\n");
					printf("\t\t\t\t������ѡ��:>");
					continue;
				}
				b = j[0] - '0';
				switch (b)
				{
				case 1://ע��
					Register_Stu();
					text2();
					break;
				case 2://��¼
					 Login_Stu();
					text2();
					break;
				case 3://�һ�����
					Retrieve_Stu();
					text2();
					break;
				case 0://������һҳ
					system("cls");
					flag = 1;
					break;
				default:
					printf("\t\t\t\tѡ�����\n");
					printf("\t\t\t\t������ѡ��:>");
					break;
				}
			}
			if (flag == 1)
			{
				text1();
				break;
			}
		case 2://��ʦ��
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
					printf("\t\t\t\tѡ�����\n");
					printf("\t\t\t\t������ѡ��:>");
					continue;
				}
				b = j[0] - '0';
				switch (b)
				{
				case 1://ע��
					Register_Tea();
					text2();
					break;
				case 2://��¼
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
				case 3://�һ�����
					Retrieve_Tea();
					text2();
					break;
				case 4://�޸�����
					ChangePass_Tea();
					text2();
					break;
				case 0://������һҳ
					system("cls");
					flag = 1;
					break;
				default:
					printf("\t\t\t\tѡ�����\n");
					printf("\t\t\t\t������ѡ��:>");
					break;
				}
			}
			if (flag == 1)
			{
				text1();
				break;
			}
		case 3://������
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
					printf("\t\t\t\tѡ�����\n");
					printf("\t\t\t\t������ѡ��:>");
					continue;
				}
				b = j[0] - '0';
				switch (b)
				{
				case 1://��ʦ�绰����Ȩ
					Empower();
					text11();
					break;
				case 2://ɾ����Ȩ�˺�
					Dele_Phone();
					text11();
					break;
				case 3://�һ�����
					SeePhone();
					text11();
					break;
				case 0://������һҳ
					system("cls");
					flag = 1;
					break;
				default:
					printf("\t\t\t\tѡ�����\n");
					printf("\t\t\t\t������ѡ��:>");
					break;
				}
			}
			if (flag == 1)
			{
				text1();
				break;
			}
		case 0://�˳�
			return 0;
		default:
			printf("\t\t\t\tѡ�����\n");
			printf("\t\t\t\t������ѡ��:>");
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
			printf("\t\t\t\tѡ�����\n");
			printf("\t\t\t\t������ѡ��:>");
			continue;
		}
		b = j[0] - '0';
		switch (b)
		{
		case 1://¼��ѧ����Ϣ
			GreatbyRear(head);
			text4();
			break;
		case 2://�鿴ѧ���ɼ�
			system("cls");
			OutPut2(head);
			text4();
			break;
		case 3://��ѯѧ���ɼ�
			system("cls");
			Query(head);
			text4();
			break;
		case 4://�޸�ѧ����Ϣ
			Modify(head);
			text4();
			break;
		case 5://ɾ��ѧ����Ϣ
			Delete(head);
			text4();
			break;
		case 6://���ɼ�����
			system("cls");
			Sort2(head);
			text4();
			break;
		case 7://�ɼ�����
			Analysis(head);
			text4();
			break;
		case 8://�鿴����
			Mailbox_Tea();
			text4();
			break;
		case 0://������һҳ
			system("cls");
			return;
		default:
			printf("\t\t\t\tѡ�����\n");
			printf("\t\t\t\t������ѡ��:>");
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
			printf("\t\t\t\tѡ�����\n");
			printf("\t\t\t\t������ѡ��:>");
			continue;
		}
		b = j[0] - '0';
		switch (b)
		{
		case 1://�鿴�ɼ�
			CheckScore(head, x);
			text3();
			break;
		case 2://�ɼ�����
			system("cls");
			Analysis_stu(head, x);
			text3();
			break;
		case 3://�޸�����
			ChangePass_Stu();
			text3();
			break;
		case 4://�޸�����
			Appeal(x, head);
			text3();
			break;
		case 0://������һҳ
			system("cls");
			return;
		default:
			printf("\t\t\t\tѡ�����\n");
			printf("\t\t\t\t������ѡ��:>");
			break;
		}
	}
}