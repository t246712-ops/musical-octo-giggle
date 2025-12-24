#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(0));

    // 合計20を3分割するためのランダムな境界点を作成
    int r1 = (rand() % 20)+1;
    int r2 = (rand() % 20)+1;
    
    // 昇順に並び替え
    if (r1 > r2) { int tmp = r1; r1 = r2; r2 = tmp; }

    // 各ステータスの算出
    int intelligence = r1;           // 0からr1の間
    int stamina = r2 - r1;           // r1からr2の間
    int charisma = 20 - r2;          // r2から20の間

    // クラス判定
    char* job;
    if (intelligence >= stamina && intelligence >= charisma) 
    {
        job = "Mage";
    } 
    else if (stamina >= intelligence && stamina >= charisma) 
    {
        job = "Knight";
    } else 
    {
        job = "Thief";
    }

    // 結果表示
    printf("--- Character Status ---\n");
    printf("Intelligence: %d\n", intelligence);
    printf("Stamina:      %d\n", stamina);
    printf("Charisma:     %d\n", charisma);
    printf("------------------------\n");
    printf("Class:        %s\n", job);

    return 0;
}