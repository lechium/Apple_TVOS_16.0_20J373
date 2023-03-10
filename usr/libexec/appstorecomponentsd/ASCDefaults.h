//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ASCDefaults : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
}

+ (id)daemonDefaults;	// IMP=0x0020000000009dcc
- (void).cxx_destruct;	// IMP=0x002000000000a926
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x001000000000a87e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000a778
- (unsigned long long)hash;	// IMP=0x001000000000a6fd
@property(nonatomic) _Bool preferInternalJS;
@property(copy, nonatomic) NSString *debugPackageURL;
@property(nonatomic) _Bool forceStandaloneWatch;
@property(nonatomic) _Bool enableWebInspector;
@property(copy, nonatomic) NSNumber *overlaysLoadTimeout;
@property(copy, nonatomic) NSNumber *overlaysRateLimitTimeWindow;
@property(copy, nonatomic) NSNumber *overlaysRateLimitRequestsPerSecond;
@property(nonatomic) _Bool disableShutdownTimer;
@property(nonatomic) _Bool forceRightToLeftLayout;
@property(copy, nonatomic) NSString *storefrontLocaleID;
- (id)objectForKey:(id)arg1;	// IMP=0x0010000000009f2b
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000009eab
- (id)initWithBundleID:(id)arg1;	// IMP=0x0010000000009e38

@end

