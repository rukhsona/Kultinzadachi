#include "stdio.h"
#include "conio.h"
#include "graphics.h"

#define HB 10 // ���ᨬ��쭮� ������⢮ ���祭��
#define WS 300
#define HS 150

   char  head[40];    // ���������
   float kurs[HB];    // �����
   char* date[HB][5]; // ������ ������ - ��� � �ଠ� dd.mm

   int nrec; // ������⢮ ����⮢ ������ 

   int dx;     // 蠣 �� �
   int py[HB];  // y-���न���� �祪 �� ��䨪�

// ���� � ��ࠡ�⪠ ��室��� ������
void  LoadData()
{

     FILE* f; // 䠩� ������

     int i;

    if ( (f = fopen("c:\\borlandc\\cpp\\kurs.txt", "rt")) == NULL)
    {
        printf("�訡�� ����㯠 � 䠩�� ������\n");
        getch();
        return;
    }

    fscanf(f,"%s",head);
    printf("%s\n",head);

    i = 0;
    while ((! feof(f) ) && ( i < HB ))
    {
        fscanf(f,"%s",&date[i]);
        printf("%s\n",date[i]);

        fscanf(f,"%f",&kurs[i]);
        printf("%5.2f\n",kurs[i]);
        i++;
    }
    nrec = i;
    fclose(f);

    // ���� ��������� ����� ���ᨢ�
    float min = kurs[0];
    float max = kurs[0];

    for ( i = 1; i < nrec; i++ )
    {
        if ( kurs[i] < min)
            min = kurs[i];

        if ( kurs[i] > max)
            max = kurs[i];
     }

    // ���᫨�� y-���न���� �祪
    for (i=0; i < nrec; i++)
        py[i] = (HS-20) * (kurs[i]- min)/(max - min)+2;

    return;
}

void Graphic()
{
    int x0, y0;
    int x;

    int dx;
    int i;

    char st[20];

    x0 = 10;
    y0 = HS + 20;
    dx = (WS - 2* x0)/ (nrec );

    outtextxy(x0,10, head );
    rectangle(1,1,WS,y0+10);

    x =x0;
    moveto(x,y0-py[0]);
    x =x +dx;

    for ( i = 1; i < nrec; i++)
    {
      lineto(x,y0-py[i]);
       x= x+dx;
    }

    x = x0;
    for ( i = 0; i < nrec; i++)
    {
     sprintf(st,"%2.2f", kurs[i]);
     outtextxy(x,y0 - py[i]-10,st);
       x= x+dx;
    }
}

void main(void)
{
   int gdriver = DETECT;
   int gmode;            
   int errorcode;        

   initgraph(&gdriver, &gmode, "c:\\borlandc\\bgi\\");
   errorcode = graphresult();

   if (errorcode != grOk)  // (r)����  �-�� "� ��� ?� �. �?�� 
   {
      printf("�訡��: %d\n", errorcode);
      puts("��� �����襭�� ������ <Enter>");
      getch();
      return;
   }

   LoadData();
   Graphic();

   getch();
   closegraph();
}

