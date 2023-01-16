//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeymourUI/NSObject-Protocol.h>

@class AMSAuthenticateRequest, AMSDialogRequest, AMSEngagementRequest, AMSPurchase;

@protocol AMSPurchaseDelegate <NSObject>
- (void)purchase:(AMSPurchase *)arg1 handleEngagementRequest:(AMSEngagementRequest *)arg2 completion:(void (^)(AMSEngagementResult *, NSError *))arg3;
- (void)purchase:(AMSPurchase *)arg1 handleDialogRequest:(AMSDialogRequest *)arg2 completion:(void (^)(AMSDialogResult *, NSError *))arg3;
- (void)purchase:(AMSPurchase *)arg1 handleAuthenticateRequest:(AMSAuthenticateRequest *)arg2 completion:(void (^)(AMSAuthenticateResult *, NSError *))arg3;
@end

