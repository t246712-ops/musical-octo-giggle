#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[256];
    
    unsigned int len;
    
    int large =0;
    
    int small =0;
    
    int suuzi =0;
    
    printf("パスワードを入力してください。ただしパスワードは必ず半角英数字入力してください。>>>");
    
    fgets(password,sizeof(password),stdin);
    
    password[strcspn(password,"\n")]='\0';

    len=strlen(password);
    
    if (len>=8)
    {
        for (int i =0 ; password[i] !='\0';i++)
        {
            unsigned char c = (unsigned char)password[i];
            if (isupper(c))
            {
                large=1;
            }
            if (islower(c))
            {
                small=1;
            }
            if (isdigit(c))
            {
                suuzi=1;
            }
        }
        
        if (large && small && suuzi)
        {
            printf("強力なパスワードです。");
        }
        
        else
        {
            printf("パスワードが不十分です。入力しなおしてください。不足している項目>>>");
            int first =1;
            
            if (!large) 
            {
                printf("大文字");
                first =0;
            }
    
            if (!small)
            {
                if (!first) printf("、");
                printf("小文字");
                first =0;
            }
            
            if (!suuzi)
            {
                if (!first) printf("、");
                printf("数字");
            }
            
        }
        
    }
    
    else
    {
        printf("文字数が足りません。入力しなおしてください。");
    }
    

    return 0;
}