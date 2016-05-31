#include "array.h"
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

