#include<stdio.h>
#include<windows.h>
#include<conio.h>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

void gotoxy(int x, int y){
	HANDLE hCon; hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;	dwPos.X=x;	dwPos.Y=y;
	
	SetConsoleCursorPosition(hCon,dwPos);
}

void OcultarCursor(){
	HANDLE hCon; hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci; cci.dwSize = 2; cci.bVisible = FALSE;
	
	SetConsoleCursorInfo(hCon,&cci);
}

class NAVE{
	int x,y;
public:
	NAVE(int _x, int _y): x(_x),y(_y){}
	void pintar(); void borrar(); void mover();
	 
};

void NAVE::pintar(){
	gotoxy(x,y);   printf("  %c",30);
	gotoxy(x,y+1); printf(" %c%c%c",40,207,41);
	gotoxy(x,y+2); printf("%c%c %c%c",30,190,190,30);
}

void NAVE::borrar(){
	gotoxy(x,y);   printf ("     ");
	gotoxy(x,y+1); printf ("     ");
	gotoxy(x,y+3); printf ("     ");
}

void NAVE::mover(){
	if (kbhit()){
			char tecla = getch(); borrar ();	
			if (tecla==IZQUIERDA) x--; if (tecla==DERECHA) x++; if (tecla==ARRIBA) y--; if (tecla==ABAJO) y++; pintar();
			gotoxy(x,y); printf("*");
		}
}

int main (){
	OcultarCursor();
	NAVE N(7,7);
	N.pintar();
	bool game_over=false;
	while(!game_over){
		N.mover();
		Sleep(30);
	}
	return 0;
}
