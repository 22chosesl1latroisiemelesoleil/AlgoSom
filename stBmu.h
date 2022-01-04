#ifndef stBmu_h
#define stBmu_h

#include <stdio.h>

// Best Matching Unit
typedef struct bmu {
    int colonne;
    int ligne;
    struct bmu *next;
}bmu;




#endif /* stBmu_h */
