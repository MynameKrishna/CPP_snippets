#include <iostream>
#include <string>

using namespace std;


class Network {

public:
int routers;
int switches;

Network()
{
routers = 0;
switches = 0;
}

Network(int nrouters,int nswitches)
{
routers = nrouters;
switches = nswitches;
}

void Display()
{
cout << "Number of routers is " << routers << endl;
cout << "Number of switches is " << switches << endl;
}

Network operator*(Network n)
{
   Network temp ;
   temp.routers = this->routers * n.routers;
   temp.switches= this->switches * n.switches;
   return temp;
}
};


int main()
{
Network *l = new Network(10,20);
Network wan(50,50);
Network man = (*l) * wan;
man.Display();

delete l;
return 0;
}
