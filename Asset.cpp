#include "Asset.h"
#include <iostream> 
#include <string.h>

using namespace std;

Asset::Asset(){
    m_value = 0;
    m_type = " ";
}

Asset::Asset(int value, string product_type){
    m_value = value;
    m_type = product_type;
}

string Asset::get_product_type(){
    return m_type;
}
int Asset::get_value(){
    return m_value;
}

Asset::~Asset(){

}