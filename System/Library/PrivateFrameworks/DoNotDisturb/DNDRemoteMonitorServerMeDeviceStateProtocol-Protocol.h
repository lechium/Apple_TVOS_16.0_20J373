//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/NSObject-Protocol.h>

@class DNDRequestDetails;

@protocol DNDRemoteMonitorServerMeDeviceStateProtocol <NSObject>
- (void)registerForMeDeviceStateUpdatesWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(NSNumber *, DNDMeDeviceState *, NSError *))arg2;
@end

