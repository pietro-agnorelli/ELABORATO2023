//
// Created by Pietro on 12/06/2023.
//

#ifndef ELABORATO2023_OBSERVER_H
#define ELABORATO2023_OBSERVER_H


class Observer {
public:
    virtual ~Observer() {} ;

    virtual void update() = 0;
};


#endif //ELABORATO2023_OBSERVER_H
