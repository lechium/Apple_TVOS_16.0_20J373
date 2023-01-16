//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMFMessageDispatcher, NSArray, NSUUID;

@protocol HMDHomeResidentMessagingContext <NSObject>
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property(readonly, copy, nonatomic) NSArray *enabledResidents;
@end
