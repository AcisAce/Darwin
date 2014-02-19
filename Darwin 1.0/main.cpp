#include <iostream>

using namespace std;
void logoDisp();
int menu();
void howTo();
int option;
void startProgram();

int main()
{
    logoDisp();
    option=menu();

    if(option==2)
        howTo();
    if(option==1)
        startProgram();





}
