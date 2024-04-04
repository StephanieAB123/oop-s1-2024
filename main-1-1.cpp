#include <iostream> 
#include <string.h>
#include "Asset.h"
using namespace std;

int main(){

    int u_value;
    string u_type;

    cout << "Enter a value: "; 
    cin >> u_value;
    // cout << endl;

    cout << "Enter a type: ";
    cin >> u_type;
    // cout << endl;

    Asset a1;
    cout << "Default value: " << a1.get_value() << endl;
    cout << "Default type: " << a1.get_product_type() << endl;

    Asset a2(u_value, u_type);

    cout << "New value: " << a2.get_value() << endl;
    cout << "New type: " << a2.get_product_type() << endl;

    return 0;
}