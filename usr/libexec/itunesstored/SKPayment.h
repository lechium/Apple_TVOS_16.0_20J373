//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, SKPaymentDiscount;

@interface SKPayment : NSObject
{
    id _internal;	// 8 = 0x8
}

+ (id)paymentWithProductIdentifier:(id)arg1;	// IMP=0x00200000000fc26a
+ (id)paymentFromPurchaseIntentWithProduct:(id)arg1;	// IMP=0x00100000000fc16f
+ (id)paymentWithProduct:(id)arg1;	// IMP=0x00100000000fc085
- (void).cxx_destruct;	// IMP=0x00200000000fc4ba
@property(readonly, copy, nonatomic) NSDictionary *requestParameters;
@property(readonly, copy, nonatomic) NSString *partnerTransactionIdentifier;
@property(readonly, copy, nonatomic) NSString *partnerIdentifier;
@property(readonly, nonatomic) _Bool isStoreOriginated;
@property(readonly, copy, nonatomic) SKPaymentDiscount *paymentDiscount;
@property(readonly, nonatomic) _Bool simulatesAskToBuyInSandbox;
@property(readonly, copy, nonatomic) NSData *requestData;
@property(readonly, nonatomic) long long quantity;
@property(readonly, copy, nonatomic) NSString *productIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000fc366
- (unsigned long long)hash;	// IMP=0x00100000000fc2fa
@property(readonly, copy, nonatomic) NSString *applicationUsername;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000fc021
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000fbfbd
- (id)init;	// IMP=0x00100000000fbf67

@end

