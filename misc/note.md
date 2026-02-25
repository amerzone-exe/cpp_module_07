# Les templates en c++

## Template de fonction:

-Un *template de fonction* permet de **définir une seule fonction** qui fonctionne avec **plusieurs types de données**. 
Le type est **déterminé automatiquement** par le **compilateur** lors de l’appel de la fonction.

### Syntaxe de base (exemple)
```c++

#include <iostream>

using namespace std;

template <typename T>

T addition(T a, T b) {
    return a + b;
}

int main() {
    cout << "Addition de deux entiers : " << addition(5, 3) << endl;    // Affiche 8
    cout << "Addition de deux flottants : " << addition(2.5, 3.1) << endl; // Affiche 5.6
    return 0;
}
```

## Template de classes:

Un *template de classe* fonctionne de la meme maniere, mais c'est l'attribut de la classe qui va fonctionner avec plusiers types de données.

### Syntaxe de base (exemple)

```c++
#include <iostream>
using namespace std;

template <typename T>
class Boite {
private:
    T contenu;

public:
    Boite(T c) : contenu(c) {}
    void afficher() {
        cout << "Contenu : " << contenu << endl;
    }
};

int main() {
    Boite<int> boiteEntier(10);
    Boite<string> boiteTexte("Bonjour");

    boiteEntier.afficher();  // Affiche : Contenu : 10
    boiteTexte.afficher();   // Affiche : Contenu : Bonjour

    return 0;
}
```
