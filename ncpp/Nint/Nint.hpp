#pragma once

// include compilateur

#include <iostream>
#include <vector>
#include <string>

// include interne

#include "../Etype.hpp"


/*Note importante:

Nint (et ncpp en général) est fait pour améliorer les types de bases en C++. 
A aucun moment Nint a étais fais pour des mathématiques avancé. 
Et c'est pour cette raison que les fonctions opération ou même le système de stockage ne sont pas optimisé pour cela. 
Nint est fait pour améliorer int et (ça oui) stocker des énormes nombres tout en pouvant faire un minimum de calcul.
Donc, ne vous étonnez pas si des bugs survienne si vous abuser des fonctions d'opérations

MJVHack
*/


namespace ncpp
{
    class Nint
    {
    private:
        std::vector<long long> Value;
        const Etype type = Etype::INT;
        std::string SizeVar;

    public:
        //Nint(int Nvalue);
        Nint(std::string Nvalue);
        //Nint(ncpp::Nstring Nvalue);
        // On va commenter ca pour l'instant 
        ~Nint();
        // Value function
        std::string GetValue();
        void SetValue(std::string Nvalue);
        Etype GetType();
        size_t GetSize(); 

    };
} // namespace ncpp
