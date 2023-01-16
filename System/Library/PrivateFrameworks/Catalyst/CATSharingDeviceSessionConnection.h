//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperationQueue, CATSharingDevice, NSError, NSString;
@protocol CATSharingConnectionDelegate, CATSharingDeviceSession, CATTimer, CATTimerSource;

__attribute__((visibility("hidden")))
@interface CATSharingDeviceSessionConnection : NSObject
{
    id <CATSharingDeviceSession> mDeviceSession;	// 8 = 0x8
    id <CATTimerSource> mTimerSource;	// 16 = 0x10
    _Bool mIsClosing;	// 24 = 0x18
    id <CATTimer> mTombstoneTimer;	// 32 = 0x20
    CATOperationQueue *mOutgoingQueue;	// 40 = 0x28
    CATOperationQueue *mCatalystQueue;	// 48 = 0x30
    _Bool _closed;	// 56 = 0x38
    id <CATSharingConnectionDelegate> _delegate;	// 64 = 0x40
    NSError *_closedError;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000015742
@property(retain, nonatomic) NSError *closedError; // @synthesize closedError=_closedError;
@property(nonatomic, getter=isClosed) _Bool closed; // @synthesize closed=_closed;
@property(nonatomic) __weak id <CATSharingConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendTearDownMessageWithError:(id)arg1;	// IMP=0x000000000001541c
- (void)handleSentMessage:(id)arg1;	// IMP=0x0000000000015322
- (void)handleCloseMessage:(id)arg1;	// IMP=0x0000000000015247
- (void)handleUnparsableMessageDictionary:(id)arg1;	// IMP=0x0000000000015171
- (void)didReceiveMessage:(id)arg1;	// IMP=0x0000000000015031
- (void)removeDeviceSessionHandlers;	// IMP=0x0000000000014fd2
- (void)addDeviceSessionHandlers;	// IMP=0x0000000000014cc9
- (void)tombstoneWithError:(id)arg1;	// IMP=0x0000000000014bdd
- (void)closeWithError:(id)arg1 reportToRemote:(_Bool)arg2;	// IMP=0x0000000000014b48
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014868
- (void)_close;	// IMP=0x0000000000014802
- (void)_sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000146ec
- (void)close;	// IMP=0x00000000000145bf
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001442d
@property(readonly, nonatomic) CATSharingDevice *remoteDevice;
- (id)initWithDeviceSession:(id)arg1 timerSource:(id)arg2;	// IMP=0x000000000001430b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
