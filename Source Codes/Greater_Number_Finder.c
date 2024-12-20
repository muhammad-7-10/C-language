#include<stdio.h>
int main()
{
printf("Hello Buddy 🥳\nI can help you finding the biggest number among 4\nEnter them😜\n");
float a,b,c,d;
scanf("%f%f%f%f",&a,&b,&c,&d);
if (a>b && a>c && a>d)
{
    printf("%.2f is the Biggest number",a);
}
else if (b>a && b>c && b>d)
{
   printf("%.2f is the Biggest number",b);
}

else if (c>a && c>b && c>d)
{
    printf("%.2f is the Biggest number",c);
}


else if (d>a && d>b && d>c)
{
    printf("%.2f is the Biggest number",d);
}
else
{
 printf("Please give valid input 💀");
}

return 0;
}