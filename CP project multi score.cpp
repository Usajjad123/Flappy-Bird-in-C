#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
//#include <iostream>

//using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoXY(int x, int y); 
void printscore(int score);
void printspace(int i,int j);
void printstar(int i);
int main() {
	srand(time(NULL));
	int i1,j1,i2,j2,i3,j3,score=0,counter=0;
	i1=3+rand()%21,i2=3+rand()%21,i3=3+rand()%21;
	j1=35,j2=45,j3=55;
	int i=0;
	
	while (i<=22){
	counter++;
	system("cls");
	if (GetAsyncKeyState(VK_SPACE)){
		if (i>=0){
		i-=2;
		}
	}
	i++; 
	if (GetAsyncKeyState(VK_UP)){
		system("pause");
	}
   	printspace(i1,j1);
   	printspace(i2,j2);
   	printspace(i3,j3);
   	printstar(i);
   	printscore(score);
   	if(j1==17){
   		if (i1==i||i1==i+1||i1==i-1||i1==i-2){
   			
   			
		   }else	goto end;
	   }
	if(j2==17){
   		if (i2==i||i2==i+1||i2==i-1||i2==i-2){
   		
   			
		   }else	goto end; 
	   }
	if(j3==17){
   		if (i3==i||i3==i+1||i3==i-1||i3==i-2){
   		
   			
		   }else	goto end;
	   }
	Sleep(10000);
	if (counter%1==0){
	j1--;
	j2--;
	j3--;
	if (j1<=0){
		j1=35;
		i1=3+rand()%21;
	}
	if (j2<=0){
		j2=35;
		i2=3+rand()%21;
	}
	if (j3<=0){
		j3=35;
		i3=3+rand()%21;
	}}
	
	 
	} 
	end:
	system("cls");
	printf ("%d",score);
	return 0;
}

void printstar(int i){
	if (i<=0){
		i=1;
	}
	gotoXY (17,i);
	printf ("*");
	
}
void printspace(int i,int j){
	int a;
	for (a=1;a<=24;a++){
	gotoXY(j,a);
	if (a==i||a==i-1||a==i+1||a==i-2){
		printf (" ");
	}else{
	printf ("|");
	}
	}
}
void printscore(int score){
	gotoXY(60,4);
	printf ("Current Score: %d",score);
}
void gotoXY(int x, int y) 
{ 
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}

