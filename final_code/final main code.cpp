#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <stdio.h> 
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <string>
#include <ctime>
#include <cctype>
using namespace std;

bool questions(int num);
bool choice(int num, char ans[], char choice);
void choice_Q(int num, string questions[15], string choices[][4]);
bool voc_puzzle(int num);
bool AB(int num);
bool crossword(int num);
bool guess_num(int num);
bool gophers(int num);
bool checkBingo(int table[5][5], string name);
char** crossword_Q1();
char** crossword_Q1(char** table);
char** crossword_Q2();
char** crossword_Q2(char** table);
bool crossword1(char** table, int num, string ans);
bool crossword2(char** table, int num, string ans);
bool voc_puzzle1();
bool voc_puzzle2();
bool guess_num1();
bool guess_num2();

void SetColor(int color = 7)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,color);
}
int main()
{
	//set table
	int table1[5][5] = {0};
	int table2[5][5] = {0};
	
	
		cout<<"\n";
SetColor(79);
				cout<<"███████████████████████████████████████████\n"
  	 				<<"█";
SetColor(78);	cout<<"                                                                                  ";
SetColor(79);cout<<"█\n";                                                                 
cout<<"█";
SetColor(78);	cout<<  "    ████ █    █ ████ ████ ████                                  "; 
SetColor(79);cout<<"█\n";                                                                 
cout<<"█";
SetColor(78);	cout<<  "    █    █ █    █ █    █ █       █    █                                  "; 
SetColor(79);cout<<"█\n";                                                                 
cout<<"█";
SetColor(78);	cout<<  "     ██    █    █ ████ ████ ████                                  "; 
SetColor(79);cout<<"█\n";                                                                 
cout<<"█";
SetColor(78);	cout<<  "        ██ █    █ █       █       █  █                                    "; 
SetColor(79);cout<<"█\n";                                                                 
cout<<"█";
SetColor(78);	cout<<  "    ████ ████ █       ████ █   █                                   "; 
SetColor(79);cout<<"█\n";                                                                 
cout<<"█";
SetColor(78);	cout<<  "                                                                                  "; 
SetColor(159);cout<<"█\n";
cout<<"█";		cout<<  "                                                                                  "; 
SetColor(79);cout<<"█\n";
cout<<"█";
SetColor(155);	cout<<  "                   ████ ████ █    █ ████ ████                   "; 
SetColor(79);cout<<"█\n";
cout<<"█"; 					
SetColor(155);	cout<<  "                   █    █    █    ██  █ █       █    █                   "; 
SetColor(79);cout<<"█\n";
cout<<"█"; 					
SetColor(155);	cout<<  "                   ███      █    █  ██ █  ██ █    █                   "; 
SetColor(79);cout<<"█\n";
cout<<"█"; 					
SetColor(155);	cout<<  "                   █    █    █    █    █ █    █ █    █                   "; 
SetColor(79);cout<<"█\n";
cout<<"█"; 					
SetColor(155);	cout<<  "                   ████ ████ █    █ ████ ████                   "; 
SetColor(159);cout<<"█\n";
cout<<"█";		cout<<  "                                                                                  "; 
SetColor(79);cout<<"█\n";
cout<<"███████████████████████████████████████████\n"; 
  	 				 					 
	SetColor();
	cout<<"\n\n                          (Press ";
	SetColor(112);
	cout<<"Enter";
	SetColor();
	cout<<" to start!) ";
	while( getchar()!='\n') ;
	system("cls");
	
	
	string name1, name2;
		
	SetColor(14);
	cout<<"\n\n                     ███\n"
	    <<"                    █";SetColor(224);cout<<"● ●";SetColor(14);cout<<"█\n"
	    <<"                   █████\n"
	    <<"                    ████ \n "
	    <<"                      █  \n"
	    <<"                    ████\n"
	    <<"                   █████\n"
	    <<"                 ███████\n\n\n";
	SetColor(11);    
	cout<<"    ███ █     ███ █  █ ███ ███  ██\n"
	    <<"    █  █ █     █  █  ██  █     █  █ █ █\n"
		<<"    ███ █     ███   █   ███ ███    █\n"
		<<"    █     █     █  █   █   █     █ █     █\n"
		<<"    █     ███ █  █   █   ███ █  █  ███\n " ; 
    cout<<"\n               ";
	SetColor(30);
	cout<<"Please enter your name\n\n";
	SetColor();
	cout<<"              → ";
	cin >> name1; 
	SetColor();
	while( getchar()!='\n') ;
	system("cls");
	
	SetColor();
	cout<<"\n\n                     ███\n"
	    <<"                    █";SetColor(112);cout<<"● ●";SetColor();cout<<"█\n"
	    <<"                   █████\n"
	    <<"                    ████ \n "
	    <<"                      █  \n"
	    <<"                    ████\n"
	    <<"                   █████\n"
	    <<"                 ███████\n\n\n";
	SetColor(13);    
	cout<<"    ███ █     ███ █  █ ███ ███   ██\n"
	    <<"    █  █ █     █  █  ██  █     █  █  █  █\n"
		<<"    ███ █     ███   █   ███ ███     █\n"
		<<"    █     █     █  █   █   █     █ █     █\n"
		<<"    █     ███ █  █   █   ███ █  █  ███\n " ; 
    
	cout<<"\n               ";
	SetColor(30);
	cout<<"Please enter your name\n\n";
	SetColor();
	cout<<"              → ";
	cin >> name2; 
	
	system("cls");
	char temp[3] = {0};
	cout<<"--------------------------------------------------------------------------------------\n";
	SetColor(14);   
	cout<<"      ███ ";	SetColor(11); cout<<"      ███ █     ███ █  █ ███ ███  ██\n";	SetColor(14); 
	cout<<"    █";SetColor(224);cout<<"● ●";SetColor(14);cout<<"█";	SetColor(11); cout<<"      █  █ █     █  █  ██  █     █  █ █ █\n";	SetColor(14); 
	cout<<"     ████";	SetColor(11); cout<<"      ███ █     ███   █   ███ ███    █\n";	SetColor(14); 
	cout<<"       █    ";	SetColor(11); cout<<"      █     █     █  █   █   █     █ █     █\n";	SetColor(14); 
	cout<<"     ████";	SetColor(11); cout<<"      █     ███ █  █   █   ███ █  █  ███\n\n  " ; 
	SetColor(30);
	cout << name1 << "   please set your table(enter 1~25 randomly and don't repeat)\n\n";
	SetColor(79);
	cout<<"※For example:\n"
	    <<"              \n"
	    <<"1 2 3 4 5     \n"
		<<"6 7 8 9 10    \n"
		<<"11 12 13 14 15\n"
		<<"16 17 18 18 20\n"
		<<"21 22 23 24 25\n";
	SetColor();
	cout<<"\n\n";
	bool ok = false;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			cin >> table1[i][j];
		}
	}
	
	system("cls");
	cout<<"--------------------------------------------------------------------------------------\n";
	SetColor();   
	cout<<"      ███ ";	SetColor(13); cout<<"      ███ █     ███ █  █ ███ ███   ██\n";	SetColor(); 
	cout<<"    █";SetColor(112);cout<<"● ●";SetColor();cout<<"█";	SetColor(13); cout<<"      █  █ █     █  █  ██  █     █  █  █  █\n";	SetColor(); 
	cout<<"     ████";	SetColor(13); cout<<"      ███ █     ███   █   ███ ███     █\n";	SetColor(); 
	cout<<"       █    ";	SetColor(13); cout<<"      █     █     █  █   █   █     █ █     █\n";	SetColor(); 
	cout<<"     ████";	SetColor(13); cout<<"      █     ███ █  █   █   ███ █  █  ███\n\n  " ; 
	SetColor(30);
	cout << name2 << "   please set your table(enter 1~25 randomly and don't repeat)\n\n";
	SetColor(79);
	cout<<"※For example:\n"
	    <<"              \n"
	    <<"1 2 3 4 5     \n"
		<<"6 7 8 9 10    \n"
		<<"11 12 13 14 15\n"
		<<"16 17 18 18 20\n"
		<<"21 22 23 24 25\n";
	SetColor();
	cout<<"\n\n";
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			cin >> table2[i][j];
		}
	}
	
	char input[5] = {0};
	int choosed_num = 0, turn = 0;
	bool end = false;
	while( getchar()!='\n') ;
	system("cls");
	SetColor(30);
	cout<<"                                                          \n"
	    <<"   ████ ████ █    █ ████                    \n"
	    <<"   █       █    █ ████ █                          \n"      
		<<"   █  ██ ████ █ █ █ ████                    \n"
	    <<"   █    █ █    █ █ █ █ █                          \n"
	    <<"   ████ █    █ █    █ ████                    \n"
	    <<"                                                          \n"
		<<"         ████ ████ ████ ████ ████  █ \n"
	    <<"         █    █    █    █    █ █    █    █     █ \n"
		<<"          ██       █    ████ ████    █     █ \n"
		<<"             ██    █    █    █ █  █      █        \n"
		<<"         ████    █    █    █ █   █     █     █ \n"
		<<"                                                          \n" ; 
    SetColor();
	cout << "\n          先連成兩條線的人獲勝!\n\n"; 
	cout<<"         (Press ";
	SetColor(112);
	cout<<"Enter";
	SetColor();
	cout<<" to start!)";
	while( getchar()!='\n') ;
	system("cls");
	bool bingo1 = 0, bingo2 = 0;
	while(!end)
	{
		if(turn == 0)
		{
			SetColor(31); 
			cout << "It's " << name1 <<"'s turn. Please choose a number from 1 to 25.\n";
			SetColor(); 
		}
		else
		{
			SetColor(95); 
			cout << "It's " << name2 <<"'s turn. Please choose a number from 1 to 25.\n";
			SetColor(); 
		}
		cin >> input;
		if(!isdigit(input[0]))
		{
			cout << "Please enter an NUMBER!\n";
			continue;
		}
		if(turn == 0)
			turn++;
		else
			turn = 0;
		choosed_num = atoi(input);
		if(choosed_num < 1 || choosed_num > 25)
		{
			cout << "WRONG NUMBER!!\n";
			cout << choosed_num <<"\n";
			continue;
		}
		
		//play games or answer questions
		bool result;
		while( getchar()!='\n') ;
		system("cls");
		if(choosed_num == 18 || choosed_num == 17) //crossword
		{
			result = crossword(choosed_num);
		}
		else if(choosed_num == 22 || choosed_num == 20) // vocabulary puzzle
		{
			result = voc_puzzle(choosed_num);
		}
		else if(choosed_num == 21 || choosed_num == 24) //guess number
		{
			result = guess_num(choosed_num);
		}
		else if(choosed_num == 25 || choosed_num == 23 || choosed_num == 15) //AABB
		{
			result = AB(choosed_num);
		}
		else if(choosed_num == 19 || choosed_num == 16) //hit gophers
		{
			result = gophers(choosed_num);
		}
		else //question
		{
			result = questions(choosed_num);
		}
		
		if(result)
		{
			cout << "\nWONDERFUL!! You get the number!!\n";
			for(int i = 0; i < 5; i++)
			{
				for(int j = 0; j < 5; j++)
				{
					if(table1[i][j] == choosed_num)
						table1[i][j] = 0;
					if(table2[i][j] == choosed_num)
						table2[i][j] = 0;
				} 
			}
			bingo1 = checkBingo(table1, name1);
			bingo2 = checkBingo(table2, name2);
			if(bingo1 || bingo2)
				end = true;
		}
	}
	
	if(bingo1 && bingo2)
	{
		cout<<"\n\n";
		SetColor(236);
		cout << "WOW! Both of you bingo at the same time!!\n";
		SetColor(); 
	}
	
	return 0;
}

