#include "Nint.hpp"

namespace ncpp
{
    Nint::Nint(std::string Nvalue) {
        std::string tmp;
        for (int i = 0; i < Nvalue.size(); i++){    
            if (i > 0 && i % 10 == 0 ){
                Value.push_back(stoll(tmp));
                tmp.clear();
            }
            tmp += Nvalue[i];
        }
        if (!tmp.empty()){
            Value.push_back(stoll(tmp));
        }

        SizeVar = Nvalue;
    }

    Nint::Nint(Nstr Nvalue){
        std::string tmp;
        std::string DataNValue = Nvalue.GetData();
        for (int i = 0; i < DataNValue.size(); i++){    
            if (i > 0 && i % 10 == 0 ){
                Value.push_back(stoll(tmp));
                tmp.clear();
            }
            tmp += DataNValue[i];
        }
        if (!tmp.empty()){
            Value.push_back(stoll(tmp));
        }

        SizeVar = DataNValue;
    
    }

    Nint::Nint(int Nvalue){
        std::string tmp;
        std::string SNvalue = std::to_string(Nvalue);
        for (int i = 0; i < SNvalue.size(); i++){    
            if (i > 0 && i % 10 == 0 ){
                Value.push_back(stoll(tmp));
                tmp.clear();
            }
            tmp += SNvalue[i];
        }
        if (!tmp.empty()){
            Value.push_back(stoll(tmp));
        }

        SizeVar = SNvalue;
    }

    Nint::~Nint(){}

    // Info retrun
    std::string Nint::GetValue(){
        std::string varret = "";
        for (int i = 0; i < Value.size(); i++){
            varret += std::to_string(Value[i]);
        }
        return varret;
    }

    void Nint::SetValue(std::string Nvalue){
        Value.clear();

        std::string tmp;
        for (int i = 0; i < Nvalue.size(); i++){    
            if (i > 0 && i % 10 == 0 ){
                Value.push_back(stoll(tmp));
                tmp.clear();
            }
            tmp += Nvalue[i];
            

        }
        if (!tmp.empty()){
            Value.push_back(stoll(tmp));
        }
        SizeVar = Nvalue;
    }

    Etype Nint::GetType(){return type;}
    size_t Nint::GetSize(){return SizeVar.size();}

    
} // namespace ncpp

