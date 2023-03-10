//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue, VCControlChannelTransactionDelegate;

__attribute__((visibility("hidden")))
@interface VCControlChannelDialog
{
    _Bool _handshakeEnabled;	// 24 = 0x18
    _Bool _isHandshakeMode;	// 25 = 0x19
    _Bool _isHandshakeCommenced;	// 26 = 0x1a
    unsigned int _sessionID;	// 28 = 0x1c
    id <VCControlChannelTransactionDelegate> _weakTransactionDelegate;	// 32 = 0x20
    NSMutableDictionary *_transactions;	// 40 = 0x28
    _Bool _shouldFinishHandshake;	// 48 = 0x30
    double _handshakeStartTime;	// 56 = 0x38
    NSNumber *_participantID;	// 64 = 0x40
    NSString *_participantUUID;	// 72 = 0x48
    NSMutableArray *_cachedMessages;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_handshakeOperationQueue;	// 88 = 0x58
}

@property(readonly) NSDictionary *transactions; // @synthesize transactions=_transactions;
- (void)confirmTransaction:(id)arg1;	// IMP=0x0000000000118900
- (id)newDataFromMessage:(id)arg1 topic:(id)arg2 transactionID:(unsigned long long)arg3 isReliable:(_Bool)arg4 transactionDelegate:(id)arg5;	// IMP=0x000000000011889f
- (_Bool)sendUnreliableMessage:(id)arg1 withTopic:(id)arg2 sessionID:(unsigned int)arg3 participantID:(id)arg4 transactionDelegate:(id)arg5;	// IMP=0x0000000000118433
- (_Bool)sendReliableMessageInternal:(id)arg1 withTopic:(id)arg2 timeout:(id)arg3 useFastRetries:(_Bool)arg4;	// IMP=0x0000000000117883
- (_Bool)sendReliableMessage:(id)arg1 withTopic:(id)arg2 timeout:(id)arg3;	// IMP=0x000000000011744c
- (void)cacheOutgoingMessage:(id)arg1 topic:(id)arg2 timeout:(id)arg3;	// IMP=0x0000000000117148
- (void)startHandshakeWithMessage:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000116e49
- (void)sendAllCachedMessagesAndDisableHandshakeWhenDone;	// IMP=0x000000000011670f
- (void)checkForSignificantHandshakeDelayWithDelegate:(id)arg1;	// IMP=0x0000000000116696
- (void)doHandshakeWithMessage:(id)arg1 topic:(id)arg2 afterDelay:(double)arg3;	// IMP=0x0000000000115fe5
- (id)processMessageData:(id)arg1 participantID:(id)arg2 topic:(id *)arg3 transactionID:(id *)arg4 messageStatus:(unsigned int *)arg5 isInternalMessage:(_Bool *)arg6;	// IMP=0x0000000000115f84
- (void)removeTransactionForTransactionID:(int)arg1;	// IMP=0x0000000000115d8c
- (void)flushActiveTransactions;	// IMP=0x0000000000115beb
- (void)resetHandshake;	// IMP=0x0000000000115b7b
- (void)dealloc;	// IMP=0x0000000000115965
- (id)initWithSessionID:(unsigned int)arg1 participantID:(id)arg2 participantUUID:(id)arg3 participantConfig:(CDStruct_c24deb19 *)arg4 transactionDelegate:(id)arg5;	// IMP=0x00000000001156b4

@end

