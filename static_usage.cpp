//name sai sankar jena
#include <iostream>


using namespace std;
int gv = 100; 


extern int ev;

int main() {
    
    ev = 5;

    
    static int sv = 10;

    
    register int rv = 15;

    
    auto av = 20;

    
    int gv = 200;

        cout << "global: " << ::gv<< " (size: " << sizeof(::gv) << " bytes)" << std::endl;
    cout << "local: " <<gv << " (size: " << sizeof(gv) << " bytes)" << std::endl;
    cout << "extern: " << ev << " (size: " << sizeof(ev) << " bytes)" << std::endl;
    cout << "static: " <<sv << " (size: " << sizeof(sv) << " bytes)" << std::endl;
    cout << "register: " << rv << " (size: " << sizeof(rv) << " bytes)" << std::endl;
    cout << "auto: " << av << " (size: " << sizeof(av) << " bytes)" << std::endl;

    return 0;
}


int ev;
