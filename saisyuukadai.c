#include <stdio.h>
#include<math.h>

void solveQuadratic(double a ,double b ,double c)
{
    double d,x1,x2;
    
    d = (b*b)-(4*a*c);
    
    if (d>0)
    {
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("異なる２つの実数解：\n");
        printf("x1=%lf,x2=%lf\n",x1,x2);
    }
    else if (d==0)
    {
        x1=-b/(2*a);
        printf("重解:");
        printf("x=%lf\n",x1);
    }
    else
    {
        printf("虚数解\n");
    }
}
    
   int main(void)
{
    double a,b,c;
    
    printf("二次方程式の係数a,b,c,を入力してください");
    
    scanf("%1f %1f %1f",&a,&b,&c);
    
    if (a==0)
    {
        
    }
    
    
    solveQuadratic(a,b,c);

    return 0;
}