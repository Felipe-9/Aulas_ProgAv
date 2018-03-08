//
//  Exercicio matrizes.cpp
//  03:06
//
//  Created by Felipe Alexandre de Barros Pinto on 03/06/18.
//  Copyright © 2018 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include "Exercicio matrizes.hpp"

#include <iostream>

using namespace std;

/*
 ExercÌcio de utilizaÁ„o de funÁıes em conjunto com arrays alocados dinamicamente (ponteiros)
 
 Nesse exercicio, voce deve definir o novo tipo Matriz utilizando uma struct, que armazena
 tanto o numero de linhas e de colunas de cada matriz quanto o ponteiro
 
 A partir desse tipo Matriz, voce deve programar as funcoes necessarias para executar o programa
 principal a seguir. A ideia eh permitir fazer as operacoes indicadas com matrizes de quaisquer
 dimensoes, fornecidas pelo usuario no momento da execucao (e nao na compilacao).
 
 */

// FACA SEUS ACRESCIMOS NO CODIGO AQUI

void executar_matriz (void)
{
    // Declaracao das matrizes
    matriz *A, *B, *C;
    
    A = receber_matriz();
    B = receber_matriz();
    
    /*
    // produto das matrizes
    C = produtoMatrizes(A,B);
    
    // Impressao das matrizes
    imprimeMatriz(C);
    
    // Liberacao das memorias
    liberaMatriz(A);
    liberaMatriz(B);
    liberaMatriz(C);
    */
}
matriz *receber_matriz (void) {
    
    matriz *m = new matriz;
    
    cout << "Log n de linhas\t$ ";
    cin  >> m -> j;
    cout << "Log n de colunas\t$ ";
    cin  >> m -> i;
    
    unsigned int r1, r2;
    m -> m = new double*[(*m).i];
    
    for (r1=0; r1<(*m).j; r1++) {
        m -> m[r1] = new double[(*m).j];
        for (r2=0; r2<(*m).i; r2++) { cout << "( " << r1+1 << " , " << r2+1 << " )\t$ "; cin >> m -> m[r1][r2]; }
    }
    
    return m;
}



























