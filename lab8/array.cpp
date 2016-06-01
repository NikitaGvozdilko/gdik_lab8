#include "array.h"
int Array::iter=1;
void Array::fill()
{
    cout << "Enter 0 to complete entry!\n";

    //заполняем временный массив
    int i = -1;
    do
    {
        i++;
        cin >> temp[i];
        size++;

    }while(temp[i] != "0");
    size--;     //не учитываем введенный 0;

    str = new string[size];    //создаем массив по размеру
    for(int i = 0; i < size; i++)
        str[i] = temp[i];
    delete [] temp;          //удаляем временный массив
}

void Array::show()
{
    for(int i = 0; i < size; i++)
        cout << str[i] << endl;
}

bool Array::srn(int ind, int N)
{
    string s=str[ind];
    for(int i=0;i<size;i++)
    {
        if(i!=ind)
        {
        bool f=true;
            for(int j=0;j<N;j++)
                if(str[i][j]!=s[j])
                    {
                        f=false;
                        break;
                    }
        if(f) return true;
    }
    }
    return false;
}

void Array::socr(int N)
{
    short tch;
    switch ( N )
         {
            case 1:
    {
               tch=1;
               break;
    }
            case 2:
    {
               tch=2;
               break;
    }
            default:
               tch=3;
         }
    for(int i=0;i<size;i++)
    {
    str[i].erase(str[i].begin()+N, str[i].end());
    for(int j=0;j<tch;j++)
        str[i]+='.';
    if(srn(i, N))
        str[i]+='('+(iter++)+')';
}
}
