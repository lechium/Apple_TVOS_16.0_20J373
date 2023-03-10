//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HMAccessorySettings, HMMediaSession;
@protocol HMMediaObjectDelegate;

@protocol HMMediaObject <NSObject>
@property(nonatomic, readonly) HMAccessorySettings *settings;
@property(nonatomic, readonly) HMMediaSession *mediaSession;
@property(nonatomic) __weak id <HMMediaObjectDelegate> delegate;
@end

