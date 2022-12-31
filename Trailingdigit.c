#include<stdio.h>
int main()
{
 long int b,a;
 int d;
 printf("\n Enter price of one doodad between range 1 to 100000: ");
 scanf("%d",&b);
 if(b>=1 && b<100000) 
 { 
 printf("\n Price of one doodad is :%d\n ",b);
 } 
else
 { 
 printf("\n Please enter price between range 1 to 100000 only ");
 } 
printf("\n Enter which digit you want to trail: ") ;
scanf("%d",&d);
if(d>=0 && d<=9)
{
 printf("\n Trailing digit you wish to trail is %d: \n",d);
}
else
{
 printf("\n Please enter the trailing digit :");
}
printf("\n Enter the maximum price of bundle more than price you given for single doodad and less than 10000000: ");
scanf("%d",&a);
if(b<=a && a<10000000)
{
 printf("\n Maximum price of bundle is %d ",a);
}
else
{ 
 printf("\n Please enter the maximum price of bundle more than price you given for single doodad and less than 10000000: ");
} 
 long int x;
 int n=1;
do
{
 x=b*n;
 n++;
 printf("x:%d\n",x);
} while(x<a );
int long y;
y=x%(a/10);
int c=0;
int temp=y;
while(temp!=0)
{
temp=temp/10;
c=++c;
}
printf("\nDigit %d Has Been Trailed :%d times",d,c);
return 0;
}

