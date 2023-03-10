//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CABrightnessTransaction-Protocol.h>
#import <QuartzCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSObject, NSUUID;
@protocol OS_dispatch_queue;

@protocol CABrightnessControl <NSObject, CABrightnessTransaction>
@property(nonatomic) double maximumReferenceLuminance;
@property(nonatomic) double minimumLuminance;
@property(nonatomic) double maximumSDRLuminance;
@property(nonatomic) double maximumHDRLuminance;
@property(readonly, nonatomic) unsigned int serviceObject;
@property(readonly, nonatomic) NSDictionary *brightnessCapabilities;
@property(readonly, nonatomic) _Bool whitePointD50XYZ;
@property(readonly, nonatomic) _Bool whitePointAvailable;
@property(readonly, nonatomic) _Bool brightnessAvailable;
@property(readonly, nonatomic) NSUUID *uuid;
@property(readonly, nonatomic) unsigned long long vendorId;
@property(readonly, nonatomic) unsigned long long productId;
@property(readonly) long long displayType;
@property(readonly) unsigned int displayId;
- (_Bool)abortWhitePointRamp:(CDStruct_443af386 *)arg1 error:(id *)arg2;
- (_Bool)setWhitePoint:(const CDStruct_443af386 *)arg1 rampDuration:(double)arg2 error:(id *)arg3;
- (void)setSyncNotificationQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)unregisterSyncNotificationBlocks;
- (void)registerForSyncNotifications:(NSArray *)arg1 withBlock:(void (^)(id, NSDictionary *))arg2;
- (void)setNotificationQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)unregisterNotificationBlocks;
- (void)registerForNotifications:(NSArray *)arg1 withBlock:(void (^)(id, NSDictionary *))arg2;
@end

