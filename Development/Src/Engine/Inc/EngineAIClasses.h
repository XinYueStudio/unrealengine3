/*===========================================================================
    C++ class definitions exported from UnrealScript.
    This is automatically generated by the tools.
    DO NOT modify this manually! Edit the corresponding .uc files instead!
===========================================================================*/
#if SUPPORTS_PRAGMA_PACK
#pragma pack (push,4)
#endif


#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern FName ENGINE_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

AUTOGENERATE_NAME(SetTeam)

#ifndef NAMES_ONLY


struct AIController_eventSetTeam_Parms
{
    INT inTeamIdx;
};
class AAIController : public AController
{
public:
    BITFIELD bHunting:1 GCC_PACK(PROPERTY_ALIGNMENT);
    BITFIELD bAdjustFromWalls:1;
    FLOAT Skill GCC_PACK(PROPERTY_ALIGNMENT);
    void eventSetTeam(INT inTeamIdx)
    {
        AIController_eventSetTeam_Parms Parms;
        Parms.inTeamIdx=inTeamIdx;
        ProcessEvent(FindFunctionChecked(ENGINE_SetTeam),&Parms);
    }
    DECLARE_CLASS(AAIController,AController,0,Engine)
	INT AcceptNearbyPath(AActor *goal);
	void AdjustFromWall(FVector HitNormal, AActor* HitActor);
	void SetAdjustLocation(FVector NewLoc);
};


class UPathRenderingComponent : public UPrimitiveComponent
{
public:
    DECLARE_CLASS(UPathRenderingComponent,UPrimitiveComponent,0,Engine)
	virtual void UpdateBounds();
	virtual void Render(const struct FSceneContext& Context,struct FPrimitiveRenderInterface* PRI);
};

#endif


#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif

#if SUPPORTS_PRAGMA_PACK
#pragma pack (pop)
#endif
