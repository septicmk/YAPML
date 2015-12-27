/*
ID: septicmk
LANG: C++
TASK: 
*/
#include "MLalgorithm/MLalgorithm.h"
#include "Core/Core.h"
#include "PCA/PCA.h"

using namespace core;
using namespace pca;

int main(int argc,char *argv[]){
    Core<PCA> *p = new Core<PCA>();
    PCA *ptr = new PCA();
    p->mainLoop(argc, argv, ptr, 1e-7, 4);
    return 0;
}

