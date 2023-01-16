//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLLocationProviderAdapter
{
}

- (id)syncgetName;	// IMP=0x0020000000244371
- (_Bool)syncgetIsSimulationEnabled;	// IMP=0x0010000000244351
- (_Bool)syncgetLocationUnavailable;	// IMP=0x0010000000244333
- (void)fetchLocationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000244201
- (_Bool)syncgetLocationPrivate:(void *)arg1;	// IMP=0x00100000002441d3
- (_Bool)syncgetLocation:(CDStruct_c17e8280 *)arg1;	// IMP=0x00100000002441a5
- (_Bool)syncgetNotification:(const int *)arg1 data:(void *)arg2;	// IMP=0x0010000000244172
- (void)sendSimulatedLocationUnavailable;	// IMP=0x0010000000244154
- (void)sendSimulatedLocation:(id)arg1;	// IMP=0x0010000000243f69
- (void)setSimulationEnabled:(_Bool)arg1;	// IMP=0x0010000000243f10
- (void)shutdown;	// IMP=0x0010000000243ed3
- (void)start;	// IMP=0x0010000000243e93
- (void)register:(byref id)arg1 forNotification:(int)arg2 distanceFilter:(double)arg3;	// IMP=0x0010000000243d1c
- (void)updateNotification:(int)arg1 withRegistrationInfo:(id)arg2 forClient:(byref id)arg3;	// IMP=0x0010000000243ba3
- (void *)locationProvider;	// IMP=0x0010000000243b70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

