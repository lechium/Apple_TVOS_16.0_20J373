//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/NSObject-Protocol.h>

@protocol TVPPlaybackInterruptable;

@protocol TVPPlaybackInterruptableRegistration <NSObject>
- (void)removeInterruptable:(id <TVPPlaybackInterruptable>)arg1;
- (void)addInterruptable:(id <TVPPlaybackInterruptable>)arg1;
@end

