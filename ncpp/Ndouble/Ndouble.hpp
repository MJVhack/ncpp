#pragma once

// include compilateur 
#include <string>
#include <iostream>
#include <vector>

// include interne
#include "../Nstr/Nstr.hpp"
#include "../Enum/Etype.hpp"


namespace ncpp
{
    class Ndouble
    {
    private:
        long double value;
        const Etype type = Etype::NDOUBLE;
        size_t Size;
    public:
        // Les constructors
        Ndouble(const double& Nvalue);
        Ndouble(const std::string& Nvalue);
        Ndouble(Nstr Navlue);

        ~Ndouble();

        void SetValue(const std::string& Nvalue);
        void SetValue(const double& Nvalue);
        void SetValue(Ndouble Nvalue);
        void SetValue(Nstr Nvalue);

        std::string GetValue();
        Etype GetType();
        size_t GetSize();

        void Add(const std::string& number);
        void Add(const double& number);
        void Add(Ndouble number);
        void Add(Nstr number);

    };
} // namespace ncpp
