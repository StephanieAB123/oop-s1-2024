#include "AssetPortfolio.h"
#include "Asset.h"

#include <iostream> 
#include <string.h> 
using namespace std;

int main(){
    //create an empty portfolio
    AssetPortfolio portfolio1(3);

    Asset a1(1, "a");
    Asset a2(2, "b");
    Asset a3(3, "c");
    Asset a4(4, "d");

    cout << "The portfolio currently has: " << portfolio1.get_num_assets() << " assets" << endl;


    if(portfolio1.add_asset(a1)){
        cout << "a1 yay" << endl;
    } else{
        cout << "a1 NOOOOOOO" << endl;
    }
    
    if(portfolio1.add_asset(a2)){
        cout << "a2 yay" << endl;
    } else{
        cout << "a2 NOOOOOOO" << endl;
    }

    if(portfolio1.add_asset(a3)){
        cout << "a3 yay" << endl;
    } else{
        cout << "a3 NOOOOOOO" << endl;
    }

    if(portfolio1.add_asset(a4)){
        cout << "a4 yay" << endl;
    } else{
        cout << "a4 NOOOOOOO" << endl;
    }

    cout << "The portfolio currently has: " << portfolio1.get_num_assets() << " assets" << endl;

    if(portfolio1.has_asset("a")){
        cout << "Yes it has an A." << endl;
    }else{
        cout << "Nop, haha nerd" << endl;
    }

    if(portfolio1.has_asset("e")){
        cout << "Yes it has an e." << endl;
    }else{
        cout << "Nop, haha nerd" << endl;
    }

    return 0;
}