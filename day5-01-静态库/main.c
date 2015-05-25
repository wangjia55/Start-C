#include "maxmin.h"

int main()
{
    int a , b,  mA,mI;
    scanf("%d,%d",&a,&b);
    
    mA = max(a,b);
    printf("Max is %d\n",mA);

    mI = min(a,b);
    printf("Min is %d\n",mI);
    return 0 ;
}
