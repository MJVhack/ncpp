# NCPP

ncpp est une librairie en C++ qui a pour but premier d'améliorer les anciens type de C/C++.
Voici les types qui ont eu leurs alternatives:
  - int 
  - string 

Les types secondaires comme long, long long, int64_t, size_t etc.. Ne seront pas tous refait. Certains seront juste compter/fusionner avec d'autre type. 

-> [!IMPORTANT]
> Nint N'EST PAS un type pour faire des mathématiques avancé. Il est fait pour faciliter le stockage de gros nombre 
et n'est pas fait pour des calculs précis 

# Déclaration

## Pour Nint, les fonctions actuelles sont :
```
std::string GetValue()
void SetValue(std::string Nvalue) // Avec comme surcharge: long long, Nint et Nstr
size_t GetSize()
Etype GetType()
void Add(std::string number) // Avec comme surcharge: long long, Nint et Nstr
```

## Pour Nstr:
```
std::string GetData()
void SetData(std::string Ndata) // Avec comme surcharge: Nstr 
size_t GetSize()
Etype GetType()
void FindAndReplace(std::string tkn, std::string rep) // Avec comme surcharge: Nstr
```

## Pour Ndouble:
```
std::string GetValue()
void SetValue(std::string Nvalue) // Avec comme surcharge: double, Ndouble et Nstr
size_t GetSize()
Etype GetType()
void Add(std::string number) // Avec comme surcharge: double, Ndouble et Nstr
```


## Etype:
```
INT,
NINT,
CHAR,
CHAR_P,
STRING,
NSTR
```
# Utilisation

-> [Nstr]:
```
GetData() -> Retourne la chaine de charactère que l'objet stocke
SetData(std::string Ndata) -> Remplace la chaine stocker par le nouveau Ndata
GetSize() -> Donne la longueur de la chaine de charatère stocké
GetType() -> Retourne le type sous forme de Etype (ici NSTR)
FindAndReplace(std::string tkn, std::string rep) -> Trouve dans la chaine de charactère {tkn} et le remplace par {rep}
```
--------------------
```
-> [Nint]:

GetValue() -> Retourne la valeur stocké
SetValue(std::string Nvalue) -> Remplace la valeur stocké par Ndata
GetSize() -> Retourne la longueur du nombre stocké
GetType() -> Retourne le type sous forme de Etype (ici NINT)
```



Si vous trouvez un bug notifiez le avec un email:
[duc.kalipython@gmail.com](mailto:duc.kalipython@gmail.com)



