// ����騩 ��ࠡ��
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

#define dx  5  // 蠣 �⪨ �� �
#define dy  5  // 蠣 �⪨ �� Y

// ����� ��ࠡ���
void ship(int x, int y, int color )
{
    // x,y - ���न���� ������� �窨
    // color - 梥� ����� 

    setcolor(color);
    
    //  �����
    moveto(x,y);
    lineto(x,y-2*dy);
    lineto(x+10*dx,y-2*dy);
    lineto(x+11*dx,y-3*dy);
    lineto(x+17*dx,y-3*dy);
    lineto(x+14*dx,y);
    lineto(x,y);
    
    // �����ன��
    moveto(x+3*dx,y-2*dy);
    lineto(x+4*dx,y-3*dy);
    lineto(x+4*dx,y-4*dy);
    lineto(x+13*dx,y-4*dy);
    lineto(x+13*dx,y-3*dy);
    line(x+5*dx,y-3*dy,x+9*dx,y-3*dy);
    
    // ����⠭᪨� ���⨪
    rectangle(x+8*dx,y-4*dy,x+11*dx,y-5*dy);
    
    // ��㡠
    rectangle(x+7*dx,y-4*dy,x+8*dx,y-7*dy);
    
    // ��������
    circle(x+12*dx,y-2*dy,dx/2);
    circle(x+14*dx,y-2*dy,dx/2);
    
    // ����
    line(x+10*dx,y-5*dy,x+10*dx,y-10*dy);
    
    // �᭠�⪠
    moveto(x+17*dx,y-3*dy);
    lineto(x+10*dx,y-10*dy);
    lineto(x,y-2*dy);
}

#define PATHTODRIVER "c:\\borlandc\\bgi\\"

void main(void)
{
    int x,y;  // ���न���� ��ࠡ�� (������� �窨)
    int maxx; // ����. �ࠩ��� �ࠢ�� �窨 �࠭�


    int gdriver = DETECT; // �ࠩ���
    int gmode;            // ०��
    int errorcode;        // ��� �訡��

    initgraph(&gdriver, &gmode, PATHTODRIVER);
    errorcode = graphresult();

    if (errorcode != grOk) // �訡�� ���樠����樨 ����᪮�� ०���
    {
      printf("�訡��: %d\n", errorcode);
      puts("��� �����襭�� �ணࠬ�� ������ <Enter>");
      getch();
      return;
    }

    maxx = getmaxx();
    x = -10 ; // ��ࠡ�� �믫뢠�� ��-�� �ࠢ�� �࠭��� �࠭�
    y = 100;
    while ( x <  maxx)
    {
        ship(x,y, GREEN);  // ���ᮢ��� ��ࠡ��
        delay(20);
        ship(x,y,BLACK);   // ����� ��ࠡ��
        x += 5;
    }
    setcolor(GREEN);
    outtextxy(10,10,"���� �����襭!");
    outtextxy(10,24,"������ <Enter>");
    getch();
    closegraph(); // ��室 �� ����᪮�� ०���
}

