// ������� �� ��᪥ 䠩�
#include "stdio.h"
#include "conio.h"

#define FNAME "numbers.txt\0" // ��� 䠩��
#define N 5                       // ������⢮ �ᥫ

// ������� �� ��᪥ 䠩� � �����뢠�� � ����
// 楫� �᫠, �������� ���짮��⥫��
void main()
{
     char fname[20] = FNAME;
     FILE *f;    // 䠩� �ᥫ
     int n;      // �᫮

     puts("\n�������� 䠩��");
     printf("������� �᫠ ���� ����ᠭ� � 䠩� %s\n",
             fname);
     puts("��᫥ ����� ������� �᫠ �������� <Enter>\n");

     // ������ 䠩� � ०��� ����� (w) ⥪�� (t)
     // �᫨ 䠩� � ⠪�� ������ 㦥 ����, � ����
     // ����� ���� ����ᠭ� ������ �����
     // ��� ���������� � ����� 䠩��, �ᯮ����
     // ०�� ���������� (a)
     if ((f = fopen(fname, "wt")) == NULL)
     {
        printf("�訡�� ������ 䠩�� ��� �����");
        getch();
        return;
     }

     for (int i = 0; i < N; i++)
     {
        printf("->");
        scanf("%i", &n);
        fprintf(f,"%i",n);
     }
     fclose(f);     // ������� 䠩�
     printf("�������� �᫠ ����ᠭ� � 䠩� %s\n", fname);
     puts("\n��� �����襭�� ������ <Enter>");
     getch();
}

