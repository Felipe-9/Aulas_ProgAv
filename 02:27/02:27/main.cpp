//
//  main.cpp
//  02:27
//
//  Created by Felipe Alexandre de Barros Pinto on 27/02/18.
//  Copyright © 2018 Felipe Alexandre de Barros Pinto. All rights reserved.
//
//  ∀ conjunto de numeros inseridos pelo usuário
//  o programa calcula a media e conta a quantidade
//  de valores acima e abaixo da média
//
//  Ponteiro super dinamico

#include <iostream>
#include "funcoes.hpp"

using namespace std;

void receber_valores_do_usuario (double &p);

int main() {
    
    int i1=0, i2, i3, i4;                   // Contadores
    double *a, *b; a = NULL; b = NULL;      // Ponteiros
    double s=0;                             // Soma dos valores
    
    a = receber_valores_do_usuario();
    
    i1--;   // Ajuste da quantidade de valores inseridos
    
    if (b != NULL) {    // Contagem de numeros maiores e menores
        for (i2=0, i3=0; i2<i1; i2++) { if (b[i2]<(s/i1)) { i3++; }  }
        for (i2=0, i4=0; i2<i1; i2++) { if (b[i2]>(s/i1)) { i4++; }  }
    } else {
        for (i2=0, i3=0; i2<i1; i2++) { if (a[i2]<(s/i1)) { i3++; }  }
        for (i2=0, i4=0; i2<i1; i2++) { if (a[i2]>(s/i1)) { i4++; }  }
    }
    
    if (i1!=0) { cout << "Media -> " << s/i1 << endl << "Numeros abaixo da media -> " << i3 << endl << "Numeros acima da media -> " << i4 << endl; }
    else       { cout << "Nenhum numero digitado" << endl; }    // Mensagem de ERRO!
}














