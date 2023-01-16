//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSInstallationOperation : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    long long _installType;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
    _Bool _claimed;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000014db5e
@property(nonatomic) _Bool claimed; // @synthesize claimed=_claimed;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) long long installType; // @synthesize installType=_installType;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)redactedDescription;	// IMP=0x000000000014daeb
- (id)description;	// IMP=0x000000000014da9d
- (id)initWithBundleID:(id)arg1 installType:(long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000014d9e9

@end

