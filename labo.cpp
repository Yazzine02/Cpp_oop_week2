#include <iostream>
#include <string>
using namespace std;

class Souris
{
  /*****************************************************
    Completez le programme a partir d'ici.
  *******************************************************/
private:
    double poids;
    int age;
    string couleur;
    double esperance_vie;
    bool clonee;

public:
    Souris(double weight,string color,int age=0,double life_expectancy=36):poids(weight),couleur(color),age(age),esperance_vie(life_expectancy){
        clonee=false;
        cout<<"Une nouvelle souris !"<<endl;
    };
    Souris(Souris &toba):poids(toba.poids),age(toba.age),couleur(toba.couleur),esperance_vie(toba.esperance_vie*0.8){
        clonee=true;
        cout<<"Clonage d'une souris !"<<endl;
    }
    ~Souris(){
        cout<<"Fin d'une souris..."<<endl;
    }
    void afficher() const{
        cout<<"Une souris "<<couleur;
        if(clonee)cout<<", clonee,";
        cout<<" de "<<age<<" mois et pesant "<<poids<<" grammes"<<endl;
    }
    void vieillir(){
        age+=1;
        if(clonee && age >= esperance_vie*0.5)couleur="verte";
    }
    void evolue(){
        age=(int)esperance_vie;
    }
  /*******************************************
   * Ne rien modifier apres cette ligne.
   *******************************************/

}; // fin de la classe Souris

int main()
{
    Souris s1(50.0, "blanche", 2);
    Souris s2(45.0, "grise");
    Souris s3(s2);
    // ... un tableau peut-être...
    s1.afficher();
    s2.afficher();
    s3.afficher();
    s1.evolue();
    s2.evolue();
    s3.evolue();
    s1.afficher();
    s2.afficher();
    s3.afficher();
    return 0;
}