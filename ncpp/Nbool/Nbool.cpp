#include "Nbool.hpp"

namespace ncpp
{

    std::string Nbool::mtolower(std::string Pstr){
        std::string varret;
        for (int i = 0; i < Pstr.size(); i++){
            varret = tolower(Pstr[i]);
        }
        return varret;
    }






    Nbool::Nbool(Nstr Bval){
        std::string RBval = Bval.GetData();
        RBval = mtolower(RBval);
        if (RBval == "true"){
            boolean = true;
        }
        else{
            boolean = false;
        }
    }
    Nbool::Nbool(Nint Bval){
        if (stoi(Bval.GetValue()) == 0){
            boolean = false;
        }
        else{
            boolean = true;
        }
    }
    Nbool::Nbool(std::string Bval){
        if (stoi(Bval) == 0){
            boolean = false;
        }
        else{
            boolean = true;
        }
    }
    Nbool::Nbool(bool Bval){boolean = Bval;}
    Nbool::Nbool(int Bval){
        if (Bval == 0){
            boolean = false;
        }
        else{
            boolean = true;
        }
    }

    bool Nbool::GetBool(){return boolean;}
    Etype Nbool::GetType(){return type;}


    void Nbool::SetBool(Nstr Bval){
        std::string RBval = Bval.GetData();
        RBval = mtolower(RBval);
        if (RBval == "true"){
            boolean = true;
        }
        else{
            boolean = false;
        }
    }
    void Nbool::SetBool(Nint Bval){
        if (stoi(Bval.GetValue()) == 0){
            boolean = false;
        }
        else{
            boolean = true;
        }
    }
    void Nbool::SetBool(std::string Bval){
        if (stoi(Bval) == 0){
            boolean = false;
        }
        else{
            boolean = true;
        }
    }
    void Nbool::SetBool(bool Bval){boolean = Bval;}
    void Nbool::SetBool(int Bval){
        if (Bval == 0){
            boolean = false;
        }
        else{
            boolean = true;
        }
    }
    void Nbool::SetBool(Nbool Bval){boolean = Bval.GetBool();}



    Nbool::~Nbool(){}
} // namespace ncpp
