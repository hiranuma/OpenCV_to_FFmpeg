#pragma once

#pragma warning(disable : 4819)
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>
#pragma warning(default: 4819)

#ifdef _DEBUG                       
#pragma comment(lib, "Debug/opencv_world330d.lib")
#else
#pragma comment(lib, "Release/opencv_world330.lib")
#endif
