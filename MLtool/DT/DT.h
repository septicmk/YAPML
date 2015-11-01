/*
ID: septicmk
LANG: C++
TASK: DT.h
*/

#ifndef __DT
#define __DT

#include "../MLalgorithm/MLalgorithm.h"
#include <boost/serialization/vector.hpp>
#include <vector>

class DT:public MLalgorithm{
    private:
        friend class boost::serialization::access;
        template <typename Archive>
            void serialize (Archive &ar, const unsigned int version){
                ar & boost::serialization::base_object<MLalgorithm>(*this);
            }
    public:
        std::vector< std::vector<int> > hists;
        void Init(size_t nrow, size_t ncol);
        MLalgorithm* operator +(MLalgorithm &rhs);
        void beginDataScan(std::vector<double> records, size_t feat_dim);
        void endDataScan();
        MLalgorithm* processRecord(std::vector<double> records, size_t feat_dim);
        bool isConverged(MLalgorithm* rhs, size_t feat_dim, double eps);
        void finish(std::vector<double> records, size_t feat_dim);
};

#endif



