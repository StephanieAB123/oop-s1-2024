#include "Asset.h"
#include "AssetPortfolio.h"
#include <iostream> 
#include <string.h>
using namespace std;

AssetPortfolio::AssetPortfolio(){
    AssetPortfolio(1);
}
AssetPortfolio::AssetPortfolio(int size){
    currSize = 0;
    maxSize = size;
    assetsArray = new Asset[size];  
}

bool AssetPortfolio::add_asset(Asset new_asset){
    if(currSize < maxSize){
        assetsArray[currSize] = new_asset;
        currSize++;
        return true;
    }else{
        return false;
    }
}

int AssetPortfolio::get_num_assets(){
    return currSize;
}


//ok but why tho :/
Asset* AssetPortfolio::get_assets(){
    return assetsArray;
}

bool AssetPortfolio::has_asset(string product){
    for(int i = 0; i < currSize; i++){
        if(assetsArray[i].get_product_type() == product){
            return true;
        }
    }

    return false;
}

AssetPortfolio::~AssetPortfolio(){

}