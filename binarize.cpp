#include <iostream>
#include <string>
#include <cmath>

int main(int , char** ){
    std::string input = "";
    std::cin>>input ;
    int n= std::stoi(input);
    std::cout<<"Input value: "<<n<<std::endl;
    int a = std::ceil( std::log2(n));
    int resp = std::exp2(a);
    std::cout<<resp;
}

