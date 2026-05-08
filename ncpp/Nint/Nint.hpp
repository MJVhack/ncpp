#pragma once

// include compilateur

#include <iostream>
#include <vector>
#include <string>

// include interne

#include "../Enum/Etype.hpp"
#include "../Nstr/Nstr.hpp"


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
        size_t Size;

    public:
    // Les Constucteur
        Nint(std::string Nvalue);
        Nint(Nstr Nvalue);
        Nint(long long Nvalue);
        //Nint(Nint Nvalue);
        ~Nint();

        // Value function
        std::string GetValue();
        Etype GetType();
        size_t GetSize(); 

        // Setvalue et surcharges
        void SetValue(std::string Nvalue);
        void SetValue(long long Nvalue);
        void SetValue(Nint Nvalue);
        void SetValue(Nstr Nvalue);

        // La fonction Add et ses surcharges
        void Add(std::string number);
        void Add(long long number);
        void Add(Nint number);
        void Add(Nstr number);

    };
} // namespace ncpp
