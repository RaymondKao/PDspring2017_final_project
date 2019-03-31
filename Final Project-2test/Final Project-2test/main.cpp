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
     
     char get1[5];
     char get2[5];
     char get3[5];
     char get4[5];
     char get5[5];
     char get6[5];
     char get7[5];
     char get8[5];
     char get9[5];
     switch(rn){
     
     case(1):
     //SetColor(65);
     cout << "Q";
     //SetColor(47);
     cout << "   W   E \n"
     << "A   S   D \n"
     << "Z   X   C \n\n";
     cout << "Q";
     get1[0] = getchar();
     if(get1[0] == 'Q' || get1[0] == 'q'){
     cout << endl;
     get1[0] = '\0';
     break;
     }
     while(get1[0] != 'Q' && get1[0] != 'q'){
     //SetColor();
     cout << "Keep focus, OK? \n";
     
     get1[0] = getchar();
     if(get1[0] == 'Q' || get1[0] == 'q'){
     cout << endl;
     get1[0] = '\0';
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
     get2[0] = getchar();
     if(get2[0] == 'W' || get2[0] == 'w'){
     cout << endl;
     get2[0] = '\0';
     break;
     }
     while(get2[0] != 'W' && get2[0] != 'w'){
     //SetColor();
     cout << "Keep focus, OK? \n";
     
     get2[0] = getchar();
     if(get2[0] == 'W' || get2[0] == 'w'){
     cout << endl;
     get2[0] = '\0';
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
     get3[0] = getchar();
     if(get3[0] == 'E' || get3[0] == 'e'){
     cout << endl;
     get3[0] = '\0';
     break;
     }
     while(get3[0] != 'E' && get3[0] != 'e'){
     //SetColor();
     cout << "Keep focus, OK? \n";
     
     get3[0] = getchar();
     if(get3[0] == 'E' || get3[0] == 'e'){
     cout << endl;
     get3[0] = '\0';
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
     get4[0] = getchar();
     if(get4[0] == 'A' || get4[0] == 'a'){
     cout << endl;
     get4[0] = '\0';
     break;
     }
     while(get4[0] != 'A' && get4[0] != 'a'){
     //SetColor();
     cout << "Keep focus, OK? \n";
     
     get4[0] = getchar();
     if(get4[0] == 'A' || get4[0] == 'a'){
     cout << endl;
     get4[0] = '\0';
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
     get5[0] = getchar();
     if(get5[0] == 'S' || get5[0] == 's'){
     cout << endl;
     get5[0] = '\0';
     break;
     }
     while(get5[0] != 'S' && get5[0] != 's'){
     //SetColor();
     cout << "Keep focus, OK? \n";
     
     get5[0] = getchar();
     if(get5[0] == 'S' || get5[0] == 's'){
     cout << endl;
     get5[0] = '\0';
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
     get6[0] = getchar();
     if(get6[0] == 'D' || get6[0] == 'd'){
     cout << endl;
     get6[0] = '\0';
     break;
     }
     while(get6[0] != 'D' && get6[0] != 'd'){
     //SetColor();
     cout << "Keep focus, OK? \n";
     
     get6[0] = getchar();
     if(get6[0] == 'D' || get6[0] == 'd'){
     cout << endl;
     get6[0] = '\0';
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
     get7[0] = getchar();
     if(get7[0] == 'Z' || get7[0] == 'z'){
     cout << endl;
     get7[0] = '\0';
     break;
     }
     while(get7[0] != 'Z' && get7[0] != 'z'){
     //SetColor();
     cout << "Keep focus, OK? \n";
     
     get7[0] = getchar();
     if(get7[0] == 'Z' || get7[0] == 'z'){
     cout << endl;
     get7[0] = '\0';
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
     get8[0] = getchar();
     if(get8[0] == 'X' || get8[0] == 'x'){
     cout << endl;
     get8[0] = '\0';
     break;
     }
     while(get8[0] != 'X' && get8[0] != 'x'){
     //SetColor();
     cout << "Keep focus, OK? \n";
     
     get8[0] = getchar();
     if(get8[0] == 'X' || get8[0] == 'x'){
     cout << endl;
     get8[0] = '\0';
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
     get9[0] = getchar();
     if(get9[0] == 'C' || get9[0] == 'c'){
     cout << endl;
     get9[0] = '\0';
     break;
     }
     while(get9[0] != 'C' && get9[0] != 'c'){
     //SetColor();
     cout << "Keep focus, OK? \n";
     
     get9[0] = getchar();
     if(get9[0] == 'C' || get9[0] == 'c'){
     cout << endl;
     get9[0] = '\0';
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
     if(time1 <= 60){
     cout << "Congratulation! You pass this game. \n"
     << "You only use " << time1 << " sec \n";
     //result = true;
     }
     else{
     cout << "Oops! You fail this game because overtime. \n"
     << "You spend " << time1 << " sec \n";
     }
     }
     }
    return 0;
}
