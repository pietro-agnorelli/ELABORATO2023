//
// Created by Pietro on 12/06/2023.
//

#ifndef ELABORATO2023_SUBJECT_H
#define ELABORATO2023_SUBJECT_H

#include "Observer.h"

class Subject{
    virtual ~Subject() {} ;

    virtual void notify() const = 0;
    virtual void subscribe(Observer* observer) = 0;
    virtual void unsubscribe(Observer* observer) = 0;
};

#endif //ELABORATO2023_SUBJECT_H
