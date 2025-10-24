#include<float.h>
#include<limits.h>
#include <stdio.h>

int main(void)
{
    printf("double型の最大値:%g\n",DBL_MAX);
    printf("double型の最小値:%g\n",DBL_MIN);
    printf("double型の精度の桁数:%d\n",DBL_DIG);
    
    printf("long double型の最大値:%Le\n",LDBL_MAX);
    printf("long double型の最小値:%Le\n",LDBL_MIN);
    printf("long double型の精度の桁数:%d\n",LDBL_DIG);
    
    printf("int型の符号なし最大値:%d\n",UINT_MAX);
    printf("int型の最大値:%d\n",INT_MAX);
    printf("int型の最小値:%d\n",INT_MIN);
    
    printf("char型の符号なし最大値:%d\n",UCHAR_MAX);
    printf("char型の最大値:%d\n",CHAR_MAX);
    printf("char型の最小値:%d\n",CHAR_MIN);
    
    printf("short型の符号なし最大値:%d\n",USHRT_MAX);
    printf("short型の最大値:%d\n",SHRT_MAX);
    printf("short型の最小値:%d\n",SHRT_MIN);
    
    printf("long型の符号なし最大値:%d\n",ULONG_MAX);
    printf("long型の最大値:%ld\n",LONG_MAX);
    printf("long型の最小値:%ld\n",LONG_MIN);
    
    printf("long long型の符号なし最大値:%d\n",ULLONG_MAX);
    printf("long lopng型の最大値:%lli\n",LLONG_MAX);
    printf("long long型の最小値:%lli\n",LLONG_MIN);
    
    
    

    return 0;
}