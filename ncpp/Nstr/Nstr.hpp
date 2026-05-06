#pragma once

// Include compilateur
#include <string>

// include interne
#include "../Etype.hpp"

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

        void SetData(std::string Ndata);
    };
    
} // namespace ncpp
