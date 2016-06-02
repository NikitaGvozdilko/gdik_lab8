#include "array.h"
int main()
{
    cout << "Input the words!" << endl;
    Array obj;
    obj.fill();
    cout<<"The number of how many characters to reduce\n";
    int N;
    cin>>N;
    obj.socr(N);
    obj.show();
    cout << "\nEnd of program!!!!!!!";
    return 0;
}
