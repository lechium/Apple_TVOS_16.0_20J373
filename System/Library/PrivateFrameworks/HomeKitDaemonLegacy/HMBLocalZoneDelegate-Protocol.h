//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMBLocalZone, HMBProcessingResult;

@protocol HMBLocalZoneDelegate <NSObject>

@optional
- (void)localZone:(HMBLocalZone *)arg1 didCompleteProcessingWithResult:(HMBProcessingResult *)arg2;
@end
