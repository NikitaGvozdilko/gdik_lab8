#include <iostream>
#include <string>

using namespace std;

class Array
{
    string *str;
    string *temp;
    int size;
public:
    Array() {temp = new string [20]; size = 0;}
    ~Array() {delete []str;}
    void fill(); //метод для заполнения массива
    void show();  //метод для вывода массивa
};

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

int main()
{
    cout << "Input the words!" << endl;
    Array obj;
    obj.fill();
    obj.show();

    cout << "\nEnd of program!!!!!!!";

    return 0;
}
