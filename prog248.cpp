// �����뢠�� � 䠩� contacts.txt 䠬����, ��� � ����� ⥫�䮭�
#include "stdio.h"
#include "conio.h"

#define FNAME "contacts.txt\0" // ��� 䠩��
void main()
{
    char fname[20] = FNAME;
    FILE *f;  // 䠩�

    char fam[15];  // 䠬����
    char name[15]; // ���
    char tel[9];   // ����� ⥫�䮭�

    puts("\n���������� ���ଠ樨 � ⥫�䮭�� �ࠢ�筨�\n");

    // ������ 䠩� � ०��� ���������� (�) ⥪�� (t)
    // �᫨ 䠩�� � ⠪�� ������ ���, � �� �㤥� ᮧ���
    if ((out = fopen(fname, "at")) == NULL)
    {
        printf("�訡�� ������ 䠩�� ��� ����������");
        getch();
        return;
    }

    // ����稬 ����� �� ���짮��⥫�
    printf("������� ->");
    scanf("%s", &fam);
    printf("��� ->");
    scanf("%s", &name);
    printf("����䮭 ->");
    scanf("%s", &tel);
    // � ����襬 �� � 䠩�
    fprintf(f,"%s %s %s", fam, name, tel);
    puts("\n���ଠ�� ���������");
    fclose(f);     // ������� 䠩�

    printf("\n\n��� �����襭�� ������ <Enter>\n");
    getch(); 
}

