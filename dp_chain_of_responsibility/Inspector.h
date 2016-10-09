#ifndef _INSPECTOR_H_
#define _INSPECTOR_H_
#include "Leader.h"

class Inspector : public Leader{
public:
    Inspector(const std::string&);
    void handleRequest(const Request&)override;
};
#endif // _INSPECTOR_H_
