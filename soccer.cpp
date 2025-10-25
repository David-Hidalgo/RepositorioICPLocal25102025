#include <iostream>
#include <string>
#include <vector>

class Equipo
{
private:
    /* data */
    int points=0;
    int win=0;
    int loss=0;
    int draw=0;
    int favor=0;
    int contra=0;
public:
    Equipo(/* args */);
    ~Equipo();
};

Equipo::Equipo(/* args */)
{
}

Equipo::~Equipo()
{
}


int main(int nEntrada, char** entrada){
    std::string input ="";
    std::cin >>input ;
    int nGrupos = std::stoi(input);


}
