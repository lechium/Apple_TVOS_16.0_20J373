//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface JaliscoHideItemOperation
{
    NSArray *_itemPurchaseHistoryIDs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000a2b3f
- (void).cxx_destruct;	// IMP=0x00200000000a27f5
- (void)main;	// IMP=0x00100000000a229a
- (_Bool)isPersistent;	// IMP=0x00100000000a2292
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000a2215
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000a210b
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 itemPurchaseHistoryIDs:(id)arg3;	// IMP=0x00100000000a207d
- (id)initWithItemPurchaseHistoryIDs:(id)arg1;	// IMP=0x00100000000a1ff7

@end
