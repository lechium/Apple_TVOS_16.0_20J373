//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAHeartbeatActivity;

@interface FAActivityManager : NSObject
{
    FAHeartbeatActivity *_heartbeatActivity;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000006ea4
- (void)handleAccountDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006e03
- (void)handleAccountAddition:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006cf4
- (void)checkinXPCActivities;	// IMP=0x0010000000006c7d
- (id)initWithQueueProvider:(id)arg1;	// IMP=0x0010000000006bfb

@end

