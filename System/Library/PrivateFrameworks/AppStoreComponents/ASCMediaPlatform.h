//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface ASCMediaPlatform : NSObject
{
    NSNumber *_deviceCornerRadiusFactor;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002bae9
- (void).cxx_destruct;	// IMP=0x000000000002be57
@property(readonly, copy, nonatomic) NSNumber *deviceCornerRadiusFactor; // @synthesize deviceCornerRadiusFactor=_deviceCornerRadiusFactor;
- (id)description;	// IMP=0x000000000002bdaf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002bca4
- (unsigned long long)hash;	// IMP=0x000000000002bc29
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002bc1e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002bba5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002baf1
- (id)initWithDeviceCornerRadiusFactor:(id)arg1;	// IMP=0x000000000002ba76

@end

