// Le seul include
#include "Ndouble.hpp"

namespace ncpp
{
    Ndouble::Ndouble(const double& Nvalue){
        value = Nvalue;
        std::string tmp = std::to_string(value);
        Size = tmp.size();
    }
    Ndouble::Ndouble(const std::string& Nvalue){
        value = std::stod(Nvalue);
    }
    Ndouble::Ndouble(Nstr Nvalue){
        value = std::stod(Nvalue.GetData());
    }

    Ndouble::~Ndouble(){}
    std::string Ndouble::GetValue(){return std::to_string(value);}
    Etype Ndouble::GetType(){return type;}
    size_t Ndouble::GetSize(){return Size;}

    // Add

    void Ndouble::Add(const std::string& number){
        value += std::stod(number);
    }
    void Ndouble::Add(const double& number){
        value += number;
    }
    void Ndouble::Add(Ndouble number){
        value += std::stod(number.GetValue());
    }
    void Ndouble::Add(Nstr number){
        value += std::stod(number.GetData());
    }

    // SetValue
    void Ndouble::SetValue(const std::string& Nvalue){
        value = std::stod(Nvalue); 
    }
    void Ndouble::SetValue(const double& Nvalue){
        value = Nvalue;
    }
    void Ndouble::SetValue(Ndouble Nvalue){
        value = std::stod(Nvalue.GetValue());
    }
    void Ndouble::SetValue(Nstr Nvalue){
        value = std::stod(Nvalue.GetData());
    }

    

} // namespace ncpp

