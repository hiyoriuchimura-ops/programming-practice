
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* 数あてゲーム */

int main(void) {
    setlocale(LC_ALL, "");
    srand(time(NULL));
    char choice = 'y';
    /*一つの乱数を生成する */
do {
    printf("レベルを選択してください（1:簡単、2:普通、3:難しい）: ");
    int level;
    scanf("%d", &level);
    if (level == 1) {
        printf("簡単モードを選択しました。\n");
    } else if (level == 2) {
        printf("普通モードを選択しました。\n");
    } else if (level == 3) {
        printf("難しいモードを選択しました。\n");
    } else {
        printf("無効なレベルです。デフォルトで普通モードを選択します。\n");
        level = 2;
    }
    int max;
    if (level == 1) {
        max = 50;
    } else if (level == 2) {
        max = 100;
    } else {
        max = 200;
    }
    int target = rand() % max + 1;
    /*数字を入力させる*/
    int num;
    int i = 0;
    while (i < 5) {
        i++;
        printf("%d回目の挑戦です！（残り%d回）\n", i, 5 - i);
        printf("1から%dまでの数字を入力してください: ", max);
        scanf("%d", &num);
     if (num < 1 || num > max) {
        printf("1から%dまでの数字を入力してください。\n", max);
        i--; /*無効な入力の場合はカウントを減らす*/
        continue;
    }
    /*比較する*/
    if (num == target) {
        printf("おめでとうございます！%d回目で正解です！\n", i);
        break;
    } 
    else if (num < target) {
        printf("もっと大きい数字です。\n");
    } 
    else {
        printf("もっと小さい数字です。\n");
    }
}
    
if (i == 5 && num != target) {
    printf("ゲームオーバー！\n");
    printf("正解は %d でした。\n", target);
    }
printf("ゲーム終了です。もう一度挑戦しますか？(y/n): ");
    scanf(" %c", &choice);
}while (choice == 'y' || choice == 'Y') ;
    return 0;
}


