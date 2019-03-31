//地鼠九宮格
//47為底色
//65是變動的格子
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <string>
//#include <windows.h>
using namespace std;

/*void SetColor(int color = 7)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,color);
}*/

int main()
{
    char check;
    //SetColor(9);
    cout << "Style Box" << "\n";
    //SetColor();
    cout << "Press ENTER to read the introduction." << "\n";
    
    if((check = getchar()) == '\n'){
        cout << "You will see a style box. \n";
        cout << "This is a style box. \n\n";
        
        //SetColor(47);
        cout << "Q   W   E \n"
            << "A   S   D \n"
            << "Z   X   C \n\n";
        //SetColor();
        cout << "You have to push the buttom when the block becomes red. \n";
        cout << "If you successfully push all the assigned characters showed up in 60 sec, then you win this stage. \n";
        cout << "Are you ready? \n" << "Press the ENTER to continue~ \n";
        
        if((check = getchar()) == '\n'){
            int rn = 0;
            time_t start = 0, stop = 0;
            start = time(NULL);
            
            for(int i = 0; i < 30; i++){
                rn = rand() % 10;
                
                if(rn == 0){
                    rn++;
                }
                
                string get;
                switch(rn){
                    
                    case(1):
                        //SetColor(65);
                        cout << "Q";
                        //SetColor(47);
                        cout << "   W   E \n"
                            << "A   S   D \n"
                            << "Z   X   C \n\n";
                        cout << "Q";
                        cin >> get;
                        if(get == "Q" || get == "q"){
                            get.clear();
                            cout << endl;
                            break;
                        }
                        while(get != "Q" || get != "q"){
                            //SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            
                            if(get == "Q" || get == "q"){
                                get.clear();
                                cout << endl;
                                break;
                            }
                        }
                        cout << endl;
                        break;
                            
                    case(2):
                        //SetColor(47);
                        cout << "Q   ";
                        //SetColor(65);
                        cout << "W";
                        //SetColor(47);
                        cout << "   E \n";
                        cout << "A   S   D \n"
                            << "Z   X   C \n\n";
                        cout << "W";
                        cin >> get;
                        if(get == "W" || get == "w"){
                            get.clear();
                            cout << endl;
                            break;
                        }
                        while(get != "W" || get != "w"){
                            //SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            
                            if(get == "W" || get == "w"){
                                get.clear();
                                cout << endl;
                                break;
                            }
                        }
                        cout << endl;
                        break;
                        
                    case(3):
                        //SetColor(47);
                        cout << "Q   W   ";
                        //SetColor(65);
                        cout << "E \n";
                        //SetColor(47);
                        cout << "A   S   D \n"
                            << "Z   X   C \n\n";
                        cout << "E";
                        cin >> get;
                        if(get == "E" || get == "e"){
                            get.clear();
                            cout << endl;
                            break;
                        }
                        while(get != "E" || get != "e"){
                            //SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            
                            if(get == "E" || get == "e"){
                                get.clear();
                                cout << endl;
                                break;
                            }
                        }
                        cout << endl;
                        break;
                        
                    case(4):
                        //SetColor(47);
                        cout << "Q   W   E \n";
                        //SetColor(65);
                        cout << "A   ";
                        //SetColor(47);
                        cout << "S   D \n"
                            << "Z   X   C \n\n";
                        cout << "A";
                        cin >> get;
                        if(get == "A" || get == "a"){
                            get.clear();
                            cout << endl;
                            break;
                        }
                        while(get != "A" || get != "a"){
                            //SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            
                            if(get == "A" || get == "a"){
                                get.clear();
                                cout << endl;
                                break;
                            }
                        }
                        cout << endl;
                        break;
                        
                    case(5):
                        //SetColor(47);
                        cout << "Q   W   E \n"
                            << "A   ";
                        //SetColor(65);
                        cout << "S   ";
                        //SetColor(47);
                        cout << "D \n"
                            << "Z   X   C \n\n";
                        cout << "S";
                        cin >> get;
                        if(get == "S" || get == "s"){
                            get.clear();
                            cout << endl;
                            break;
                        }
                        while(get != "S" || get != "s"){
                            //SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            
                            if(get == "S" || get == "s"){
                                get.clear();
                                cout << endl;
                                break;
                            }
                        }
                        cout << endl;
                        break;
                        
                    case(6):
                        //SetColor(47);
                        cout << "Q   W   E \n"
                            << "A   S   ";
                        //SetColor(65);
                        cout << "D \n";
                        //SetColor(47);
                        cout << "Z   X   C \n\n";
                        cout << "D";
                        cin >> get;
                        if(get == "D" || get == "d"){
                            get.clear();
                            cout << endl;
                            break;
                        }
                        while(get != "D" || get != "d"){
                            //SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            
                            if(get == "D" || get == "d"){
                                get.clear();
                                cout << endl;
                                break;
                            }
                        }
                        cout << endl;
                        break;
                        
                    case(7):
                        //SetColor(47);
                        cout << "Q   W   E \n"
                            << "A   S   D \n";
                        //SetColor(65);
                        cout << "Z";
                        //SetColor(47);
                        cout << "   X   C \n\n";
                        cout << "Z";
                        cin >> get;
                        if(get == "Z" || get == "z"){
                            get.clear();
                            cout << endl;
                            break;
                        }
                        while(get != "Z" || get != "z"){
                            //SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            
                            if(get == "Z" || get == "z"){
                                get.clear();
                                cout << endl;
                                break;
                            }
                        }
                        cout << endl;
                        break;
                        
                    case(8):
                        //SetColor(47);
                        cout << "Q   W   E \n"
                            << "A   S   D \n"
                            << "Z   ";
                        //SetColor(65);
                        cout << "X";
                        //SetColor(47);
                        cout << "   C \n\n";
                        cout << "X";
                        cin >> get;
                        if(get == "X" || get == "x"){
                            get.clear();
                            cout << endl;
                            break;
                        }
                        while(get != "X" || get != "x"){
                            //SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            
                            if(get == "X" || get == "x"){
                                get.clear();
                                cout << endl;
                                break;
                            }
                        }
                        cout << endl;
                        break;
                        
                    case(9):
                        //SetColor(47);
                        cout << "Q   W   E \n"
                            << "A   S   D \n"
                            << "Z   X   ";
                        //SetColor(65);
                        cout << "C \n\n";
                        cout << "C";
                        cin >> get;
                        if(get == "C" || get == "c"){
                            get.clear();
                            cout << endl;
                            break;
                        }
                        while(get != "C" || get != "c"){
                            //SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            
                            if(get == "C" || get == "c"){
                                get.clear();
                                cout << endl;
                                break;
                            }
                        }
                        cout << endl;
                        break;
                }
            }
            stop = time(NULL);
            double time1 = double(stop - start);
            
            //SetColor(206);
            if(time1 <= 35){
                cout << "Congratulation! You pass this game. \n"
                    << "You only use " << time1 << " sec \n";
            }
            else{
                cout << "Oops! You fail this game because overtime. \n"
                    << "You spend " << time1 << " sec \n";
            }
        }
    }
    
    return 0;
}
