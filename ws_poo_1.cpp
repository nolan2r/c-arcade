
#include <iostream>
#include <string>

class Date {
    public : 
    int j;
    int m;
    int a;

    void afficher(){
   
        std::cout <<j<<"/"<<m<<"/"<<a<<std::endl;
    }
    void incr(){
        if (j == 31) {
            j=1;
            m+=1;
            return;
        }
        if (j == 28 && m == 2){
            j=1;
            m=3;
            return;
        
        }
        if (j==30 && (m==4 ||m==6 ||m==9 ||m==11)){
            j=1;
            m+=1;
            return;
        }

        if (j == 31 && m == 12){
            j=1;
            m=1;
            a+=1;
            return;

        }
        j+=1;
    }
};

int main(){
    Date d1;
    std::cin>>d1.j;
    std::cin>>d1.m;
    std::cin>>d1.a;
    d1.afficher();
    d1.incr();
    d1.afficher();

}
