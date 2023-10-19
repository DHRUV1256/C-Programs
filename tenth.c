#include <stdio.h>
void main(){
int c,l,b,r,n,area,perimeter;
printf("Enter the coice of your's:/n 1. square/n 2. rectangle/n 3.circle/n");
scanf("%d",&c);
Switch(c)

Case 1:
printf("Enter the side of square :/n");
scanf("%d",&side);
Area=side*side;
Perimeter=4*side;
printf("Area of square is :%d\n",area);
printf("Perimeter of square is :%d\n",perimeter)
break;
Case 2:
printf("Enter the l and b of rectangle :\n");
scanf("%d%d",&l,&b);
printf("Area of rectangle is :%d",area);
Area=l*b;
printf("Perimeter of rectangle is :%d",perimeter);
break;
Case 3:
printf("Enter radius of circle :\n");
scanf("%d",&r);
Area=r*r*3.14;
Perimeter=2*3.14*r;
printf("Area of circle is :%d",area);
printf("Perimeter of circle is :%d",perimeter);
}


