#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);

char s1[] ={"Hello, World!"};

scanf("%[^\n]%*c", s);

printf("%s",s1);

printf("\n");

printf("%s",s); 
    return 0;
}

