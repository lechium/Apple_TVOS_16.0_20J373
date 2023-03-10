//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKProfileService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000001ba725
+ (Class)interfaceClass;	// IMP=0x00100000001ba714
- (oneway void)getFriendSupportPageURLWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00200000001bec76
- (oneway void)getProfilesForPlayerIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bd12b
- (oneway void)getOcelotStateForCurrentAppWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001bd0ae
- (oneway void)setOcelotStateForCurrentApp;	// IMP=0x00100000001bd004
- (void)loadProfilesForPlayerIDs:(id)arg1 pieces:(unsigned char)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001bbe77
- (void)fetchProfilesForPlayerIDs:(id)arg1 familiarity:(int)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001baf39
- (void)_updateLastPlayedGames:(id)arg1 forPlayers:(id)arg2 group:(id)arg3;	// IMP=0x00100000001ba8fb
- (id)_profileRequestForPlayerIDs:(id)arg1 pieces:(unsigned char)arg2;	// IMP=0x00100000001ba730

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

