#include "ReemplazoLru.h"
#include <iostream>
#include <algorithm>

ReemplazoLru::ReemplazoLru() : TipoReemplazo() {
    //ctor
}

uint32_t ReemplazoLru::agregar_direccion(uint32_t una_direccion) {
    cout << "Implementacion en LRU" << endl;

    this->buscar(una_direccion);

//    this->cola.push_back(una_direccion);
    return 0;
}

int ReemplazoLru::buscar(uint32_t una_direccion) {
//    deque<string>::iterator it = find(this->cola.begin(), this->cola.end(), una_direccion);
//    int *it = find(this->cola.begin(), this->cola.end(), una_direccion);
//    if(it!=this->cola.end()) {
        // Do your stuff. Here I am simply deleting the element
//        cout << "ALGO " << this->cola.at(*it) << endl;
//        it = this->cola.erase(it);
        // Note: Always save returned iterator from erase/insert method, otherwise
        // iterator will point to deleted resource, which leads to undefined behaviour.
//        return -1;
//    }
    return 0;
}


ReemplazoLru::~ReemplazoLru() {
    //dtor
}
