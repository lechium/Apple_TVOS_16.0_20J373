//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GCConfigXPCServiceServiceConnection.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCGenericDeviceDBServiceConnection : GCConfigXPCServiceServiceConnection
{
}

+ (id)serviceProtocol;	// IMP=0x00100000000255a9
- (id)preparedModelForDevice:(id)arg1;	// IMP=0x0000000000025742
- (id)hasModelForDevice:(id)arg1;	// IMP=0x00000000000255ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
