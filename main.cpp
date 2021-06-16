#include <iostream>
#include <string.h>
#include <time.h>               //for randomising rand() with time
#include <unistd.h>

using namespace std;

int main()
{
    string name[] = {"Me", "Myself", "hello"};

    srand((unsigned) time(0));

    cout << "Wait for it...." << endl;
    sleep(1);
    cout << "Wait for it...." << endl;
    sleep(1);
    cout << "Wait for it...." << endl;
    sleep(1);
    cout << "Wait for it....\n" << endl;
    sleep(1);

    string winner = name[rand() % (sizeof(name)/sizeof(name[0]))];
    cout << "And the winner is: ";
    sleep(1);
    cout << winner << endl;
    sleep(1);
    cout << "Congrats " << winner << "!";

    return 0;
}
