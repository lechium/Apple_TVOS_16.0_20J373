//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSURLRequestEncoder.h"

@class AMSPurchaseInfo, NSObject;
@protocol AMSBagProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
    AMSPurchaseInfo *_purchaseInfo;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_purchaseRequestQueue;	// 24 = 0x18
}

+ (id)_parametersFromPurchaseInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000277a06
+ (id)bagURLFromPurchaseInfo:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000277890
+ (id)_bagURLKeysFromPurchaseInfo:(id)arg1;	// IMP=0x00600000002775b4
+ (id)_bagURLKeysForPurchaseType:(long long)arg1 withProductType:(id)arg2 prefix:(id)arg3;	// IMP=0x0060000000277439
+ (id)_buyProductURLKeysForProductType:(id)arg1 prefix:(id)arg2;	// IMP=0x00600000002772c8
+ (long long)_anisetteTypeFromAccount:(id)arg1;	// IMP=0x00600000002772b5
+ (_Bool)isRedirectBagURLOverrideEnabled;	// IMP=0x006000000027729d
+ (void)configureRequest:(id)arg1 purchaseInfo:(id)arg2 bag:(id)arg3 error:(id *)arg4;	// IMP=0x0060000000276600
- (void).cxx_destruct;	// IMP=0x00000000002784d0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *purchaseRequestQueue; // @synthesize purchaseRequestQueue=_purchaseRequestQueue;
@property(readonly, nonatomic) AMSPurchaseInfo *purchaseInfo; // @synthesize purchaseInfo=_purchaseInfo;
- (void)setBag:(id)arg1;	// IMP=0x0000000000278486
- (id)bag;	// IMP=0x0000000000278475
- (id)encodeRequest;	// IMP=0x00000000002769b8
- (id)initWithPurchaseInfo:(id)arg1 bag:(id)arg2;	// IMP=0x00000000002763d6
- (id)initWithPurchaseInfo:(id)arg1;	// IMP=0x0000000000276345

@end

