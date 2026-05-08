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

        std::string mtolower(std::string Pstr);
    public:
    // 5 surcharge aled 😭 (j'ai du copier-coller cette emoji)
        Nbool(Nstr Bval);
        Nbool(Nint Bval);
        Nbool(std::string Bval);
        Nbool(bool Bval);
        Nbool(int Bval);
        ~Nbool();


        bool GetBool();
        Etype GetType();


        void SetBool(Nbool Bval);
        void SetBool(Nstr Bval);
        void SetBool(Nint Bval);
        void SetBool(std::string Bval);
        void SetBool(bool Bval);
        void SetBool(int Bval);
        
    };
    
} // namespace ncpp
