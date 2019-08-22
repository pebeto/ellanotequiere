#include <iostream>
#include "../include/Ella.hpp"

Ella::Ella(){
    std::cout<<"Ella está aquí"<<std::endl;
}

Ella::~Ella(){
    std::cout<<"Y se fue"<<std::endl;
}

void Ella::meQuiere(){
    std::cout<<"Pero no te quiere"<<std::endl;
}
