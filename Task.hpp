#pragma once

#include <iostream>

class Task{
    public:
    void operator()(){
        PrintData();
    }
    void PrintData(){

        std::cout<<"打印信息"<<std::endl;
    }

};