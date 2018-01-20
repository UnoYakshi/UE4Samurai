#include "StatProperty.h"

// ctors...
UStatProperty::UStatProperty()
{}
UStatProperty::UStatProperty(FString Name, float BaseVal, float Min, float Max)
{
	this->Name = Name;
	this->CurrentVal = BaseVal;
	this->MinVal = Min;
	this->MaxVal = Max;
}


void UStatProperty::Add(float Val)
{
	this->Set(CurrentVal + Val);
}
void UStatProperty::Subtract(float Val)
{
	this->Set(CurrentVal - Val);
}


// Mutators...
void UStatProperty::Set(float Val)
{
	this->CurrentVal = FMath::Clamp(Val, MinVal, MaxVal);
}
float UStatProperty::Get()
{
	return this->CurrentVal;
}
