// �㭪�� compare �����頥� १���� �ࠢ����� �ᥫ
// � ���� ᨬ���� �⭮襭��
#include "stdio.h"
#include "conio.h"

char compare(int a, int b)
{
    char res;
    if (a > b) res = '>';
       else if (a < b)  res = '<';
              else res = '=';
    return(res);
}

void main()
{
    int x1,x2;   // �ࠢ������� �᫠
    char res;    // १���� �ࠢ�����

    puts("������ ��� 楫�� �᫠ � ������ <Enter>");
    printf("->");
    scanf("%i%i", &x1, &x2);
    res = compare(x1,x2);  // �맮� �㭪樨 �ணࠬ����
    printf("%i %c %i\n", x1, res, x2);

    puts("\n��� �����襭�� ࠡ��� �ணࠬ�� ������ <Enter>");
    getch();
}

