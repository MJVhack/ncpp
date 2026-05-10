#include "Nint.hpp"

namespace ncpp
{
    // Les constructeurs
    Nint::Nint(const std::string& Nvalue) {
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

        Size = Nvalue.size();
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

        Size = DataNValue.size();
    
    }

    Nint::Nint(const long long& Nvalue){
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

        Size = SNvalue.size();
    }
    // Fonction poubelle / déco

    Nint::~Nint(){}
    Etype Nint::GetType(){return type;}
    size_t Nint::GetSize(){return Size;}

    // Info retrun
    std::string Nint::GetValue(){
        std::string varret = "";
        for (int i = 0; i < Value.size(); i++){
            varret += std::to_string(Value[i]);
        }
        return varret;
    }

    // SetValues & Co 
    void Nint::SetValue(const std::string& Nvalue){
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
        Size = Nvalue.size();
    }
    void Nint::SetValue(const long long& Nvalue){
        Value.clear();
        std::string RSvalue = std::to_string(Nvalue);

        std::string tmp;
        for (int i = 0; i < RSvalue.size(); i++){    
            if (i > 0 && i % 10 == 0 ){
                Value.push_back(stoll(tmp));
                tmp.clear();
            }
            tmp += RSvalue[i];
        }
        if (!tmp.empty()){
            Value.push_back(stoll(tmp));
        }
        Size = RSvalue.size();
    }
    void Nint::SetValue(Nint Nvalue){
        Value.clear();
        std::string RSvalue = Nvalue.GetValue();

        std::string tmp;
        for (int i = 0; i < RSvalue.size(); i++){    
            if (i > 0 && i % 10 == 0 ){
                Value.push_back(stoll(tmp));
                tmp.clear();
            }
            tmp += RSvalue[i];
        }
        if (!tmp.empty()){
            Value.push_back(stoll(tmp));
        }
        Size = RSvalue.size();
    }
    void Nint::SetValue(Nstr Nvalue){
        Value.clear();
        std::string RSvalue = Nvalue.GetData();

        std::string tmp;
        for (int i = 0; i < RSvalue.size(); i++){    
            if (i > 0 && i % 10 == 0 ){
                Value.push_back(stoll(tmp));
                tmp.clear();
            }
            tmp += RSvalue[i];
        }
        if (!tmp.empty()){
            Value.push_back(stoll(tmp));
        }
        Size = RSvalue.size();
    }
    

    // Les Add
    void Nint::Add(const std::string& number){
        long long Rnum = stoll(number);
        long long last = Value[Value.size() - 1];

        Value[Value.size() - 1] = last + Rnum;
    }
    void Nint::Add(const long long& number){
        long long last = Value[Value.size() - 1];

        Value[Value.size() - 1] = last + number;
    }
    void Nint::Add(Nint number){
        long long Rnum = stoll(number.GetValue()) % 10000000000;
        long long last = Value[Value.size() - 1];

        Value[Value.size() - 1] = last + Rnum;
    }
    void Nint::Add(Nstr number){
        long long Rnum = stoll(number.GetData()) % 10000000000;
        long long last = Value[Value.size() - 1];

        Value[Value.size() - 1] = last + Rnum;
    }

    
} // namespace ncpp

