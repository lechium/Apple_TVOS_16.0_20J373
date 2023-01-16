//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMMediaGroup.h>

@class HFAccessoryLikeObject, HFAccessoryType, HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HFServiceNameComponents, HMAccessory, HMAccessorySettings, HMHome, HMMediaSession, HMRoom, HMSymptomsHandler, NSDate, NSSet, NSString, NSUUID;
@protocol HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable><HFShowInHomeDashboard><HFIncludedContextProtocol, HFHomeKitObject, HFMediaValueSource, HMMediaObjectDelegate;

@interface HMMediaGroup (AbstractionAdditions)
@property(readonly, nonatomic) HFAccessoryLikeObject *hf_accessoryLikeObject;
- (id)hf_rooms;	// IMP=0x00200000001592d3
- (id)hf_updateValue:(_Bool)arg1 forContextType:(unsigned long long)arg2;	// IMP=0x00200000001bc97b
- (_Bool)hf_shouldHideForContextType:(unsigned long long)arg1;	// IMP=0x00200000001bc8d8
- (_Bool)hf_shouldBeOnForContextType:(unsigned long long)arg1;	// IMP=0x00200000001bc842
- (_Bool)hf_hasSetForContextType:(unsigned long long)arg1;	// IMP=0x00200000001bc7a2
- (_Bool)hf_isOnForContextType:(unsigned long long)arg1;	// IMP=0x00200000001bc702
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
- (unsigned long long)hf_preferredUserSelectionType;	// IMP=0x002000000022d067
- (id)hf_preferredMediaUser;	// IMP=0x002000000022d05f
@property(readonly, nonatomic) _Bool hf_supportsPreferredMediaUser;
@property(readonly, nonatomic) _Bool hf_supportsHomeTheater;
- (id)hf_destination;	// IMP=0x002000000022d047
- (id)hf_updateDateAdded:(id)arg1;	// IMP=0x002000000022cfd6
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, copy, nonatomic) NSString *hf_displayName;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x002000000022cece
- (id)hf_setTileSize:(id)arg1;	// IMP=0x002000000022cd71
@property(readonly, nonatomic) NSString *hf_tileSize;
- (id)hf_updateShowInHomeDashboard:(_Bool)arg1;	// IMP=0x002000000022cc03
@property(readonly, nonatomic) _Bool hf_effectiveShowInHomeDashboard;
@property(readonly, nonatomic) _Bool hf_hasSetShowInHomeDashboard;
@property(readonly, nonatomic) _Bool hf_showInHomeDashboard;
- (id)hf_updateIsVisibleInHomeStatus:(_Bool)arg1;	// IMP=0x002000000022cba7
@property(readonly, nonatomic) _Bool hf_isForcedVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_hasSetVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_isVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_supportsHomeStatus;
- (id)hf_updateIsFavorite:(_Bool)arg1;	// IMP=0x002000000022ca8b
@property(readonly, nonatomic) _Bool hf_effectiveIsFavorite;
@property(readonly, nonatomic) _Bool hf_shouldShowInFavorites;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;
- (id)hf_moveToRoom:(id)arg1;	// IMP=0x002000000022c89e
@property(readonly, nonatomic) HMRoom *hf_safeRoom;
- (_Bool)hf_isInRoom:(id)arg1;	// IMP=0x002000000022c68e
@property(readonly, nonatomic) HFAccessoryType *hf_accessoryType;
@property(readonly, nonatomic) NSSet *hf_associatedAccessories;
@property(readonly, nonatomic) NSSet *hf_containedProfiles;
@property(readonly, nonatomic) NSSet *hf_containedCharacteristics;
@property(readonly, nonatomic) NSSet *hf_containedServices;
@property(readonly, nonatomic) Class hf_itemClass;
@property(readonly, nonatomic) id <HFHomeKitObject> hf_homeKitObject;
- (id)hf_idsDeviceIdentifierWithError:(id *)arg1;	// IMP=0x002000000022c4be
- (id)hf_fetchLog:(id)arg1 timeout:(double)arg2;	// IMP=0x002000000022c3be
- (id)hf_fetchLogListWithTimeout:(double)arg1;	// IMP=0x002000000022c2be
@property(readonly, nonatomic) HFHomeKitSettingsValueManager *hf_settingsValueManager;
- (id)hf_isEitherHomePodMediaAccountOrHomeMediaAccountPresent;	// IMP=0x002000000022c127
- (id)hf_homePodMediaAccountIsMismatchedWithHomeMediaAccount;	// IMP=0x002000000022c086
- (id)hf_homePodSupportsMultiUserLanguage;	// IMP=0x002000000022bfe5
- (id)hf_appleMusicCurrentLoggedInAccount;	// IMP=0x002000000022bf07
- (id)hf_appleMusicCurrentLoggedInAccountDSID;	// IMP=0x002000000022be14
@property(readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup;
@property(readonly, nonatomic) _Bool isItemGroup;
@property(readonly, nonatomic) NSSet *homekitObjectIdentifiers;
@property(readonly, nonatomic) _Bool hasValidSettings;
@property(readonly, copy, nonatomic) NSString *hf_mediaRouteIdentifier;
@property(readonly, copy, nonatomic) NSSet *hf_deviceIdentifiers;
@property(readonly, nonatomic) _Bool hf_homePodIsCapableOfShowingSplitAccountError;
@property(readonly, nonatomic) _Bool hf_homePodSupportsMultiUser;
@property(readonly, nonatomic) _Bool hf_supportsMediaActions;
@property(readonly, nonatomic) _Bool hf_supportsMultiUser;
@property(readonly, nonatomic) HMAccessory *hf_backingAccessory;
@property(readonly, nonatomic) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property(readonly, copy, nonatomic) NSString *hf_categoryLowercaseLocalizedDescription;
@property(readonly, copy, nonatomic) NSString *hf_categoryCapitalizedLocalizedDescription;
@property(readonly, nonatomic) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property(readonly, nonatomic) id <HFMediaValueSource> hf_mediaValueSource;
@property(readonly, nonatomic) _Bool hf_isAccessorySettingsReachable;
@property(readonly, nonatomic) _Bool hf_isAppleMusicReachable;
@property(readonly, nonatomic) _Bool hf_supportsSoftwareUpdate;
@property(readonly, nonatomic) _Bool hf_showsAudioSettings;
@property(readonly, nonatomic) _Bool hf_isSpeakerGrouped;
@property(readonly, nonatomic) _Bool hf_supportsSpeakerGrouping;
@property(readonly, nonatomic) _Bool hf_supportsMusicAlarm;
@property(readonly, nonatomic) _Bool hf_supportsStereoPairing;
@property(readonly, nonatomic) _Bool hf_isReachable;
@property(readonly, nonatomic) _Bool hf_isCurrentAccessory;
@property(readonly) HMAccessorySettings *settings;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@property(readonly, copy) NSSet *symptoms;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
@property(readonly, nonatomic) HMHome *hf_home;
@property(readonly, nonatomic) NSSet *mediaProfiles;
@property(readonly, nonatomic) NSSet *accessories;
@property(readonly, copy, nonatomic) HMMediaSession *mediaSession;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, nonatomic) id <HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable><HFShowInHomeDashboard><HFIncludedContextProtocol> hf_rootAccessoryLikeHomeKitObject;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <HMMediaObjectDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms; // @dynamic hf_fakeDebugSymptoms;
@property(readonly, nonatomic) NSString *hf_prettyDescription;
@property(readonly) Class superclass;
@end
