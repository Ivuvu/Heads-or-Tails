#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

inline void InitRand(){
    srand((unsigned int)time(NULL));
}

//コインゲーム

void CoinGame(string name){
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
        cout<<name<<" won!"<<endl;
    }else{
        cout<<name<<" lost!"<<endl;
    }
}

void AskName(){
    string name;
    cout<<"Who are you?"<<endl;
    cout<<"> ";
    cin>>name;
    cout<<"Hello, "<<name<<"!"<<endl;
    CoinGame(name);
}

int main(){
    AskName();
}
