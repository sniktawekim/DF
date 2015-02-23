/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_PATH_GOAL_H
#define DF_UNIT_PATH_GOAL_H
namespace df {
  namespace enums {
    namespace unit_path_goal {
      enum unit_path_goal : int16_t {
        None = -1,
        ComeToJobBuilding,
        ValidPondDumpUnit,
        ValidPondDump,
        ConflictDefense,
        AdventureMove,
        MarauderMill,
        WildernessCuriousStealTarget,
        WildernessRoamer,
        ThiefTarget,
        Owner,
        CheckChest,
        SleepBed,
        SleepBarracks,
        SleepGround,
        LeaveWall,
        FleeTerrain,
        TaxRoom,
        GuardTaxes,
        RansackTaxes,
        GetEmptySandBag,
        SandZone,
        GrabCage,
        UncageAnimal,
        CaptureSmallPet,
        GrabCageUnit,
        GoToCage,
        GrabAnimalTrap,
        CageVermin,
        GrabUnfillBucket,
        SeekFillBucket,
        SeekPatientForCarry,
        SeekPatientForDiagnosis,
        SeekPatientForImmobilizeBreak,
        SeekPatientForCrutch,
        SeekPatientForSuturing,
        SeekSurgerySite,
        CarryPatientToBed,
        SeekGiveWaterBucket,
        SeekJobItem,
        SeekUnitForItemDrop,
        SeekUnitForJob,
        SeekSplint,
        SeekCrutch,
        SeekSutureThread,
        SeekDressingCloth,
        GoToGiveWaterTarget,
        SeekFoodForTarget,
        SeekTargetForFood,
        SeekAnimalForSlaughter,
        SeekSlaughterBuilding,
        SeekAnimalForChain,
        SeekChainForAnimal,
        SeekCageForUnchain,
        SeekAnimalForUnchain,
        GrabFoodForTaming,
        SeekAnimalForTaming,
        SeekDrinkItem,
        SeekFoodItem,
        SeekEatingChair,
        SeekEatingChair2,
        SeekBadMoodBuilding,
        SetGlassMoodBuilding,
        SetMoodBuilding,
        SeekFellVictim,
        CleanBuildingSite,
        ResetPriorityGoal,
        MainJobBuilding,
        DropOffJobItems,
        GrabJobResources,
        WorkAtBuilding,
        GrabUniform,
        GrabClothing,
        GrabWeapon,
        GrabAmmunition,
        GrabShield,
        GrabArmor,
        GrabHelm,
        GrabBoots,
        GrabGloves,
        GrabPants,
        GrabQuiver,
        GrabBackpack,
        GrabWaterskin,
        StartHunt,
        StartFish,
        Clean,
        HuntVermin,
        Patrol,
        SquadStation,
        SeekInfant,
        ShopSpecific,
        MillInShop,
        GoToShop,
        SeekTrainingAmmunition,
        ArcheryTrainingSite,
        SparringPartner,
        SparringSite,
        AttendParty,
        SeekArtifact,
        GrabAmmunitionForBuilding,
        SeekBuildingForAmmunition,
        SeekItemForStorage,
        StoreItem,
        GrabKill,
        DropKillAtButcher,
        DropKillOutFront,
        GoToBeatingTarget,
        SeekKidnapVictim,
        SeekHuntingTarget,
        SeekTargetMechanism,
        SeekTargetForMechanism,
        SeekMechanismForTrigger,
        SeekTriggerForMechanism,
        SeekTrapForVerminCatch,
        SeekVerminForCatching,
        SeekVerminCatchLocation,
        WanderVerminCatchLocation,
        SeekVerminForHunting,
        SeekVerminHuntingSpot,
        WanderVerminHuntingSpot,
        SeekFishTrap,
        SeekFishCatchLocation,
        SeekWellForWater,
        SeekDrinkAreaForWater,
        UpgradeSquadEquipment,
        PrepareEquipmentManifests,
        WanderDepot,
        SeekUpdateOffice,
        SeekManageOffice,
        AssignedBuildingJob,
        ChaseOpponent,
        FleeFromOpponent,
        AttackBuilding,
        StartBedCarry,
        StartGiveFoodWater,
        StartMedicalAid,
        SeekStationFlood,
        SeekStation,
        StartWaterJobWell,
        StartWaterJobDrinkArea,
        StartEatJob,
        ScheduledMeal,
        ScheduledSleepBed,
        ScheduledSleepGround,
        Rest,
        RemoveConstruction,
        Chop,
        Detail,
        GatherPlant,
        Dig,
        Mischief,
        ChaseOpponentSameSquare,
        RestRecovered,
        RestReset,
        CombatTraining,
        SkillDemonstration,
        IndividualSkillDrill,
        SeekBuildingForItemDrop,
        SeekBuildingForJob,
        GrabMilkUnit,
        GoToMilkStation,
        SeekPatientForDressWound,
        UndeadHunt,
        GrabShearUnit,
        GoToShearStation,
        LayEggNestBox,
        ClayZone,
        ColonyToInstall,
        ReturnColonyToInstall,
        Nonsense,
        SeekBloodSuckVictim,
        SeekSheriff,
        GrabExecutionWeapon,
        TrainAnimal,
        GuardPath,
        Harass,
        SiteWalk,
        SiteWalkToBuilding,
        Reunion,
        ArmyWalk
      };
    }
  }
  using enums::unit_path_goal::unit_path_goal;
  template<> struct DFHACK_EXPORT identity_traits<unit_path_goal> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<unit_path_goal> {
    typedef int16_t base_type;
    typedef unit_path_goal enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 179;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[181];
  };
}
#endif
