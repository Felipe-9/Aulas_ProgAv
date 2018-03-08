//
//  numero complexo.cpp
//  03:06
//
//  Created by Felipe Alexandre de Barros Pinto on 03/06/18.
//  Copyright © 2018 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "numero complexo.hpp"

complexo operator+      (complexo c1, complexo c2) {
    
    c1.r = c1.r + c2.r; c1.i = c1.i + c2.i;
    
    return c1;
}
complexo operator*      (complexo c1, complexo c2) {
    
    c1.r = c1.r * c2.r; c1.i = c1.i * c2.i;
    
    return c1;
}
void imprimir_complexo  (complexo c1) {
    cout << c1.r << (c1.i<0.0 ? '-' : '+') << fabs(c1.i) << endl;
}
complexo ler            (void) {
    
    complexo c1;
    cout << "Log parte real\t$ "; cin >> c1.r;
    cout << "Log parte imaginaria\t$ "; cin >> c1.i;
    
    return c1;
}
void executar_ncomplexo (void) {
    complexo x, y, z;
    
    x = ler();
    y = ler();
    
    z = x + y;
    imprimir_complexo(z);
    
    z = x * y;
    imprimir_complexo(z);
}
