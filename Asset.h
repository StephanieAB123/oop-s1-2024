#ifndef ASSET_H
#define ASSET_H

#include <iostream> 
#include <string.h>
using namespace std;

class Asset{
    private:
        string m_type;
        int m_value;
    public:
        Asset();
        Asset(int value, string product_type);
        string get_product_type();
        int get_value();
        ~Asset();   
};

#endif