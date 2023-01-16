//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSClipMediaURLBuilder : NSObject
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSNumber *_externalVersionID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000016b19e
@property(retain, nonatomic) NSNumber *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (id)_queryPromise;	// IMP=0x000000000016ad3e
- (id)_pathPromise;	// IMP=0x000000000016a963
- (id)_hostPromise;	// IMP=0x000000000016a8e2
- (id)_devicePlatform;	// IMP=0x000000000016a8a4
- (id)build;	// IMP=0x000000000016a618
- (id)initWithBundleID:(id)arg1 bag:(id)arg2;	// IMP=0x000000000016a57f

@end

