//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NAIdentityCharacteristic : NSObject
{
    CDUnknownBlockType _retrievalBlock;	// 8 = 0x8
    CDUnknownBlockType _comparisonBlock;	// 16 = 0x10
    CDUnknownBlockType _hashBlock;	// 24 = 0x18
    long long _role;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001ef8d
@property(nonatomic) long long role; // @synthesize role=_role;
@property(copy, nonatomic) CDUnknownBlockType hashBlock; // @synthesize hashBlock=_hashBlock;
@property(copy, nonatomic) CDUnknownBlockType comparisonBlock; // @synthesize comparisonBlock=_comparisonBlock;
@property(copy, nonatomic) CDUnknownBlockType retrievalBlock; // @synthesize retrievalBlock=_retrievalBlock;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ec61
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001eb1d
- (id)init;	// IMP=0x000000000001ea9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

