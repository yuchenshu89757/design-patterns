#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

#include "Leader.h"

class Director : public Leader{
public:
    Director(const std::string&);
    void handleRequest(const Request&)override;
};
#endif // _DIRECTOR_H_
