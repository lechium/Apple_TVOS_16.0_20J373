//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TUDelegateController;
@protocol CSDCHManager, CSDCallHistoryManagerDelegate, OS_dispatch_queue;

@interface CSDCallHistoryManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <CSDCHManager> _chManager;	// 16 = 0x10
    TUDelegateController<CSDCallHistoryManagerDelegate> *_delegateController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000199601
@property(readonly, nonatomic) TUDelegateController<CSDCallHistoryManagerDelegate> *delegateController; // @synthesize delegateController=_delegateController;
@property(readonly, nonatomic) id <CSDCHManager> chManager; // @synthesize chManager=_chManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)handleCallHistoryDatabaseChangedNotification:(id)arg1;	// IMP=0x00100000001993ce
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2;	// IMP=0x001000000019926a
- (void)removeDelegate:(id)arg1;	// IMP=0x00100000001991f8
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000199172
- (void)dealloc;	// IMP=0x00100000001990f0
- (id)initWithCHManager:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000198fe9
- (id)initWithCHManager:(id)arg1;	// IMP=0x0010000000198f3c
- (id)init;	// IMP=0x0010000000198efc

@end

