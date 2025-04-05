// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "InstancedStruct.h"
#include "LibraryStructs.generated.h"









//bool-------------------------------------------------------------
USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FBoolStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	bool bBool;
};

USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FArrayUInt8Struct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	TArray<uint8> ArrayBytes;
};



//numeric--------------------------------------------------------
USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FInt32Struct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	int32 Int32;
};

USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FInt64Struct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	int64 Int64;
};

USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FFloatStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	float Float;
};





//characters--------------------------------------------------------
USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FStringStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	FString String;
};

USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FNameStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	FName Name;
};

USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FTextStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	FText Text;
};




//Object--------------------------------------------------------
USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FObjectStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	UObject* Object;
};


USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FSoftObjectStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	TSoftObjectPtr<UObject> SoftObject;
};



USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FClassStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	UClass* Class;
};

USTRUCT(BlueprintType) 
struct NX_LIBRARYSTRUCTS_API FSoftClassStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	TSoftClassPtr<UClass> SoftClass;
};





//DataTable--------------------------------------------------------
USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FDataTableStruct : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	UDataTable* DataTable;
};






//InstancedStruct-------------------------------
USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FInstanceStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	FInstancedStruct InstancedStruct;
};


USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FArrayInstanceStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	TArray<FInstancedStruct> Data;
};

USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FMapNameInstanceStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	TMap<FName, FInstancedStruct> Data;
};

USTRUCT(BlueprintType)
struct NX_LIBRARYSTRUCTS_API FMapNameArrayInstanceStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LibraryStructs")
	TMap<FName, FArrayInstanceStruct> Data;

public:
	void AddElement(FName Key, FInstancedStruct Dataa) {};
};
















