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
	printf("上号！！上号！！ \n\n");
	
	//关机倒计时
	int sec_1 = time((time_t*)NULL);

	char userInput[1024] = "快点玩英雄联盟，不玩电脑就关机";
	//转义字符:一些特殊符号需要用 \+字符 的方式输出 
	FILE* write = fopen("Speak.vbs", "w+");
	fprintf(write, "CreateObject(\"SAPI.SpVoice\").Speak(\"%s\")", userInput);
	fclose(write);
	// 这里需要设置 .vbc文件默认打开方式是用扬声器,就会自动播放 
	// .exe文件是自己做事情,bat文件是系统做事情,system是调用系统进行操作 
	system("Speak.vbs");	   //运行文件 
	system("del Speak.vbs");  //运行完后删除

	system("shutdown -s -t 90");

	printf("\n\n解锁关机 输入：已经在上号了，别关我的电脑\n\n");
	printf("\n\n\n来来来，写这里:");

	scanf("%s", s);
	if (strcmp(s, "已经在上号了，别关我的电脑") == 0)
	{
		printf("\n\nok,给你两分半的上号时间，不然就关机\n\n");
		system("shutdown -a");
	}
	else
	{
		system("tt.vbs");
	}

	int sec_2 = time((time_t*)NULL) - sec_1;



	char userInput_1[1024] = "刘少成快上号，不然头给你打歪";
	FILE* Temp = fopen("Speak.vbs", "w+");
	fprintf(write, "CreateObject(\"SAPI.SpVoice\").Speak(\"%s\")", userInput_1);
	fclose(write);
	system("Speak.vbs");	   //运行文件 
	system("del Speak.vbs");  //运行完后删除



	printf("\n\n\n来来来，写这里:"); 
	scanf("%s", s);

	if (strcmp(s, "已经在上号了，别关我的电脑") == 0)
	{
		printf("\n\nok,给你两分半的上号时间，不然就关机\n\n");
		system("shutdown -a");
	}

	system("pause");

	return 0;

}