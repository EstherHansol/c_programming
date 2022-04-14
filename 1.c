
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main1(void)
{
    int i, j = 0;
    int com[3] = { 0 }; //컴퓨터에서 발생할 3가지 난수를 저장하는 배열
    int mine[3] = { 0 }; //사용자가 고른 3가지 숫자를 저장하는 배열
    int strike = 0; //STRIKE 갯수변수
    int ball = 0; //BALL갯수변수
    int game = 0; //GAME횟수변수
    int end = 0; //게임을 끝내기위해준 변수


    while (com[0] == com[1] || com[0] == com[2] || com[1] == com[2]) //세가지숫자가 하나라도 같으면 반복해서 난수발생->세가지의 다른숫자 발생
    {
        srand((int)time(NULL));//현재 시간을 이용해서 씨드 결정

        for (i = 0; i < 3; i++)
        {
            com[i] = (rand() % 9) + 1;//난수 1~9숫자중 3번반복하여 COM배열에 저장(COM[0],COM[1],COM[2])
        }
    }
    //------------------------컴퓨터가 고른 세가지 숫자를 배열에 저장--------------------------     


    while (end == 0) //END변수가 0이면 계속 실행 (3STRIKE가 될때까지 실행)
    {
        printf("서로다른 숫자 0~9까지 세개를 입력해주세요.\n");
        for (i = 0; i < 3; i++)
        {
            scanf_s("%d", &mine[i]);//세개의 다른 숫자를 사용자에게서 입력받아 MINE배열에 저장(MINE[0],MINE[1],MINE[2])
        }

        if (mine[0] == mine[1] || mine[0] == mine[2] || mine[1] == mine[2]) //세가지숫자가 하나라도 같으면 게임시작불가능
        {
            printf("입력한 숫자가 중복되었습니다.게임을 다시시작해주세요.\n");
            break; //바로 앞의 반복문을 빠져나감, 곧 WHILE문을 빠져나가게됨.
        }


        //      printf("%d, %d, %d // %d, %d,%d\n",com[0],com[1],com[2],mine[0],mine[1],mine[2]); //TEST
       //------------------------------사용자에게서 입력받음------------------------------------------------
        for (i = 0; i < 3; i++) //FOR문 3번 반복 실행
        {
            if (com[i] == mine[i]) //컴퓨터난수와 사용자의숫자를 같은배열끼리 비교하였을때, 만약 숫자가 같다면
            {
                strike = strike + 1; //STRIKE의 숫자를 +1증가시켜준다
            }
        }

        for (i = 0; i < 3; i++) //FOR문 3번 반복 실행
        {
            for (j = 0; j < 3; j++) //FOR문 3번 반복 실행 =>총 i=0, j=0,1,2/ i=1,j=0,1,2/ i=2, j=0,1,2 9번돌아감
            {
                if (com[i] == mine[j]) //같은숫자가있는지 비교하여
                {
                    ball = ball + 1; //참이라면 ball을 1증가시켜준다.
                    break; //참이라면 com[i]의 i를 증가시켜 비교한다.
                }
            }

        }


        game++;//game횟수를 판단하는 변수로 게임을한번 돌릴때마다 증가시켜준다.
        printf("%d번째 게임 : %d strike %d ball\n", game, strike, ball - strike);//ball의 갯수는 총 ball에서 strike를 뺀 갯수다. 

        if (strike == 3)
        {
            printf("성공하였습니다. 축하합니다.!!\n");
            printf("%d 번 만에 성공했습니다.", game);
            end = 1; //만약 3strike가 된다면, end를 1로주어 위의 while문을 실행시키지 않고 끝낸다.
        }
        strike = 0; //3strike가 아니라면 strike와 ball을 초기화 해준다.
        ball = 0;



    }


    return 0;
}
