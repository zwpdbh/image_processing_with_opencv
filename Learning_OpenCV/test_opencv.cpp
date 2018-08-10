//
// Created by zwpdbh on 2018/8/10.
//

#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, char *argv[]) {
    Mat image = imread("/Users/zw/code/C_and_C++_Projects/Image_Processing_with_OpenCV/images/building01.jpg");
    if (image.empty()) {
        cout << "image could not be opened" << endl;
        return -1;
    }

    namedWindow("outputWindow");
    imshow("outputWindow", image);
    waitKey(0);

    return 0;
}