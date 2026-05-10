#include "Nstr.hpp"

namespace ncpp
{
    Nstr::Nstr(const std::string& Ndata){data = Ndata;}
    Nstr::~Nstr(){}

    std::string Nstr::GetData(){return data;}
    Etype Nstr::GetType(){return type;}
    size_t Nstr::GetSize(){return data.size();}

    // SetData
    void Nstr::SetData(const std::string& Ndata){data = Ndata;}
    void Nstr::SetData(Nstr Ndata){data = Ndata.GetData();}

    void Nstr::FindAndReplace(const std::string& tkn, const std::string& rep){
        size_t pos = data.find(tkn);
        while (pos != std::string::npos){
            data.replace(pos, tkn.size(), rep);
            pos = data.find(tkn);
        }
    }
    void Nstr::FindAndReplace(Nstr tkn, Nstr rep){
        std::string Rtkn = tkn.GetData();
        size_t pos = data.find(Rtkn);
        while (pos != std::string::npos){
            data.replace(pos, Rtkn.size(), rep.GetData());
            pos = data.find(Rtkn);
        }
    }
    void Nstr::FindAndReplace(Nstr tkn, const std::string& rep){
        std::string Rtkn = tkn.GetData();
        size_t pos = data.find(Rtkn);
        while (pos != std::string::npos){
            data.replace(pos, Rtkn.size(), rep);
            pos = data.find(Rtkn);
        }
    }
    void Nstr::FindAndReplace(const std::string& tkn, Nstr rep){
        size_t pos = data.find(tkn);
        while (pos != std::string::npos){
            data.replace(pos, tkn.size(), rep.GetData());
            pos = data.find(tkn);
        }
    }
} // namespace ncpp
