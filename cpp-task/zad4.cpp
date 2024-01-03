#include <iostream>
#include <algorithm>

struct Product {
    std::string name;
    float price;
};

int cmp(Product prod1, Product prod2){
    return prod1.price > prod2.price;
}

int NUMBER_OF_PRODUCTS = 10;

int main() {
    Product products[NUMBER_OF_PRODUCTS];

    for(int i = 0; i < NUMBER_OF_PRODUCTS; ++i){
        std::string a;
        float b;
        std::cin>>a>>b;
        products[i] = {a, b};
    }

    std::sort(products, products+NUMBER_OF_PRODUCTS, cmp);

    for(int i = 0; i < NUMBER_OF_PRODUCTS; ++i)
        std::cout<<products[i].name<<" "<<products[i].price<<std::endl;
}