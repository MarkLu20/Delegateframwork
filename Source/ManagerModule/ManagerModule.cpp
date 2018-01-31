#include "ManagerModule.h"
#include "../Public"





class ManagerModuleImpl : public IManagerModuleInterface
{
public :
	virtual void StartupModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("new  module has started!"));
	UWorld *world=	UGameplayStatics::GetPlayerController(NULL, 0)->GetWorld();
	/*	for (TActorIterator<AMsgCenterActor>Iterator(world);Iterator;++Iterator )
		{
			
		}*/
		
	
	}
	virtual int Add(int num1, int num2) override
	{
	
		return num1 + num2;
		UE_LOG(LogTemp, Warning, TEXT("ADD"));
	
	}

	virtual void doNothing() override
	{
	
		UE_LOG(LogTemp, Warning, TEXT("doNothing"));
	
	}

};
	 



IMPLEMENT_GAME_MODULE(ManagerModuleImpl, ManagerModule);

