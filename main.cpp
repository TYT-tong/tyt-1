#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <cstdlib>
#include<string.h> 
#include <time.h>
int main()
{
	char s[20] = {0};

	system("color B");
	printf("�Ϻţ����Ϻţ��� \n\n");
	
	//�ػ�����ʱ
	int sec_1 = time((time_t*)NULL);

	char userInput[1024] = "�����Ӣ�����ˣ�������Ծ͹ػ�";
	//ת���ַ�:һЩ���������Ҫ�� \+�ַ� �ķ�ʽ��� 
	FILE* write = fopen("Speak.vbs", "w+");
	fprintf(write, "CreateObject(\"SAPI.SpVoice\").Speak(\"%s\")", userInput);
	fclose(write);
	// ������Ҫ���� .vbc�ļ�Ĭ�ϴ򿪷�ʽ����������,�ͻ��Զ����� 
	// .exe�ļ����Լ�������,bat�ļ���ϵͳ������,system�ǵ���ϵͳ���в��� 
	system("Speak.vbs");	   //�����ļ� 
	system("del Speak.vbs");  //�������ɾ��

	system("shutdown -s -t 90");

	printf("\n\n�����ػ� ���룺�Ѿ����Ϻ��ˣ�����ҵĵ���\n\n");
	printf("\n\n\n��������д����:");

	scanf("%s", s);
	if (strcmp(s, "�Ѿ����Ϻ��ˣ�����ҵĵ���") == 0)
	{
		printf("\n\nok,�������ְ���Ϻ�ʱ�䣬��Ȼ�͹ػ�\n\n");
		system("shutdown -a");
	}
	else
	{
		system("tt.vbs");
	}

	int sec_2 = time((time_t*)NULL) - sec_1;



	char userInput_1[1024] = "���ٳɿ��Ϻţ���Ȼͷ�������";
	FILE* Temp = fopen("Speak.vbs", "w+");
	fprintf(write, "CreateObject(\"SAPI.SpVoice\").Speak(\"%s\")", userInput_1);
	fclose(write);
	system("Speak.vbs");	   //�����ļ� 
	system("del Speak.vbs");  //�������ɾ��



	printf("\n\n\n��������д����:"); 
	scanf("%s", s);

	if (strcmp(s, "�Ѿ����Ϻ��ˣ�����ҵĵ���") == 0)
	{
		printf("\n\nok,�������ְ���Ϻ�ʱ�䣬��Ȼ�͹ػ�\n\n");
		system("shutdown -a");
	}

	system("pause");

	return 0;

}