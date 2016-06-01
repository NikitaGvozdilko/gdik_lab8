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
    if(obj.srn(0, 2))
            cout<<"est takaya stroka";
    cout << "\nEnd of program!!!!!!!";
    return 0;
}
