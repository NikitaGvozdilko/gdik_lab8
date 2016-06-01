#include "array.h"
int main()
{
    cout << "Input the words!" << endl;
    Array obj;
    obj.fill();
    cout<<"Kol-vo simvolov do skolki sokrashat\n";
    int N;
    cin>>N;
    obj.socr(N);
    obj.show();
    cout << "\nEnd of program!!!!!!!";
    return 0;
}
