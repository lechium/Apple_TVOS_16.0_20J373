//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface JaliscoSetItemPropertyOperation
{
    unsigned long long _purchaseHistoryID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001b565
- (void)main;	// IMP=0x001000000001b0b6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001b016
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001af54
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 purchaseHistoryID:(unsigned long long)arg3 properties:(id)arg4;	// IMP=0x001000000001aeb4
- (id)initWithPurchaseHistoryID:(unsigned long long)arg1 properties:(id)arg2;	// IMP=0x001000000001ae28

@end

