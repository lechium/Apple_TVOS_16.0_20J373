//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASCLockupFeatureProductVariants : NSObject
{
    NSString *_productVariantID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000f165
- (void).cxx_destruct;	// IMP=0x002000000000f4ac
@property(readonly, copy, nonatomic) NSString *productVariantID; // @synthesize productVariantID=_productVariantID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000f2f9
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000f273
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000f1fa
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000f16d
- (id)initWithProductVariantID:(id)arg1;	// IMP=0x001000000000f0f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
