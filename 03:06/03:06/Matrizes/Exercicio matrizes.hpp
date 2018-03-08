//
//  Exercicio matrizes.hpp
//  03:06
//
//  Created by Felipe Alexandre de Barros Pinto on 03/06/18.
//  Copyright © 2018 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#ifndef Exercicio_matrizes_hpp
#define Exercicio_matrizes_hpp

#include <iostream>

using namespace std;

struct  matriz { unsigned int i, j; double **m; };

void    executar_matriz (void);
matriz  *receber_matriz (void);
void    cout_matriz     (const matriz &m);

#endif /* Exercicio_matrizes_hpp */
