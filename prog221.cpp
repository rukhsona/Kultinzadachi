// ��� "21"
#include "stdio.h"
#include "conio.h"
#include "stdlib.h" // �㭪�� rand
#include "time.h"   // �㭪�� time


int koloda[12];     // ������ ����
int karta();        // �㭪�� "�뤠��" ����� �� ������

void main()
{
    int igrok = 0;  // �窨 ��ப�
    int comp = 0;   // �窨 ��������
    char otv;       // �⢥� ��ப�
    time_t t;

    // ᮧ����� ������
    for (int i=2; i <=11; i++)
        koloda[i] = 4;
    koloda[5] = 0; // "���ப" � ������ ���

    // ���樠������ ������� ��砩��� �ᥫ
    srand((unsigned)time(&t));

    printf("\n��� � ����� �� ��襣� �� �������!\n");

    do
    {
        // ���� ��ப�
        igrok += karta();

        // ���� ���������
        if (igrok < 21)
            comp += karta();

        if (igrok < 21 && comp < 21)
        {
            printf("� ��� %d\n",igrok);
            printf("�� �����? (������ y ��� n) ");
            otv = getchar();

            // ��ப �������� ��� ������: � �㪢�� � <Enter>.
            // �।��騩 �맮� getchar ���⠫ �㪢�.
            // � ���� ���������� ��⠫�� ���
            // ������ <Enter>. ���⠥� ���.
            int b;
            b = getchar();
        }

    }
    while (igrok <= 21 && comp <= 21 && otv != 'n') ;

    if (igrok == 21 || (igrok < 21 && igrok > comp) 
                    || comp > 21)
        printf("�� �먣ࠫ�!\n");
    else
        printf("�� �ந�ࠫ�!\n");

    printf ("� ��� %d\n", igrok);
    printf ("� �������� %d\n", comp);

    printf("��� �����襭�� ������ <Enter>");
    getch();
}

// �뤠�� ����� �� ������
int karta()
{
    int i;
    do
        i = rand() % 10 + 2;
    while (koloda[i] == 0);
    koloda[i]--;
    return i;
}

