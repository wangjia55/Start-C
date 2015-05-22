#include <stdio.h>

int main()
{
	int flag = 1;
	int n = 0 , sum;
	int i ;

	while(flag){
		scanf("%d",&i);
		if(0 == i ) break;;
		n++;
		sum+=i;
	}

	printf("%d,%d",sum,n);
	return 0 ;
}
