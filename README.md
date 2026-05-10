# NCPP

ncpp est une librairie en C++ qui a pour but premier d'améliorer les anciens type de C/C++.
Voici les types qui ont eu leurs alternatives:
  - int/long/long long
  - string 
  - double/float
  - bool

Les types secondaires comme long, long long, int64_t, size_t etc.. Ne seront pas tous refait. Certains seront juste compter/fusionner avec d'autre type. 

-> [!IMPORTANT]
> Nint N'EST PAS un type pour faire des mathématiques avancé. Il est fait pour faciliter le stockage de gros nombre 
et n'est pas fait pour des calculs précis 

# Déclaration

## Pour Nint, les fonctions actuelles sont :
```
Nint(const std::string& Nvalue) // Avec comme surcharge: long long, Nstr
std::string GetValue()
void SetValue(std::string Nvalue) // Avec comme surcharge: long long, Nint et Nstr
size_t GetSize()
Etype GetType()
void Add(std::string number) // Avec comme surcharge: long long, Nint et Nstr
```

## Pour Nstr:
```
Nstr(const std::string& Ndata)
std::string GetData()
void SetData(std::string Ndata) // Avec comme surcharge: Nstr 
size_t GetSize()
Etype GetType()
void FindAndReplace(std::string tkn, std::string rep) // Avec comme surcharge: Nstr
```

## Pour Ndouble:
```
Ndouble(const std::string& Nvalue) // Avec comme surcharge: double et Nstr
std::string GetValue()
void SetValue(std::string Nvalue) // Avec comme surcharge: double, Ndouble et Nstr
size_t GetSize()
Etype GetType()
void Add(std::string number) // Avec comme surcharge: double, Ndouble et Nstr
```

## Pour Nbool:
```
Nbool(const std::string& Bval) // Avec comme surcharge: bool, Nint, Nstr et Int
bool GetValue()
void SetValue(std::string Nvalue) // Avec comme surcharge: bool, Nint, Nstr, Int et Nbool
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

### -> [Nstr]:
```
std::string GetData() -> Retourne la chaine de charactère que l'objet stocke
void SetData(const std::string& Ndata) -> Remplace la chaine stocker par le nouveau Ndata
size_t GetSize() -> Donne la longueur de la chaine de charatère stocké
Etype GetType() -> Retourne le type sous forme de Etype (ici NSTR)
void FindAndReplace(std::string tkn, std::string rep) -> Trouve dans la chaine de charactère {tkn} et le remplace par {rep}
```
--------------------

### -> [Nint]:
```
std::string GetValue() -> Retourne la valeur stocké
void SetValue(const std::string& Nvalue) -> Remplace la valeur stocké par Ndata
size_t GetSize() -> Retourne la longueur du nombre stocké
Etype GetType() -> Retourne le type sous forme de Etype (ici NINT)
```

--------------------

### -> [Ndouble]:
```
std::string GetValue() -> Retourne le double stocké
void SetValue(const std::string& Nvalue) -> Remplace la valeur stocké par celle donné
size_t GetSize() -> Retourne la taille du nombre stocké
Etype GetType() -> Retourne le Etype (ici NDOUBLE)
void Add(std::string number) -> Fait une addition entre la valeur stocké et le terme donné. Le résultat modifie la valeur stocké
```

--------------------

### -> [Nbool]:
```
bool GetValue() -> Retourne le bool stocké
void SetValue(const std::string& Nvalue) -> Remplace le bool stocké par celui donné
Etype GetType() -> Retourne le Etype (ici NBOOL) 
```


Si vous trouvez un bug notifiez le avec un email:
[duc.kalipython@gmail.com](mailto:duc.kalipython@gmail.com)



