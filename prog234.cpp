// �⮫���� ����ࠬ��
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

#define PATHTODRIVER "c:\\borlandc\\bgi\\"

    char *mes[] ={"�����\0","�஥�\0",
                 "�⢥ப\0","���ப\0"};

    int n[4];   // ������⢮ ���ப, �⢥ப,
                // �஥� � �����

    float p[4]; // ��業� ������ �業��
    
    int h[4];   // ���� �⮫����� ����ࠬ�

// ���� � ��ࠡ�⪠ ��室��� ������
void obr()
{
    int s;      // �ᥣ� �業��
    int m;      // ����� ���ᨬ��쭮�� �-� ���ᨢ� n
    int i;      // ������ ���ᨢ�

    puts("������ ��室�� �����:");
    for (i = 3; i >= 0; i--)
    {
        printf("%s ->", mes[i]);
        scanf("%i", &n[i]);
    }
    
    // ��ࠡ�⪠
    s = 0;

    // �ᥣ� �業��
    for (i = 0; i < 4; i++)
        s += n[i];

    // ��業� ������ �業��
    for (i = 0; i < 4; i++)
        p[i] = (float)n[i]/s*100;

    // ���᫨� ����� ������� �⮫���� ����ࠬ��,
    // �� ᭠砫� ��।����, ����� �業�� �����
    m = 3; // ����� ����� �ᥣ� ���ப
    for (i = 2; i >= 0; i--)
        if (n[i] > n[m])  m = i;

    // ����� �������� �業��, ������ �����,
    // ᮮ⢥����� �⮫��� ���⮩ 200 ���ᥫ��.
    // ���᫨� ����� ��⠫��� �⮫�����.
    for (i = 0; i < 4; i++)
        h[i] = 200 * n[i]/n[m];
}

// ��ந� ����ࠬ��
void diagr()
{
    int x,y; // ���न���� ������ ������� 㣫�
             // �⮫���� ����ࠬ��
    int i;   // ������ ���ᨢ�

    // 梥� �⮫�����
    int color[4] = {YELLOW, BLUE, GREEN, RED};
    char buf[10];

    outtextxy(40,50,"�������� ����஫쭮� ࠡ���\0");
    rectangle(40,80,170,310);
    x = 50; y = 300; // ���� ������ 㣮� ��ࢮ�� �⮫����
    // �⮫���� ����ࠬ��
    for (i = 3; i >= 0; i--)
    {
        setfillstyle(SOLID_FILL, color[i]);
        bar(x,y,x+10,y-h[i]); // �⮫���
        sprintf(buf,"%2.1f",p[i]);
        outtextxy(x,y-h[i]-10,buf);
        x += 20;
    }
    // �᫥��� ���祭��
    x = 50;
    for (i = 3; i >= 0; i--)
    {
      setfillstyle(SOLID_FILL,color[i]);
      //bar(x,y,x+10,y-h[i]); // �⮫���
      //OutTextXY(x,y-h[i]-10,RealToStr(p[i],5,1)+'%\n");
      x = x+20;
    }
    // �������
    x = 200;y = 100;
    for (i = 3; i >= 0; i--)
    {
      setfillstyle(SOLID_FILL,color[i]);
      bar(x,y,x+20,y+10); // �⮫���
      outtextxy(x+25,y,mes[i]);
      y += 20;
    }
}

void main()
{
   int gdriver = DETECT; // �ࠩ���
   int gmode;            // ०��
   int errorcode;        // ��� �訡��

   obr(); // ���� � ��ࠡ�⪠ १���⮢

   initgraph(&gdriver, &gmode, PATHTODRIVER);
   errorcode = graphresult();

   if (errorcode == grOk)
     diagr();  // �뢮� ����ࠬ��
   else
   {
      printf("�訡��: %d\n", errorcode);
      puts("��� �����襭�� �ணࠬ�� ������ <Enter>");
   }
   getch();
}