bool checkBingo(int table[5][5], string name)
{
	int cnt = 0;
	bool line;
	
	//horizonal
	for(int i = 0; i < 5; i++)
	{
		line = true;
		for(int j = 0; j < 5; j++)
		{
			if(table[i][j] != 0)
				line = false;
		}
		if(line)
			cnt++;
	}
	//vertical
	for(int i = 0; i < 5; i++)
	{
		line = true;
		for(int j = 0; j < 5; j++)
		{
			if(table[j][i] != 0)
				line = false;
		}
		if(line)
			cnt++;
	}
	if(table[0][0] == 0 && table[1][1] == 0 && table[2][2] == 0 && table[3][3] == 0 && table[4][4] == 0)
		cnt++;
	if(table[0][4] == 0 && table[1][3] == 0 && table[2][2] == 0 && table[3][1] == 0 && table[4][0] == 0)
		cnt++;
	
	if(cnt >= 2)
	{
		cout<<"\n\n";
		SetColor(206);
	cout<<"                                                                    \n"
	    <<"   █    █ ████ █    █   █    █ ████ █    █    █    \n"
	    <<"    █  █  █    █ █    █   █    █    █    ██  █    █    \n"      
		<<"     ██   █    █ █    █   █ █ █    █    █ █ █    █    \n"
	    <<"      █    █    █ █    █    ███     █    █  ██          \n"
	    <<"      █    ████ ████    █  █  ████ █  ██    █    \n"
	    <<"                                                                    \n\n";
		SetColor(236); 
		cout << "Congraduations!! " << name <<"  wins the game!!\n";
		SetColor(); 
		return true;
	}	
	if(cnt == 1)
	{
		SetColor(12);
		cout << "\n     NOTICE!! " << name << " has finished ONE line! Almost win!!\n\n";
		SetColor();
	}
	return false; 
}

