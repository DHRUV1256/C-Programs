#include<stdio.h>
void main()
{
int i,area,lenghth,breadth,side,r;
printf("1.area of circle\n 2. area of rectangle\n 3. area of square");
scanf("%d",&i);
printf("Enter the value of r");
scanf("%d",&r);
printf("Enter the value of length of rectangle:");
scanf("%d",&lenghth);
printf("Enter the value of breadth of rectangle:");
scanf("%d",&breadth);
printf("Enter the value of side of square:");
scanf("%d",&side);
if(i==1)
{
printf("area of circle is:%d\n",3.14*r*r);
}
else if(i==2){
printf("area of rectangle is:%d\n",lenghth*breadth);   
}
else if(i==3){
printf("area of square is:%d\n",side*side);
}
}
