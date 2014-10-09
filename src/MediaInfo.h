#ifndef CPP_INSTAGRAM_IMPL_MEDIA_INFO_H
#define CPP_INSTAGRAM_IMPL_MEDIA_INFO_H

#include "Media.h"

#include <string>

namespace Instagram
{
    struct MediaInfo
    {
        std::string mLink;
        std::string mCaption;
        std::string mCreatedTime;
        MediaType mType;
    };
}

#endif
