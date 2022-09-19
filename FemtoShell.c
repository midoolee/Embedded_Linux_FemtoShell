#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define RET 0

bool Echo_fun(void)
{
	char Input_String[100];

	printf("What do you want to echo? (write \"exit\" to Quit): ");

	scanf("%s",Input_String);

	if( 0 != strcmp("exit",Input_String) )
	{
		printf("You Said: %s \n",Input_String);
	}
	else
	{
		return false;
	}

	return true;
}

int main()
{
	bool Exit_Flag = true;

	while(true)
	{
		Exit_Flag = Echo_fun();
		
		if(Exit_Flag == false)
			break;
	}

	printf("Goodbye :) \n");
	
	return RET;
}
