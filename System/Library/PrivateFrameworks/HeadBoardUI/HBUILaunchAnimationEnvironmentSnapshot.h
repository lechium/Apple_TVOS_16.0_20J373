//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface HBUILaunchAnimationEnvironmentSnapshot : NSObject
{
    NSHashTable *_animationEnvironments;	// 8 = 0x8
}

+ (id)snapshotWithRootEnvironment:(id)arg1 animationContext:(id)arg2;	// IMP=0x006000000000c2cd
- (void).cxx_destruct;	// IMP=0x000000000000c7a5
@property(readonly, nonatomic) NSHashTable *animationEnvironments; // @synthesize animationEnvironments=_animationEnvironments;
- (id)launchAnimationsWithContext:(id)arg1;	// IMP=0x000000000000c59f
- (void)didFinishLaunchAnimationWithContext:(id)arg1;	// IMP=0x000000000000c43a
- (void)willBeginLaunchAnimationWithContext:(id)arg1;	// IMP=0x000000000000c2d5
- (id)debugDescription;	// IMP=0x000000000000c219
- (id)initWithAnimationEnvironment:(id)arg1;	// IMP=0x000000000000c000
- (id)_initWithAnimationEnvironments:(id)arg1;	// IMP=0x000000000000bf95

@end

