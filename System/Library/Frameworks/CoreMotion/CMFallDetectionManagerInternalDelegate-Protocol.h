//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMotion/NSObject-Protocol.h>

@class CMFallDetectionEvent, CMFallDetectionManagerInternal;

@protocol CMFallDetectionManagerInternalDelegate <NSObject>
- (void)fallDetectionManagerInternalDidStartBackgroundSession:(CMFallDetectionManagerInternal *)arg1;
- (void)fallDetectionManagerInternalDidUpdateEnablementState:(CMFallDetectionManagerInternal *)arg1;
- (void)fallDetectionManagerInternal:(CMFallDetectionManagerInternal *)arg1 didUpdateFallEvent:(CMFallDetectionEvent *)arg2;
@end

