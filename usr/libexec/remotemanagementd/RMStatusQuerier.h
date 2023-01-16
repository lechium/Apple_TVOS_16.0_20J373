//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RMStatusQuerier : NSObject
{
    NSArray *_statusPublishers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000071979
@property(readonly, nonatomic) NSArray *statusPublishers; // @synthesize statusPublishers=_statusPublishers;
- (id)_queryForFilteredStatusWithKeyPaths:(id)arg1 lastAcknowledgedDateByKeyPath:(id)arg2 onBehalfOfManagementChannel:(id)arg3;	// IMP=0x0010000000070abd
- (id)queryForUnacknowledgedStatusWithKeyPaths:(id)arg1 lastAcknowledgedDateByKeyPath:(id)arg2 onBehalfOfManagementChannel:(id)arg3;	// IMP=0x0010000000070aab
- (id)queryForStatusWithKeyPaths:(id)arg1 onBehalfOfManagementChannel:(id)arg2;	// IMP=0x0010000000070a94
- (id)_findStatusPublishersForKeyPaths:(id)arg1;	// IMP=0x0010000000070838
- (id)initWithStatusPublishers:(id)arg1;	// IMP=0x00100000000707c5
- (id)init;	// IMP=0x001000000007067e

@end
