//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SagaRemoveItemOperation
{
    NSArray *_itemSagaIDs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000010426f
- (void).cxx_destruct;	// IMP=0x0020000000103f25
- (void)main;	// IMP=0x0010000000103ae4
- (_Bool)isPersistent;	// IMP=0x0010000000103adc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000103a42
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001038d6
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 itemSagaIDs:(id)arg3;	// IMP=0x0010000000103848
- (id)initWithClientIdentity:(id)arg1 ItemSagaIDs:(id)arg2;	// IMP=0x00100000001037c4

@end