bool crossword(int num)
{
	bool result = false;
	if(num == 18)
	{
		cout<<"--------------------------------------------------------------------------------\n";
		SetColor(10);
		cout<<"████ ████ ████ ████ ████ █ █ █ ████ ████ ███ \n"
			<<"█       █    █ █    █ █       █       █ █ █ █    █ █    █ █    █\n"
			<<"█       ███   █    █ ████ ████ █ █ █ █    █ ███   █    █\n"
			<<"█       █   █  █    █       █       █ █ █ █ █    █ █  █   █    █\n" 
			<<"████ █    █ ████ ████ ████  █  █  ████ █   █  ███ \n\n"; 
		SetColor();
		cout<<"(push ";
		SetColor(112);
		cout<<"Enter";
		SetColor();
		cout<<" to keep reading)\n\n"
			<<"Please enter the number of the question you want to answer & the answer for it.\n";
		while( getchar()!='\n') ;
		cout<<"FINISH THE PUZZLE IN 2 MINUTES!!\n";
		while( getchar()!='\n') ;
		cout<<"\nReady? Press ";
		SetColor(112);
		cout<<"Enter";
		SetColor();
		cout<<" to start! \n";
		while( getchar()!='\n') ;
		clock_t start, stop;
		start = clock(); //開始時間
		char** table = crossword_Q1();
		int cnt = 0;
		while(cnt < 6)
		{
			char Num[2] = {0};
			string ans;
			cin>>Num>>ans;
		
			if(!isdigit(Num[0]))
			{
				SetColor(12);
				cout << "   Please enter an NUMBER!!\n";
				SetColor();
				continue;
			}

			bool result = crossword1(table, atoi(Num), ans);
			if(result)
			{
				system("cls");
				table = crossword_Q1(table);
				cnt++;
			}
		}
		cout << "--END--\n\n";
		stop = clock(); //結束時間
		double time=(double(stop - start) / CLOCKS_PER_SEC);
		cout << "\n"<<"You totally spent "<< time <<" sec!\n\n" ;
		SetColor(158);
		if(time>120){
			cout<<"Sorry! You fail the stage.QQ\n\n";
		}
		else{
			cout<<"Congratulations! You pass the stage ~ ~ :))\n\n";
			result = true;
		}
		SetColor();
		return result;
	}
	else
	{
		cout<<"--------------------------------------------------------------------------------\n";
		SetColor(10);
		cout<<"████ ████ ████ ████ ████ █ █ █ ████ ████ ███ \n"
			<<"█       █    █ █    █ █       █       █ █ █ █    █ █    █ █    █\n"
			<<"█       ███   █    █ ████ ████ █ █ █ █    █ ███   █    █\n"
			<<"█       █   █  █    █       █       █ █ █ █ █    █ █  █   █    █\n" 
			<<"████ █    █ ████ ████ ████  █  █  ████ █   █  ███ \n\n"; 
		SetColor();
		cout<<"\n(push ";
		SetColor(112);
		cout<<"Enter";
		SetColor();
		cout<<" to keep reading)\n\n"
			<<"Please enter the number of the question you want to answer & the answer for it.\n";
		while( getchar()!='\n') ;
		cout<<"FINISH THE PUZZLE IN 2 MINUTES!!\n";
		while( getchar()!='\n') ;
		cout<<"\nReady? Press ";
		SetColor(112);
		cout<<"Enter";
		SetColor();
		cout<<" to start! \n";
		while( getchar()!='\n') ;
		char** table = crossword_Q2();
		clock_t start, stop;
		start = clock(); //開始時間
		int cnt = 0;
		while(cnt < 6)
		{
			char Num[2] = {0};
			string ans;
			cin>>Num>>ans;
		
			if(!isdigit(Num[0]))
			{
				SetColor(12);
				cout << "   Please enter an NUMBER!!\n";
				SetColor();
				continue;
			}
			
			bool result = crossword2(table, atoi(Num), ans);
			if(result)
			{
				system("cls");
				table = crossword_Q2(table);
				cnt++;
			}
				
		}
		cout << "--END--\n\n";
		stop = clock(); //結束時間
		double time=(double(stop - start) / CLOCKS_PER_SEC);
		cout << "\n"<<"You totally spent "<< time <<" sec!\n\n" ;
		SetColor(158);
		if(time>120){
			cout<<"Sorry! You fail the stage.QQ\n\n";
		}
		else{
			cout<<"Congratulations! You pass the stage ~ ~ :))\n\n ";
			result = true;
		}
		SetColor();
		return result;
	}
}

bool voc_puzzle(int num)
{
	bool result;
	if(num == 22)
	{
		result = voc_puzzle1();
	}
	else
	{
		result = voc_puzzle2();
	}
	return result;
}

bool guess_num(int num)
{
	bool result;
	if(num == 21)
	{
		result = guess_num1();
	}
	else
	{
		result = guess_num2();
	}
	return result;
}

