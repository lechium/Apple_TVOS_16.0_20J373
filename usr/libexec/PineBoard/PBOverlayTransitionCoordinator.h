//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PBOverlayTransitionCoordinator : NSObject
{
    MISSING_TYPE *activePersistentTokens;	// 8 = 0x8
}

+ (_Bool)isCoordinatedTransitionsEnabled;	// IMP=0x00200000001f3640
+ (id)sharedInstance;	// IMP=0x00100000001f3610
- (void).cxx_destruct;	// IMP=0x00400000001f47e0
- (void)registerTransition:(id)arg1;	// IMP=0x00100000001f42d0
- (id)init;	// IMP=0x00100000001f36e0
@property(nonatomic, retain) id activePersistentTokens; // @synthesize activePersistentTokens;

@end

