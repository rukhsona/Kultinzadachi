// ���� � ⥫�䮭��� �ࠢ�筨��
#include "stdio.h"
#include "conio.h"

#define FNAME "contacts.txt\0" // ��� 䠩��
void main()
{
    char fname[20] = FNAME;
    FILE *f;  // 䠩� - ⥫�䮭�� �ࠢ�筨�

    char obr[15];  // 䠬���� - ��ࠧ�� ��� ���᪠ � ��

    // ��������� ���ଠ��
    char fam[15];  // 䠬����
    char name[15]; // ���
    char tel[9];   // ����� ⥫�䮭�

    int n = 0; // ������⢮ ����ᥩ, 㤮���⢮����� ������

    puts("\n���� � ⥫�䮭��� �ࠢ�筨��");

    // ������ 䠩� � ०��� �⥭�� (r) ⥪�� (t)
    if ((f = fopen(fname, "rt")) == NULL)
    {
        printf("�訡�� ������ 䠩�� %s", fname);
        getch();
        return;
    }

    // ����稬 ����� �� ���짮��⥫�
    printf("������� ->");
    scanf("%s", &obr);   // ��ࠧ�� ��� ���᪠ � ��
    while (!feof(f))
    {
        fscanf(f,"%s %s %s", &fam, &name, &tel);
        if (fam == obr)
        {
            printf("%s %s %s",fam, name, tel);
            n++;
        }
    }
    if (n )
        printf("������� ����ᥩ: %i", n);
    else
        printf("������ �� ������� %s � �� ���", obr);

    fclose(f);     // ������� 䠩�

    puts("\n��� �����襭�� ࠡ��� ������ <Enter>");
    getch(); 
}

