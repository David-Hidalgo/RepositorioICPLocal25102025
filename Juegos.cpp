#include <iostream>
#include <list>
#include <algorithm>

int main()
{
    int nCasos = 0;
    std::cin >> nCasos;
    std::list<int> cola1;
    for (size_t i = 0; i < nCasos; i++)
    {
        cola1.clear();
        int total = 0;
        int nQ = 0;
        std::cin >> nQ;
        for (size_t i = 0; i < nQ; i++)
        {
            int instr = 0;
            int val = 0;
            std::cin >> instr;
            cola1.push_front(instr);
        }
        std::sort(cola1.begin(), cola1.end(), [](const int& a, const int& b)
                  {
                      if (a > b)
                      {
                          return true;
                      }
                      else
                          return false; });
        std::list<int> cola2;
        for (size_t i = 0; i < nQ; i++)
        {
            int instr = 0;
            int val = 0;
            std::cin >> instr;
            cola2.push_front(instr);
        }
        cola2.sort();
        long cont = 0;
        while (!cola1.empty() or !cola2.empty())
        {
            /* code */
            int suma = cola1.front() + cola1.front();
            cola1.pop_front();
            cola2.pop_front();
            if (suma % 2 == 0)
            {
                cola1.push_front(suma / 2);
                std::sort(cola1.begin(), cola1.end(), [](const int& a, const int& b)
                          {
                          if (a > b)
                          {
                              return true;
                          }
                          else
                              return false; });
            }
            else
            {
                cola1.push_front(suma);
                cola1.sort();
            }
            cont += 1;
        }
    }
}