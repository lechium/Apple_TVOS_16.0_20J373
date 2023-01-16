//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCLockupFeatureProductVariants : NSObject
{
    NSString *_productVariantID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001a603
- (void).cxx_destruct;	// IMP=0x000000000001a94a
@property(readonly, copy, nonatomic) NSString *productVariantID; // @synthesize productVariantID=_productVariantID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a797
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a711
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001a698
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a60b
- (id)initWithProductVariantID:(id)arg1;	// IMP=0x000000000001a590

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

