//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDSharedHomeUpdateSession, NSError;

@protocol HMDSharedHomeUpdateSessionDelegate <NSObject>
- (void)didCompleteHomeUpdateSession:(HMDSharedHomeUpdateSession *)arg1 withError:(NSError *)arg2;
@end
