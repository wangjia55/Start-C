#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *p ;
    int c ;
    p = fopen("test.txt","r");
    while((c=fgetc(p)) != EOF)
    {
	printf("%c",c);
    }
    fclose(p);

    return 0 ;
}
