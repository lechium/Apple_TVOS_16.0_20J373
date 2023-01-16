//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSAccount, IDSGroupSession, NSArray, NSSet, NSString;
@protocol CSDIDSGroupSessionProviderDelegate, OS_dispatch_queue, TUFeatureFlags;

@interface CSDIDSGroupSessionProvider : NSObject
{
    _Bool _avLess;	// 8 = 0x8
    _Bool _isOneToOneModeEnabled;	// 9 = 0x9
    _Bool _isLightweightMember;	// 10 = 0xa
    IDSGroupSession *_session;	// 16 = 0x10
    id <CSDIDSGroupSessionProviderDelegate> _delegate;	// 24 = 0x18
    NSArray *_participantDestinationIDs;	// 32 = 0x20
    NSString *_groupID;	// 40 = 0x28
    IDSAccount *_account;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSString *_callerID;	// 64 = 0x40
    id <TUFeatureFlags> _featureFlags;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000059e8e
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, copy, nonatomic) NSString *callerID; // @synthesize callerID=_callerID;
@property(readonly, nonatomic) _Bool isLightweightMember; // @synthesize isLightweightMember=_isLightweightMember;
@property(readonly, nonatomic) _Bool isOneToOneModeEnabled; // @synthesize isOneToOneModeEnabled=_isOneToOneModeEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) IDSAccount *account; // @synthesize account=_account;
@property(readonly, copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSArray *participantDestinationIDs; // @synthesize participantDestinationIDs=_participantDestinationIDs;
@property(nonatomic) __weak id <CSDIDSGroupSessionProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDSGroupSession *session; // @synthesize session=_session;
@property(readonly, nonatomic, getter=isAVLess) _Bool avLess; // @synthesize avLess=_avLess;
- (void)session:(id)arg1 didReceiveServerErrorCode:(unsigned int)arg2;	// IMP=0x0010000000059d9f
- (void)session:(id)arg1 didReceiveDataBlob:(id)arg2 forParticipant:(id)arg3;	// IMP=0x0010000000059d16
- (void)sessiondidReceiveKeyUpdate:(id)arg1;	// IMP=0x0000000000059cca
- (void)session:(id)arg1 didUnregisterPluginAllocationInfo:(id)arg2;	// IMP=0x0010000000059c55
- (void)session:(id)arg1 didRegisterPluginAllocationInfo:(id)arg2;	// IMP=0x0010000000059be0
- (void)sessionDidReceiveParticipantUpgrade:(id)arg1 participantType:(unsigned short)arg2 error:(id)arg3;	// IMP=0x0010000000059b65
- (void)session:(id)arg1 didReceiveBlockedParticipantIDs:(id)arg2 withCode:(unsigned int)arg3 withType:(unsigned short)arg4 isTruncated:(_Bool)arg5;	// IMP=0x0010000000059ad5
- (void)session:(id)arg1 didReceiveReport:(id)arg2;	// IMP=0x0010000000059a60
- (void)session:(id)arg1 didReceiveActiveLightweightParticipants:(id)arg2 success:(_Bool)arg3;	// IMP=0x00100000000599e5
- (void)session:(id)arg1 didReceiveActiveParticipants:(id)arg2 success:(_Bool)arg3;	// IMP=0x001000000005996a
- (void)sessionDidLeaveGroup:(id)arg1 error:(id)arg2;	// IMP=0x00100000000598f5
- (void)sessionDidJoinGroup:(id)arg1 participantUpdate:(id)arg2 error:(id)arg3;	// IMP=0x0010000000059826
- (void)groupSessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x00100000000597ab
- (void)groupSessionDidTerminate:(id)arg1;	// IMP=0x001000000005975f
- (void)setParticipantType:(unsigned short)arg1 forRemoteMemberDestinations:(id)arg2;	// IMP=0x0010000000059619
- (void)setParticipantType:(unsigned short)arg1 forLocalMemberDestination:(id)arg2;	// IMP=0x00100000000594f0
- (void)participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000592a4
- (unsigned long long)participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2;	// IMP=0x0010000000059166
- (void)addAliasesToConversationContainer:(id)arg1 withSalt:(id)arg2;	// IMP=0x0010000000058d11
@property(readonly, nonatomic) NSSet *requiredLackOfCapabilities;
@property(readonly, nonatomic) NSSet *requiredCapabilities;
- (void)removeRequiredCapabilities:(id)arg1 requiredLackOfCapabilities:(id)arg2;	// IMP=0x0010000000058a13
- (void)addRequiredCapabilities:(id)arg1 requiredLackOfCapabilities:(id)arg2;	// IMP=0x00100000000586ee
- (void)requestEncryptionKeyForParticipants:(id)arg1 topic:(id)arg2;	// IMP=0x00100000000585a6
- (void)requestDataCryptorForTopic:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005846c
- (void)registerPluginWithOptions:(id)arg1;	// IMP=0x0010000000058311
- (void)allowParticipants:(id)arg1;	// IMP=0x001000000005829a
- (void)kickParticipants:(id)arg1;	// IMP=0x0010000000058223
- (void)reconnect;	// IMP=0x00100000000580f1
- (void)requestActiveParticipants;	// IMP=0x0010000000057ffe
- (void)restart;	// IMP=0x0010000000057f11
- (void)leave;	// IMP=0x0010000000057e6d
- (void)sendParticipantData:(id)arg1;	// IMP=0x0010000000057d47
- (void)updateParticipantDestinationIDs:(id)arg1 withContextData:(id)arg2 requiredCapabilities:(id)arg3 requiredLackOfCapabilities:(id)arg4 triggeredLocally:(_Bool)arg5;	// IMP=0x0010000000057b38
- (void)updateParticipantDestinationIDs:(id)arg1 withContextData:(id)arg2 triggeredLocally:(_Bool)arg3;	// IMP=0x0010000000057a05
- (void)joinWithOptions:(id)arg1;	// IMP=0x0010000000057920
- (void)setPreferences:(id)arg1;	// IMP=0x001000000005783b
@property(readonly, copy, nonatomic) NSString *destination;
@property(readonly, copy, nonatomic) NSString *UUID;
@property(readonly, nonatomic) unsigned int endedReason;
- (void)setUpSession;	// IMP=0x0010000000057456
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00100000000573ad
- (id)initWithGroupID:(id)arg1 participantDestinationIDs:(id)arg2 callerID:(id)arg3 account:(id)arg4 queue:(id)arg5 isOneToOneModeEnabled:(_Bool)arg6 isLightweightMember:(_Bool)arg7 avLess:(_Bool)arg8;	// IMP=0x001000000005724a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
