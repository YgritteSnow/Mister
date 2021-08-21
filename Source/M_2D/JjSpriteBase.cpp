
#include "JjSpriteBase.h"
#include "Engine/CollisionProfile.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"


AJjSpriteBase::AJjSpriteBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	RenderComponent = CreateDefaultSubobject<UMisterPaperSpriteComponent>(TEXT("RenderComponent"));
	RenderComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	RenderComponent->Mobility = EComponentMobility::Static;

	RootComponent = RenderComponent;

	CurState = OriginState;
}

#if WITH_EDITOR
bool AJjSpriteBase::GetReferencedContentObjects(TArray<UObject*>& Objects) const
{
	Super::GetReferencedContentObjects(Objects);

	if (UPaperSprite* SourceSprite = RenderComponent->GetSprite())
	{
		Objects.Add(SourceSprite);
	}
	return true;
}
#endif

void AJjSpriteBase::SwitchState()
{
	CurState = EMisterSwitchState((int32)CurState+1 % (int32)EMisterSwitchState::MAX_COUNT);
	OnStateChange();
	RenderComponent->UseSubSprite(CurState != OriginState);
}

EMisterSwitchState AJjSpriteBase::GetCurState()
{
	return CurState;
}

void AJjSpriteBase::OnStateChange_Implementation()
{
	//
}