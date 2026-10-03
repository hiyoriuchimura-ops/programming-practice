#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* じゃんけんゲーム */
int main() {
    srand(time(NULL)); // 乱数の種を初期化
char choice;
    do{
        printf("じゃんけんをしましょう！\n");
        printf("グーは0、チョキは1、パーは2を入力してください: ");
        int user_choice;
        scanf("%d", &user_choice);
        int computer_choice = rand() % 3; // 0から2までの乱数を生成
     
        if(user_choice==0){
            printf("あなたはグーを出しました。\n");
        }
        else if(user_choice==1){
            printf("あなたはチョキを出しました。\n");
        }
        else if(user_choice==2){
            printf("あなたはパーを出しました。\n");
        }
        else{
            printf("無効な入力です。0、1、2のいずれかを入力してください。\n");
            continue; // 無効な入力の場合は再度入力を促す
        }
        
        if(computer_choice==0){
            printf("コンピュータはグーを出しました。\n");
        }
        else if(computer_choice==1){
            printf("コンピュータはチョキを出しました。\n");
        }
        else if(computer_choice==2){
            printf("コンピュータはパーを出しました。\n");

        }
        if(user_choice==0&& computer_choice==1){
            printf("あなたの勝ちです！\n");
        }
        else if(user_choice==1&&computer_choice==2){
            printf("あなたの勝ちです！\n");
        }
        else if(user_choice==2&&computer_choice==0){
            printf("あなたの勝ちです！\n");
        }
        else if(user_choice==computer_choice){
            printf("引き分けです。\n");
        }
        else{
            printf("コンピュータの勝ちです。\n");
        }

        printf("もう一度プレイしますか？ (y/n): ");
        scanf(" %c", &choice);

    }while(choice == 'y' ||choice == 'Y'
          );
        }
