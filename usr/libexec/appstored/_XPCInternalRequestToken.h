//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _XPCInternalRequestToken
{
}

- (_Bool)isDialogObserverAvailable;	// IMP=0x00200000001e6c74
- (void)deliverProgress:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e6c6e
- (void)deliverNotifications:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e6c68
- (void)deliverViewPresentationRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e6bfc
- (void)deliverEngagementRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e6b90
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e6ae6
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e690f
- (id)notificationClient;	// IMP=0x00100000001e6906
- (_Bool)isInternal;	// IMP=0x00100000001e68fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

