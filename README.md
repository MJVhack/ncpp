# NCPP

ncpp est une librairie en C++ qui a pour but premier d'améliorer les anciens type de C/C++.
Celle qui ont étais commencer actuellement sont:
  - int 
  - string 

Les types secondaires comme long, long long, int64_t, size_t etc.. sont compris dans les ncpp de leurs type primaire.
Exemple: 
  Ceux que j'ai citer (long, long long etc...) sont dans Nint.
  Tandis que char, char* et toute ses variantes sont avec Nstr.

-> [!IMPORTANT]
> Nint N'EST PAS un type pour faire des mathématiques avancé.

# Déclaration

Pour Nint, les fonctions actuelles sont :
std::string GetValue()
void SetValue(std::string Nvalue)
size_t GetSize()
Etype GetType()

Pour Nstr:
std::string GetData()
void SetData(std::string Ndata)
size_t GetSize()
Etype GetType()
void FindAndReplace(std::string tkn, std::string rep)

Etype:
INT,
NINT,
CHAR,
CHAR_P,
STRING,
NSTR

# Utilisation

-> [Nstr]:

GetData() -> Retourne la chaine de charactère que l'objet stocke
SetData(std::string Ndata) -> Remplace la chaine stocker par le nouveau Ndata
GetSize() -> Donne la longueur de la chaine de charatère stocké
GetType() -> Retourne le type sous forme de Etype (ici NSTR)
FindAndReplace(std::string tkn, std::string rep) -> Trouve dans la chaine de charactère {tkn} et le remplace par {rep}

--------------------

-> [Nint]:

GetValue() -> Retourne la valeur stocké
SetValue(std::string Nvalue) -> Remplace la valeur stocké par Ndata
GetSize() -> Retourne la longueur du nombre stocké
GetType() -> Retourne le type sous forme de Etype (ici NINT)


