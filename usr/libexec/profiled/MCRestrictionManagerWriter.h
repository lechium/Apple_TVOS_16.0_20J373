//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCRestrictionManager.h>

@class NSDictionary, NSMutableSet, NSNumber;

@interface MCRestrictionManagerWriter : MCRestrictionManager
{
    int _senderPID;	// 8 = 0x8
    NSDictionary *_clientTypeLoaders;	// 16 = 0x10
    NSNumber *_memberQueuePasscodeCompliesWithRestrictions;	// 24 = 0x18
    NSNumber *_memberQueuePasscodeCompliesWithProfileRestrictions;	// 32 = 0x20
    NSMutableSet *_memberQueueRecomputePasscodeComplianceForClientUUID;	// 40 = 0x28
}

+ (id)enforcedAppWhitelistRestrictions;	// IMP=0x004000000005ed18
+ (id)sharedManager;	// IMP=0x001000000005ecd1
- (void).cxx_destruct;	// IMP=0x0020000000066c71
@property(retain, nonatomic) NSMutableSet *memberQueueRecomputePasscodeComplianceForClientUUID; // @synthesize memberQueueRecomputePasscodeComplianceForClientUUID=_memberQueueRecomputePasscodeComplianceForClientUUID;
@property(retain, nonatomic) NSNumber *memberQueuePasscodeCompliesWithProfileRestrictions; // @synthesize memberQueuePasscodeCompliesWithProfileRestrictions=_memberQueuePasscodeCompliesWithProfileRestrictions;
@property(retain, nonatomic) NSNumber *memberQueuePasscodeCompliesWithRestrictions; // @synthesize memberQueuePasscodeCompliesWithRestrictions=_memberQueuePasscodeCompliesWithRestrictions;
@property(readonly, nonatomic) NSDictionary *clientTypeLoaders; // @synthesize clientTypeLoaders=_clientTypeLoaders;
@property(nonatomic) int senderPID; // @synthesize senderPID=_senderPID;
- (void)recomputeUserRestrictionsAndEffectiveUserSettings;	// IMP=0x0010000000066877
- (void)recomputeEffectiveUserSettingsPasscode:(id)arg1;	// IMP=0x00100000000667a7
- (void)resetAllSettingsToDefaultsSender:(id)arg1;	// IMP=0x0010000000066679
- (void)removeValueSetting:(id)arg1 sender:(id)arg2;	// IMP=0x0010000000066487
- (void)removeBoolSetting:(id)arg1 sender:(id)arg2;	// IMP=0x0010000000066269
- (void)setUnionValues:(id)arg1 forSetting:(id)arg2 sender:(id)arg3;	// IMP=0x001000000006603b
- (void)setIntersectionValues:(id)arg1 forSetting:(id)arg2 sender:(id)arg3;	// IMP=0x0010000000065e0d
- (void)setValue:(id)arg1 forSetting:(id)arg2 sender:(id)arg3;	// IMP=0x0010000000065c9f
- (void)setBoolValue:(_Bool)arg1 ask:(_Bool)arg2 forSetting:(id)arg3 sender:(id)arg4;	// IMP=0x0010000000065aab
- (void)setBoolValue:(_Bool)arg1 forSetting:(id)arg2 sender:(id)arg3;	// IMP=0x0010000000065a91
- (_Bool)setParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 sender:(id)arg7;	// IMP=0x0010000000065787
- (_Bool)setParametersForSettingsByType:(id)arg1 sender:(id)arg2;	// IMP=0x0010000000065755
- (_Bool)memberQueueSetParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 sender:(id)arg7;	// IMP=0x001000000006544f
- (id)_memberQueueNewUserSettingsWithParametersForSettingsByType:(id)arg1 currentUserSettings:(id)arg2;	// IMP=0x0010000000064f7d
- (_Bool)memberQueueRecomputeEffectiveUserSettingsPasscode:(id)arg1 credentialSet:(id)arg2;	// IMP=0x00100000000643ad
- (void)memberQueueCommitEffectiveUserSettingsToDiskOldEffectiveUserSettings:(id)arg1;	// IMP=0x0010000000064173
- (void)memberQueueCommitUserSettingsToDisk;	// IMP=0x0010000000063fac
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1;	// IMP=0x0010000000063e4f
- (void)setShowNagMessage;	// IMP=0x0010000000063d6c
- (void)memberQueueClearPasscodeHistoryIfNecessary;	// IMP=0x0010000000063c67
- (void)clearAllPasscodeComplianceCaches;	// IMP=0x0010000000063be0
- (void)memberQueueClearAllPasscodeComplianceCaches;	// IMP=0x0010000000063b58
- (void)memberQueueClearProfileRestrictionPasscodeComplianceCache;	// IMP=0x0010000000063aef
- (void)memberQueueClearRestrictionPasscodeComplianceCache;	// IMP=0x0010000000063a86
- (void)memberQueueCacheClientRestrictionPasscodeCompliance;	// IMP=0x001000000006340e
- (void)memberQueueMarkToClearPasscodeComplianceCacheWithOldSystemClientRestrictions:(id)arg1 newSystemClientRestrictions:(id)arg2;	// IMP=0x0010000000062db0
- (_Bool)recomputeNagMetadata:(_Bool *)arg1;	// IMP=0x0010000000061f97
- (_Bool)recomputeNagMetadata;	// IMP=0x0010000000061f83
- (_Bool)removeOrphanedClientRestrictions;	// IMP=0x0010000000061bba
- (id)orphanedClientUUIDsForClientRestrictionDictionary:(id)arg1;	// IMP=0x0010000000061462
- (void)notifyClientsToRecomputeCompliance;	// IMP=0x0010000000061252
- (id)_liveClientUUIDsForClientType:(id)arg1 outLoaderMissing:(_Bool *)arg2;	// IMP=0x00100000000610d6
- (id)orphanCheckUnexemptClientTypes;	// IMP=0x0010000000061013
- (id)orphanCheckExemptClientTypes;	// IMP=0x0010000000060fe3
- (_Bool)setClientRestrictions:(id)arg1 appsAndOptions:(id)arg2 system:(_Bool)arg3 clientType:(id)arg4 clientUUID:(id)arg5 sender:(id)arg6 localizedClientDescription:(id)arg7 localizedWarning:(id)arg8 shouldRecomputeNag:(_Bool)arg9 outRestrictionsChanged:(_Bool *)arg10 outEffectiveSettingsChanged:(_Bool *)arg11 outRecomputedNag:(_Bool *)arg12 outError:(id *)arg13;	// IMP=0x00100000000606b2
- (_Bool)setClientRestrictions:(id)arg1 system:(_Bool)arg2 clientType:(id)arg3 clientUUID:(id)arg4 sender:(id)arg5 localizedClientDescription:(id)arg6 localizedWarning:(id)arg7 shouldRecomputeNag:(_Bool)arg8 outRestrictionsChanged:(_Bool *)arg9 outEffectiveSettingsChanged:(_Bool *)arg10 outRecomputedNag:(_Bool *)arg11 outError:(id *)arg12;	// IMP=0x001000000006065a
- (_Bool)setClientRestrictions:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 sender:(id)arg4 localizedClientDescription:(id)arg5 localizedWarning:(id)arg6 shouldRecomputeNag:(_Bool)arg7 outRestrictionsChanged:(_Bool *)arg8 outEffectiveSettingsChanged:(_Bool *)arg9 outRecomputedNag:(_Bool *)arg10 outError:(id *)arg11;	// IMP=0x001000000006060a
- (_Bool)setClientRestrictions:(id)arg1 system:(_Bool)arg2 clientType:(id)arg3 clientUUID:(id)arg4 sender:(id)arg5 localizedClientDescription:(id)arg6 localizedWarning:(id)arg7 outRestrictionsChanged:(_Bool *)arg8 outEffectiveSettingsChanged:(_Bool *)arg9 outRecomputedNag:(_Bool *)arg10 outError:(id *)arg11;	// IMP=0x00100000000605c4
- (_Bool)setClientRestrictions:(id)arg1 appsAndOptions:(id)arg2 clientType:(id)arg3 clientUUID:(id)arg4 sender:(id)arg5 localizedClientDescription:(id)arg6 localizedWarning:(id)arg7 outRestrictionsChanged:(_Bool *)arg8 outEffectiveSettingsChanged:(_Bool *)arg9 outRecomputedNag:(_Bool *)arg10 outError:(id *)arg11;	// IMP=0x001000000006056d
- (_Bool)setClientRestrictions:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 sender:(id)arg4 localizedClientDescription:(id)arg5 localizedWarning:(id)arg6 outRestrictionsChanged:(_Bool *)arg7 outEffectiveSettingsChanged:(_Bool *)arg8 outRecomputedNag:(_Bool *)arg9 outError:(id *)arg10;	// IMP=0x001000000006051d
- (_Bool)setAllClientRestrictions:(id)arg1 sender:(id)arg2 outRestrictionsChanged:(_Bool *)arg3 outEffectiveSettingsChanged:(_Bool *)arg4 outRecomputedNag:(_Bool *)arg5 outError:(id *)arg6;	// IMP=0x001000000006020d
- (_Bool)memberQueueSetSystemClientRestrictions:(id)arg1 userClientRestrictions:(id)arg2 sender:(id)arg3 outRestrictionsChanged:(_Bool *)arg4 outEffectiveSettingsChanged:(_Bool *)arg5 outError:(id *)arg6;	// IMP=0x001000000005fe46
- (_Bool)memberQueueSetAllClientRestrictions:(id)arg1 sender:(id)arg2 outRestrictionsChanged:(_Bool *)arg3 outEffectiveSettingsChanged:(_Bool *)arg4 outError:(id *)arg5;	// IMP=0x001000000005fda0
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 sender:(id)arg3;	// IMP=0x001000000005fb01
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2;	// IMP=0x001000000005faec
- (void)memberQueueCommitClientRestrictionsToDisk;	// IMP=0x001000000005f9b2
- (_Bool)setSystemProfileRestrictions:(id)arg1 userProfileRestrictions:(id)arg2 sender:(id)arg3 outRestrictionsChanged:(_Bool *)arg4 outEffectiveSettingsChanged:(_Bool *)arg5 outAppWhitelistSettingsChanged:(_Bool *)arg6 outRecomputedNag:(_Bool *)arg7 outError:(id *)arg8;	// IMP=0x001000000005ef4d
- (void)memberQueueCommitRestrictionsToDisk;	// IMP=0x001000000005ee57
- (id)_init;	// IMP=0x001000000005ee0c

@end

