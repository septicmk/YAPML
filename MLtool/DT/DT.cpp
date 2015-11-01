/*
ID: septicmk
LANG: C++
TASK: DT.cpp
*/

#include "DT.h"
#include "../Core/Core.h"
#include <boost/serialization/vector.hpp>
#include <boost/serialization/queue.hpp>
#include <boost/serialization/export.hpp> 
#include <vector>
#include <queue>
#include <fstream>  

BOOST_CLASS_EXPORT(DT)

void DT::Init(size_t nrow, size_t ncol){
    this->ncol = ncol;
    data.clear();
    hists.clear();
}

MLalgorithm* DT::operator +(MLalgorithm &rhs){
    MLalgorithm *pret = new DT();
    pret->Init(this->nrow, this->ncol);
    for(size_t i = 0; i < this->nrow; i++){
        if (data[i*ncol+ncol] != 0) continue;

    }


}

void DT::beginDataScan(std::vector<double> records, size_t feat_dim){

}

void DT::endDataScan(){

}

MLalgorithm* DT::processRecord(std::vector<double> records, size_t feat_dim){

}

bool DT::isConverged(MLalgorithm* rhs, size_t feat_dim, double eps){

}

void DT::finish(std::vector<double> records, size_t feat_dim){

}




