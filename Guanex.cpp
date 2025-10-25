#include <iostream>
#include <list>

int main()
{
    std::list<int> cola;
    int min = 0;
    int nQ = 0;
    std::cin >> nQ;
    for (size_t j = 0; j < nQ; j++)
    {
        int instr = 0;
        int val = 0;
        std::cin >> instr;
        switch (instr)
        {
        case 1:
            /* code */
            std::cin >> val;
            cola.push_back(val);
            cola.sort();
            min = cola.front();
            break;
        case 2:
            /* code */
            if (!cola.empty())
            {
                /* code */
                min = cola.back();
                cola.pop_back();
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
                std::cout << min << "\n";
            }
            break;
        default:
            break;
        }
    }
}