bool AB(int choice)
{
	bool result = false;
	cout<<"--------------------------------------------------------------------------------\n";
	SetColor(14);
	cout<<"   ███   ██     ███  ███ \n"
		<<" █    █  █  █  █    █  █   █  \n"
		<<"     █   ████     █    ███ \n"
		<<"          █    █           █   █\n" 
		<<"     █   █    █     █    ███ \n\n";
	
	SetColor();
	cout<<"(push ";
	SetColor(112);
	cout<<"Enter";
	SetColor();
	cout<<" to keep reading)\n\n"
	<<"Computer will generate a number between 100~999 (each digit is different).\n";
	while( getchar()!='\n') ;
	SetColor(27);
	cout<<"A : number V / place V \n"
	    <<"B : number V / place X \n";
	while( getchar()!='\n') ;
	SetColor();
	cout<<"If you can find it by less than 10 times, you will pass the stage!\n";
	while( getchar()!='\n') ;
	cout<<"Ready? Push ";
	SetColor(112);
	cout<<"Enter";
	SetColor();
	cout<<" to start! \n";
	while( getchar()!='\n') ;
	
    int X[3],Y[3],num[10];   
    int i,j,temp,number,counter=0;
    int A=0,B=0;
    
    srand(time(NULL));
    for(i=0;i<10;i++){
       num[i]=1;
    }
        for(i=0;i<3;i++){
            temp=rand()%10;
            if(num[temp]==1){
            	X[i]=temp;  
                num[temp]=0;
        	}        
            else{ 
                i--; 
            }  
        }

    while(1){
    	cout<<"\n====================================\n"
			<<"Please enter your answers:\n\n";
        cin>>number;
        Y[0]=(number%1000)/100;
		Y[1]=(number%100)/10;
		Y[2]=number%10;
		          
        for(i=0;i<3;i++){
		    for(j=0;j<3;j++){
                if(X[i] == Y[j]){
                    if(i==j)
                        A++;
                    else
                        B++;
                }
            }
        }
		counter++;
        if(counter==10){
			SetColor(12); 
			cout<<"\nThe answer is "<<X[0]<<X[1]<<X[2]<<". \n"; 
			break;
		}
		if(A==3){
        	SetColor(11);
        	cout<<"    Ya~ ~ ! You got it ~ ~ !";
            break;
    	}
        else{
        	SetColor(14);
        	cout<<"    "<<A<<"A"<<B<<"B  Keep going on!!!";
            A=0;B=0;
            SetColor();
        }  
    }
    
    cout<<"\n====================================\n";
	SetColor(13);
	cout <<"\n"<<"You totally use "<< counter <<" times!\n\n" ;
	SetColor(158);
	if(counter>10){
		cout<<"Sorry! You fail the stage.QQ\n\n";
	}
	else{
		cout<<"Congratulations! You pass the stage ~ ~ :))\n\n ";
		result = true;
	}
	SetColor();
    return result;
      
}


char** crossword_Q1()
{
	cout <<"======================================================\n" ;
	SetColor(30);
	cout << "Hints:\n\n";
	SetColor(14);
	cout << "-horizontal\n";
	SetColor();
	cout << "1.If you ask me a question I will give you an ******.\n"
	     << "2.A dark reflection of you that appears on the ground.\n\n";
	SetColor(14);    
	cout << "-vertical\n";
	SetColor();     
	cout << "3.The act of moving your legs to get somewhere.\n"
	     << "4.******** are used for cutting paper.\n"
	     << "5.You lay your head on ****** when you sleep.\n"
	     << "6.A small sweet australian bear.\n\n";
	
	char** table = new char*[13];
	for(int i = 0; i < 13; i++)
	{
		table[i] = new char[8];
		for(int j = 0; j < 8; j++)
			table[i][j] = 0;
	}
	
	for(int i = 0; i < 6; i++)
		table[5][i] = '_';
	
	for(int i = 0; i < 6; i++)
		table[8][2 + i] = '_';	
	
	for(int i = 0; i < 4; i++)
		table[4 + i][0] = '_';
	
	for(int i = 0; i < 8; i++)
		table[5 + i][2] = '_';
	
	for(int i = 0; i < 6; i++)
		table[i][3] = '_';
	
	for(int i = 0; i < 5; i++)
		table[7 + i][6] = '_';
	
	table[5][0] = '1';
	table[8][2] = '2';
	table[4][0] = '3';
	table[5][2] = '4';
	table[0][3] = '5';
	table[6][6] = '6';
	for(int i = 0; i < 13; i++)
	{
		for(int j = 0; j < 8; j++)
			cout << table[i][j] << " ";
		cout <<"\n";
	}
	return table;
}
char** crossword_Q1(char** table)
{
	SetColor(14);
		cout << "    CORRECT!!\n";
	SetColor();
	cout <<"======================================================\n" ;
	SetColor(30);
	cout << "Hints:\n\n";
	SetColor(14);
	cout << "-horizontal\n";
	SetColor();
	cout << "1.If you ask me a question I will give you an ******.\n"
	     << "2.A dark reflection of you that appears on the ground.\n\n";
	SetColor(14);    
	cout << "-vertical\n";
	SetColor();     
	cout << "3.The act of moving your legs to get somewhere.\n"
	     << "4.******** are used for cutting paper.\n"
	     << "5.You lay your head on ****** when you sleep.\n"
	     << "6.A small sweet australian bear.\n\n";
	
	for(int i = 0; i < 13; i++)
	{
		for(int j = 0; j < 8; j++)
			cout << table[i][j] << " ";
		cout <<"\n";
	}
	return table;
}
bool crossword1(char** table, int num, string ans)
{
	for(int i = 0; i < ans.size(); i++)
		ans[i] = tolower(ans[i]);
	bool result = false;
	if(num == 1)
	{
		if(ans != "answer")
		{
			SetColor(12);
			cout << "    WRONG ANSWER!!\n";
			SetColor();
			return result; 
		}
		result = true;
		string temp = "answer";
		for(int i = 0; i < ans.size(); i++)
			table[5][i] = temp[i];
	}
	else if(num == 2)
	{
		if(ans != "shadow")
		{
			SetColor(12);
			cout << "    WRONG ANSWER!!\n";
			SetColor();
			return result; 
		}
		result = true;
		string temp = "shadow";
		for(int i = 0; i < ans.size(); i++)
			table[8][2 + i] = temp[i];
	}
	else if(num == 3)
	{
		if(ans != "walk")
		{
			SetColor(12);
			cout << "    WRONG ANSWER!!\n";
			SetColor();
			return result; 
		}
		result = true;
		string temp = "walk";
		for(int i = 0; i < ans.size(); i++)
			table[4 + i][0] = temp[i];
	}
	else if(num == 4)
	{
		if(ans != "scissors")
		{
			SetColor(12);
			cout << "    WRONG ANSWER!!\n";
			SetColor();
			return result; 
		}
		result = true;
		string temp = "scissors";
		for(int i = 0; i < ans.size(); i++)
			table[5 + i][2] = temp[i];
	}
	else if(num == 5)
	{
		if(ans != "pillow")
		{
			SetColor(12);
			cout << "    WRONG ANSWER!!\n";
			SetColor();
			return result; 
		}
		result = true;
		string temp = "pillow";
		for(int i = 0; i < ans.size(); i++)
			table[i][3] = temp[i];
	}
	else if(num == 6)
	{
		if(ans != "koala")
		{
			SetColor(12);
			cout << "    WRONG ANSWER!!\n";
			SetColor();
			return result; 
		}
		result = true;
		string temp = "koala";
		for(int i = 0; i < ans.size(); i++)
			table[7 + i][6] = temp[i];
	}
	else
	{
		SetColor(12);
		cout << "    WRONG NUMBER!!\n";
		SetColor();
		return false; 
	}
	if(result)
	{
		
	}

	return result;
}


