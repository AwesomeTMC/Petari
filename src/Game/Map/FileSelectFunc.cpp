#include "Game/Map/FileSelectFunc.hpp"
#include "Game/Map/FileSelectIconID.hpp"
#include "Game/Util/MemoryUtil.hpp"
#include "Game/Util/MessageUtil.hpp"
#include <RVLFaceLib.h>

namespace FileSelectFunc {
    u32 getMiiNameBufferSize() {
        return RFL_NAME_LEN + 1;
    }

    void copyMiiName(u16* pName, const FileSelectIconID& rIcon) {
        if (rIcon.isFellow()) {
            const char* pMessageId = sIconNameMessageID[rIcon.getFellowID()];
            const wchar_t* pMessage = MR::getGameMessageDirect(pMessageId);

            MR::copyMemory(pName, pMessage, getMiiNameBufferSize() * sizeof(wchar_t));
        }
        else if (rIcon.isMii()) {
            RFLAdditionalInfo info;
            RFLErrcode err = RFLGetAdditionalInfo(&info, RFLDataSource_Official, NULL, rIcon.getMiiIndex());

            if (err == RFLErrcode_Success) {
                MR::copyMemory(pName, info.name, getMiiNameBufferSize() * sizeof(wchar_t));
            }
        }
    }
};
