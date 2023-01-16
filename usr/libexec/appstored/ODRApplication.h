//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol OS_dispatch_queue;

@interface ODRApplication : NSObject
{
    NSString *_adamID;	// 8 = 0x8
    _Bool _beta;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSString *_bundleShortVersion;	// 32 = 0x20
    NSURL *_bundleURL;	// 40 = 0x28
    NSString *_bundleVersion;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
    NSString *_externalVersionID;	// 64 = 0x40
    _Bool _installed;	// 72 = 0x48
    _Bool _machineVPP;	// 73 = 0x49
    NSString *_variantID;	// 80 = 0x50
    NSString *_versionToken;	// 88 = 0x58
    NSURL *_assetPackManifestURL;	// 96 = 0x60
    NSURL *_bundleTagManifestURL;	// 104 = 0x68
    NSURL *_resourcesDirectoryURL;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000019e493
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019dd6c
- (unsigned long long)hash;	// IMP=0x001000000019dc4d
- (id)description;	// IMP=0x001000000019dafc
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019da20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019d817

@end