char** crossword_Q2()
{
	cout <<"======================================================\n" ;
	SetColor(30);
	cout << "\nHints:\n\n";
	SetColor(14);
	cout << "-horizontal\n";
	SetColor();
	cout << "1.A hole in the side of a hill where bears like to hide.\n"
	     << "2.You're not prisoned.\n"
		 << "3.Measured by the clock.\n"
	     << "4.A cloth covering the neck.\n\n";
	SetColor(14);    
	cout << "-vertical\n";
	SetColor();     
	cout << "5.Saturday and Sunday.\n"
	     << "6.A small wooden writing stick.\n\n";
	
	char** table = new char*[11];
	for(int i = 0; i < 11; i++)
	{
		table[i] = new char[7];
		for(int j = 0; j < 7; j++)
			table[i][j] = 0;
	}
	
	for(int i = 0; i < 4; i++)
		table[2][2+i] = '_';
	
	for(int i = 0; i < 4; i++)
		table[1][3 + i] = '_';	
	
	for(int i = 0; i < 4; i++)
		table[6][0 + i] = '_';
	
	for(int i = 0; i < 5; i++)
		table[8][2 + i] = '_';
	
	for(int i = 0; i < 7; i++)
		table[i][5] = '_';
	
	for(int i = 0; i < 6; i++)
		table[5 + i][3] = '_';
	
	table[2][2] = '1';
	table[1][3] = '2';
	table[6][0] = '3';
	table[8][2] = '4';
	table[0][5] = '5';
	table[5][3] = '6';
	for(int i = 0; i < 11; i++)
	{
		for(int j = 0; j < 7; j++)
			cout << table[i][j] << " ";
		cout <<"\n";
	}
	return table;
}
char** crossword_Q2(char** table)
{
	SetColor(14);
		cout << "    CORRECT!!\n";
	SetColor();
	cout <<"======================================================\n" ;
	SetColor(30);
	cout << "\nHints:\n\n";
	SetColor(14);
	cout << "-horizontal\n";
	SetColor();
	cout << "1.A hole in the side of a hill where bears like to hide.\n"
	     << "2.You're not prisoned.\n"
		 << "3.Measured by the clock.\n"
	     << "4.A cloth covering the neck.\n\n";
	SetColor(14);    
	cout << "-vertical\n";
	SetColor();     
	cout << "5.Saturday and Sunday.\n"
	     << "6.A small wooden writing stick.\n\n";
	
	for(int i = 0; i < 11; i++)
	{
		for(int j = 0; j < 7; j++)
			cout << table[i][j] << " ";
		cout <<"\n";
	}
	return table;
}
bool crossword2(char** table, int num, string ans)
{
	for(int i = 0; i < ans.size(); i++)
		ans[i] = tolower(ans[i]);
	bool result = false;
	if(num == 1)
	{
		if(ans != "cave")
		{
			SetColor(12);
			cout << "    WRONG ANSWER!!\n";
			SetColor();
			return result; 
		}
		result = true;
		string temp = "cave";
		for(int i = 0; i < ans.size(); i++)
			table[2][2+i] = temp[i];
	}
	else if(num == 2)
	{
		if(ans != "free")
		{
			SetColor(12);
			cout << "    WRONG ANSWER!!\n";
			SetColor();
			return result; 
		}
		result = true;
		string temp = "free";
		for(int i = 0; i < ans.size(); i++)
			table[1][3 + i] = temp[i];
	}
	else if(num == 3)
	{
		if(ans != "time")
		{
			SetColor(12);
			cout << "    WRONG ANSWER!!\n";
			SetColor();
			return result; 
		}
		result = true;
		string temp = "time";
		for(int i = 0; i < ans.size(); i++)
			table[6][0 + i] = temp[i];
	}
	else if(num == 4)
	{
		if(ans != "scarf")
		{
			SetColor(12);
			cout << "    WRONG ANSWER!!\n";
			SetColor();
			return result; 
		}
		result = true;
		string temp = "scarf";
		for(int i = 0; i < ans.size(); i++)
			table[8][2 + i] = temp[i];
	}
	else if(num == 5)
	{
		if(ans != "weekend")
		{
			SetColor(12);
			cout << "    WRONG ANSWER!!\n";
			SetColor();
			return result; 
		}
		result = true;
		string temp = "weekend";
		for(int i = 0; i < ans.size(); i++)
			table[i][5] = temp[i];
	}
	else if(num == 6)
	{
		if(ans != "pencil")
		{
			SetColor(12);
			cout << "    WRONG ANSWER!!\n";
			SetColor();
			return result; 
		}
		result = true;
		string temp = "pencil";
		for(int i = 0; i < ans.size(); i++)
			table[5 + i][3] = temp[i];
	}
	else
	{
		SetColor(12);
		cout << "    WRONG NUMBER!!\n";
		SetColor();
		return false; 
	}
	if(result)
	{
		SetColor(14);
		cout << "    CORRECT!!\n";
		SetColor();
	}

	return result;
}
bool voc_puzzle1()
{
	bool result = false;
	cout<<"--------------------------------------------------------------------------------\n";
	SetColor(14);
	cout<<"█ █ █ ████ ████ ███ \n"
		<<"█ █ █ █    █ █    █ █    █\n"
		<<"█ █ █ █    █ ███   █    █\n"
		<<"█ █ █ █    █ █  █   █    █\n" 
		<<" █  █  ████ █   █  ███ \n\n"
		
		<<"         ████ █    █ ████ ████ █       ████\n"
		<<"         █    █ █    █      █       █  █       █      \n"
		<<"         ███   █    █  ██     ██    █       ████\n"
		<<"         █       █    █ █       █       █       █      \n" 
		<<"         █       ████ ████ ████ ████ ████\n";  
	SetColor();
	cout<<"\n(push ";
	SetColor(112);
	cout<<"Enter";
	SetColor();
	cout<<" to keep reading)\n\n"
	<<"You have to find 5 words in the word puzzle.\n";
	while( getchar()!='\n') ;
	cout<<"If you can spend less than 120 sec, you will pass the stage!\n";
	while( getchar()!='\n') ;
	cout<<"Ready? Press ";
	SetColor(112);
	cout<<"Enter";
	SetColor();
	cout<<" to start! \n";
	while( getchar()!='\n') ;
	SetColor(30);
	char puzzle[7][7] = {{'e', 'a', 'p', 'p', 'l','y','w'},
						{'z', 'c', 'b', 'l', 'u','e','s'},
						{'c', 'v', 'r', 'r', 'q','n','r'},
						{'o', 'm', 'e', 'b', 'c','g','d'},
						{'q', 'g', 'a', 'r', 'b','a','j'},
						{'s', 'z', 'k', 'z', 'g','g','z'},
						{'e', 'x', 'c', 'u', 's', 'e','f'}};
	for (int i=0; i<7; i++) {
		cout<<" "; 
		for (int j=0; j<7; j++) {
			 cout << puzzle[i][j] << " "; 
		}
	cout << "\n"; 
	}
	SetColor();
	cout<<"\n"<<"Please enter your answers:\n\n";
	int n=5;

	char ans1[]="excuse";
	char ans2[]="apply";
	char ans3[]="blue";
	char ans4[]="engage";
	char ans5[]="break";
	clock_t start, stop;
	start = clock(); //開始時間
	while(n>0){
		char input[10];
		SetColor(30);
		cin >> input;
		if(strcmp(ans1,input)==0||strcmp(ans2,input)==0||strcmp(ans3,input)==0||strcmp(ans4,input)==0||strcmp(ans5,input)==0){
			n-=1;
			SetColor(14);
		}
		else{
			SetColor(12);
			cout<<"  "<<"Wrong Answer! Are you OK? \n";
			continue; 
		}
		if(n==4){
			cout<<"  "<<"Good Job! But there are four more words! \n";	
		}
		if(n==3){
			cout<<"  "<<"Yes! Keep finding! \n";	
		}
		if(n==2){
			cout<<"  "<<"Two more! Can you find them ??? \n";	
		}
		if(n==1){
			cout<<"  "<<"One more word! Quickly! \n";	
		}
		if(n==0){
			cout<<"  "<<"Ya~ ~ Finally~ ~ \n";	
		}
		
	}
	stop = clock(); //結束時間
	double time=(double(stop - start) / CLOCKS_PER_SEC);
	SetColor();
	cout << "\n"<<"You totally spent "<< time <<" sec!\n\n" ;
	SetColor(158);
	if(time>120){
		cout<<"Sorry! You fail the stage.QQ\n\n";
	}
	else{
		cout<<"Congratulations! You pass the stage ~ ~ :))\n\n ";
		result = true;
	}
	SetColor();
	return result;
}

