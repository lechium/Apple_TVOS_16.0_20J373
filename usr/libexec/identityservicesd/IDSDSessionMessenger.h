//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDSessionSharedState, IDSPushHandler, MISSING_TYPE, NSNumber;
@protocol IDSDSession><IDSDSessionAWDMetrics;

@interface IDSDSessionMessenger : NSObject
{
    unsigned char keyMaterial[60];	// 8 = 0x8
    _Bool _alwaysSkipSelf;	// 68 = 0x44
    IDSPushHandler *_pushHandler;	// 72 = 0x48
    id <IDSDSession><IDSDSessionAWDMetrics> _delegate;	// 80 = 0x50
    NSNumber *_remoteUsePhoneContinuityLocalMessage;	// 88 = 0x58
    IDSDSessionSharedState *_sharedState;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000006e490
@property(retain, nonatomic) IDSDSessionSharedState *sharedState; // @synthesize sharedState=_sharedState;
@property(retain, nonatomic) NSNumber *remoteUsePhoneContinuityLocalMessage; // @synthesize remoteUsePhoneContinuityLocalMessage=_remoteUsePhoneContinuityLocalMessage;
@property(nonatomic) __weak id <IDSDSession><IDSDSessionAWDMetrics> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(nonatomic) _Bool alwaysSkipSelf; // @synthesize alwaysSkipSelf=_alwaysSkipSelf;
- (void)sendReinitiateMessageWithSubcommand:(long long)arg1;	// IMP=0x001000000006da10
- (void)receivedEndMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x001000000006d400
- (MISSING_TYPE *)receivedSessionMessage:fromID: /* Error: Ran out of types for this method. */;	// IMP=0x001000000006ce30
- (_Bool)_canSendMessageLocally:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3;	// IMP=0x001000000006ca00
- (void)_sendSinglePathMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 forceLocalDelivery:(_Bool)arg4 messageGUID:(id)arg5 fromID:(id)arg6 willSendBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x001000000006ac50
- (void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 fromID:(id)arg4 willSendBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x001000000006a4a0
- (void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3 fromID:(id)arg4;	// IMP=0x001000000006a3b0
- (void)sendMessage:(id)arg1 toDestinations:(id)arg2 withCommand:(id)arg3;	// IMP=0x001000000006a2f0
- (void)sendMessage:(id)arg1 withCommand:(id)arg2;	// IMP=0x001000000006a210
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;	// IMP=0x0010000000069b50
- (id)initWithDictionary:(id)arg1 sharedState:(id)arg2;	// IMP=0x00100000000698e0

@end

