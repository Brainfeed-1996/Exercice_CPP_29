/* Écrire une fonction, sans argument ni valeur de retour, qui se contente d’afficher, à chaque appel, le nombre total de fois où elle a été appelée sous la forme :
appel numéro 3
*/

#include <iostream>
using namespace std ;
void fcompte (void)
{
    static int i ; // il est inutile, mais pas interdit, d'écrire i=0
    i++ ;
    cout << "appel numéro " << i << "\n" ;
}
int main()
{   void fcompte (void) ;
    int i ;
    for (i=0 ; i<3 ; i++) fcompte () ;
}

/* Résultat :
appel numéro 1
appel numéro 2
appel numéro 3


=== Code Execution Successful ===
*/
