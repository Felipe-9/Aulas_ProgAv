//
//  funcoes.cpp
//  02:27
//
//  Created by Felipe Alexandre de Barros Pinto on 03/06/18.
//  Copyright © 2018 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "funcoes.hpp"

double *receber_valores_do_usuario  (void){
    
    unsigned l1=0, l2;
    double *v=NULL, *copia;
    
    cout << "insira valores" << endl;
    
    do {
        if (l1!=0) { l1++; }
        if (v!=NULL) {
            copia = new double[l1];
            for (l2=0; l2<l1; l2++) { copia[l1] = v[l1]; }
            cout << "\t$ "; cin >> copia[l1]; cout << endl;
            delete[] v; v = copia; delete[] copia;
        } else {
            v = new double;
            cout << "\t$ "; cin >> *v; cout << endl;
        }
        
    } while (v[l1]!=0);
    
    return v;
}
double calcular_media               (const double &v) {
    
}
