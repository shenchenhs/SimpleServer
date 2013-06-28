#include <iostream>
#include "server.h"

int main(int argc, char * const argv[])
{   
    Server server("0.0.0.0", 10000); 
    
    std::cout << "Server Started" << std::endl;
    
    server.StartServer();
    
    return 0;
}
