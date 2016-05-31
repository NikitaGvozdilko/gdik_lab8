#ifndef ARRAY_H
#define ARRAY_H
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
#endif // ARRAY_H
