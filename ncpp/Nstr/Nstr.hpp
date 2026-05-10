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
        Nstr(const std::string& Ndata);
        ~Nstr();

        // Info
        std::string GetData();
        Etype GetType();
        size_t GetSize();

        // Setdata & co
        void SetData(const std::string& Ndata);
        void SetData(Nstr Ndata);

        // FindAndReplace And ALLLL
        void FindAndReplace(const std::string& tkn, const std::string& rep);
        void FindAndReplace(Nstr tkn, Nstr rep);
        void FindAndReplace(Nstr tkn, const std::string& rep);
        void FindAndReplace(const std::string& tkn, Nstr rep);
    };
    
} // namespace ncpp
