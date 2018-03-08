//
//  numero complexo.hpp
//  03:06
//
//  Created by Felipe Alexandre de Barros Pinto on 03/06/18.
//  Copyright © 2018 Felipe Alexandre de Barros Pinto. All rights reserved.
//
//  Operações com numeros complexos

#ifndef numero_complexo_hpp
#define numero_complexo_hpp

#include <iostream>
#include <cmath>

using namespace std;

struct complexo { double r, i; };

complexo    operator+           (complexo c1, complexo c2);
complexo    operator*           (complexo c1, complexo c2);
void        imprimir_complexo   (complexo c1);
complexo    ler                 (void);
void        executar_ncomplexo  (void);

#endif /* numero_complexo_hpp */
