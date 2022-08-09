#include <enet/enet.h>

#include <iostream>
using namespace std;

#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "Winmm.lib")

int main()
{
    if(enet_initialize() != 0) {
        cout << "An error ocurred while initializing ENet." << endl;
        return EXIT_FAILURE;
    }
    atexit(enet_deinitialize);

    return EXIT_SUCCESS;
}