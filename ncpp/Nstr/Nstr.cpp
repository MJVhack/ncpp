#include "Nstr.hpp"

namespace ncpp
{
    Nstr::Nstr(std::string Ndata){data = Ndata;}
    Nstr::~Nstr(){}

    std::string Nstr::GetData(){return data;}
    Etype Nstr::GetType(){return type;}
    size_t Nstr::GetSize(){return data.size();}
    void Nstr::SetData(std::string Ndata){data = Ndata;}

    void Nstr::FindAndReplace(std::string tkn, std::string rep){
        size_t pos = data.find(tkn);
        while (pos != std::string::npos){
            data.replace(pos, tkn.size(), rep);
            pos = data.find(tkn);
        }
    }
} // namespace ncpp
