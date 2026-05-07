#pragma once

// Include compilateur
#include <string>

// include interne
#include "../Enum/Etype.hpp"

namespace ncpp
{
    class Nstr
    {
    private:
        std::string data;
        const Etype type = Etype::NSTR;

    public:
        Nstr(std::string Ndata);
        ~Nstr();

        // Info
        std::string GetData();
        Etype GetType();
        size_t GetSize();

        // Setdata & co
        void SetData(std::string Ndata);
        void SetData(Nstr Ndata);

        // FindAndReplace And ALLLL
        void FindAndReplace(std::string tkn, std::string rep);
        void FindAndReplace(Nstr tkn, Nstr rep);
        void FindAndReplace(Nstr tkn, std::string rep);
        void FindAndReplace(std::string tkn, Nstr rep);
    };
    
} // namespace ncpp
