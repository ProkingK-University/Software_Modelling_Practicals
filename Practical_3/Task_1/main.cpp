#include "SmartObserver.h"
#include "SmartContract.h"

int main()
{
    SmartContract* smartContract = new SmartContract("Contract-A");

    Observer* observer1 = new SmartObserver("Observer-1", smartContract);
    Observer* observer2 = new SmartObserver("Observer-2", smartContract);
    Observer* observer3 = new SmartObserver("Observer-3", smartContract);

    smartContract->attach(observer1);
    smartContract->attach(observer2);
    smartContract->attach(observer3);

    smartContract->addCondition("When ETH < 10000 Buy");
    smartContract->addCondition("When ETH > 20000 Sell");
    smartContract->addCondition("When Balance < 1000 Sell");

    smartContract->vote(true);
    smartContract->vote(true);
    smartContract->vote(true);

    smartContract->view();

    smartContract->accept();

    smartContract->view();

    smartContract->removeCondition("When Balance < 1000 Sell");

    smartContract->view();

    smartContract->accept();
    
    smartContract->view();

    smartContract->detach(observer2);

    smartContract->accept();

    smartContract->detach(observer1);

    smartContract->complete();
    smartContract->accept();
    smartContract->complete();

    delete smartContract;
    
    return 0;
}