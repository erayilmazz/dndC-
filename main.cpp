#include "dnd.h"

#include <iostream>
using std::cout;
using std::endl;

int main(){
    Character firstPlayer("Hakan");
    cout << firstPlayer.getName() << endl;
    firstPlayer.setName("Ferdi");
    cout << firstPlayer.getName() << endl;
    firstPlayer.chooseClass("tank");
    cout << firstPlayer.getClass() << endl;
    
    Character secondPlayer("da");
    cout << secondPlayer.getName() << endl;
    firstPlayer.setName("Arda");
    cout << secondPlayer.getName() << endl;
    firstPlayer.chooseClass("tanker");
    cout <<  secondPlayer.getClass() << endl;
    system("pause");
}