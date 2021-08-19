// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "MisterConsts.h"
#include "MisterPaperSpriteComponent.h"
#include "JjSpriteBase.generated.h"

/**
 * 
 */
UCLASS()
class M_2D_API AJjSpriteBase : public AActor
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(Category = Sprite, VisibleAnywhere, BlueprintReadOnly, meta = (ExposeFunctionCategories = "Sprite,Rendering,Physics,Components|Sprite", AllowPrivateAccess = "true"))
	class UMisterPaperSpriteComponent* RenderComponent;
public:

	// AActor interface
#if WITH_EDITOR
	virtual bool GetReferencedContentObjects(TArray<UObject*>& Objects) const override;
#endif
	// End of AActor interface

	/** Returns RenderComponent subobject **/
	FORCEINLINE class UMisterPaperSpriteComponent* GetRenderComponent() const { return RenderComponent; }
public:
	//
	//UPROPERTY(Category = Sprite, EditAnywhere, BlueprintReadOnly, meta = (DisplayThumbnail = "true"))
	//class UPaperSprite* SourceSprite;
	UPROPERTY(Category = Sprite, EditAnywhere, BlueprintReadOnly, meta = (DisplayThumbnail = "true"))
	EMisterSwitchState OriginState;

	UFUNCTION(BlueprintCallable, Category = Mister)
	void SwitchState();

	UFUNCTION(BlueprintCallable, Category = Mister)
	EMisterSwitchState GetCurState();
	
	UFUNCTION( BlueprintNativeEvent, BlueprintCosmetic, Category = "Animation" )
	void OnStateChange();

	virtual void OnStateChange_Implementation();

protected:
	EMisterSwitchState CurState;
};
