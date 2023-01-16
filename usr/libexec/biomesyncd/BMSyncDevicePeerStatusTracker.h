//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDatabase;

@interface BMSyncDevicePeerStatusTracker : NSObject
{
    BMSyncDatabase *_database;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003f0d5
- (id)allPeers;	// IMP=0x001000000003f0bf
- (void)setLocalDeviceIdentifier:(id)arg1;	// IMP=0x001000000003f007
- (_Bool)setLastSyncDate:(id)arg1 forDeviceWithIdentifier:(id)arg2;	// IMP=0x001000000003ef9e
- (id)lastSyncDateOfDeviceWithIdentifier:(id)arg1;	// IMP=0x001000000003ef88
- (id)lastSyncDateFromAnyDevice;	// IMP=0x001000000003ef72
- (id)deviceWithIdentifier:(id)arg1;	// IMP=0x001000000003ef5c
- (_Bool)upsertSyncDevicePeer:(id)arg1;	// IMP=0x001000000003ef44
- (id)localDeviceUpdatingIfNeccesaryWithProtocolVersion:(unsigned long long)arg1;	// IMP=0x001000000003eded
- (id)localDeviceIdentifierCreatingIfNecessary;	// IMP=0x001000000003ecb4
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000003ec49

@end

