#include <iostream>
using namespace std;

int main(){
    cout<< "Hello\n";

    string temp;
    cout<< "getting line data\n";
    getline(cin, temp);
    cout<< "got line data\n";

    cout<< temp<< endl;

    return 0;
}