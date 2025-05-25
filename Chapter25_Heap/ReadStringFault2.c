#include <stdio.h>

char name[30]; // µ¤¾î ¾²¿©Áü

char* ReadUserName(void)
{
	printf("What's your name? ");
	gets(name);
	return name;
}

int main(void)
{
	char* name1;
	char* name2;
	name1 = ReadUserName();
	name2 = ReadUserName();
	printf("name2: %s \n", name2);

	printf("name1: %s \n", name1);
	printf("name2: %s \n", name1);
	return 0;
}