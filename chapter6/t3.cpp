#include <iostream>


int main() {
    using namespace std;
    int ch;
    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnivore\tp) pianist" << endl;
    
    cout << "t) tree\t\tg) game" << endl;
    ch = cin.get();
    
    while ( ch != 'c' and ch != 'p' and ch != 't' and ch != 'g' ) {
        cout << "Please enter a c, p, t, or g: ";
        ch = cin.get();
    }
        
    
    switch(ch) {
        case 'c': cout << "A carnivore is an animal that eats meat." 
                       << endl;
                  break;
        case 'p': cout << "A pianist is a person who plays the piano."
                       << endl;
                  break;
        case 't': cout << "A maple is a tree."
                       << endl;
                  break;
        case 'g': cout << "A game is one particular occasion on which a                              game is played."
                       << endl;
                  break;
    }
    return 0;
}
