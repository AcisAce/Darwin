
#include <iostream>
#include <cstdlib>

int menu()
{
   int nOption;


   while(nOption!=1&&nOption!=2&&nOption!=3)
    {std::cout<<"  Choose Option: "<<std::endl<<
          "  1) Start Program"<<std::endl<<
          "  2) Help         "<<std::endl<<
          "  3) exit         "<<std::endl<<
          ">>";
          std::cin>>nOption;
    }

   if (nOption==3)
        exit(1);

   else
    return nOption;

}
