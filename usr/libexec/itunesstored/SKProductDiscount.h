//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSLocale, NSString, SKProductSubscriptionPeriod;

@interface SKProductDiscount : NSObject
{
    id _internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000011f4d7
- (id)copyXPCEncoding;	// IMP=0x001000000011f408
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x001000000011f174
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000011ed9a
- (void)_setType:(unsigned long long)arg1;	// IMP=0x001000000011ed8c
- (void)_setIdentifier:(id)arg1;	// IMP=0x001000000011ed5b
- (void)_setSubscriptionPeriod:(id)arg1;	// IMP=0x001000000011ed2a
- (void)_setPriceLocale:(id)arg1;	// IMP=0x001000000011ecf9
- (void)_setPrice:(id)arg1;	// IMP=0x001000000011ecc8
- (void)_setPaymentMode:(unsigned long long)arg1;	// IMP=0x001000000011ecba
- (void)_setNumberOfPeriods:(unsigned long long)arg1;	// IMP=0x001000000011ecac
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) unsigned long long paymentMode;
@property(readonly, nonatomic) unsigned long long numberOfPeriods;
@property(readonly, nonatomic) SKProductSubscriptionPeriod *subscriptionPeriod;
@property(readonly, nonatomic) NSLocale *priceLocale;
@property(readonly, nonatomic) NSDecimalNumber *price;
- (id)init;	// IMP=0x001000000011ebe4

@end

