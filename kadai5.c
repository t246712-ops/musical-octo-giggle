int main()
{
    int k,m;
    printf("大人は何名様ですか");
    scanf("%d",&k);
    printf("子供は何名ですか");
    scanf("%d",&m);
    
    if(k+m>=4)
    {
        printf("テーブル席へお進みください");
    }
    
    else if(m>=3&&k<4)
    {
        printf("テーブル席またはカウンター席へお進みください");
    }
    else
    {
         printf("カウンター席へお進みください");
    }
  
    return 0;
}