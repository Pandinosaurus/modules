/*
Copyright (C) 2013 Stefan Duffner, LIRIS, INSA de Lyon, France

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TL_VIDEO_OUTPUT
#define TL_VIDEO_OUTPUT

#include <string>
#include "Image.h"
#include <opencv2/highgui/highgui.hpp>

namespace TLInOut
{

class VideoOutput
{
  private:
    cv::VideoWriter* mVWriter;
    float mfFPS;
    int miWidth;
    int miHeight;

  public:
    VideoOutput(std::string filename, int width, int height, float fps=25);
    ~VideoOutput();

    void addFrame(TLImageProc::Image8U* img);
};

}


#endif
