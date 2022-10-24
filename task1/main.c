#include <stdio.h> 
#include <math.h>
int main()
{double h;
double a;
double y;
printf("请输入步长：");
scanf("%lf",&h);
printf("请输入初值f（0）=") ;
scanf("%lf",&a);
double z=a-y;
int n=0;
double t=0;
double w;
double m;
printf("请输入定义域（0.M）  M="); 
scanf("%lf",&m);
while(z>0.000001&&w<m){y=a-a*h;
w=t+h;
t=w;
z=a-y;
a=y;
n++;
printf("x=%f      f(x%d)=%f      f(x%d)-f(x%d)=%f\n",w,n,y,n,n-1,z);
}

printf("微分方程的最终定态=%f 此时x的取值为%f",y,w);
return 0;
}

