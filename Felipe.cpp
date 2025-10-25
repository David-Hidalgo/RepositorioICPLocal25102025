#include <iostream>
#include <list>

int main()
{
    int nCasos = 0;
    std::cin >> nCasos;
    std::list<int> cola;
    for (size_t i = 0; i < nCasos; i++)
    {
        cola.clear();
        int total=0;
        int nQ = 0;
        std::cin >> nQ;
        for (size_t i = 0; i < nQ; i++)
        {
            int instr = 0;
            int val = 0;
            std::cin >> instr;
            switch (instr)
            {
            case 1:
                /* code */
                std::cin >> val;
                total+=val;
                cola.push_back(val);
                break;
            case 2:
                /* code */
                if (!cola.empty())
                {
                    /* code */
                    total -= cola.front();
                    cola.pop_front();
                }
                break;

            case 3:
                /* code */
                if (cola.empty())
                {
                    /* code */
                    std::cout << "Empty!\n";
                }
                else
                {
                    std::cout << total << std::endl;
                }
                break;
            default:
                break;
            }
        }
    }
}
