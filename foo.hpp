#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <iostream>

std::vector< char > foo(std::list< Human >& people)
{
    

    std::vector< char > wynik; 

    std::list< Human >::reverse_iterator it = people.rbegin(); 

    for (auto it = people.rbegin(); it != people.rend(); it++) {
        it->birthday();

       //std::cout << it->getName() << std::endl; 

        if (it->isMonster()==1) {
            wynik.emplace_back('n'); 
           // std::cout << it->isMonster << std::endl;
        }
        else
        {
            wynik.emplace_back('y');
        }

    }

    return wynik;
}