bool voc_puzzle2()
{
	bool result = false;
	cout<<"--------------------------------------------------------------------------------\n";		
	SetColor(11);
	cout<<"█ █ █ ████ ████ ███ \n"
		<<"█ █ █ █    █ █    █ █    █\n"
		<<"█ █ █ █    █ ███   █    █\n"
		<<"█ █ █ █    █ █  █   █    █\n" 
		<<" █  █  ████ █   █  ███ \n\n"
		
		<<"         ████ █    █ ████ ████ █       ████\n"
		<<"         █    █ █    █      █       █  █       █      \n"
		<<"         ███   █    █  ██     ██    █       ████\n"
		<<"         █       █    █ █       █       █       █      \n" 
		<<"         █       ████ ████ ████ ████ ████\n";  
	SetColor();
	cout<<"\n(push ";
	SetColor(112);
	cout<<"Enter";
	SetColor();
	cout<<" to keep reading)\n\n"
	<<"You have to find 5 words in the word puzzle.\n";
	while( getchar()!='\n') ;
	cout<<"If you can spend less than 120 sec, you will pass the stage!\n";
	while( getchar()!='\n') ;
	cout<<"Ready? Press ";
	SetColor(112);
	cout<<"Enter";
	SetColor();
	cout<<" to start! \n";
	while( getchar()!='\n') ;
	SetColor(30);
	char puzzle[7][7] = {{'z', 'i', 'm', 'u', 'o','u','p'},
						{'a', 'c', 'h', 'i', 'e','v','e'},
						{'q', 'r', 'z', 't', 'f','w','a'},
						{'x', 'e', 'g', 'r', 'f','i','c'},
						{'j', 'n', 'a', 's', 'o','f','e'},
						{'l', 'i', 'b', 'e', 'r','a','l'},
						{'g', 'k', 'o', 'q', 't', 'a','d'}};
	for (int i=0; i<7; i++) {
		cout<<" "; 
		for (int j=0; j<7; j++) {
			 cout << puzzle[i][j] << " "; 
		}
	cout << "\n"; 
	}
	SetColor();
	cout<<"\n"<<"Please enter your answers:\n\n";
	int n=5;

	char ans1[]="achieve";
	char ans2[]="effort";
	char ans3[]="liberal";
	char ans4[]="peace";
	char ans5[]="road";
	clock_t start, stop;
	start = clock(); //開始時間
	while(n>0){
		char input[10];
		SetColor(30);
		cin >> input;
		if(strcmp(ans1,input)==0||strcmp(ans2,input)==0||strcmp(ans3,input)==0||strcmp(ans4,input)==0||strcmp(ans5,input)==0){
			n-=1;
			SetColor(14);
		}
		else{
			SetColor(12);
			cout<<"  "<<"Wrong Answer! Are you OK? \n";
			continue; 
		}
		if(n==4){
			cout<<"  "<<"Good Job! But there are four more words! \n";	
		}
		if(n==3){
			cout<<"  "<<"Yes! Keep finding! \n";	
		}
		if(n==2){
			cout<<"  "<<"Two more! Can you find them ??? \n";	
		}
		if(n==1){
			cout<<"  "<<"One more word! Quickly! \n";	
		}
		if(n==0){
			cout<<"  "<<"Ya~ ~ Finally~ ~ \n";	
		}
		
	}
	stop = clock(); //結束時間
	double time=(double(stop - start) / CLOCKS_PER_SEC);
	SetColor();
	cout << "\n"<<"You totally spent "<< time <<" sec!\n\n" ;
	SetColor(158);
	if(time>120){
		cout<<"Sorry! You fail the stage.QQ\n\n";
	}
	else{
		cout<<"Congratulations! You pass the stage ~ ~ :))\n\n ";
		result = true;
	}
	SetColor();
	return result;
}



bool checkAnswer(int correct, int answer)
{
    int count = 0;
    int upper = 0;
    int lower = 0;
    bool result = false;
    
    lower = 1;
    upper = 100;
    
    while(true){
    	SetColor(30);
        cout << "Key in a number " << lower << "~" << upper << " ! \n";
        SetColor();
		cin >> answer;
        count++;
        
        if(correct == answer){
        	SetColor(12);
            cout << "     Congratulation! You get the right answer!! \n\n";
            SetColor();
			cout << "The correct number is = " << correct << "\n";
			cout << "You totally use " << count << " times!\n\n";
            if(count < 10){
            	SetColor(158);
                cout << "Good job! You pass this stage! \n\n";
                SetColor();
				result = true;
            }
            cout << endl;
            break;
        }
        else if(correct < answer && answer < upper && answer > lower){
            SetColor(12);
			cout << "     The correct number is smaller than " << answer << "\n";
            SetColor();
			cout << "You still have " << 10-count << " chances! Keep trying! \n";
			upper = answer;
        }
        else if(correct > answer && answer < upper && answer > lower){
            SetColor(12);
			cout << "     The correct number is larger than " << answer << "\n";
            SetColor();
			cout << "You still have " << 10-count << " chances! Keep trying! \n";
			lower = answer;
        }
        else{
        	SetColor(12);
            cout << "     Please enter a reasonable number! \n";
            SetColor();
			cout << "You still have " << 10-count << " chances! Keep trying! \n";
        }
        cout << endl;
    }
    
    if(count > 10){
    	SetColor(158);
    	cout << "Oops! You fail the game. Keep going~ \n\n";
        SetColor();
		cout << endl;
    }
    
    return result;
}

