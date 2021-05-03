#ifndef TEST_ITEM_HPP
#define TEST_ITEM_HPP



#include "Thing.hpp"
#include <memory>


class TestUsable : public Usable
{

public:
    void doUse(std::shared_ptr<Thing> owner, std::shared_ptr<Thing> user) override
    {
        
        if ( user -> networked ) 
        {
            user -> networked -> addResponse("u gay!");
        }

    }

};

class TestItem : public Thing
{
public: 
    TestItem()
    {
        usable = std::make_shared<TestUsable>();

        sName = "Test Item";
    }

};


#endif
