//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ASCScreenshotDisplayConfiguration : NSObject
{
    NSNumber *_deviceCornerRadiusFactor;	// 8 = 0x8
}

+ (double)defaultCornerRadius;	// IMP=0x001000000003dc03
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000003d89f
+ (id)defaultConfiguration;	// IMP=0x001000000003d808
- (void).cxx_destruct;	// IMP=0x000000000003dd2f
@property(readonly, copy, nonatomic) NSNumber *deviceCornerRadiusFactor; // @synthesize deviceCornerRadiusFactor=_deviceCornerRadiusFactor;
@property(readonly, nonatomic) unsigned long long maskedCorners;
@property(readonly, nonatomic) NSString *cornerCurve;
- (double)cornerRadiusForSize:(struct CGSize)arg1;	// IMP=0x000000000003dc11
- (unsigned long long)hash;	// IMP=0x000000000003db88
- (id)description;	// IMP=0x000000000003daea
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003d9df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d9d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003d95b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003d8a7
- (id)initWithDeviceCornerRadiusFactor:(id)arg1;	// IMP=0x000000000003d82c

@end

