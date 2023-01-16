//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, ICContentTastePendingChangesCoordinator, NSDate, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface ICContentTasteRequestHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    ICConnectionConfiguration *_configuration;	// 24 = 0x18
    ICContentTastePendingChangesCoordinator *_pendingChangesCoordinator;	// 32 = 0x20
    NSDate *_responseExpirationDate;	// 40 = 0x28
    long long _backOffIndex;	// 48 = 0x30
    NSString *_defaultContentTasteRefreshIdentifier;	// 56 = 0x38
    _Bool _isHandlerValid;	// 64 = 0x40
    long long _retryState;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000082df0
- (void)_postContentTasteChanges:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000821fe
- (void)_postPendingContentTasteChangesByAddingChange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000082107
- (void)_schedulePostingContentTasteForFailedItems;	// IMP=0x0010000000081f76
- (void)_scheduleUpdatingContentTasteWithNewExpirationDate;	// IMP=0x0010000000081e16
- (id)description;	// IMP=0x0010000000081d50
- (void)cancelAllOperationsAndClearPendingChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000081cc5
- (void)updateContentTasteForItem:(id)arg1 invalidatingLocalCache:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000081c02
- (void)updateContentTasteForReason:(long long)arg1 invalidatingLocalCache:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000081b64
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000818eb

@end

