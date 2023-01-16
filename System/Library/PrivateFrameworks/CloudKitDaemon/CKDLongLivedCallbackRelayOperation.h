//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@class NSString;

@interface CKDLongLivedCallbackRelayOperation : CKDOperation
{
}

- (void)cancel;	// IMP=0x00000000002e21cc
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000002e20f3
- (void)operationWithID:(id)arg1 receivedCallback:(id)arg2;	// IMP=0x00000000002e201e
- (void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;	// IMP=0x00000000002e200a
- (void)main;	// IMP=0x00000000002e1f71
- (_Bool)isLongLivedCallbackRelayOperation;	// IMP=0x00000000002e1f69
- (_Bool)shouldCheckAppVersion;	// IMP=0x00000000002e1f61
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
