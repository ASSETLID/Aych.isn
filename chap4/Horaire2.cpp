// Ces programmes sont sous licence CeCILL-B V1.
#include <iostream>
#include <string>

using namespace std;

static void annoncerUnVol (string v, string h) 
{
   cout << "Le vol en direction de ";
   cout << v;
   cout << " décolera à ";
   cout << h;
   cout << endl;
   cout << "-----------------------------------------------" << endl;
   cout << endl;
}

int main()
{
   annoncerUnVol("Tokyo","9h00");
   annoncerUnVol("Sydney","9h30");
   annoncerUnVol("Toulouse","9h45");
}
