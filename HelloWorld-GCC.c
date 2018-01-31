#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define name "Kevin Truong\n"

int main(void)
{
	char str[30];
	sprintf(str, "Hello 415, I am %s", name);
	write(1,str,28);
	
	return 0;
}
