// �������� ����� � 䠩�
#include "stdio.h"
#include "conio.h"

#define FNAME " numbers.txt\0" // ��� 䠩��
#define N 3                    // ������⢮ �ᥫ

// �����뢠�� � ��室�騩�� �� ��᪥ 䠩� numbers.txt 
// 楫� �᫠, �������� ���짮��⥫��
void main()
{
     char fname[20] = FNAME;
     FILE *f;     // 䠩� �ᥫ
     int n;       // �᫮

     puts("\n���������� � 䠩�");
     printf("������� �᫠ ���� ��������� � 䠩� %s\n",
             fname);
     puts("��᫥ ����� ������� �᫠ �������� <Enter>\n");

     // ������ 䠩� � ०��� ���������� (�) ⥪�� (t)
     // �᫨ 䠩�� � ⠪�� ������ ���, � �� �㤥� ᮧ���
     if ((f = fopen(fname, "at")) == NULL)
     {
        printf("�訡�� ������ 䠩�� ��� ����������");
        getch();
        return;
     }

     for (int i = 0; i < N; i++)
     {
        printf("->");
        scanf("%i", &n);
        fprintf(f,"%i\n",n);
    }
    fclose(out);     // ������� 䠩�
    printf("�������� �᫠ ��������� � 䠩� %s\n", fname);
    puts("\n��� �����襭�� ������ <Enter>");
    getch();
}

