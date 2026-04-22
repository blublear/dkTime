#ifndef WATCHY_DKTIME_H
#define WATCHY_DKTIME_H

#include <Watchy.h>
#include "dkong.h"

class WatchyDkTime : public Watchy{
    using Watchy::Watchy;
    public:
        void drawWatchFace();
        void drawAnim();
};

#endif