bool guess_num1()
{
	bool result = false;
    char check;
    cout<<"--------------------------------------------------------------------------------\n";
	SetColor(13);
	cout<<"█    █ █       ████ ████ █    █ ████ ████ ████ \n"
		<<"█    █ █          █       █    ████ █    █    █    █\n"
		<<"█    █ █          █       █    █ █ █ ████    █    ████\n"
		<<"█    █ █    █    █       █    █ █ █ █    █    █    █ \n" 
		<<" ███  ████    █    ████ █    █ █    █    █    ████ \n\n"
		
		<<"         █    █ █    █ █    █ ████ ████ ████\n"
		<<"         ██  █ █    █ ████ █    █ █       █    █ \n"
		<<"         ████ █    █ █ █ █ ███   ████ ████ \n"
		<<"         █  ██ █    █ █ █ █ █    █ █       █  █    \n" 
		<<"         █    █ ████ █    █ ████ ████ █   █\n";  
		SetColor();
		cout<<"\n(push ";
		SetColor(112);
		cout<<"Enter";
		SetColor();
		cout<<" to keep reading)\n\n"
			<<"The game is a number guessing game. Player needs to guess a number between 1 to 100. \n";
       	while( getchar()!='\n') ;
		cout<<"The system will tell you whether it's larger or smaller than the correct answer. \n";
		while( getchar()!='\n') ;
		cout << "You have 10 chances to get the right answer and pass this stage. \n\n";
		while( getchar()!='\n') ;
		cout<<"\n\nReady? Press ";
		SetColor(112);
		cout<<"Enter";
		SetColor();
		cout<<" to start! \n";
		while( getchar()!='\n') ;	
	    int correct = 62;
    	int answer = 0;
        result = checkAnswer(correct, answer);
    
    return result;
}

bool guess_num2()
{
	bool result = false;
    cout<<"--------------------------------------------------------------------------------\n";
	SetColor(13);
	cout<<"█    █ █       ████ ████ █    █ ████ ████ ████ \n"
		<<"█    █ █          █       █    ████ █    █    █    █\n"
		<<"█    █ █          █       █    █ █ █ ████    █    ████\n"
		<<"█    █ █    █    █       █    █ █ █ █    █    █    █ \n" 
		<<" ███  ████    █    ████ █    █ █    █    █    ████ \n\n"
		
		<<"         █    █ █    █ █    █ ████ ████ ████\n"
		<<"         ██  █ █    █ ████ █    █ █       █    █ \n"
		<<"         ████ █    █ █ █ █ ███   ████ ████ \n"
		<<"         █  ██ █    █ █ █ █ █    █ █       █  █    \n" 
		<<"         █    █ ████ █    █ ████ ████ █   █\n";  
		SetColor();
		cout<<"\n(push ";
		SetColor(112);
		cout<<"Enter";
		SetColor();
		cout<<" to keep reading)\n\n"
			<<"The game is a number guessing game. Player needs to guess a number between 1 to 100. \n";
       	while( getchar()!='\n') ;
		cout<<"The system will tell you whether it's larger or smaller than the correct answer. \n";
		while( getchar()!='\n') ;
		cout << "You have 10 chances to get the right answer and pass this stage. \n\n";
		while( getchar()!='\n') ;
		cout<<"\n\nReady? Press ";
		SetColor(112);
		cout<<"Enter";
		SetColor();
		cout<<" to start! \n";
		while( getchar()!='\n') ;
        int correct = 37;
        int answer = 0;
        result = checkAnswer(correct, answer);
        
    return result;
}
bool questions(int num)
{
	SetColor(14);
	cout<<"████    ████ █    █ ███     ████\n"
		<<"█    █    █    █ ██  █ █    █   █    █\n"
		<<"█ █ █    ████ ████ █    █   ████\n"
		<<"█  ██    █    █ █    █ █    █   █    █\n" 
		<<"████    █    █ █    █ ███     █    █\n\n"; 
	SetColor();
	ifstream question;
	question.open("choice question.txt");
	
	string questions[15];
	string choices[15][4];
	char ans[15] = {0};
	if(question)
	{
		for(int i = 0; i < 15; i++)
		{
			question >> questions[i] >> ans[i];
			for(int j = 0; j < 4; j++)
				question >> choices[i][j];
		}
	}
	choice_Q(num, questions, choices);
	
	char decide = 0;
	cin >> decide;
	bool result = choice(num, ans, decide);
	if(result){
		SetColor(13);
		cout << "    CORRECT!!\n";
		SetColor();
		cout << "===================================\n\n";
	}
	else{
		SetColor(12);
		cout << "    WRONG ANSWER QQ\n";
		SetColor();
		cout << "===================================\n\n";
	}
	return result;
}

