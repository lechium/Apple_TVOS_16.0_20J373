//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HMAudioControl;

@protocol HMAudioControlDelegate <NSObject>

@optional
- (void)audioControl:(HMAudioControl *)arg1 didUpdateMuted:(_Bool)arg2;
- (void)audioControl:(HMAudioControl *)arg1 didUpdateVolume:(float)arg2;
@end

