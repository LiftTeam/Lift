// Fill out your copyright notice in the Description page of Project Settings.

#include "Lift.h"
#include "WriteToFile.h"

WriteToFile::WriteToFile()
{

}

WriteToFile::~WriteToFile()
{

}

void WriteToFile::Foo()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Hello World");
}