/**
 * architecture.h
 *
 * Describes a representation of an input image
 *
 * @author James Oldfield
 * @version 1.0 22/02/16
 */

#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "segment.h"

using namespace ofxCv;
using namespace cv;

class Architecture {
  private:
    static int arcCount; // Global count of objects created

    const int cCount; // local cache of global architecture count
    ofImage image;
    ofImage thresh;

    vector<ofPolyline> cartCoord; // Storing the cartesian representations of lines
    vector<ofPoint> iPts;

    vector<Vec2f> lines; // Storing the Hough lines
    Mat threshBin, img; // cv-style binary image
    ofImage imgCopy; // copy of the imange without the Hough Lines
    int threshold; // used to determind the threshold for h lines transform.

    bool drawIntersections = true;
    bool doSegsIntersect(ofPolyline a, ofPolyline b);

  public:
    Architecture(string _image, int _threshold = 175);
    void drawImage();
    void drawImageOriginal();

    /**
     * @brief Performs comparison of two image's segments to find the best replacement segment.
     *
     * @param arc1 The first architecture to compare.
     * @param arc2 The second architecture to compare.
     */
    static void findBestMatches(Architecture & arc1, Architecture & arc2);

    vector<Segment> segments;
};
