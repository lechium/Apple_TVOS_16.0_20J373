//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface lib_IXAppInstallCoordinatorTag : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSUUID *_coordinatorID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000007c87b
- (unsigned long long)hash;	// IMP=0x001000000007c83c
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007c76e
- (id)description;	// IMP=0x001000000007c6f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007c6e6

@end
