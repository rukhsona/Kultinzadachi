// �㭪�� Fahr2Cels ������뢠�� ⥬�������
// �� �ࠤ�ᮢ ��७���� � �ࠤ��� ������
#include "stdio.h"
#include "conio.h"

// ������뢠�� ⥬�������
// �� �ࠤ�ᮢ ��७���� � �ࠤ��� ������
float Fahr2Cels(float f)
{
    float c;

    c = (float) 5/9*(f - 32);
    return (c);

    // ����� �ਢ������� ��� ������権
    // ����� �������: 
    // return ( (float)5/9*(f - 32));
    //
}


void main()
{
    float f; // ⥬������ � �ࠤ��� ��७����
    float c; // ⥬������ � �ࠤ��� ������

    float f1,f2; // �������� ��������� ⥬�������
    float df;    // 蠣 ��������� ⥬�������

    f1 = 0;
    f2 = 5;
    df = 0.5;

    printf("\n----------------");
    printf("\n  F        C");
    printf("\n----------------");
    f = f1;
    do
    {
        c = Fahr2Cels(f);
        printf("\n%5.2f   %5.2f", f, c);
        f = f + df;
    }
    while ( f <= f2 );
    printf("\n----------------");

    printf("\n��� �����襭�� ������ <Enter>");
    getch();
}

