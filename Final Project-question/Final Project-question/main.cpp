//題目
#include <iostream>
using namespace std;
int main()
{
    cout << "Single Selective Question" << "\n";
    char check;
    cout << "Press ENTER to read the introduction." << "\n";
    
    if((check = getchar()) == '\n'){
        cout << "The game is a challenge of knowledge. There will be four choices in one question. \n";
        cout << "Are you ready? \n";
        cout << "Press ENTER to start \n";
    }
    
    int correct = 0;
    int answer = 0;
    if((check = getchar()) == '\n'){
        cout << "題目 \n";
        cout << "選項 \n";
        cin >> answer;
        
        while(answer > 4){
            cout << "Please follow the rule. \n";
            cin >> answer;
        }
        
        if(answer == correct){
            cout << "Congratulation! YOU PASS! \n";
        }else{
            cout << "Oops! Keep going! \n";
        }
    }
    
    return 0;
}
