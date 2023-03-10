//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMachPort;

@interface VOTSpringBoardConnection : NSObject
{
    NSMachPort *_sbPort;	// 8 = 0x8
}

+ (id)defaultConnection;	// IMP=0x0040000000045154
- (void).cxx_destruct;	// IMP=0x0020000000045a0e
- (void)setScreenCurtainEnabled:(_Bool)arg1;	// IMP=0x00100000000459e8
- (void)setInPassthroughMode:(_Bool)arg1;	// IMP=0x00100000000459c2
- (void)showElementLabelPanel:(_Bool)arg1 currentLabel:(id)arg2;	// IMP=0x0010000000045965
- (void)sendProgrammaticAppSwitch:(_Bool)arg1;	// IMP=0x00100000000456a3
- (void)showSpringboardNoHomeButtonGestureAlert;	// IMP=0x001000000004569d
- (void)showSpringBoardVOConfirmation:(_Bool)arg1;	// IMP=0x0010000000045697
- (id)_sbPort;	// IMP=0x0010000000045689
- (void)informConnectionDied;	// IMP=0x0010000000045647
- (void)restartConnection;	// IMP=0x00100000000451de
- (_Bool)isConnected;	// IMP=0x001000000004519a
- (void)dealloc;	// IMP=0x001000000004515c

@end

