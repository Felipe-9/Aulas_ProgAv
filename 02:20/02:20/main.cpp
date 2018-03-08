//
//  main.cpp
//  02:20
//
//  Created by Felipe Alexandre de Barros Pinto on 20/02/18.
//  Copyright © 2018 Felipe Alexandre de Barros Pinto. All rights reserved.
//

#include <iostream>

using namespace std;

int main () {
    
    // endl = endline = quebra de linha
    // cout = tela
    
    float v1;
    
    v1 = 2.7;
    
    cout << v1 << '\t' << &v1 << '\t' << sizeof(v1) << endl;
    
    double v2;
    
    v2 = 2.7;
    
    cout << v2 << '\t' << &v2 << '\t' << sizeof(v2) << endl;
    
    char v3;
    
    v3 = 'a';
    
    cout << v3 << '\t' << &v3 << '\t' << sizeof(v3) << endl;
    
    
    
    // "tipo"  "nome" - cria variavel
    // "tipo" *"nome" - cria ponteiro
    
    int v4, *v5;
    
    v4 = 18;
    v5 = &v4;
    
    cout << v4 << '\t' << &v4 << '\t' << sizeof(v4) << endl;
    cout << v5 << '\t' << &v5 << '\t' << sizeof(v4) << endl;
    
}










