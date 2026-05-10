/*

Je sais même pas pourquoi je le fait a quoi il peut servir.
Mais bon, c'est un type alors je dois le faire ?
En 1 heure c'est plié

*/

// include compilateur
#include <string>

//include interne
#include "../Nstr/Nstr.hpp"
#include "../Nint/Nint.hpp"
#include "../Enum/Etype.hpp"

namespace ncpp
{
    class Nbool
    {
    private:
        bool boolean;
        Etype type = Etype::NBOOL;

        std::string mtolower(const std::string& Pstr);
    public:
    // 5 surcharge aled 😭 (j'ai du copier-coller cette emoji)
        Nbool(Nstr& Bval);
        Nbool(Nint& Bval);
        Nbool(const std::string& Bval);
        Nbool(const bool& Bval);
        Nbool(const int& Bval);
        ~Nbool();


        bool GetBool();
        Etype GetType();


        void SetBool(Nbool Bval);
        void SetBool(Nstr Bval);
        void SetBool(Nint Bval);
        void SetBool(const std::string& Bval);
        void SetBool(const bool& Bval);
        void SetBool(const int& Bval);
        
    };
    
} // namespace ncpp
