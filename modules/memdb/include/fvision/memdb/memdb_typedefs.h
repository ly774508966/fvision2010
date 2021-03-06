#ifndef FVISION_MEMDB_TYPEDEFS_H_
#define FVISION_MEMDB_TYPEDEFS_H_

#include "IndexedObjectsDatabase.h"
#include "MultipleFrameIndexedObjectsDatabase.h"
#include "IndexedObjectsDatabaseMapImpl.h"
#include "MultipleFrameIndexedObjectsDatabaseMapImpl.h"

namespace fvision {

typedef IndexedObjectsDatabase<int> IntIdb;
typedef IndexedObjectsDatabaseMapImpl<int> IntIdbImpl;
typedef MultipleFrameIndexedObjectsDatabase<int> IntMdb;
typedef MultipleFrameIndexedObjectsDatabaseMapImpl<int> IntMdbImpl;

typedef IndexedObjectsDatabase<double> DoubleIdb;
typedef IndexedObjectsDatabaseMapImpl<double> DoubleIdbImpl;
typedef MultipleFrameIndexedObjectsDatabase<double> DoubleMdb;
typedef MultipleFrameIndexedObjectsDatabaseMapImpl<double> DoubleMdbImpl;

typedef IndexedObjectsDatabase<float> FloatIdb;
typedef IndexedObjectsDatabaseMapImpl<float> FloatIdbImpl;
typedef MultipleFrameIndexedObjectsDatabase<float> FloatMdb;
typedef MultipleFrameIndexedObjectsDatabaseMapImpl<float> FloatMdbImpl;


}
#endif // FVISION_MEMDB_TYPEDEFS_H_