//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDAccount, IDSDGroupStatusNotificationControllerBroadcaster, IDSDSessionController, IDSGroupEncryptionController, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface IDSDGroupStatusNotificationController : NSObject
{
    NSMutableDictionary *_notifiers;	// 8 = 0x8
    NSMutableSet *_groups;	// 16 = 0x10
    NSMutableDictionary *_events;	// 24 = 0x18
    NSMutableDictionary *_groupMemberPushTokens;	// 32 = 0x20
    IDSDAccount *_account;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    IDSDSessionController *_sessionController;	// 56 = 0x38
    IDSGroupEncryptionController *_realTimeEncryptionController;	// 64 = 0x40
    IDSDGroupStatusNotificationControllerBroadcaster *_broadcaster;	// 72 = 0x48
    NSMutableDictionary *_groupIDToCapabilityToParticipantPushTokens;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x0040000000148fc0
- (void).cxx_destruct;	// IMP=0x0020000000157e10
@property(readonly, nonatomic) NSMutableDictionary *groupIDToCapabilityToParticipantPushTokens; // @synthesize groupIDToCapabilityToParticipantPushTokens=_groupIDToCapabilityToParticipantPushTokens;
@property(readonly, nonatomic) IDSDGroupStatusNotificationControllerBroadcaster *broadcaster; // @synthesize broadcaster=_broadcaster;
@property(readonly, nonatomic) IDSGroupEncryptionController *realTimeEncryptionController; // @synthesize realTimeEncryptionController=_realTimeEncryptionController;
@property(readonly, nonatomic) IDSDSessionController *sessionController; // @synthesize sessionController=_sessionController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableDictionary *groupMemberPushTokens; // @synthesize groupMemberPushTokens=_groupMemberPushTokens;
@property(readonly, nonatomic) NSMutableDictionary *events; // @synthesize events=_events;
@property(readonly, nonatomic) NSMutableSet *groups; // @synthesize groups=_groups;
- (id)getURIFromPushToken:(id)arg1 forGroup:(id)arg2;	// IMP=0x0010000000157370
- (id)_specificOriginatorFromID:(id)arg1 senderToken:(id)arg2 accountUniqueID:(id)arg3;	// IMP=0x0010000000156400
- (void)pushTokenLookup:(id)arg1 forGroup:(id)arg2 sessionID:(id)arg3 fromID:(id)arg4 account:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00100000001541f0
- (void)processIncomingParticipantDataUpdateMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 toID:(id)arg4 topic:(id)arg5 idsMessageContext:(id)arg6;	// IMP=0x0010000000152b00
- (void)processIncomingParticipantUpdateMessage:(id)arg1 fromToken:(id)arg2 fromID:(id)arg3 toID:(id)arg4 topic:(id)arg5 idsMessageContext:(id)arg6;	// IMP=0x0010000000150aa0
- (void)_sendFanoutMessage:(id)arg1 account:(id)arg2 toGroupMembers:(id)arg3 fromID:(id)arg4 command:(long long)arg5 commandContext:(id)arg6 toGroup:(id)arg7 sessionID:(id)arg8 reason:(unsigned char)arg9 waitForMadridAcks:(_Bool)arg10 isUPlusOne:(_Bool)arg11 isInitiator:(id)arg12 requiredCapabilites:(id)arg13 requiredLackOfCapabilities:(id)arg14 completionBlock:(CDUnknownBlockType)arg15;	// IMP=0x001000000014e9a0
- (void)_sendFanoutMessage:(id)arg1 account:(id)arg2 toGroupMembers:(id)arg3 fromID:(id)arg4 command:(long long)arg5 toGroup:(id)arg6 sessionID:(id)arg7 reason:(unsigned char)arg8 isUPlusOne:(_Bool)arg9 isInitiator:(id)arg10 requiredCapabilites:(id)arg11 requiredLackOfCapabilities:(id)arg12;	// IMP=0x001000000014e700
- (void)_sendFanoutMessage:(id)arg1 account:(id)arg2 toGroupMembers:(id)arg3 fromID:(id)arg4 command:(long long)arg5 toGroup:(id)arg6 sessionID:(id)arg7 reason:(unsigned char)arg8 isUPlusOne:(_Bool)arg9 isInitiator:(id)arg10;	// IMP=0x001000000014e4f0
- (double)_multiwayFTMessageSendTimeout;	// IMP=0x001000000014e1d0
- (void)updateParticipantDataToMembers:(id)arg1 toGroup:(id)arg2 withContext:(id)arg3 params:(id)arg4 fromAccount:(id)arg5 fromID:(id)arg6 sessionID:(id)arg7 isUPlusOne:(_Bool)arg8;	// IMP=0x001000000014daa0
- (void)updateMembers:(id)arg1 toGroup:(id)arg2 withContext:(id)arg3 params:(id)arg4 fromAccount:(id)arg5 fromID:(id)arg6 sessionID:(id)arg7 messagingCapabilities:(id)arg8 reason:(unsigned char)arg9 isUPlusOne:(_Bool)arg10 completionBlock:(CDUnknownBlockType)arg11;	// IMP=0x001000000014d150
- (void)notifyLeaveToSpecificMembersOfGroup:(id)arg1 members:(id)arg2 params:(id)arg3 fromAccount:(id)arg4 fromID:(id)arg5 sessionID:(id)arg6 isUPlusOne:(_Bool)arg7 requiredCapabilites:(id)arg8 requiredLackOfCapabilities:(id)arg9;	// IMP=0x001000000014c880
- (void)notifyLeaveToGroup:(id)arg1 members:(id)arg2 params:(id)arg3 fromAccount:(id)arg4 fromID:(id)arg5 sessionID:(id)arg6 isUPlusOne:(_Bool)arg7;	// IMP=0x001000000014bf50
- (void)notifyJoinToSpecificMembersOfGroup:(id)arg1 members:(id)arg2 params:(id)arg3 fromAccount:(id)arg4 fromID:(id)arg5 sessionID:(id)arg6 isUPlusOne:(_Bool)arg7 requiredCapabilites:(id)arg8 requiredLackOfCapabilities:(id)arg9;	// IMP=0x001000000014af60
- (void)notifyJoinToGroup:(id)arg1 members:(id)arg2 params:(id)arg3 fromAccount:(id)arg4 fromID:(id)arg5 sessionID:(id)arg6 isUPlusOne:(_Bool)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x0010000000149e70
- (id)_currentDateString;	// IMP=0x0010000000149d20
- (id)participantsForGroupID:(id)arg1;	// IMP=0x0010000000149470
- (void)dealloc;	// IMP=0x00100000001493d0
- (id)initWithSessionController:(id)arg1 realTimeEncryptionController:(id)arg2 broadcaster:(id)arg3;	// IMP=0x0010000000149160
- (id)init;	// IMP=0x0010000000149080

@end

