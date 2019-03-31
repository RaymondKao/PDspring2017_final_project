//終極密碼遊戲
#include <iostream>
//#include <windows.h>
using namespace std;
void SetColor(int);
void checkAnswer(int, int);

/*void SetColor(int color = 7)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,color);
}*/

void checkAnswer(int correct, int answer)
{
    int count = 0;
    int upper = 0;
    int lower = 0;
    
    lower = 1;
    upper = 100;
    
    while(count < 10){
        cout << "Key in a number " << lower << "~" << upper << " ! \n";
        cin >> answer;
        count++;
        
        if(correct == answer){
            cout << "Congratulation! You get the right answer!! \n";
            cout << "The correct number is = " << correct << "\n";
            if(count < 10){
                cout << "You only use " << count << " times! Great! \n";
            }
            else{
                cout << "Good job! You pass this stage \n";
            }
            cout << endl;
            break;
        }
        else if(correct < answer && answer < upper && answer > lower){
            cout << "The correct number is smaller than " << answer << "\n";
            cout << "You still have " << 10-count << " chances! Keep trying! \n";
            upper = answer;
        }
        else if(correct > answer && answer < upper && answer > lower){
            cout << "The correct number is larger than " << answer << "\n";
            cout << "You still have " << 10-count << " chances! Keep trying! \n";
            lower = answer;
        }
        else{
            cout << "Please enter a reasonable number! \n";
            cout << "You still have " << 10-count << " chances! Keep trying! \n";
        }
        cout << endl;
    }
    
    if(count == 10){
        cout << "Oops! You fail the game. Keep going~ \n";
        cout << endl;
    }
}

int main()
{
    char check;
    //SetColor(9);
    cout << "Ultimate Number Game" << "\n";
    //SetColor();
    cout << "Press ENTER to read the introduction." << "\n";
    
    if((check = getchar()) == '\n'){
        cout << "The game is a number guessing game. Player needs to guess a number between 1 to 100. \n";
        cout << "The system will tell you whether it's larger or smaller than the correct answer. \n";
        cout << "You have ten chances to get the right answer and pass this stage. \n";
        cout << "Are you ready? \n";
        cout << "Press ENTER to start \n";
        
        if((check = getchar()) == '\n'){
            int correct = 62;
            int answer = 0;
            checkAnswer(correct, answer);
        }
    }
    
    return 0;
}
