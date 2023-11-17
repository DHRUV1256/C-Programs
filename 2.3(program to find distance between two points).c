#include <stdio.h>
#include <math.h>
int main()
{
float x1,x2,y1,y2,p,q,sum,sq;
printf("Enter the values:");
scanf("%f &f/f",&x1,&x2,&y1,&y2);s
p=(x2-x1)*(y2-y1);
q=(y2-y1)*(y2-y1);
sum=p+q;
sq=sqrt(sum);
printf("Answer is:%2f",sq);
return 0;
}