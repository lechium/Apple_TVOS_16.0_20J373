//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface BKSystemShellDescriptor : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_bundlePath;	// 16 = 0x10
    NSString *_jobLabel;	// 24 = 0x18
    int _pid;	// 32 = 0x20
    double _systemIdleSleepInterval;	// 40 = 0x28
    long long _watchdogType;	// 48 = 0x30
}

+ (id)new;	// IMP=0x002000000004deba
+ (MISSING_TYPE *)build: /* Error: Ran out of types for this method. */;	// IMP=0x001000000004de49
- (void).cxx_destruct;	// IMP=0x002000000004db8b
@property(readonly, nonatomic) long long watchdogType;
@property(readonly, nonatomic) double systemIdleSleepInterval;
@property(readonly, nonatomic) int pid;
@property(readonly, copy, nonatomic) NSString *jobLabel;
@property(readonly, copy, nonatomic) NSString *bundlePath;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000004da01
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004d9bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004d999
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004d8db
@property(readonly) unsigned long long hash;
- (id)init;	// IMP=0x001000000004d65e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

