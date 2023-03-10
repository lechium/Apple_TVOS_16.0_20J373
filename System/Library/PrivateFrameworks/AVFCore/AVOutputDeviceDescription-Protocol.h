//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol AVOutputDeviceDescription <NSObject>
@property(readonly, nonatomic) NSString *deviceID;
@property(readonly, nonatomic) NSString *deviceName;

@optional
@property(readonly, nonatomic) NSArray *subComponents;
@property(readonly, nonatomic) long long clusterType;
@property(readonly, nonatomic) NSString *modelID;
@property(readonly, nonatomic) _Bool isClusterLeader;
@property(readonly, nonatomic) long long deviceSubType;
@property(readonly, nonatomic) long long deviceType;
@end

