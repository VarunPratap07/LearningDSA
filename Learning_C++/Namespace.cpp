#include <iostream>
#include <vector>

namespace first{
     int x=1;
}

namespace second{
     int x=2;
}

int main() {

     int x=3 ;

     std::cout<<"from namespace Local  x="<<x<<"\n";
     std::cout<<"from namespace first  x="<<first::x<<"\n";
     std::cout<<"from namespace second x="<<second::x<<"\n";
}
