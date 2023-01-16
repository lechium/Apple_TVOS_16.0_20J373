//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDMediaRoomGroupsDataGenerator, HMDRoom, HMMediaDestination, NSArray;

@protocol HMDMediaRoomGroupsDataGeneratorDataSource <NSObject>
- (HMDRoom *)roomForDestination:(HMMediaDestination *)arg1 mediaRoomGroupsDataGenerator:(HMDMediaRoomGroupsDataGenerator *)arg2;
- (NSArray *)roomsForMediaRoomGroupsDataGenerator:(HMDMediaRoomGroupsDataGenerator *)arg1;
@end
