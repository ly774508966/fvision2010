#ifndef FVISION_POINT_PAIRS_DRAWER_H_
#define FVISION_POINT_PAIRS_DRAWER_H_

#include "PointDrawer.h"
#include "LineDrawer.h"

#include <vector>

namespace fvision {

/// given a point pair pt1 and pt2, draw pt1, pt2 and a line from pt1 to pt2 on the same image
class PointPairsDrawer {
public:
	PointPairsDrawer(void);
	~PointPairsDrawer(void);

public:
	PointDrawer pointDrawer1;
	PointDrawer pointDrawer2;
	LineDrawer  lineDrawer;

public:
	void draw(IplImage* im, const std::vector<CvPoint2D32f>& x1s, const std::vector<CvPoint2D32f>& x2s);
	void draw(IplImage* im, const CvPoint2D32f& x1, const CvPoint2D32f& x2);

};

}
#endif // FVISION_POINT_PAIRS_DRAWER_H_