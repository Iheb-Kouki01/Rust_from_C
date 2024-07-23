#include<stdio.h>
#include<stdint.h>

uint32_t add (uint32_t a , uint32_t b);

int16_t main (){
    uint32_t a,b;
    printf("write first nmber \n");
    scanf("%d",&a);
    printf("write second nmber \n");
    scanf("%d",&b);
    uint32_t x =add(a,b);
    printf("the sum is : %d",x);
    return 0 ;
}