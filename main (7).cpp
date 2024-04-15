/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

 
    struct horario{
        int hora, min, seg;
        
    };
    
    
    template <typename T>
    T somar(T a, T b){
        
    
    return a+b;
        
    }
    
  

  int main(){
      
      horario a = {10, 45, 35};
      horario b = {5,20,15};
    
      horario resultado; // criar um tipo horario para armazenar as somas;
      
      
    resultado.min = somar(a.min, b.min);
    resultado.seg = somar(a.seg, b.seg);
    resultado.hora = somar(a.hora, b.hora);
   
      
      
      
    cout << resultado.hora << ":" << resultado.min << ":" << resultado.seg;
    
    
      

  }