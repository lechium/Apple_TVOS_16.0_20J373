//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDApplicationInfo;

__attribute__((visibility("hidden")))
@interface __HMDExtensionApplicationInfo
{
    HMDApplicationInfo *_hostApplicationInfo;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000055b3b4
- (id)hostApplicationInfo;	// IMP=0x000000000055b39e
- (_Bool)isInstalled;	// IMP=0x000000000055b351
- (id)vendorIdentifier;	// IMP=0x000000000055b2c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000055b1a8
- (id)attributeDescriptions;	// IMP=0x000000000055b081
- (id)initWithRecord:(id)arg1;	// IMP=0x000000000055af64

@end
