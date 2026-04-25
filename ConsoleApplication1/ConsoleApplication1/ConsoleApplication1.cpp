#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // コンピュータの時間（を表す値）を変数に代入する
    int t = (int)time(nullptr);
    // random を 10 で割って、その余りを変数 answer に代入する
    // 10 で割った余りなので、answer には「0～9」のどれかが入っている
    int answer = t % 10;
    bool loop = false;

    //printf("%d\n", answer);
    while (!loop)
    {
        // キーボードで押した数を変数 input に代入する
        int input;
        scanf_s("%d", &input);


        // ランクを保持する変数を宣言する
        int rank = 0;

        // answer に入っている数値と、input に入っている数値が一致していれば「一致！」と表示する
        if (answer == input)
        {
            rank = 2;
            printf("一致！\n");
        }
        // answer に入っている数値より、input に入っている数値の方が大きければ「大きい！」と表示する
        else if (answer < input)
        {
            printf("大きい！\n");
        }
        // answer に入っている数値より、input に入っている数値の方が小さければ「小さい！」と表示する
        else if (answer > input)
        {
            printf("小さい！\n");
        }

        // まずは answer と input の数値の差を計算する
        int sub = answer - input;
        if (sub > -3 && sub < 3 && sub != 0)
        {
            rank = 1;
            printf("惜しい！\n");
        }

        // rank に入っている数値に合わせて表示を変える
        switch (rank)
        {
        case 2:
            printf("ランクS\n");
            loop = true;
            break;
        case 1:
            printf("ランクA\n");
            break;
        default:
            printf("ランクB\n");
            break;
        }
    }
    return 0;
}