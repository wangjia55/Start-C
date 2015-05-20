/*
一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程    找出1000以内的所有完数。 
*/

#include <stdio.h>

void wanshu();

int main()
{

	wanshu();
	return 0;
}

void wanshu()
{

	int i , j , sum;
        for(i = 2 ;i < 1000 ; i++){
		int res[i] ;
		sum = 0;
	 	for(j =1 ; j < i ; j++){
			if(i%j == 0 ){
			  res[j] = j;
			}else{
			  res[j] = 0;
			}
			sum += res[j];
		}
		if(sum == i){
		  printf("Wanshu is : %d\n",i);
		}
	}
}
