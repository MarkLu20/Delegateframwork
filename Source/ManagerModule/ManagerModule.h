#include "Engine.h"
#include "ModuleManager.h"
class IManagerModuleInterface : public IModuleInterface
{
public:
	virtual int Add(int num1, int num2)=0;
	virtual void  doNothing()=0;
	
 

};