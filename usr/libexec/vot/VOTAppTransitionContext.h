//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VOTAppTransitionContext : NSObject
{
    int _pid;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
}

+ (id)contextWithPID:(int)arg1 bundleID:(id)arg2 displayName:(id)arg3;	// IMP=0x0040000000114a2f
- (void).cxx_destruct;	// IMP=0x0020000000114e07
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *announcableName;
- (id)description;	// IMP=0x0010000000114ace

@end

