//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AMSAuthenticateRequest, AMSDialogRequest, AMSEngagementRequest, ASDViewPresentationRequest, NSArray;

@protocol XPCNotificationClient <NSObject>
- (void)deliverViewPresentationRequest:(ASDViewPresentationRequest *)arg1 resultHandler:(void (^)(ASDViewPresentationResult *, NSError *))arg2;
- (void)deliverProgress:(NSArray *)arg1 withBarrierBlock:(void (^)(void))arg2;
- (void)deliverNotifications:(NSArray *)arg1 withBarrierBlock:(void (^)(void))arg2;
- (void)deliverEngagementRequest:(AMSEngagementRequest *)arg1 withResultHandler:(void (^)(AMSEngagementResult *, NSError *))arg2;
- (void)deliverDialogRequest:(AMSDialogRequest *)arg1 withResultHandler:(void (^)(AMSDialogResult *, NSError *))arg2;
- (void)deliverAuthenticateRequest:(AMSAuthenticateRequest *)arg1 withResultHandler:(void (^)(AMSAuthenticateResult *, NSError *))arg2;

@optional
- (_Bool)isDialogObserverAvailable;
- (_Bool)hasConnection;
@end

