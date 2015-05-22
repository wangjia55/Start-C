

#include <stdio.h>
/*
stdin
stdout
stderr
*/

int main()
{

	fprintf(stdout,"please input value to a :\n");
	int a; 
	fscanf(stdin,"%d",&a);
	if(a < 0 ){
		fprintf(stderr,"a must > 0 \n");
		return 11;
	}else{
		fprintf(stdout,"result is :%d\n",a);
	}
	return 0 ;
}
