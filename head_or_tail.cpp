#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

inline void InitRand(){
    srand((unsigned int)time(NULL));
}

void CoinGame(){
    int head_cnt,tail_cnt;
    head_cnt = tail_cnt = 0;

    cout<<"Tossing a coin..."<<endl;
    InitRand();

    for(int i=0; i<3; i++){
        int flag = rand()%2;
        string res;
        if(flag){
            res = "Heads";
            head_cnt++;
        }else{
            res = "Tails";
            tail_cnt++;
        }

        cout<<"Round "<<i<<": "<<res<<endl;
    }

    cout<<"Heads : "<<head_cnt<<", ";
    cout<<"Tails: "<<tail_cnt<<endl;

    if(head_cnt > tail_cnt){
        cout<<"You won!"<<endl;
    }else{
        cout<<"You lost!"<<endl;
    }
}

int main(){
    CoinGame();
}