void choice_Q(int num, string questions[15], string choices[][4])
{
	cout << questions[num-1] << "\n"; //question & choices
	cout << "(A)" << choices[num - 1][0] << "\n"
		 << "(B)" << choices[num - 1][1] << "\n"
		 << "(C)" << choices[num - 1][2] << "\n"
		 << "(D)" << choices[num - 1][3] << "\n";
}
bool choice(int num, char ans[], char choice)
{
	if(choice == ans[num-1] || choice == tolower(ans[num-1]))
		return true;
	
	return false;
} 
bool gophers(int num)
{
    bool result = false;
    char check;
    cout<<"----------------------------------------------------------------------------------------------------------\n";
    SetColor(7);
	cout<<"█ █ █ █    █ ████ ████ █    █    ████     █     █ ████ █       ████\n"
		<<"█ █ █ █    █ █    █ █       █   █     █    █     ██ ██ █    █ █       █\n"
		<<"█ █ █ ████ ████ █       ███   █ ████ █  █ █  █ █    █ █       ████\n"
		<<"█ █ █ █    █ █    █ █       █   █     █    █     █     █ █    █ █       █\n" 
		<<" █  █  █    █ █    █ ████ █    █    █    █     █     █ ████ ████ ████ \n\n";
	SetColor();
    cout << "Press ENTER to read the introduction." << "\n";
    
    if((check = getchar()) == '\n'){
        cout << "You will see a style box. \n";
        cout << "This is a 3*3 style box. \n\n";
        
        SetColor(47);
        cout << "Q   W   E \n"
        << "A   S   D \n"
        << "Z   X   C \n\n";
        SetColor();
        cout << "You have to push the buttom on your keyboard when the block becomes red. \n";
        cout << "If you successfully push all the 30 assigned characters showed up, then you win this stage. You only have 40 sec! \n";
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
                        SetColor(65);
                        cout << "Q";
                        SetColor(47);
                        cout << "   W   E \n"
                        << "A   S   D \n"
                        << "Z   X   C \n\n";
                        SetColor();
                        cin >> get;
                        Beep(523,300);
						if(get == "Q" || get == "q"){
                            get.clear();
                            system("cls");
                            break;
                        }
                        while(get != "Q" || get != "q"){
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            Beep(523,300);

                            if(get == "Q" || get == "q"){
                                get.clear();
                                system("cls");
                                break;
                            }
                        }
                        break;
                        
                    case(2):
                        SetColor(47);
                        cout << "Q   ";
                        SetColor(65);
                        cout << "W";
                        SetColor(47);
                        cout << "   E \n";
                        cout << "A   S   D \n"
                        << "Z   X   C \n\n";
                        SetColor();
                        cin >> get;
                        Beep(659,300);
                        if(get == "W" || get == "w"){
                            get.clear();
                            system("cls");
                            break;
                        }
                        while(get != "W" || get != "w"){
                            SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            Beep(659,300);

                            if(get == "W" || get == "w"){
                                get.clear();
                                system("cls");
                                break;
                            }
                        }
                        break;
                        
                    case(3):
                        SetColor(47);
                        cout << "Q   W   ";
                        SetColor(65);
                        cout << "E \n";
                        SetColor(47);
                        cout << "A   S   D \n"
                        << "Z   X   C \n\n";
                        SetColor();
						cin >> get;
                        Beep(784,300);								
                        if(get == "E" || get == "e"){
                            get.clear();
                            system("cls");
                            break;
                        }
                        while(get != "E" || get != "e"){
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            Beep(784,300);
                            if(get == "E" || get == "e"){
                                get.clear();
                                system("cls");
                                break;
                            }
                        }
                        break;
                        
                    case(4):
                        SetColor(47);
                        cout << "Q   W   E \n";
                        SetColor(65);
                        cout << "A   ";
                        SetColor(47);
                        cout << "S   D \n"
                        << "Z   X   C \n\n";
 						SetColor();	
                        cin >> get;
                        Beep(988,300);
                        if(get == "A" || get == "a"){
                            get.clear();
                            system("cls");	
                            break;
                        }
                        while(get != "A" || get != "a"){
						    cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            Beep(988,300);
                            if(get == "A" || get == "a"){
                                get.clear();
                                system("cls");
                                break;
                            }
                        }
                        break;
                        
                    case(5):
                        SetColor(47);
                        cout << "Q   W   E \n"
                        << "A   ";
                        SetColor(65);
                        cout << "S   ";
                        SetColor(47);
                        cout << "D \n"
                        << "Z   X   C \n\n";
						SetColor();
                        cin >> get;
                        Beep(587,300);
                        if(get == "S" || get == "s"){
                            get.clear();
                            system("cls");
                            break;
                        }
                        while(get != "S" || get != "s"){
				            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            Beep(587,300);
                            if(get == "S" || get == "s"){
                                get.clear();
                                system("cls");
                                break;
                            }
                        }
                        break;
                        
                    case(6):
                        SetColor(47);
                        cout << "Q   W   E \n"
                        << "A   S   ";
                        SetColor(65);
                        cout << "D \n";
                        SetColor(47);
                        cout << "Z   X   C \n\n";
                        SetColor();
                        cin >> get;
                        Beep(698,300);
                        if(get == "D" || get == "d"){
                            get.clear();
                            system("cls");
                            break;
                        }
                        while(get != "D" || get != "d"){
                            SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            Beep(698,300);
                            if(get == "D" || get == "d"){
                                get.clear();
                                system("cls");
                                break;
                            }
                        }
                        break;
                        
                    case(7):
                        SetColor(47);
                        cout << "Q   W   E \n"
                        << "A   S   D \n";
                        SetColor(65);
                        cout << "Z";
                        SetColor(47);
                        cout << "   X   C \n\n";
                        SetColor();
						cin >> get;
                        Beep(880,300);
                        if(get == "Z" || get == "z"){
                            get.clear();
                            system("cls");
                            break;
                        }
                        while(get != "Z" || get != "z"){
                            SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            Beep(880,300);
                            if(get == "Z" || get == "z"){
                                get.clear();
                                system("cls");
                                break;
                            }
                        }
                        break;
                        
                    case(8):
                        SetColor(47);
                        cout << "Q   W   E \n"
                        << "A   S   D \n"
                        << "Z   ";
                        SetColor(65);
                        cout << "X";
                        SetColor(47);
                        cout << "   C \n\n";
                        SetColor();
                        cin >> get;
                        Beep(1060,300);
                        if(get == "X" || get == "x"){
                            get.clear();
                            system("cls");
                            break;
                        }
                        while(get != "X" || get != "x"){
                            SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            Beep(1060,300);
                            if(get == "X" || get == "x"){
                                get.clear();
                                system("cls");
                                break;
                            }
                        }
                        break;
                        
                    case(9):
                        SetColor(47);
                        cout << "Q   W   E \n"
                        << "A   S   D \n"
                        << "Z   X   ";
                        SetColor(65);
                        cout << "C \n\n";
                        cin >> get;
                        Beep(1330,300);
                        if(get == "C" || get == "c"){
                            get.clear();
							system("cls");
                            break;
                        }
                        while(get != "C" || get != "c"){
                            SetColor();
                            cout << "Keep focus, OK? \n";
                            get.clear();
                            cin >> get;
                            Beep(1330,300);
                            if(get == "C" || get == "c"){
                                get.clear();
                                system("cls");
                                break;
                            }
                        }
                        break;
                }
            }
            stop = time(NULL);
            double time1 = double(stop - start);
            
            SetColor(206);
            if(time1 <= 40){
                cout << "\nCongratulation! You pass this game. \n"
                << "You only use " << time1 << " sec \n";
                result = true;
            }
            else{
                cout << "\nOops! You fail this game because overtime. \n"
                << "You spend " << time1 << " sec \n";
            }
        }
    }
    
    return result;
}
