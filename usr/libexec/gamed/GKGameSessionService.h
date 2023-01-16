//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKGameSessionService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x002000000015f5cc
+ (Class)interfaceClass;	// IMP=0x001000000015f5bb
- (id)actualIdentifiersForObsfucatedPlayerIDs:(id)arg1 inSession:(id)arg2;	// IMP=0x0020000000164201
- (oneway void)sendMessageForSessionWithID:(id)arg1 withLocalizedFormatKey:(id)arg2 arguments:(id)arg3 userMessage:(id)arg4 data:(id)arg5 recipientIDs:(id)arg6 badgePlayers:(_Bool)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x00100000001636ea
- (oneway void)setBadged:(_Bool)arg1 forPlayerIDs:(id)arg2 forSessionWithIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000162ce7
- (oneway void)fetchShareURLForSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000162a8d
- (oneway void)sendData:(id)arg1 reliably:(_Bool)arg2 forSessionWithIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001629e3
- (void)didSaveConnectionState:(long long)arg1 forGameSession:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000162168
- (void)_setConnectionState:(long long)arg1 forSessionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001613fd
- (oneway void)setConnectionState:(long long)arg1 forSessionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001613dc
- (oneway void)saveData:(id)arg1 forSessionWithIdentifier:(id)arg2 changeTag:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000160d55
- (oneway void)loadDataForSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000160bcc
- (oneway void)removePlayers:(id)arg1 forSessionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000160914
- (oneway void)removeSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016056d
- (oneway void)loadSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001603fb
- (oneway void)loadSessionsInContainer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000015fe60
- (oneway void)createSessionInContainer:(id)arg1 withTitle:(id)arg2 maxConnectedPlayers:(long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000015f933
- (oneway void)primaryPlayerInContainer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000015f6d5
- (id)validateContainer:(id)arg1;	// IMP=0x001000000015f5df
- (_Bool)requiresAuthentication;	// IMP=0x001000000015f5d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

