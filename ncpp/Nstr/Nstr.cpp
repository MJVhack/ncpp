#include "Nstr.hpp"

namespace ncpp
{
    Nstr::Nstr(std::string Ndata){data = Ndata;}
    Nstr::~Nstr(){}

    std::string Nstr::GetData(){return data;}
    Etype Nstr::GetType(){return type;}
    size_t Nstr::GetSize(){return data.size();}
    void Nstr::SetData(std::string Ndata){data = Ndata;}
} // namespace ncpp
