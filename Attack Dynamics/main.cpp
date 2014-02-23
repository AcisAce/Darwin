#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int predator();
int recover=0;
int hit1=0;
int hit2=0;

int main()
{
    cout<<"Please tell the time delay between each step in second: ";
       float tSleepms;
       cin>>tSleepms;
       int tSleeps;
       tSleeps=(tSleepms*1000);
       cout<<endl<<endl;
   srand(time(0));


   int prStr;
   for(int orgStr=100;orgStr>=0;)
   {

       prStr=predator();

       if (prStr==1)
       {
           orgStr-=1;
           cout<<"predator attacked with power 1"<<endl;
           cout<<"orgStr="<<orgStr<<endl<<endl;
           ++hit1;
       }
       else if (prStr==2)
       {
           orgStr-=2;
           cout<<"predator attacked with power 2"<<endl;
           cout<<"orgStr="<<orgStr<<endl<<endl;
           ++hit2;
       }
       else if (prStr==0)
       {   orgStr+=2;
           cout<<"predator attacked with power 0. Organism recovered 2 point."<<endl;
           cout<<"orgStr="<<orgStr<<endl<<endl;
           ++recover;
       }

       if (orgStr<=0)
       {
           cout<<"the organism has died"<<endl<<endl;
           cout<<"recovery="<<recover<<" times"<<endl;
           cout<<"1 hit="<<hit1<<" times"<<endl;
           cout<<"2 hit="<<hit2<<" times"<<endl;
           int totaltime=hit1+hit2+recover;
           cout<<"total time="<<totaltime<<endl<<">>";

           char detEx;
           cin>>detEx;
           if(detEx=='exit')
            exit(1);

           if(detEx=='restart')
            main();
    }
    Sleep(tSleeps);


   }


}


int predator()
{
    int atStr;  //attack strength
    atStr=((rand())%3);
    return atStr;

}
