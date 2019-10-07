#include <iostream>
#include <time.h>
#include <unistd.h>
#include <pthread/pthread.h>
#include <chrono>
#include <sys/wait.h>
#include <stdio.h>

using namespace std;
// using namespace std::chrono;
// int main()
// {
//     while (true)
//     {
//         clock_t t;
//         t = clock();

//         t = clock() - t;
//         double time_taken = ((double)t) / CLOCKS_PER_SEC;

//         cout << "hello" << endl;
//         cout << time_taken << endl;

//         auto start = high_resolution_clock::now();

//         fork();

//         // auto stop = high_resolution_clock::now();

//         // auto duration = duration_cast<microseconds>(stop - start);

//         // cout << "Time taken by function: "
//         //      << duration.count() << " microseconds" << endl;

//         sleep(2);
//         exit(1);
//     }
//     return 0;
// }

int main(int argc, char **argv)
{
    char *myName = argv[1];
    char *progName = argv[2];

    int cpid = fork();
    if (cpid == 0)
    {
        printf("The child of %s is % d\n", myName, getpid());
        execlp("/ bin / ls", "wocaonimalegebi", NULL);
        printf("oh NO.THEY LIED TO ME !!!\n");
    }
    else
    {
        printf("My child is % d\n", cpid);
        wait(&cpid);
        exit(0);
    }
}