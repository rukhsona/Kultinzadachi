// �㭪�� �஢����, ���� �� ᨬ��� ���᭮� �㪢��
int glasn(char ch)
{
    static char gl[] ="��������������\0";
    int i = 0;

    while (gl[i] && gl[i] != ch)
        i++;
    if ( gl[i] )
       return(1);
    else return(0);
}

