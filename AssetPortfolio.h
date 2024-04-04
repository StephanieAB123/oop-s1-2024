#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

#include "Asset.h"
#include <iostream> 
#include <string.h>
using namespace std;

class AssetPortfolio{
    private:
        int maxSize;
        int currSize;
        Asset* assetsArray;
    public:
        AssetPortfolio();
        AssetPortfolio(int size);

        int get_num_assets();
        bool has_asset(string product);
        Asset *get_assets();
        bool add_asset(Asset new_asset);

        ~AssetPortfolio();
};

#endif