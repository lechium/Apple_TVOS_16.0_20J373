//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHManager, CSDIncomingCallFilter, NSMutableArray, NSMutableDictionary, NSString, TUCallProviderManager, TUFeatureFlags;
@protocol CSDCallCenterObserver, CSDTransactionManager, CSDUserNotificationDelegate, OS_dispatch_queue;

@interface CSDRecentsController : NSObject
{
    CSDIncomingCallFilter *_incomingCallFilter;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSDCallCenterObserver> _callCenterObserver;	// 24 = 0x18
    id <CSDTransactionManager> _transactionManager;	// 32 = 0x20
    CHManager *_recentsManager;	// 40 = 0x28
    TUCallProviderManager *_callProviderManager;	// 48 = 0x30
    id <CSDUserNotificationDelegate> _delegate;	// 56 = 0x38
    TUFeatureFlags *_featureFlags;	// 64 = 0x40
    NSMutableArray *_transactionObjectsAwaitingCallHistory;	// 72 = 0x48
    NSMutableDictionary *_cachedCalls;	// 80 = 0x50
    NSMutableDictionary *_cachedCallUUIDsToConversationAVMode;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000120818
@property(readonly, nonatomic) NSMutableDictionary *cachedCallUUIDsToConversationAVMode; // @synthesize cachedCallUUIDsToConversationAVMode=_cachedCallUUIDsToConversationAVMode;
@property(readonly, nonatomic) NSMutableDictionary *cachedCalls; // @synthesize cachedCalls=_cachedCalls;
@property(readonly, nonatomic) NSMutableArray *transactionObjectsAwaitingCallHistory; // @synthesize transactionObjectsAwaitingCallHistory=_transactionObjectsAwaitingCallHistory;
@property(readonly, nonatomic) TUFeatureFlags *featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) __weak id <CSDUserNotificationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(readonly, nonatomic) CHManager *recentsManager; // @synthesize recentsManager=_recentsManager;
@property(readonly, nonatomic) id <CSDTransactionManager> transactionManager; // @synthesize transactionManager=_transactionManager;
@property(readonly, nonatomic) id <CSDCallCenterObserver> callCenterObserver; // @synthesize callCenterObserver=_callCenterObserver;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CSDIncomingCallFilter *incomingCallFilter; // @synthesize incomingCallFilter=_incomingCallFilter;
- (void)callCenterObserver:(id)arg1 callChanged:(id)arg2;	// IMP=0x00100000001202fc
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x001000000011fdf3
- (void)_endTransactionForObjectAfterCallHistoryDatabaseChanges:(id)arg1;	// IMP=0x001000000011fb00
- (id)_callHistoryTransactionObjectWithIdentifier:(id)arg1;	// IMP=0x001000000011fa94
- (_Bool)_canAddCallToCallHistory:(id)arg1;	// IMP=0x001000000011f9c2
- (id)_conversationProviderForCall:(id)arg1;	// IMP=0x001000000011f8dc
- (void)_handleCallHistoryChanged;	// IMP=0x001000000011f6cf
- (void)_addPendingCallToCallHistory:(id)arg1;	// IMP=0x001000000011f58d
- (void)_addCallToCallHistory:(id)arg1;	// IMP=0x001000000011f390
- (void)updateBytesOfDataUsed:(long long)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 callHistoryIdentifier:(id)arg3;	// IMP=0x001000000011f0db
- (void)clearNotificationsIfNecessary;	// IMP=0x001000000011efb2
- (void)_callHistoryChanged:(id)arg1;	// IMP=0x001000000011ee5e
- (void)dealloc;	// IMP=0x001000000011ede9
- (id)initWithCallCenterObserver:(id)arg1 transactionManager:(id)arg2 queue:(id)arg3;	// IMP=0x001000000011eb23
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000011ea8a
- (id)init;	// IMP=0x001000000011ea5f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

