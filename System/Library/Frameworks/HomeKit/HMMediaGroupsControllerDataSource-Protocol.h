//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSObject-Protocol.h>

@class HMMediaGroupsController, NSArray, NSString;
@protocol HMMediaDestinationInternal;

@protocol HMMediaGroupsControllerDataSource <NSObject>
- (id <HMMediaDestinationInternal>)mediaGroupsController:(HMMediaGroupsController *)arg1 internalDestinationWithIdentifier:(NSString *)arg2;
- (NSArray *)availableDestinationsForMediaGroupsController:(HMMediaGroupsController *)arg1;
@end

