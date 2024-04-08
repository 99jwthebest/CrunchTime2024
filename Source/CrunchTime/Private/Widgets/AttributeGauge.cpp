// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/AttributeGauge.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

void UAttributeGauge::UpdateValue(const FOnAttributeChangeData& ChangeData)
{
	ValueText->SetText(FText::AsNumber((int)ChangeData.NewValue));
}

void UAttributeGauge::NativePreConstruct()
{
	Super::NativePreConstruct();
	if(IconTexture)
		IconImage->SetBrushFromTexture(IconTexture);
}
