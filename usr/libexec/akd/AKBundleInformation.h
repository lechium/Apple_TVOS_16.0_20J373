//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AKBundleInformation : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_bundleName;	// 16 = 0x10
    NSString *_bundleDescription;	// 24 = 0x18
    unsigned long long _bundleType;	// 32 = 0x20
    NSDictionary *_otherInfo;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000062728
- (void).cxx_destruct;	// IMP=0x0020000000062762
@property(readonly, copy, nonatomic) NSDictionary *otherInfo; // @synthesize otherInfo=_otherInfo;
@property(readonly, nonatomic) unsigned long long bundleType; // @synthesize bundleType=_bundleType;
@property(readonly, copy, nonatomic) NSString *bundleDescription; // @synthesize bundleDescription=_bundleDescription;
@property(readonly, copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000062685
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000624a1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000623c6
- (id)initWithBundleIdentifier:(id)arg1 bundleName:(id)arg2 bundleDescription:(id)arg3 bundleType:(unsigned long long)arg4 otherInfo:(id)arg5;	// IMP=0x00100000000622e3

@end

