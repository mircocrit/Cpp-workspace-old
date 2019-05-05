// Declaration of function DoPrint()
#include <iostream>

using namespace std;

void DoPrint(){
    cout << "In DoPrint()" <<endl;
}

int main(){
    cout << "Starting main()" << endl;
    DoPrint(); // chiamata a DoPrint()
    cout << "Ending main()" << endl;
    system("pause");
    return 0;
}
