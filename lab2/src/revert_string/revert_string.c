#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
	char swapper;
	int size;
	int i = 0;
	size = strlen(str);
	while(i < size/2){
		swapper = str[i];
		str[i] = str[size-i-1];
		str[size-i-1] = swapper;
		i++;
	}
}

