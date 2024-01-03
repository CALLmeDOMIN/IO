#include <iostream>

int* BB;

int main() {
    int AA[10], ujemne;


    for(int i = 0; i < 10; ++i){
        std::cin>>AA[i];
        if(AA[i] < 0)
            ujemne++;
    }

    BB = new int[ujemne];
    int iterator = 0;
    for(int i = 0; i < 10; ++i) {
        if(AA[i] < 0) {
            BB[iterator] = AA[i];
            iterator++;
        }
    }

    for(int i = 0; i < ujemne; ++i)
        std::cout<<BB[i]<<" ";

    std::cout<<"Liczb jest: "<<ujemne<<" Pominieto: "<<10-ujemne;
}