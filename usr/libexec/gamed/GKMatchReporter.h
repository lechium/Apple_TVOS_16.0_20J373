//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface GKMatchReporter : NSObject
{
    MISSING_TYPE *matchRecording;	// 8 = 0x8
}

+ (id)shared;	// IMP=0x002000000024e330
- (void).cxx_destruct;	// IMP=0x004000000024edb0
- (id)recordMatchMakingCompleteWithResult:(id)arg1;	// IMP=0x001000000024ed10
- (void)recordActiveDevicesWithCount:(id)arg1;	// IMP=0x001000000024eac0
- (void)recordMatchMakingStartWithType:(id)arg1 minPlayers:(id)arg2 maxPlayers:(id)arg3 server:(id)arg4;	// IMP=0x001000000024e990
- (id)init;	// IMP=0x001000000024e370

@end

